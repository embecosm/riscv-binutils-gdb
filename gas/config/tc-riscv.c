/* tc-riscv.c -- RISC-V assembler
   Copyright (C) 1993-2018 Free Software Foundation, Inc.

   Contributed by Andrew Waterman (andrew@sifive.com)

   Modified to be CGEN based by Mary Bennett (mary.bennett@embecosm.com)
                                Edward Jones (ed.jones@embecosm.com)

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "as.h"
#include "config.h"
#include "safe-ctype.h"
#include "subsegs.h"
#include "symcat.h"
#include "safe-ctype.h"

#include "opcodes/riscv-desc.h"
#include "opcodes/riscv-opc.h"
#include "cgen.h"

#include "itbl-ops.h"
#include "dwarf2dbg.h"
#include "dw2gencfi.h"
#include "struc-symbol.h"

#include "elf/riscv.h"
#include "opcode/riscv.h"

#include <stdint.h>


/* Is the given value a sign-extended 32-bit value?  */
#define IS_SEXT_32BIT_NUM(x)                                            \
  (((x) &~ (offsetT) 0x7fffffff) == 0                                   \
  || (((x) &~ (offsetT) 0x7fffffff) == ~ (offsetT) 0x7fffffff))

#define IS_ZEXT_32BIT_NUM(x)                                            \
  (((x) &~ (offsetT) 0xffffffff) == 0                                   \
  || (((x) &~ (offsetT) 0xffffffff) == ~ (offsetT) 0xffffffff))

/* Structure to hold all of the different components describing
   an individual instruction.  */

typedef struct
{
  const CGEN_INSN *     insn;
  const CGEN_INSN *     orig_insn;
  CGEN_FIELDS           fields;
#if CGEN_INT_INSN_P
  CGEN_INSN_INT         buffer [1];
#define INSN_VALUE(buf) (*(buf))
#else
  unsigned char         buffer [CGEN_MAX_INSN_SIZE];
#define INSN_VALUE(buf) (buf)
#endif
  char *                addr;
  fragS *               frag;
  int                   num_fixups;
  fixS *                fixups [GAS_CGEN_MAX_FIXUPS];
  int                   indices [MAX_OPERAND_INSTANCES];
} riscv_insn;

#ifndef DEFAULT_ARCH
#define DEFAULT_ARCH "riscv64"
#endif

static const char default_arch[] = DEFAULT_ARCH;

static unsigned xlen = 0; /* width of an x-register */
static unsigned abi_xlen = 0; /* width of a pointer in the ABI */
static bfd_boolean rve_abi = FALSE;

static unsigned elf_flags = 0;

/* This is the set of options which the .option pseudo-op may modify.  */

struct riscv_set_options
{
  int pic;   /* Generate position-independent code.  */
  int rvc;   /* Generate RVC code.  */
  int relax; /* Emit relocs the linker is allowed to relax.  */
};

static struct riscv_set_options riscv_opts =
{
  0,	/* pic */
  1,	/* relax */
  0,	/* rvc */
};

/* The set of extensions which are supported.  */
static CGEN_BITSET *riscv_exts = NULL;

static int
riscv_ext_for_subset (const char *subset)
{
  if (!strcmp(subset, "i"))
    return (xlen == 64) ? RVEXT_RV64I : RVEXT_RV32I;
  else if (!strcmp(subset, "e"))
    {
      return RVEXT_RV32E;
    }
  else if (!strcmp(subset, "m"))
    return (xlen == 64) ? RVEXT_RV64M : RVEXT_RV32M;
  else if (!strcmp(subset, "c"))
    return (xlen == 64) ? RVEXT_RV64C : RVEXT_RV32C;
  else if (!strcmp(subset, "a"))
    return (xlen == 64) ? RVEXT_RV64A : RVEXT_RV32A;
  else if (!strcmp(subset, "f"))
    return (xlen == 64) ? RVEXT_RV64F : RVEXT_RV32F;
  else if (!strcmp(subset, "d"))
    return (xlen == 64) ? RVEXT_RV64D : RVEXT_RV32D;
  else if (!strcmp(subset, "q"))
    return (xlen == 64) ? RVEXT_RV64Q : RVEXT_RV32Q;
  else
    as_fatal ("Extension not yet supported");
}

static void riscv_set_rvc (bfd_boolean rvc_value)
{
  if (rvc_value)
    elf_flags |= EF_RISCV_RVC;

  riscv_opts.rvc = rvc_value;
  if (rvc_value)
    riscv_cgen_set_rvc (riscv_ext_for_subset ("c"));
  else
    riscv_cgen_set_rvc (RVEXT_RVNONE);
}

static bfd_boolean riscv_subset_supports (const char *feature)
{
  char *p;
  unsigned xlen_required = strtoul (feature, &p, 10);

  int ext = riscv_ext_for_subset (feature);
  if (xlen_required && xlen != xlen_required)
    return FALSE;

  if (!riscv_exts)
    return FALSE;
  return cgen_bitset_contains (riscv_exts, ext);
}

static void riscv_clear_subsets (void)
{
  if (!riscv_exts)
    return;
  cgen_bitset_clear (riscv_exts);
}

static void riscv_add_subset (const char *subset)
{
  if (!riscv_exts)
    riscv_exts = cgen_bitset_create (RVEXT_RVMAX);
  cgen_bitset_add (riscv_exts, riscv_ext_for_subset(subset));
}

/* Set which extensions are available.  */

static void
riscv_set_arch (const char *s)
{
  const char *all_subsets = "imafdqc";
  char *extension = NULL;
  const char *p = s;

  riscv_clear_subsets();

  if (strncmp (p, "rv32", 4) == 0)
    {
      xlen = 32;
      p += 4;
    }
  else if (strncmp (p, "rv64", 4) == 0)
    {
      xlen = 64;
      p += 4;
    }
  else
    as_fatal ("-march=%s: ISA string must begin with rv32 or rv64", s);

  switch (*p)
    {
      case 'i':
	break;

      case 'e':
	p++;
	riscv_add_subset ("e");
	riscv_add_subset ("i");

	if (xlen > 32)
	  as_fatal ("-march=%s: rv%de is not a valid base ISA", s, xlen);

	break;

      case 'g':
	p++;
	for ( ; *all_subsets != 'q'; all_subsets++)
	  {
	    const char subset[] = {*all_subsets, '\0'};
	    riscv_add_subset (subset);
	  }
	break;

      default:
	as_fatal ("-march=%s: first ISA subset must be `e', `i' or `g'", s);
    }

  while (*p)
    {
      if (*p == 'x')
	{
	  char *subset = xstrdup (p);
	  char *q = subset;

	  while (*++q != '\0' && *q != '_')
	    ;
	  *q = '\0';

	  if (extension)
	    as_fatal ("-march=%s: only one non-standard extension is supported"
		      " (found `%s' and `%s')", s, extension, subset);
	  extension = subset;
	  riscv_add_subset (subset);
	  p += strlen (subset);
	}
      else if (*p == '_')
	p++;
      else if ((all_subsets = strchr (all_subsets, *p)) != NULL)
	{
	  const char subset[] = {*p, 0};
	  riscv_add_subset (subset);
	  all_subsets++;
	  p++;
	}
      else
	as_fatal ("-march=%s: unsupported ISA subset `%c'", s, *p);
    }

  if (riscv_subset_supports ("e") && riscv_subset_supports ("f"))
    as_fatal ("-march=%s: rv32e does not support the `f' extension", s);

  if (riscv_subset_supports ("d") && !riscv_subset_supports ("f"))
    as_fatal ("-march=%s: `d' extension requires `f' extension", s);

  if (riscv_subset_supports ("q") && !riscv_subset_supports ("d"))
    as_fatal ("-march=%s: `q' extension requires `d' extension", s);

  if (riscv_subset_supports ("q") && xlen < 64)
    as_fatal ("-march=%s: rv32 does not support the `q' extension", s);

  free (extension);
}

/* This array holds the chars that always start a comment.  If the
    pre-processor is disabled, these aren't very useful */
const char comment_chars[] = "#";

/* This array holds the chars that only start a comment at the beginning of
   a line.  If the line seems to have the form '# 123 filename'
   .line and .file directives will appear in the pre-processed output */
/* Note that input_file.c hand checks for '#' at the beginning of the
   first line of the input file.  This is because the compiler outputs
   #NO_APP at the beginning of its output.  */
/* Also note that C style comments are always supported.  */
const char line_comment_chars[] = "#";

/* This array holds machine specific line separator characters.  */
const char line_separator_chars[] = ";";

/* Chars that can be used to separate mant from exp in floating point nums */
const char EXP_CHARS[] = "eE";

/* Chars that mean this number is a floating point constant */
/* As in 0f12.456 */
/* or    0d1.2345e12 */
const char FLT_CHARS[] = "rRsSfFdDxXpP";

/* Is the given value a sign-extended 32-bit value?  */
#define IS_SEXT_32BIT_NUM(x)						\
  (((x) &~ (offsetT) 0x7fffffff) == 0					\
   || (((x) &~ (offsetT) 0x7fffffff) == ~ (offsetT) 0x7fffffff))

/* Is the given value a zero-extended 32-bit value?  Or a negated one?  */
#define IS_ZEXT_32BIT_NUM(x)						\
  (((x) &~ (offsetT) 0xffffffff) == 0					\
   || (((x) &~ (offsetT) 0xffffffff) == ~ (offsetT) 0xffffffff))

/* The default target format to use.  */

const char *
riscv_target_format (void)
{
  return xlen == 64 ? "elf64-littleriscv" : "elf32-littleriscv";
}

/* This function is called once, at assembler startup time.  It should set up
   all the tables, etc. that the MD part of the assembler will need.  */

void
md_begin (void)
{
  /* Initialize the `cgen' interface.  */

  /* Set the machine number and endian.  */
  CGEN_BITSET *riscv_isa = cgen_bitset_create (MAX_ISAS);
  cgen_bitset_add (riscv_isa, (xlen == 32) ? ISA_RV32 : ISA_RV64);

  gas_cgen_cpu_desc = riscv_cgen_cpu_open (CGEN_CPU_OPEN_ISAS, riscv_isa,
                                           CGEN_CPU_OPEN_MACHS, 0,
                                           CGEN_CPU_OPEN_ENDIAN,
                                           CGEN_ENDIAN_LITTLE,
                                           CGEN_CPU_OPEN_END);
  riscv_cgen_init_asm (gas_cgen_cpu_desc);
  riscv_cgen_init_riscv_extensions (riscv_exts);
  if (riscv_subset_supports ("c"))
    elf_flags |= EF_RISCV_RVC;

  /* This is a callback from cgen to gas to parse operands.  */
  cgen_set_parse_operand_fn (gas_cgen_cpu_desc, gas_cgen_parse_operand);

  /* Set the default alignment for the text section.  */
  record_alignment (text_section, riscv_subset_supports ("c") ? 1 : 2);
}

/* Fixup creation */
/* These functions are wrappers around standard functions, with the aim
   of tagging instructions with the current state of the 'relax' flag
   which can be altered by an .option directive. The state of the
   'relax' flag is stored in the fx_tcbit which is a CPU dependent bit */

static fixS *
riscv_fix_new (fragS *frag, int where, int size, symbolS *add_symbol,
               offsetT offset, int pcrel, bfd_reloc_code_real_type r_type)
{
  fixS *fixP = fix_new (frag, where, size, add_symbol, offset, pcrel, r_type);
  fixP->fx_tcbit = riscv_opts.relax;
  return fixP;
}

static fixS *
riscv_fix_new_exp (fragS *frag, int where, int size, expressionS *exp,
                   int pcrel, bfd_reloc_code_real_type r_type)
{
  fixS *fixP = fix_new_exp (frag, where, size, exp, pcrel, r_type);
  fixP->fx_tcbit = riscv_opts.relax;
  return fixP;
}

/* Wrapper around standard gas_cgen_record_fixup_exp */
fixS *
riscv_record_fixup_exp (fragS *frag, int where, const CGEN_INSN *insn,
                        int length, const CGEN_OPERAND *operand, int opinfo,
                        expressionS *exp)
{
  fixS *fixP = gas_cgen_record_fixup_exp (frag, where, insn, length, operand,
                                          opinfo, exp);
  fixP->fx_tcbit = riscv_opts.relax;
  return fixP;
}

static char *
assemble_one (char * str, finished_insnS *result)
{
  riscv_insn insn;
  char * errmsg;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = riscv_cgen_assemble_insn
    (gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, & errmsg);

  if (!insn.insn)
    return errmsg;

  /* Doesn't really matter what we pass for RELAX_P here.  */
  gas_cgen_finish_insn (insn.insn, insn.buffer,
                        CGEN_FIELDS_BITSIZE (& insn.fields), 1, result);
  return NULL;
}

/* Load an integer constant into a register.  */

static const char *
load_const (const char *reg, expressionS *ep)
{
  const char *errmsg;
  char instr_buf[128];

  int shift = 12; // bits in a addi immediate
  expressionS upper = *ep, lower = *ep;
  lower.X_add_number = (int32_t) ep->X_add_number << (32-shift) >> (32-shift);
  upper.X_add_number -= lower.X_add_number;

  if (ep->X_op != O_constant)
    return "unsupported large constant";

  if (xlen > 32 && !IS_SEXT_32BIT_NUM (ep->X_add_number))
    {
      /* Reduce to a signed 32-bit constant using SLLI and ADDI.  */
      while (((upper.X_add_number >> shift) & 1) == 0)
	shift++;

      upper.X_add_number = (int64_t) upper.X_add_number >> shift;
      errmsg = load_const (reg, &upper);
      if (errmsg)
	return errmsg;

      sprintf (instr_buf, "slli %s,%s,%d\n", reg, reg, shift);
      errmsg = assemble_one (instr_buf, NULL);
      if (errmsg)
	return errmsg;
      if (lower.X_add_number != 0)
	{
	  sprintf (instr_buf, "addi %s,%s,%ld\n", reg, reg, lower.X_add_number);
	  errmsg = assemble_one (instr_buf, NULL);
	  if (errmsg)
	    return errmsg;
	}
    }
  else
    {
      /* Simply emit LUI and/or ADDI to build a 32-bit signed constant.  */
      const char *hi_reg = "x0";

      upper.X_add_number = (int32_t) upper.X_add_number >> shift & 0xfffff;
      if (upper.X_add_number != 0)
	{
	  sprintf (instr_buf, "lui %s,%ld", reg, upper.X_add_number);
	  errmsg = assemble_one (instr_buf, NULL);
	  if (errmsg)
	    return errmsg;
	  hi_reg = reg;
	}

      if (lower.X_add_number != 0 || !strcmp(hi_reg, "x0"))
	{
	  const char *add32_insn = (xlen == 64) ? "addiw" : "addi";
	  sprintf (instr_buf, "%s %s,%s,%ld", add32_insn, reg, hi_reg,
	          lower.X_add_number);
	  errmsg = assemble_one (instr_buf, NULL);
	  if (errmsg)
	    return errmsg;
	}
    }
  return NULL;
}

static const char *
assemble_early_pseudos(char * str)
{
  char instr_buf[128];
  const char *errmsg;
  int is_call;
  int is_call_with_reg;
  char call_reg[8];
  expressionS exp;
  bfd_reloc_code_real_type call_type;

  int i;

  /* There are a number of instructions which cannot be handled by
     cgen as they expand to multiple read instructions. We handle
     these here.  */

  if (!strncmp(str, "call", strlen("call"))
      || !strncmp(str, "tail", strlen("tail")))
    {
      is_call = !strncmp(str, "call", strlen("call"));

      /* Parse the mnemonic.  */
      str += strlen("call");  /* == strlen("tail") */

      /* Parse operands.  */
      input_line_pointer = str;
      SKIP_WHITESPACE ();

      /* If this is a call, then there may a register operand before the call
         target.  */
      is_call_with_reg = FALSE;
      if (is_call)
	{
	  for (i = 0; i < (int)(sizeof(call_reg) - 1)
	              && ISALNUM (input_line_pointer[i]); i++)
	    {
	      call_reg[i] = input_line_pointer[i];
	      call_reg[i+1] = '\0';
	    }
	  gas_assert (!is_call_with_reg);
	  if (input_line_pointer[i] == ',')
	    {
	      is_call_with_reg = TRUE;
	      input_line_pointer += i + 1;
	    }
	}

      /* Parse the target operand.  */
      SKIP_WHITESPACE ();

      expression (&exp);
      if (strcmp (input_line_pointer, "@plt") == 0)
	{
	  call_type = BFD_RELOC_RISCV_CALL_PLT;
	  input_line_pointer += 4;
	}
      else
	call_type = BFD_RELOC_RISCV_CALL;

      /* Assemble the auipc that the relocation will be attached to */
      if (is_call && !is_call_with_reg)
	strcpy (instr_buf, "auipc x1,0\n");
      else
	strcpy (instr_buf, "auipc x6,0\n");

      finished_insnS result;
      errmsg = assemble_one (instr_buf, &result);
      if (errmsg)
	return errmsg;

      /* Create a BFD_RELOC_RISCV_CALL fixup from the expression and attach
         it to the previous (auipc) instruction.  */
      if (exp.X_op != O_symbol && exp.X_op != O_constant)
	return "illegal operand";
      riscv_fix_new_exp (frag_now, result.addr - frag_now->fr_literal, 4,
                         &exp, 0, call_type);

      if (is_call && !is_call_with_reg)
	strcpy (instr_buf, "jalr x1,x1,0\n");
      else if (is_call && is_call_with_reg)
	sprintf (instr_buf, "jalr %s,x6,0\n", call_reg);
      else
	strcpy (instr_buf, "jalr x0,x6,0\n");
      errmsg = assemble_one (instr_buf, NULL);
      if (errmsg)
	return errmsg;
      return NULL;
    }
  return "unknown pseudo";
}

static const char *
assemble_late_pseudos(char * str)
{
  char instr_buf[128];
  char dst_reg[8];
  char src_reg[8];
  const char *errmsg;

  symbolS *local_sym;
  expressionS exp;

  int i;

  if (strlen(str) >= 2 && !strncmp(str, "li", strlen("li")))
    {
      /* Parse the mnemonic.  */
      str += strlen("li");

      /* Parse the register.  */
      input_line_pointer = str;
      SKIP_WHITESPACE ();

      char reg[8];
      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); ++i)
	{
	  reg[i] = *input_line_pointer++;
	  reg[i+1] = '\0';
	}
      SKIP_WHITESPACE ();
      if (*input_line_pointer != ',')
	return "illegal operand";
      input_line_pointer++;

      /* Parse the immediate */
      expression (&exp);
      if (exp.X_op != O_constant)
	return "illegal operand";

      /* If xlen == 32, normalize the constant to 32-bits */
      if (xlen <= 32)
	{
	  if (IS_ZEXT_32BIT_NUM (exp.X_add_number))
	    exp.X_add_number = (((exp.X_add_number & 0xffffffff) ^ 0x80000000)
	                        - 0x80000000);
	}

      /* Create a load of the expression */
      errmsg = load_const (reg, &exp);
      if (errmsg)
	return errmsg;
      return NULL;
    }
  else if (str[0] == 'l' || str[0] == 's')
    {
      /* looking for la, lla, l{b|h|w|d}, l{b|h|w}u or s{b|h|w|d} */
      int is_store = str[0] == 's';
      int is_la = !strncmp (str, "la", strlen("la"));
      int is_lla = str[1] != '\0' && !strncmp (str, "lla", strlen("lla"));
      char mem_op_char = str[1];
      if (!is_la && !is_lla && mem_op_char != 'b' && mem_op_char != 'h'
          && mem_op_char != 'w' && mem_op_char != 'd')
	return "unknown memory pseudo instruction";
      if (is_lla)
	str += 3;
      else
	str += 2;

      /* For lb/lh/lw check for a 'u' suffix.  */
      int is_zext_load = 0;
      if (!is_la && !is_lla && mem_op_char != 'd' && str[0] == 'u')
	{
	  is_zext_load = 1;
	  str += 1;
	}

      /* destination register */
      input_line_pointer = str;
      SKIP_WHITESPACE ();

      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	{
	  dst_reg[i] = *input_line_pointer++;
	  dst_reg[i+1] = '\0';
	}
      SKIP_WHITESPACE ();
      if (*input_line_pointer != ',')
	return "illegal operand";
      input_line_pointer++;

      /* operand */
      SKIP_WHITESPACE ();
      expression (&exp);

      /* source register (for store) */
      if (is_store)
	{
	  if (*input_line_pointer != ',')
	    return "illegal operand";
	  input_line_pointer++;
	  SKIP_WHITESPACE ();

	  for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	    {
	      src_reg[i] = *input_line_pointer++;
	      src_reg[i+1] = '\0';
	    }
	  /* TODO: Check for junk at EOL */
	}

      /* Create a new local symbol, this will be the target of the
         BFD_RELOC_RISCV_LO12_I fixup */
      local_sym = (symbolS *) local_symbol_make (FAKE_LABEL_NAME, now_seg,
                                                 (valueT) frag_now_fix(),
                                                 frag_now);
      /* Assemble the auipc that the relocation will be attached to */
      if (is_store)
	sprintf (instr_buf, "auipc %s,0", src_reg);
      else
	sprintf (instr_buf, "auipc %s,0", dst_reg);

      finished_insnS result;
      errmsg = assemble_one (instr_buf, &result);
      if (errmsg)
	return errmsg;

      /* Create a BFD_RELOC_RISCV_HI20 fixup from the expression and attach
         it to the auipc instruction.  */
      if (exp.X_op != O_symbol)
	return "illegal operand";

      /* Global PIC symbol */
      int hi_reloc_info =
	(is_la && riscv_opts.pic) ? BFD_RELOC_RISCV_GOT_HI20
	                          : BFD_RELOC_RISCV_PCREL_HI20;
      riscv_fix_new_exp (frag_now, result.addr - frag_now->fr_literal, 4,
                         &exp, 0, hi_reloc_info);

      /* Assemble the subsequent addi, l{b/h/w/d}, l{b/h/w}u, s{b/h/w/d}

         We must temporarily disable the 'C' extension here, otherwise we
         will assemble to a compressed instruction which we cannot apply
         a relocation to.  */
      bfd_boolean c_was_enabled = riscv_opts.rvc;
      riscv_set_rvc (FALSE);
      {
	if (is_la && riscv_opts.pic)
	  {
	    /* Global PIC symbol */
	    const char *load_addr_insn = (xlen == 64) ? "ld" : "lw";
	    sprintf (instr_buf, "%s %s,0(%s)", load_addr_insn, dst_reg,
	             dst_reg);
	  }
	else if (is_la || is_lla)
	  sprintf (instr_buf, "addi %s,%s,0", dst_reg, dst_reg);
	else if (is_store)
	  sprintf (instr_buf, "s%c %s,0(%s)", mem_op_char, dst_reg, src_reg);
	else if (is_zext_load)
	  sprintf (instr_buf, "l%cu %s,0(%s)", mem_op_char, dst_reg, dst_reg);
	else
	  sprintf (instr_buf, "l%c %s,0(%s)", mem_op_char, dst_reg, dst_reg);

	errmsg = assemble_one (instr_buf, &result);
      }
      if (c_was_enabled)
	riscv_set_rvc (TRUE);
      if (errmsg)
	return errmsg;

      /* Create a BFD_RELOC_RISCV_LO12_{I/S} fixup from the newly created
         local symbol and attach it to the just created instruction.  */
      int lo_reloc_info = is_store ? BFD_RELOC_RISCV_PCREL_LO12_S
                                   : BFD_RELOC_RISCV_PCREL_LO12_I;
      riscv_fix_new (frag_now, result.addr - frag_now->fr_literal, 4,
                     local_sym, 0, 0, lo_reloc_info);
      return NULL;
    }
  else if (str[0] == 'f' && (str[1] == 'm' || str[1] == 'a' || str[1] == 'n'))
    {
      /* looking for fmv.[sdq], fabs.[sdq], fneg.[sdq]  */
      char type_char;
      bfd_boolean is_fmv, is_fabs, is_fneg;
      if ((is_fmv  = !strncmp (str, "fmv", 3)))
	str += 3;
      if ((is_fabs = !strncmp (str, "fabs", 4)))
	str += 4;
      if ((is_fneg = !strncmp (str, "fneg", 4)))
	str += 4;
      gas_assert (is_fmv || is_fabs || is_fneg);

      if (str[0] != '.')
	return "unknown instruction";
      str++;
      type_char = str[0];
      if (type_char != 's' && type_char != 'd' && type_char != 'q')
	return "unknown instruction";
      str++;

      /* destination register */
      input_line_pointer = str;
      SKIP_WHITESPACE ();

      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	{
	  dst_reg[i] = *input_line_pointer++;
	  dst_reg[i+1] = '\0';
	}
      SKIP_WHITESPACE ();

      if (*input_line_pointer != ',')
	return "illegal operand";
      input_line_pointer++;

      /* source register */
      SKIP_WHITESPACE();
      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	{
	  src_reg[i] = *input_line_pointer++;
	  src_reg[i+1] = '\0';
	}

      /* assemble the resulting instruction. */
      if (is_fmv)
	sprintf (instr_buf, "fsgnj.%c %s,%s,%s", type_char, dst_reg, src_reg,
	         src_reg);
      else if (is_fabs)
	sprintf (instr_buf, "fsgnjx.%c %s,%s,%s", type_char, dst_reg, src_reg,
	         src_reg);
      else if (is_fneg)
	sprintf (instr_buf, "fsgnjn.%c %s,%s,%s", type_char, dst_reg, src_reg,
	         src_reg);

      finished_insnS result;
      errmsg = assemble_one (instr_buf, &result);
      if (errmsg)
	return errmsg;

      return NULL;
    }
  else if (str[0] == 'f' && (str[1] == 'l' || str[1] == 's'))
    {
      /* looking for fl[wdq] and fs[wdq].  */
      char type_char = str[1];
      char mem_op_char = str[1] != '\0' ? str[2] : '\0';
      if (!(type_char == 's' || type_char == 'l')
          || !(mem_op_char == 'w' || mem_op_char == 'd' || mem_op_char == 'q'))
	return "unknown memory pseudo instruction";
      str += 3;

      /* destination register */
      input_line_pointer = str;
      SKIP_WHITESPACE ();

      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	{
	  dst_reg[i] = *input_line_pointer++;
	  dst_reg[i+1] = '\0';
	}
      SKIP_WHITESPACE ();
      if (*input_line_pointer != ',')
	return "illegal operand";
      input_line_pointer++;

      /* operand */
      SKIP_WHITESPACE ();
      expression (&exp);

      /* source register */
      if (*input_line_pointer != ',')
	return "illegal operand";
      input_line_pointer++;
      SKIP_WHITESPACE ();

      for (i = 0; i < 7 && ISALNUM (*input_line_pointer); i++)
	{
	  src_reg[i] = *input_line_pointer++;
	  src_reg[i+1] = '\0';
	}

      /* Create a new local symbol, this will be the target of the
         BFD_RELOC_RISCV_LO12_I fixup */
      local_sym = (symbolS *) local_symbol_make (FAKE_LABEL_NAME, now_seg,
                                                 (valueT) frag_now_fix(),
                                                 frag_now);
      /* Assemble the auipc that the relocation will be attached to */
      sprintf (instr_buf, "auipc %s,0", src_reg);

      finished_insnS result;
      errmsg = assemble_one (instr_buf, &result);
      if (errmsg)
	return errmsg;

      /* Create a BFD_RELOC_RISCV_HI20 fixup from the expression and attach
         it to the auipc instruction.  */
      if (exp.X_op != O_symbol)
	return "illegal operand";

      riscv_fix_new_exp (frag_now, result.addr - frag_now->fr_literal, 4,
                         &exp, 0, BFD_RELOC_RISCV_PCREL_HI20);

      /* Assemble the subsequent flw, fsw, fld, fsd, flq, fsq

         We must temporarily disable the 'C' extension here, otherwise we
         will assemble to a compressed instruction which we cannot apply
         a relocation to.  */
      int c_was_enabled = riscv_opts.rvc;
      riscv_set_rvc (FALSE);
      {
	sprintf (instr_buf, "f%c%c %s,0(%s)", type_char, mem_op_char, dst_reg,
	         src_reg);

	errmsg = assemble_one (instr_buf, &result);
      }
      if (c_was_enabled)
	riscv_set_rvc (TRUE);
      if (errmsg)
	return errmsg;

      /* Create a BFD_RELOC_RISCV_LO12_{I/S} fixup from the newly created
         local symbol and attach it to the just created instruction.  */
      int lo_reloc_info = type_char == 's' ? BFD_RELOC_RISCV_PCREL_LO12_S
                                           : BFD_RELOC_RISCV_PCREL_LO12_I;
      riscv_fix_new (frag_now, result.addr - frag_now->fr_literal, 4,
                     local_sym, 0, 0, lo_reloc_info);
      return NULL;
    }

  return "unknown pseudo";
}

void
md_assemble (char * str)
{
  const char * errmsg;

  /* There are a number of instructions which cannot be handled by
     cgen as they expand to multiple instructions. We handle some
     of these here (li/call/tail) before trying to use the cgen tables.  */
  errmsg = assemble_early_pseudos (str);
  if (!errmsg)
    return;

  /* This isn't one of the complex pseudo instructions, just try and
     assemble normally.  */
  errmsg = assemble_one(str, NULL);
  if (!errmsg)
    return;

  /* Finally, try and match some more complex pseudo instructions
     (la, l{b|h|w|d}, s{b|h|w|d}). We handle these pseudo instructions
     here as some of them share mnemonics with instructions in the cgen'd
     tables, and we want to prioritize those */
  if (assemble_late_pseudos (str))
    as_bad ("%s", errmsg);
}

const char *md_shortopts = "O::g::G:";

enum options
{
  OPTION_MARCH = OPTION_MD_BASE,
  OPTION_PIC,
  OPTION_NO_PIC,
  OPTION_MABI,
  OPTION_RELAX,
  OPTION_NO_RELAX,
  OPTION_END_OF_ENUM
};

struct option md_longopts[] =
{
  {"march", required_argument, NULL, OPTION_MARCH},
  {"fPIC", no_argument, NULL, OPTION_PIC},
  {"fpic", no_argument, NULL, OPTION_PIC},
  {"fno-pic", no_argument, NULL, OPTION_NO_PIC},
  {"mabi", required_argument, NULL, OPTION_MABI},
  {"mrelax", no_argument, NULL, OPTION_RELAX},
  {"mno-relax", no_argument, NULL, OPTION_NO_RELAX},

  {NULL, no_argument, NULL, 0}
};
size_t md_longopts_size = sizeof (md_longopts);

enum float_abi {
  FLOAT_ABI_DEFAULT = -1,
  FLOAT_ABI_SOFT,
  FLOAT_ABI_SINGLE,
  FLOAT_ABI_DOUBLE,
  FLOAT_ABI_QUAD
};
static enum float_abi float_abi = FLOAT_ABI_DEFAULT;

static void
riscv_set_abi (unsigned new_xlen, enum float_abi new_float_abi, bfd_boolean rve)
{
  abi_xlen = new_xlen;
  float_abi = new_float_abi;
  rve_abi = rve;
}

int
md_parse_option (int c, const char *arg)
{
  switch (c)
    {
    case OPTION_MARCH:
      riscv_set_arch (arg);
      break;

    case OPTION_NO_PIC:
      riscv_opts.pic = FALSE;
      break;

    case OPTION_PIC:
      riscv_opts.pic = TRUE;
      break;

    case OPTION_MABI:
      if (strcmp (arg, "ilp32") == 0)
	riscv_set_abi (32, FLOAT_ABI_SOFT, FALSE);
      else if (strcmp (arg, "ilp32e") == 0)
	riscv_set_abi (32, FLOAT_ABI_SOFT, TRUE);
      else if (strcmp (arg, "ilp32f") == 0)
	riscv_set_abi (32, FLOAT_ABI_SINGLE, FALSE);
      else if (strcmp (arg, "ilp32d") == 0)
	riscv_set_abi (32, FLOAT_ABI_DOUBLE, FALSE);
      else if (strcmp (arg, "ilp32q") == 0)
	riscv_set_abi (32, FLOAT_ABI_QUAD, FALSE);
      else if (strcmp (arg, "lp64") == 0)
	riscv_set_abi (64, FLOAT_ABI_SOFT, FALSE);
      else if (strcmp (arg, "lp64f") == 0)
	riscv_set_abi (64, FLOAT_ABI_SINGLE, FALSE);
      else if (strcmp (arg, "lp64d") == 0)
	riscv_set_abi (64, FLOAT_ABI_DOUBLE, FALSE);
      else if (strcmp (arg, "lp64q") == 0)
	riscv_set_abi (64, FLOAT_ABI_QUAD, FALSE);
      else
	return 0;
      break;

    case OPTION_RELAX:
      riscv_opts.relax = TRUE;
      break;

    case OPTION_NO_RELAX:
      riscv_opts.relax = FALSE;
      break;

    default:
      return 0;
    }

  return 1;
}

void
riscv_after_parse_args (void)
{
  if (xlen == 0)
    {
      if (strcmp (default_arch, "riscv32") == 0)
	xlen = 32;
      else if (strcmp (default_arch, "riscv64") == 0)
	xlen = 64;
      else
	as_bad ("unknown default architecture `%s'", default_arch);
    }

  if (riscv_exts == NULL)
    riscv_set_arch (xlen == 64 ? "rv64g" : "rv32g");

  /* Infer ABI from ISA if not specified on command line.  */
  if (abi_xlen == 0)
    abi_xlen = xlen;
  else if (abi_xlen > xlen)
    as_bad ("can't have %d-bit ABI on %d-bit ISA", abi_xlen, xlen);
  else if (abi_xlen < xlen)
    as_bad ("%d-bit ABI not yet supported on %d-bit ISA", abi_xlen, xlen);

  if (float_abi == FLOAT_ABI_DEFAULT)
    {
      /* Assume soft-float unless D extension is present.  */
      float_abi = FLOAT_ABI_SOFT;

      if (riscv_subset_supports ("d"))
	float_abi = FLOAT_ABI_DOUBLE;
      if (riscv_subset_supports ("q"))
	float_abi = FLOAT_ABI_QUAD;
    }

  if (rve_abi)
    elf_flags |= EF_RISCV_RVE;

  /* Insert float_abi into the EF_RISCV_FLOAT_ABI field of elf_flags.  */
  elf_flags |= float_abi * (EF_RISCV_FLOAT_ABI & ~(EF_RISCV_FLOAT_ABI << 1));
}

/* Interface to relax_segment.  */

const relax_typeS md_relax_table[] =
{
/* The fields are:
   1) most positive reach of this state,
   2) most negative reach of this state,
   3) how many bytes this mode will add to the size of the current frag
   4) which index into the table to try if we can't fit into this one.  */

  /* The first entry must be unused because an `rlx_more' value of zero ends
     each list.  */
  {0, 0, 0, 0},

  /* When relaxing a fragment, the state machine is always started in this
     state. However depending on the type of instructions that is at the end
     of this fragment we will need to advance to a number of different
     states. This is handled in md_estimate_size_before_relax so in this
     table this is just a dummy entry.  */
  {0, 0, 0, 0},

  /* c.bnez, c.beqz */
  {0xfa,      -0x102,      0, 3}, /* 9 */
  {0xffa,     -0x1002,     2, 4}, /* 13 */
  {0xffffa,   -0x100002,   4, 0}, /* 21 */

  /* c.j, c.jal */
  {0x7fc,     -0x802,      0, 6}, /* 13 */
  {0xffffa,   -0x100002,   2, 0}, /* 21 */

  /* branches */
  {0xffb-4,   -0x1000-4,   0, 8}, /* 13 */
  {0xffffb-4, -0x100000-4, 4, 0}, /* 21 */
};

int
md_estimate_size_before_relax (fragS * fragP, segT segment)
{
  /* When a fragment is first created the subtype is always set to 1, here we
     set it to the appropriate index into the md_relax_table based on
     the type of reloc attached to it (stored in the opinfo field).  */
  if (fragP->fr_subtype == 1)
    {
      switch (fragP->fr_cgen.opinfo)
        {
        case BFD_RELOC_RISCV_RVC_BRANCH:
          fragP->fr_subtype = 2;
          break;
        case BFD_RELOC_RISCV_RVC_JUMP:
          fragP->fr_subtype = 5;
          break;
        case BFD_RELOC_12_PCREL:
          fragP->fr_subtype = 7;
          break;
        default:
          abort ();
        }
    }

  /* If symbol is undefined, weak or located in a different section
     select the largest supported relocation.  */
  if (fragP->fr_symbol == NULL
      || !S_IS_DEFINED (fragP->fr_symbol)
      || S_IS_WEAK (fragP->fr_symbol)
      || segment != S_GET_SEGMENT (fragP->fr_symbol))
    {
      /* Chase the rlx_more entry until we find the largest reloc for this
         subtype.  */
      while (md_relax_table[fragP->fr_subtype].rlx_more != 0)
        fragP->fr_subtype = md_relax_table[fragP->fr_subtype].rlx_more;
    }
  gas_assert (fragP->fr_subtype < ARRAY_SIZE (md_relax_table));

  return md_relax_table[fragP->fr_subtype].rlx_length;
}

/* Relax a machine dependent frag.  */

void
md_convert_frag (bfd *   abfd ATTRIBUTE_UNUSED,
                 segT    sec  ATTRIBUTE_UNUSED,
                 fragS * fragP)
{
  expressionS exp;
  bfd_byte *buf;
  bfd_vma insn;

  exp.X_op = O_symbol;
  exp.X_add_symbol = fragP->fr_symbol;
  exp.X_add_number = fragP->fr_offset;

  switch (fragP->fr_subtype)
    {
    case 1:
    default:
      abort();

    /* c.bnez, c.beqz */
    case 2:
      /* No subtype change, no changes to the opcode, just insert the
         compressed branch fixup.  */
      riscv_fix_new (fragP, fragP->fr_fix - 2, 2, fragP->fr_symbol,
                     fragP->fr_offset, FALSE, BFD_RELOC_RISCV_RVC_BRANCH);
      break;
    /* Relax c.beqz, c.bnez to a 32-bit branch instruction.  */
    case 3: {
      buf = (bfd_byte *)fragP->fr_literal + fragP->fr_fix - 2;

      insn = bfd_getl16 (buf);
      unsigned gpr = ((insn >> 7) & 0x7) + 8;
      if ((insn & 0xe003) == 0xc001)
        {
          /* c.beqz reg, target -> beq reg, zero, target */
          insn = 0x00000063;
          insn |= gpr << 15;
        }
      else
        {
          gas_assert ((insn & 0xe003) == 0xe001);
          /* c.bnez reg, target -> bne reg, zero, target */
          insn = 0x00001063;
          insn |= gpr << 15;
        }

      riscv_fix_new_exp (fragP, fragP->fr_fix - 2, 4, &exp, FALSE,
                         BFD_RELOC_12_PCREL);
      md_number_to_chars ((char *) buf, insn, 4);
      break;
    }
    /* Relax c.beqz, c.bnez to an inverted compressed branch + jump.  */
    case 4: {
      buf = (bfd_byte *)fragP->fr_literal + fragP->fr_fix - 2;

      /* Invert the compressed branch.  Branch over the jump.  */
      insn = bfd_getl16 (buf);
      insn ^= 1 << 13; /* Invert the branch condition */
      insn &= 0xe383;  /* Clear any existing offset */
      insn += 3 << 3;  /* Set the offset to 6 to hop over the long jump */
      /* TODO: Instead of using an immediate to hop over the long jump,
         maybe a symbol should be used instead.  */
      md_number_to_chars ((char *) buf, insn, 2);
      buf += 2;

      /* Insert a 32-bit jump instruction to the real target after the
         now-inverted branch.  */
      insn = 0x0000006f; /* jal x0 */
      riscv_fix_new_exp (fragP, fragP->fr_fix, 4, &exp, FALSE,
                         BFD_RELOC_RISCV_JMP);
      md_number_to_chars ((char *) buf, insn, 4);
      break;
    }

    /* c.j, c.jal */
    case 5:
      /* No subtype change, no changes to the opcode, just insert the
         compressed jump fixup.  */
      riscv_fix_new (fragP, fragP->fr_fix - 2, 2, fragP->fr_symbol,
                     fragP->fr_offset, FALSE, BFD_RELOC_RISCV_RVC_JUMP);
      break;
    /* Relax c.j -> jal x0
       Relax c.jal -> jal x1  */
    case 6:
      buf = (bfd_byte *)fragP->fr_literal + fragP->fr_fix - 2;

      /* Replace the c.j with a long jump to the target.  */
      insn = bfd_getl16 (buf);
      if ((insn & 0xe003) == 0xa001)
        {
          insn = 0x0000006f; /* jal x0 */
        }
      else
        {
          gas_assert ((insn & 0xe003) == 0x2001);
          insn = 0x000000ef; /* jal x1 */
        }
      riscv_fix_new_exp (fragP, fragP->fr_fix - 2, 4, &exp, FALSE,
                         BFD_RELOC_RISCV_JMP);
      md_number_to_chars ((char *) buf, insn, 4);
      break;

    /* Normal 32-bit instruction branches.  */
    case 7:
      /* No subtype change, no changes to the opcode, just
         insert the branch fixup.  */
      riscv_fix_new (fragP, fragP->fr_fix - 4, 4, fragP->fr_symbol,
                     fragP->fr_offset, FALSE, BFD_RELOC_12_PCREL);
      break;
    /* Relax beq -> bne + jal.  */
    case 8:
      buf = (bfd_byte *)fragP->fr_literal + fragP->fr_fix - 4;

      /* Invert the branch.  Branch over the jump.  */
      insn = bfd_getl32 (buf);
      insn ^= 1 << 12;    /* Invert the branch condition */
      insn &= 0x01fff07f; /* Clear any existing offset */
      insn += 1 << 10;    /* Set offset to 8 to hop over the jump */
      /* TODO: Instead of using an immediate to hop over the long jump,
         maybe a symbol should be used instead.  */
      md_number_to_chars ((char *) buf, insn, 4);
      buf += 4;

      /* Insert a jump to the real target after the now-inverted branch.  */
      insn = 0x0000006f; /* jal x0 */
      riscv_fix_new_exp (fragP, fragP->fr_fix, 4, &exp, FALSE,
                         BFD_RELOC_RISCV_JMP);
      md_number_to_chars ((char *) buf, insn, 4);
      break;
    }
  fragP->fr_fix += md_relax_table[fragP->fr_subtype].rlx_length;
}

/* Functions concerning relocs.  */

/* The location from which a PC relative jump should be calculated,
   given a PC relative reloc.  */

long
md_pcrel_from_section (fixS * fixP, segT sec)
{
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
          || (S_GET_SEGMENT (fixP->fx_addsy) != sec)
          || S_IS_EXTERNAL (fixP->fx_addsy)
          || S_IS_WEAK (fixP->fx_addsy)))
    {
      /* The symbol is undefined (or is defined but not in this section).
         Let the linker figure it out.  */
      return 0;
    }

  return fixP->fx_frag->fr_address + fixP->fx_where;
}


/* Return the bfd reloc type for OPERAND of INSN at fixup FIXP.
   Returns BFD_RELOC_NONE if no reloc type can be found.
   *FIXP may be modified if desired.  */

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *    insn ATTRIBUTE_UNUSED,
                      const CGEN_OPERAND * operand,
                      fixS *               fixP)
{
  if (fixP->fx_cgen.opinfo)
    return fixP->fx_cgen.opinfo;

  switch (operand->type)
    {
    default: /* avoid -Wall warning */
      return BFD_RELOC_NONE;
    }
}

/* Write a value out to the object file, using the appropriate endianness.  */

void
md_number_to_chars (char * buf, valueT val, int n)
{
  number_to_chars_littleendian (buf, val, n);
}

/* Turn a string in input_line_pointer into a floating point constant of type
   type, and store the appropriate bytes in *litP.  The number of LITTLENUMS
   emitted is stored in *sizeP .  An error message is returned, or NULL on OK.  */

/* Equal to MAX_PRECISION in atof-ieee.c.  */
#define MAX_LITTLENUMS 6

const char *
md_atof (int type, char * litP, int *  sizeP)
{
  return ieee_md_atof (type, litP, sizeP, TRUE);
}

arelent *
tc_gen_reloc (asection *section ATTRIBUTE_UNUSED, fixS *fixp)
{
  arelent *reloc = (arelent *) xmalloc (sizeof (arelent));

  reloc->sym_ptr_ptr = (asymbol **) xmalloc (sizeof (asymbol *));
  *reloc->sym_ptr_ptr = symbol_get_bfdsym (fixp->fx_addsy);
  reloc->address = fixp->fx_frag->fr_address + fixp->fx_where;
  reloc->addend = fixp->fx_addnumber;

  reloc->howto = bfd_reloc_type_lookup (stdoutput, fixp->fx_r_type);
  if (reloc->howto == NULL)
    {
      if ((fixp->fx_r_type == BFD_RELOC_16 || fixp->fx_r_type == BFD_RELOC_8)
          && fixp->fx_addsy != NULL && fixp->fx_subsy != NULL)
	{
	  /* We don't have R_RISCV_8/16, but for this special case,
	     we can use R_RISCV_ADD8/16 with R_RISCV_SUB8/16.  */
	  return reloc;
	}

      as_bad_where (fixp->fx_file, fixp->fx_line,
                    _("cannot represent %s relocation in object file"),
                    bfd_get_reloc_code_name (fixp->fx_r_type));
      return NULL;
    }

  return reloc;
}

void
md_apply_fix (struct fix *f, valueT *t, segT s ATTRIBUTE_UNUSED)
{
  unsigned int subtype;
  bfd_byte *buf = (bfd_byte *) (f->fx_frag->fr_literal + f->fx_where);
  bfd_boolean relaxable = FALSE;
  offsetT loc;
  segT sub_segment;

  /* For fixups generated by cgen code, we need to use md_cgen_lookup_reloc
     to discover the relocation type to use. Otherwise, the relocation
     type is stored in f->fx_r_type.

     f->fx_r_type is used in tc_gen_reloc to determine the relocation
     to be generated if a fixup cannot be applied here.  */
  if (f->fx_r_type >= (int) BFD_RELOC_UNUSED)
    {
      CGEN_CPU_DESC cd = gas_cgen_cpu_desc;
      int opindex = (int) f->fx_r_type - (int) BFD_RELOC_UNUSED;
      const CGEN_OPERAND *operand = cgen_operand_lookup_by_num (cd, opindex);
      const CGEN_INSN *insn = f->fx_cgen.insn;
      bfd_reloc_code_real_type reloc_type = md_cgen_lookup_reloc (insn, operand,
                                                                  f);
      if (reloc_type != BFD_RELOC_NONE)
	/* Store the relocation type in fx_r_type, as this is where we
	   will look in tc_gen_reloc */
	f->fx_r_type = reloc_type;
    }

  switch (f->fx_r_type)
    {
    case BFD_RELOC_RISCV_HI20:
    case BFD_RELOC_RISCV_LO12_I:
    case BFD_RELOC_RISCV_LO12_S:
      relaxable = TRUE;
      break;

    case BFD_RELOC_RISCV_GOT_HI20:
    case BFD_RELOC_RISCV_ADD8:
    case BFD_RELOC_RISCV_ADD16:
    case BFD_RELOC_RISCV_ADD32:
    case BFD_RELOC_RISCV_ADD64:
    case BFD_RELOC_RISCV_SUB6:
    case BFD_RELOC_RISCV_SUB8:
    case BFD_RELOC_RISCV_SUB16:
    case BFD_RELOC_RISCV_SUB32:
    case BFD_RELOC_RISCV_SUB64:
    case BFD_RELOC_RISCV_RELAX:
      break;

    case BFD_RELOC_RISCV_TPREL_HI20:
    case BFD_RELOC_RISCV_TPREL_LO12_I:
    case BFD_RELOC_RISCV_TPREL_LO12_S:
    case BFD_RELOC_RISCV_TPREL_ADD:
      relaxable = TRUE;
      /* Fall through.  */

    case BFD_RELOC_RISCV_TLS_GOT_HI20:
    case BFD_RELOC_RISCV_TLS_GD_HI20:
    case BFD_RELOC_RISCV_TLS_DTPREL32:
    case BFD_RELOC_RISCV_TLS_DTPREL64:
      if (f->fx_addsy != NULL)
	S_SET_THREAD_LOCAL (f->fx_addsy);
      else
	as_bad_where (f->fx_file, f->fx_line,
	              _("TLS relocation against a constant"));
      break;

    case BFD_RELOC_32:
      /* Use pc-relative relocation for FDE initial location.
	 The symbol address in .eh_frame may be adjusted in
	 _bfd_elf_discard_section_eh_frame, and the content of
	 .eh_frame will be adjusted in _bfd_elf_write_section_eh_frame.
	 Therefore, we cannot insert a relocation whose addend symbol is
	 in .eh_frame. Othrewise, the value may be adjusted twice.*/
      if (f->fx_addsy && f->fx_subsy
	  && (sub_segment = S_GET_SEGMENT (f->fx_subsy))
	  && strcmp (sub_segment->name, ".eh_frame") == 0
	  && S_GET_VALUE (f->fx_subsy)
	     == f->fx_frag->fr_address + f->fx_where)
	{
	  f->fx_r_type = BFD_RELOC_RISCV_32_PCREL;
	  f->fx_subsy = NULL;
	  break;
	}
      /* Fall through.  */
    case BFD_RELOC_64:
    case BFD_RELOC_16:
    case BFD_RELOC_8:
    case BFD_RELOC_RISCV_CFA:
      if (f->fx_addsy && f->fx_subsy)
	{
	  f->fx_next = xmemdup (f, sizeof (*f), sizeof (*f));
	  f->fx_next->fx_addsy = f->fx_subsy;
	  f->fx_next->fx_subsy = NULL;
	  f->fx_next->fx_offset = 0;
	  f->fx_subsy = NULL;

	  switch (f->fx_r_type)
	    {
	    case BFD_RELOC_64:
	      f->fx_r_type = BFD_RELOC_RISCV_ADD64;
	      f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB64;
	      break;

	    case BFD_RELOC_32:
	      f->fx_r_type = BFD_RELOC_RISCV_ADD32;
	      f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB32;
	      break;

	    case BFD_RELOC_16:
	      f->fx_r_type = BFD_RELOC_RISCV_ADD16;
	      f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB16;
	      break;

	    case BFD_RELOC_8:
	      f->fx_r_type = BFD_RELOC_RISCV_ADD8;
	      f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB8;
	      break;

	    case BFD_RELOC_RISCV_CFA:
	      /* Load the byte to get the subtype.  */
	      subtype = bfd_get_8 (NULL, &((fragS *) (f->fx_frag->fr_opcode))->fr_literal[f->fx_where]);
	      loc = f->fx_frag->fr_fix - (subtype & 7);
	      switch (subtype)
		{
		case DW_CFA_advance_loc1:
		  f->fx_where = loc + 1;
		  f->fx_next->fx_where = loc + 1;
		  f->fx_r_type = BFD_RELOC_RISCV_SET8;
		  f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB8;
		  break;

		case DW_CFA_advance_loc2:
		  f->fx_size = 2;
		  f->fx_next->fx_size = 2;
		  f->fx_where = loc + 1;
		  f->fx_next->fx_where = loc + 1;
		  f->fx_r_type = BFD_RELOC_RISCV_SET16;
		  f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB16;
		  break;

		case DW_CFA_advance_loc4:
		  f->fx_size = 4;
		  f->fx_next->fx_size = 4;
		  f->fx_where = loc;
		  f->fx_next->fx_where = loc;
		  f->fx_r_type = BFD_RELOC_RISCV_SET32;
		  f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB32;
		  break;

		default:
		  if (subtype < 0x80 && (subtype & 0x40))
		    {
		      /* DW_CFA_advance_loc */
		      f->fx_frag = (fragS *) f->fx_frag->fr_opcode;
		      f->fx_next->fx_frag = f->fx_frag;
		      f->fx_r_type = BFD_RELOC_RISCV_SET6;
		      f->fx_next->fx_r_type = BFD_RELOC_RISCV_SUB6;
		    }
		  else
		    as_fatal (_("internal error: bad CFA value #%d"), subtype);
		  break;
		}
	      break;

	    default:
	      /* This case is unreachable.  */
	      abort ();
	    }
	}
      /* Fall through.  */

    case BFD_RELOC_RVA:
      /* If we are deleting this reloc entry, we must fill in the
	 value now.  This can happen if we have a .word which is not
	 resolved when it appears but is later defined.  */
      if (f->fx_addsy == NULL)
	{
	  gas_assert (f->fx_size <= sizeof (valueT));
	  md_number_to_chars ((char *) buf, *t, f->fx_size);
	  f->fx_done = 1;
	}
      break;

    case BFD_RELOC_RISCV_JMP:
    case BFD_RELOC_12_PCREL:
    case BFD_RELOC_RISCV_RVC_BRANCH:
    case BFD_RELOC_RISCV_RVC_JUMP:
      break;

    case BFD_RELOC_RISCV_CALL:
    case BFD_RELOC_RISCV_CALL_PLT:
      relaxable = TRUE;
      break;

    case BFD_RELOC_RISCV_PCREL_HI20:
    case BFD_RELOC_RISCV_PCREL_LO12_S:
    case BFD_RELOC_RISCV_PCREL_LO12_I:
      relaxable = riscv_opts.relax;
      break;

    case BFD_RELOC_RISCV_ALIGN:
      break;

    default:
      /* We ignore generic BFD relocations we don't know about.  */
      if (bfd_reloc_type_lookup (stdoutput, f->fx_r_type) != NULL)
	as_fatal (_("internal error: bad relocation #%d"), f->fx_r_type);
    }

  if (f->fx_subsy != NULL)
    as_bad_where (f->fx_file, f->fx_line,
		  _("unsupported symbol subtraction"));

  /* Remember value for tc_gen_reloc.  */
  f->fx_addnumber = *t;

  /* Add an R_RISCV_RELAX reloc if the reloc is relaxable.  */
  /* fx_tcbit is a spare bit for use by CPU specific code. For riscv
     it is used to hold the state of the 'relax' option flag.  */
  if (relaxable && f->fx_tcbit && f->fx_addsy != NULL)
    {
      f->fx_next = xmemdup (f, sizeof (*f), sizeof (*f));
      f->fx_next->fx_addsy = f->fx_next->fx_subsy = NULL;
      f->fx_next->fx_r_type = BFD_RELOC_RISCV_RELAX;
    }
}

/* This structure is used to hold a stack of .option values.  */

struct riscv_option_stack
{
  struct riscv_option_stack *next;
  struct riscv_set_options options;
};

static struct riscv_option_stack *riscv_opts_stack;

/* Handle the .option pseudo-op.  */

static void
s_riscv_option (int x ATTRIBUTE_UNUSED)
{
  char *name = input_line_pointer, ch;

  while (!is_end_of_line[(unsigned char) *input_line_pointer])
    ++input_line_pointer;
  ch = *input_line_pointer;
  *input_line_pointer = '\0';

  if (strcmp (name, "rvc") == 0)
    riscv_set_rvc (TRUE);
  else if (strcmp (name, "norvc") == 0)
    riscv_set_rvc (FALSE);
  else if (strcmp (name, "pic") == 0)
    riscv_opts.pic = TRUE;
  else if (strcmp (name, "nopic") == 0)
    riscv_opts.pic = FALSE;
  else if (strcmp (name, "relax") == 0)
    riscv_opts.relax = TRUE;
  else if (strcmp (name, "norelax") == 0)
    riscv_opts.relax = FALSE;
  else if (strcmp (name, "push") == 0)
    {
      struct riscv_option_stack *s;

      s = (struct riscv_option_stack *) xmalloc (sizeof *s);
      s->next = riscv_opts_stack;
      s->options = riscv_opts;
      riscv_opts_stack = s;
    }
  else if (strcmp (name, "pop") == 0)
    {
      struct riscv_option_stack *s;

      s = riscv_opts_stack;
      if (s == NULL)
	as_bad (_(".option pop with no .option push"));
      else
	{
	  riscv_opts = s->options;
	  riscv_opts_stack = s->next;
	  free (s);
	}
    }
  else
    {
      as_warn (_("Unrecognized .option directive: %s\n"), name);
    }
  *input_line_pointer = ch;
  demand_empty_rest_of_line ();
}

/* Handle the .bss pseudo-op.  */

static void
s_bss (int ignore ATTRIBUTE_UNUSED)
{
  subseg_set (bss_section, 0);
  demand_empty_rest_of_line ();
}

static void
riscv_make_nops (char *buf, bfd_vma bytes)
{
  bfd_vma i = 0;

  /* RISC-V instructions cannot begin or end on odd addresses, so this case
     means we are not within a valid instruction sequence.  It is thus safe
     to use a zero byte, even though that is not a valid instruction.  */
  if (bytes % 2 == 1)
    buf[i++] = 0;

  /* Use at most one 2-byte NOP.  */
  if ((bytes - i) % 4 == 2)
    {
      md_number_to_chars (buf + i, /*RVC_NOP*/0x0001, 2);
      i += 2;
    }

  /* Fill the remainder with 4-byte NOPs.  */
  for ( ; i < bytes; i += 4)
    md_number_to_chars (buf + i, /*RISCV_NOP*/0x00000013, 4);
}

/* Called from md_do_align.  Used to create an alignment frag in a
   code section by emitting a worst-case NOP sequence that the linker
   will later relax to the correct number of NOPs.  We can't compute
   the correct alignment now because of other linker relaxations.  */

bfd_boolean
riscv_frag_align_code (int n)
{
  bfd_vma bytes = (bfd_vma) 1 << n;
  bfd_vma insn_alignment = riscv_subset_supports ("c") ? 2 : 4;
  bfd_vma worst_case_bytes = bytes - insn_alignment;
  char *nops;
  expressionS ex;

  /* If we are moving to a smaller alignment than the instruction size, then no
     alignment is required. */
  if (bytes <= insn_alignment)
    return TRUE;

  /* When not relaxing, riscv_handle_align handles code alignment.  */
  if (!riscv_opts.relax)
    return FALSE;

  nops = frag_more (worst_case_bytes);

  ex.X_op = O_constant;
  ex.X_add_number = worst_case_bytes;

  riscv_make_nops (nops, worst_case_bytes);

  fix_new_exp (frag_now, nops - frag_now->fr_literal, 0,
	       &ex, FALSE, BFD_RELOC_RISCV_ALIGN);

  return TRUE;
}

/* Implement HANDLE_ALIGN.  */

void
riscv_handle_align (fragS *fragP)
{
  switch (fragP->fr_type)
    {
    case rs_align_code:
      /* When relaxing, riscv_frag_align_code handles code alignment.  */
      if (!riscv_opts.relax)
	{
	  bfd_signed_vma bytes = (fragP->fr_next->fr_address
				  - fragP->fr_address - fragP->fr_fix);
	  /* We have 4 byte uncompressed nops.  */
	  bfd_signed_vma size = 4;
	  bfd_signed_vma excess = bytes % size;
	  char *p = fragP->fr_literal + fragP->fr_fix;

	  if (bytes <= 0)
	    break;

	  /* Insert zeros or compressed nops to get 4 byte alignment.  */
	  if (excess)
	    {
	      riscv_make_nops (p, excess);
	      fragP->fr_fix += excess;
	      p += excess;
	    }

	  /* Insert variable number of 4 byte uncompressed nops.  */
	  riscv_make_nops (p, size);
	  fragP->fr_var = size;
	}
      break;

    default:
      break;
    }
}

void
md_show_usage (FILE *stream)
{
  fprintf (stream, _("\
RISC-V options:\n\
  -fpic          generate position-independent code\n\
  -fno-pic       don't generate position-independent code (default)\n\
  -march=ISA     set the RISC-V architecture\n\
  -mabi=ABI      set the RISC-V ABI\n\
  -mrelax        enable relax (default)\n\
  -mno-relax     disable relax\n\
"));
}

/* Standard calling conventions leave the CFA at SP on entry.  */
void
riscv_cfi_frame_initial_instructions (void)
{
  cfi_add_CFA_def_cfa_register (/*SP*/2);
}

void
riscv_elf_final_processing (void)
{
  elf_elfheader (stdoutput)->e_flags |= elf_flags;
}

/* Parse the .sleb128 and .uleb128 pseudos.  Only allow constant expressions,
   since these directives break relaxation when used with symbol deltas.  */

static void
s_riscv_leb128 (int sign)
{
  expressionS exp;
  char *save_in = input_line_pointer;

  expression (&exp);
  if (exp.X_op != O_constant)
    as_bad (_("non-constant .%cleb128 is not supported"), sign ? 's' : 'u');
  demand_empty_rest_of_line ();

  input_line_pointer = save_in;
  return s_leb128 (sign);
}

/* Parse the .insn directive.  */
static void
s_riscv_insn (int x ATTRIBUTE_UNUSED)
{
  char *save_in;
  char save_c;
  char *insn_start;
  char *insn_end;
  char *insn_mnemonic;

  save_in = input_line_pointer;
  while (!is_end_of_line[(unsigned char) *input_line_pointer])
    ++input_line_pointer;
  insn_end = input_line_pointer;

  save_c = *input_line_pointer;
  *input_line_pointer = '\0';
  input_line_pointer = save_in;

  /* morph .insn <mnemonic> .. to _insn_mnemonic .. 
     This is the form of the special instructions which have been added
     to the cgen cpu description.  */
  while (*input_line_pointer != '.')
    --input_line_pointer;
  insn_start = input_line_pointer;

  *input_line_pointer = '_';
  input_line_pointer += strlen(".insn");
  *input_line_pointer++ = '_';

  insn_mnemonic = input_line_pointer;
  SKIP_WHITESPACE ();
  while (ISALNUM (*input_line_pointer))
    {
      *insn_mnemonic = *input_line_pointer;
      input_line_pointer++;
      insn_mnemonic++;
    }
  while (insn_mnemonic != input_line_pointer)
    *insn_mnemonic++ = ' ';

  input_line_pointer = insn_start;

  /* Assemble the now morphed instruction.  */
  riscv_insn insn;
  char * errmsg;
  finished_insnS result;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = riscv_cgen_assemble_insn
    (gas_cgen_cpu_desc, input_line_pointer, & insn.fields, insn.buffer, & errmsg);
  if (!insn.insn)
    {
      as_bad (errmsg);
      return;
    }

  /* Doesn't really matter what we pass for RELAX_P here.  */
  gas_cgen_finish_insn (insn.insn, insn.buffer,
                        CGEN_FIELDS_BITSIZE (& insn.fields), 1, &result);

  input_line_pointer = insn_end;
  *input_line_pointer = save_c;
  demand_empty_rest_of_line ();
}

/* Pseudo-op table.  */

static const pseudo_typeS riscv_pseudo_table[] =
{
  /* RISC-V-specific pseudo-ops.  */
  {"option", s_riscv_option, 0},
  {"half", cons, 2},
  {"word", cons, 4},
  {"dword", cons, 8},
  {"bss", s_bss, 0},
  {"uleb128", s_riscv_leb128, 0},
  {"sleb128", s_riscv_leb128, 1},
  {"insn", s_riscv_insn, 0},

  { NULL, NULL, 0 },
};

void
riscv_pop_insert (void)
{
  extern void pop_insert (const pseudo_typeS *);

  pop_insert (riscv_pseudo_table);
}
