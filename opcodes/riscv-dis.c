/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Disassembler interface for targets using CGEN. -*- C -*-
   CGEN: Cpu tools GENerator

   THIS FILE IS MACHINE GENERATED WITH CGEN.
   - the resultant file is machine generated, cgen-dis.in isn't

   Copyright (C) 1996-2018 Free Software Foundation, Inc.

   This file is part of libopcodes.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

/* ??? Eventually more and more of this stuff can go to cpu-independent files.
   Keep that in mind.  */

#include "sysdep.h"
#include <stdio.h>
#include "ansidecl.h"
#include "disassemble.h"
#include "bfd.h"
#include "symcat.h"
#include "libiberty.h"
#include "riscv-desc.h"
#include "riscv-opc.h"
#include "opintl.h"

/* Default text to print if an instruction isn't recognized.  */
#define UNKNOWN_INSN_MSG _("*unknown*")

static void print_normal
  (CGEN_CPU_DESC, void *, long, unsigned int, bfd_vma, int);
static void print_address
  (CGEN_CPU_DESC, void *, bfd_vma, unsigned int, bfd_vma, int) ATTRIBUTE_UNUSED;
static void print_keyword
  (CGEN_CPU_DESC, void *, CGEN_KEYWORD *, long, unsigned int) ATTRIBUTE_UNUSED;
static void print_insn_normal
  (CGEN_CPU_DESC, void *, const CGEN_INSN *, CGEN_FIELDS *, bfd_vma, int);
static int print_insn
  (CGEN_CPU_DESC, bfd_vma,  disassemble_info *, bfd_byte *, unsigned);
static int default_print_insn
  (CGEN_CPU_DESC, bfd_vma, disassemble_info *) ATTRIBUTE_UNUSED;
static int read_insn
  (CGEN_CPU_DESC, bfd_vma, disassemble_info *, bfd_byte *, int, CGEN_EXTRACT_INFO *,
   unsigned long *);

/* -- disassembler routines inserted here.  */

/* -- dis.c */

#define CGEN_VALIDATE_INSN_SUPPORTED

void
disassemble_init_riscv (struct disassemble_info *info)
{
  if (!info->insn_sets)
    info->insn_sets = cgen_bitset_create (ISA_MAX);
  if (info->mach == bfd_mach_riscv32)
    {
      cgen_bitset_add (info->insn_sets, ISA_RV32);
    }
  else
    {
      cgen_bitset_add (info->insn_sets, ISA_RV64);
    }
}

static inline unsigned int riscv_insn_length (bfd_vma insn)
{
  if ((insn & 0x3) != 0x3) /* RVC.  */
    return 2;
  /* Currently no instrs > 32-bits.  */
  return 4;
}

#define CGEN_PRINT_INSN riscv_print_insn

static int
riscv_print_insn (CGEN_CPU_DESC cd, bfd_vma pc, disassemble_info *info)
{
  bfd_byte buf[CGEN_MAX_INSN_SIZE];
  int buflen;
  int status;
  int insnlen;

  /* Attempt to read the base part of the insn.  */
  buflen = cd->base_insn_bitsize / 8;
  status = (*info->read_memory_func) (pc, buf, buflen, info);

  /* Try again with the minimum part, if min < base.  */
  if (status != 0 && (cd->min_insn_bitsize < cd->base_insn_bitsize))
    {
      buflen = cd->min_insn_bitsize / 8;
      status = (*info->read_memory_func) (pc, buf, buflen, info);
    }

  if (status != 0)
    {
      (*info->memory_error_func) (status, pc, info);
      return -1;
    }

  bfd_vma word = buf[0];
  insnlen = riscv_insn_length (word);

  info->bytes_per_chunk = insnlen % 4 == 0 ? 4 : 2;
  info->bytes_per_line = 8;

  return print_insn (cd, pc, info, buf, buflen);
}

static void
print_sp (CGEN_CPU_DESC cd,
          void * dis_info,
          CGEN_KEYWORD * valuep,
          bfd_vma field ATTRIBUTE_UNUSED,
          int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = dis_info;
  print_keyword (cd, info, valuep, /*SP*/ 2, 0);
}

/* Print a single value as a tied register pair */
static void
print_tied_reg_pair (CGEN_CPU_DESC cd,
                     void * dis_info,
                     CGEN_KEYWORD * valuep,
                     bfd_vma field,
                     int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = dis_info;

  print_keyword (cd, info, valuep, field, 0);
  (*info->fprintf_func) (info->stream, ",");
  print_keyword (cd, info, valuep, field, 0);
}

/* CSR, either a known value, or an explicit address.  */
static void
print_csr (CGEN_CPU_DESC cd,
           void * dis_info,
           CGEN_KEYWORD * keyword_table,
           bfd_vma field,
           int length)
{
  disassemble_info *info = dis_info;
  if (cgen_keyword_lookup_value (keyword_table, field))
    print_keyword (cd, info, keyword_table, field, 0 /*attrs*/);
  else
    print_address (cd, info, field, 0 /*attrs*/, 0 /*pc*/, length);
}

static void
print_fence_succ_pred (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
                       void * dis_info,
                       long value,
                       unsigned int attrs ATTRIBUTE_UNUSED,
                       bfd_vma pc ATTRIBUTE_UNUSED,
                       int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = dis_info;
  if (value & 0x8)
    (*info->fprintf_func) (info->stream, "i");
  if (value & 0x4)
    (*info->fprintf_func) (info->stream, "o");
  if (value & 0x2)
    (*info->fprintf_func) (info->stream, "r");
  if (value & 0x1)
    (*info->fprintf_func) (info->stream, "w");
}

static void
print_float_rounding_mode (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
                           void * dis_info,
                           long value,
                           unsigned int attrs ATTRIBUTE_UNUSED,
                           bfd_vma pc ATTRIBUTE_UNUSED,
                           int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = dis_info;
  const char *str;

  switch (value)
    {
    case 0x0:  str = "rne";  break;
    case 0x1:  str = "rtz";  break;
    case 0x2:  str = "rdn";  break;
    case 0x3:  str = "rup";  break;
    case 0x4:  str = "rmm";  break;
    case 0x7:  str = "";     break;
    default:
      str = "<invalid>";
    }

  (*info->fprintf_func) (info->stream, str);
}

static void
print_uimm32_hi20 (CGEN_CPU_DESC cd,
                   void * dis_info,
                   unsigned long value,
                   unsigned int attrs,
                   bfd_vma pc,
                   int length)
{
  value >>= 12;
  print_normal (cd, dis_info, value, attrs, pc, length);
}

static void
print_nzuimm18_hi6 (CGEN_CPU_DESC cd,
                    void * dis_info,
                    unsigned long value,
                    unsigned int attrs,
                    bfd_vma pc,
                    int length)
{
  value >>= 12;

  /* Although this is only a 6 bit immediate, it represents a 20 bit immediate
     value where the upper 14 bits are a copy of the sign in bit 5.  Manually
     sign extend up to 20 bits here.  */
  value = (char)(value << 2) >> 2;
  value &= 0xfffff;

  print_normal (cd, dis_info, value, attrs, pc, length);
}

/* -- ibd.h */

void riscv_cgen_print_operand
  (CGEN_CPU_DESC, int, PTR, CGEN_FIELDS *, void const *, bfd_vma, int);

/* Main entry point for printing operands.
   XINFO is a `void *' and not a `disassemble_info *' to not put a requirement
   of dis-asm.h on cgen.h.

   This function is basically just a big switch statement.  Earlier versions
   used tables to look up the function to use, but
   - if the table contains both assembler and disassembler functions then
     the disassembler contains much of the assembler and vice-versa,
   - there's a lot of inlining possibilities as things grow,
   - using a switch statement avoids the function call overhead.

   This function could be moved into `print_insn_normal', but keeping it
   separate makes clear the interface between `print_insn_normal' and each of
   the handlers.  */

void
riscv_cgen_print_operand (CGEN_CPU_DESC cd,
			   int opindex,
			   void * xinfo,
			   CGEN_FIELDS *fields,
			   void const *attrs ATTRIBUTE_UNUSED,
			   bfd_vma pc,
			   int length)
{
  disassemble_info *info = (disassemble_info *) xinfo;

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      print_normal (cd, info, fields->f_imm13_311_71_306_114_0, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_RELAX)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_C_REG117 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr_not_zero, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr_not_zero_or_sp, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_REG42 :
      print_keyword (cd, info, & riscv_cgen_opval_h_c_gpr, fields->f_uimm3_43, 0);
      break;
    case RISCV_OPERAND_C_REG62 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr, fields->f_uimm5_65, 0);
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr_not_zero, fields->f_uimm5_65, 0);
      break;
    case RISCV_OPERAND_C_REG97 :
      print_keyword (cd, info, & riscv_cgen_opval_h_c_gpr, fields->f_uimm3_93, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_gpr, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_gpr_not_zero, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_gpr_not_zero, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_gpr_not_zero_or_sp, fields->f_uimm5_115, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_c_gpr, fields->f_uimm3_93, 0);
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_c_gpr, fields->f_uimm3_93, 0);
      break;
    case RISCV_OPERAND_CBRANCH9 :
      print_normal (cd, info, fields->f_imm9_121_62_21_112_42_0, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_RELAX)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_CFUNCT3 :
      print_normal (cd, info, fields->f_c_funct3, 0, pc, length);
      break;
    case RISCV_OPERAND_CFUNCT4 :
      print_normal (cd, info, fields->f_c_funct4, 0, pc, length);
      break;
    case RISCV_OPERAND_CJMP12 :
      print_normal (cd, info, fields->f_imm12_121_81_102_61_71_21_111_53_0, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_RELAX)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_COPCODE2 :
      print_keyword (cd, info, & riscv_cgen_opval_h_copcode2, fields->f_c_opcode, 0);
      break;
    case RISCV_OPERAND_CSR :
      print_csr (cd, info, & riscv_cgen_opval_h_csr, fields->f_csr, 0);
      break;
    case RISCV_OPERAND_FC_RS2 :
      print_keyword (cd, info, & riscv_cgen_opval_h_c_fpr, fields->f_uimm3_43, 0);
      break;
    case RISCV_OPERAND_FC_RS3 :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_uimm5_65, 0);
      break;
    case RISCV_OPERAND_FL_DUMMY :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_dummy, 0);
      break;
    case RISCV_OPERAND_FL_RD :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_rd, 0);
      break;
    case RISCV_OPERAND_FL_RM :
      print_float_rounding_mode (cd, info, fields->f_funct3, 0, pc, length);
      break;
    case RISCV_OPERAND_FL_RS1 :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_rs1, 0);
      break;
    case RISCV_OPERAND_FL_RS2 :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_rs2, 0);
      break;
    case RISCV_OPERAND_FL_RS3 :
      print_keyword (cd, info, & riscv_cgen_opval_h_fpr, fields->f_rs3, 0);
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      print_tied_reg_pair (cd, info, & riscv_cgen_opval_h_fpr, fields->f_uimm5_195, 0);
      break;
    case RISCV_OPERAND_FUNCT3 :
      print_normal (cd, info, fields->f_funct3, 0, pc, length);
      break;
    case RISCV_OPERAND_FUNCT7 :
      print_normal (cd, info, fields->f_funct7, 0, pc, length);
      break;
    case RISCV_OPERAND_IMM_LO12 :
      print_normal (cd, info, fields->f_imm12_3112, 0|(1<<CGEN_OPERAND_SIGNED), pc, length);
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      print_normal (cd, info, fields->f_imm12_3112, 0|(1<<CGEN_OPERAND_SIGNED), pc, length);
      break;
    case RISCV_OPERAND_IMM_ZERO :
      print_normal (cd, info, fields->f_dummy, 0|(1<<CGEN_OPERAND_SIGNED), pc, length);
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      print_normal (cd, info, fields->f_imm6_121_65, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_JMP21 :
      print_normal (cd, info, fields->f_imm21_311_198_201_3010_0, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      print_normal (cd, info, fields->f_imm10_121_42_51_21_61_0000, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      print_normal (cd, info, fields->f_imm6_121_65, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      print_normal (cd, info, fields->f_uimm10_104_122_51_61_00, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      print_nzuimm18_hi6 (cd, info, fields->f_uimm18_121_65_000000000000, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      print_normal (cd, info, fields->f_uimm6_121_65, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_OPCODE7 :
      print_keyword (cd, info, & riscv_cgen_opval_h_opcode7, fields->f_opcode, 0);
      break;
    case RISCV_OPERAND_PRED :
      print_fence_succ_pred (cd, info, fields->f_pred, 0, pc, length);
      break;
    case RISCV_OPERAND_RD :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr, fields->f_rd, 0);
      break;
    case RISCV_OPERAND_RS1 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr, fields->f_rs1, 0);
      break;
    case RISCV_OPERAND_RS2 :
      print_keyword (cd, info, & riscv_cgen_opval_h_gpr, fields->f_rs2, 0);
      break;
    case RISCV_OPERAND_SP_REG :
      print_sp (cd, info, & riscv_cgen_opval_h_sp, fields->f_dummy, 0);
      break;
    case RISCV_OPERAND_STORE12 :
      print_normal (cd, info, fields->f_imm12_317_115, 0|(1<<CGEN_OPERAND_SIGNED)|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_SUCC :
      print_fence_succ_pred (cd, info, fields->f_succ, 0, pc, length);
      break;
    case RISCV_OPERAND_TPREL_ADD :
      print_normal (cd, info, fields->f_dummy, 0|(1<<CGEN_OPERAND_SIGNED), pc, length);
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      print_uimm32_hi20 (cd, info, fields->f_uimm32_3120_000000000000, 0, pc, length);
      break;
    case RISCV_OPERAND_UIMM5 :
      print_normal (cd, info, fields->f_uimm5_195, 0, pc, length);
      break;
    case RISCV_OPERAND_UIMM5_245 :
      print_normal (cd, info, fields->f_uimm5_245, 0, pc, length);
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      print_normal (cd, info, fields->f_uimm5_195, 0, pc, length);
      break;
    case RISCV_OPERAND_UIMM6_256 :
      print_normal (cd, info, fields->f_uimm6_256, 0, pc, length);
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      print_normal (cd, info, fields->f_uimm7_51_123_61_00, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      print_normal (cd, info, fields->f_uimm8_32_121_63_00, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      print_normal (cd, info, fields->f_uimm8_62_123_000, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      print_normal (cd, info, fields->f_uimm8_82_124_00, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      print_normal (cd, info, fields->f_uimm9_43_121_62_000, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      print_normal (cd, info, fields->f_uimm9_93_123_000, 0|(1<<CGEN_OPERAND_VIRTUAL), pc, length);
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while printing insn.\n"),
	       opindex);
    abort ();
  }
}

cgen_print_fn * const riscv_cgen_print_handlers[] =
{
  print_insn_normal,
};


void
riscv_cgen_init_dis (CGEN_CPU_DESC cd)
{
  riscv_cgen_init_opcode_table (cd);
  riscv_cgen_init_ibld_table (cd);
  cd->print_handlers = & riscv_cgen_print_handlers[0];
  cd->print_operand = riscv_cgen_print_operand;
}


/* Default print handler.  */

static void
print_normal (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
	      void *dis_info,
	      long value,
	      unsigned int attrs,
	      bfd_vma pc ATTRIBUTE_UNUSED,
	      int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = (disassemble_info *) dis_info;

  /* Print the operand as directed by the attributes.  */
  if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_SEM_ONLY))
    ; /* nothing to do */
  else if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_SIGNED))
    (*info->fprintf_func) (info->stream, "%ld", value);
  else
    (*info->fprintf_func) (info->stream, "0x%lx", value);
}

/* Default address handler.  */

static void
print_address (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
	       void *dis_info,
	       bfd_vma value,
	       unsigned int attrs,
	       bfd_vma pc ATTRIBUTE_UNUSED,
	       int length ATTRIBUTE_UNUSED)
{
  disassemble_info *info = (disassemble_info *) dis_info;

  /* Print the operand as directed by the attributes.  */
  if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_SEM_ONLY))
    ; /* Nothing to do.  */
  else if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_PCREL_ADDR))
    (*info->print_address_func) (value, info);
  else if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_ABS_ADDR))
    (*info->print_address_func) (value, info);
  else if (CGEN_BOOL_ATTR (attrs, CGEN_OPERAND_SIGNED))
    (*info->fprintf_func) (info->stream, "%ld", (long) value);
  else
    (*info->fprintf_func) (info->stream, "0x%lx", (long) value);
}

/* Keyword print handler.  */

static void
print_keyword (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
	       void *dis_info,
	       CGEN_KEYWORD *keyword_table,
	       long value,
	       unsigned int attrs ATTRIBUTE_UNUSED)
{
  disassemble_info *info = (disassemble_info *) dis_info;
  const CGEN_KEYWORD_ENTRY *ke;

  ke = cgen_keyword_lookup_value (keyword_table, value);
  if (ke != NULL)
    (*info->fprintf_func) (info->stream, "%s", ke->name);
  else
    (*info->fprintf_func) (info->stream, "???");
}

/* Default insn printer.

   DIS_INFO is defined as `void *' so the disassembler needn't know anything
   about disassemble_info.  */

static void
print_insn_normal (CGEN_CPU_DESC cd,
		   void *dis_info,
		   const CGEN_INSN *insn,
		   CGEN_FIELDS *fields,
		   bfd_vma pc,
		   int length)
{
  const CGEN_SYNTAX *syntax = CGEN_INSN_SYNTAX (insn);
  disassemble_info *info = (disassemble_info *) dis_info;
  const CGEN_SYNTAX_CHAR_TYPE *syn;

  CGEN_INIT_PRINT (cd);

  for (syn = CGEN_SYNTAX_STRING (syntax); *syn; ++syn)
    {
      if (CGEN_SYNTAX_MNEMONIC_P (*syn))
	{
	  (*info->fprintf_func) (info->stream, "%s", CGEN_INSN_MNEMONIC (insn));
	  continue;
	}
      if (CGEN_SYNTAX_CHAR_P (*syn))
	{
	  (*info->fprintf_func) (info->stream, "%c", CGEN_SYNTAX_CHAR (*syn));
	  continue;
	}

      /* We have an operand.  */
      riscv_cgen_print_operand (cd, CGEN_SYNTAX_FIELD (*syn), info,
				 fields, CGEN_INSN_ATTRS (insn), pc, length);
    }
}

/* Subroutine of print_insn. Reads an insn into the given buffers and updates
   the extract info.
   Returns 0 if all is well, non-zero otherwise.  */

static int
read_insn (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
	   bfd_vma pc,
	   disassemble_info *info,
	   bfd_byte *buf,
	   int buflen,
	   CGEN_EXTRACT_INFO *ex_info,
	   unsigned long *insn_value)
{
  int status = (*info->read_memory_func) (pc, buf, buflen, info);

  if (status != 0)
    {
      (*info->memory_error_func) (status, pc, info);
      return -1;
    }

  ex_info->dis_info = info;
  ex_info->valid = (1 << buflen) - 1;
  ex_info->insn_bytes = buf;

  *insn_value = bfd_get_bits (buf, buflen * 8, info->endian == BFD_ENDIAN_BIG);
  return 0;
}

/* Utility to print an insn.
   BUF is the base part of the insn, target byte order, BUFLEN bytes long.
   The result is the size of the insn in bytes or zero for an unknown insn
   or -1 if an error occurs fetching data (memory_error_func will have
   been called).  */

static int
print_insn (CGEN_CPU_DESC cd,
	    bfd_vma pc,
	    disassemble_info *info,
	    bfd_byte *buf,
	    unsigned int buflen)
{
  CGEN_INSN_INT insn_value;
  const CGEN_INSN_LIST *insn_list;
  CGEN_EXTRACT_INFO ex_info;
  int basesize;

  /* Extract base part of instruction, just in case CGEN_DIS_* uses it. */
  basesize = cd->base_insn_bitsize < buflen * 8 ?
                                     cd->base_insn_bitsize : buflen * 8;
  insn_value = cgen_get_insn_value (cd, buf, basesize);


  /* Fill in ex_info fields like read_insn would.  Don't actually call
     read_insn, since the incoming buffer is already read (and possibly
     modified a la m32r).  */
  ex_info.valid = (1 << buflen) - 1;
  ex_info.dis_info = info;
  ex_info.insn_bytes = buf;

  /* The instructions are stored in hash lists.
     Pick the first one and keep trying until we find the right one.  */

  insn_list = CGEN_DIS_LOOKUP_INSN (cd, (char *) buf, insn_value);
  while (insn_list != NULL)
    {
      const CGEN_INSN *insn = insn_list->insn;
      CGEN_FIELDS fields;
      int length;
      unsigned long insn_value_cropped;

#ifdef CGEN_VALIDATE_INSN_SUPPORTED
      /* Not needed as insn shouldn't be in hash lists if not supported.  */
      /* Supported by this cpu?  */
      if (! riscv_cgen_insn_supported (cd, insn))
        {
          insn_list = CGEN_DIS_NEXT_INSN (insn_list);
	  continue;
        }
#endif

      /* Basic bit mask must be correct.  */
      /* ??? May wish to allow target to defer this check until the extract
	 handler.  */

      /* Base size may exceed this instruction's size.  Extract the
         relevant part from the buffer. */
      if ((unsigned) (CGEN_INSN_BITSIZE (insn) / 8) < buflen &&
	  (unsigned) (CGEN_INSN_BITSIZE (insn) / 8) <= sizeof (unsigned long))
	insn_value_cropped = bfd_get_bits (buf, CGEN_INSN_BITSIZE (insn),
					   info->endian == BFD_ENDIAN_BIG);
      else
	insn_value_cropped = insn_value;

      if ((insn_value_cropped & CGEN_INSN_BASE_MASK (insn))
	  == CGEN_INSN_BASE_VALUE (insn))
	{
	  /* Printing is handled in two passes.  The first pass parses the
	     machine insn and extracts the fields.  The second pass prints
	     them.  */

	  /* Make sure the entire insn is loaded into insn_value, if it
	     can fit.  */
	  if (((unsigned) CGEN_INSN_BITSIZE (insn) > cd->base_insn_bitsize) &&
	      (unsigned) (CGEN_INSN_BITSIZE (insn) / 8) <= sizeof (unsigned long))
	    {
	      unsigned long full_insn_value;
	      int rc = read_insn (cd, pc, info, buf,
				  CGEN_INSN_BITSIZE (insn) / 8,
				  & ex_info, & full_insn_value);
	      if (rc != 0)
		return rc;
	      length = CGEN_EXTRACT_FN (cd, insn)
		(cd, insn, &ex_info, full_insn_value, &fields, pc);
	    }
	  else
	    length = CGEN_EXTRACT_FN (cd, insn)
	      (cd, insn, &ex_info, insn_value_cropped, &fields, pc);

	  /* Length < 0 -> error.  */
	  if (length < 0)
	    return length;
	  if (length > 0)
	    {
	      CGEN_PRINT_FN (cd, insn) (cd, info, insn, &fields, pc, length);
	      /* Length is in bits, result is in bytes.  */
	      return length / 8;
	    }
	}

      insn_list = CGEN_DIS_NEXT_INSN (insn_list);
    }

  return 0;
}

/* Default value for CGEN_PRINT_INSN.
   The result is the size of the insn in bytes or zero for an unknown insn
   or -1 if an error occured fetching bytes.  */

#ifndef CGEN_PRINT_INSN
#define CGEN_PRINT_INSN default_print_insn
#endif

static int
default_print_insn (CGEN_CPU_DESC cd, bfd_vma pc, disassemble_info *info)
{
  bfd_byte buf[CGEN_MAX_INSN_SIZE];
  int buflen;
  int status;

  /* Attempt to read the base part of the insn.  */
  buflen = cd->base_insn_bitsize / 8;
  status = (*info->read_memory_func) (pc, buf, buflen, info);

  /* Try again with the minimum part, if min < base.  */
  if (status != 0 && (cd->min_insn_bitsize < cd->base_insn_bitsize))
    {
      buflen = cd->min_insn_bitsize / 8;
      status = (*info->read_memory_func) (pc, buf, buflen, info);
    }

  if (status != 0)
    {
      (*info->memory_error_func) (status, pc, info);
      return -1;
    }

  return print_insn (cd, pc, info, buf, buflen);
}

/* Main entry point.
   Print one instruction from PC on INFO->STREAM.
   Return the size of the instruction (in bytes).  */

typedef struct cpu_desc_list
{
  struct cpu_desc_list *next;
  CGEN_BITSET *isa;
  int mach;
  int endian;
  CGEN_CPU_DESC cd;
} cpu_desc_list;

int
print_insn_riscv (bfd_vma pc, disassemble_info *info)
{
  static cpu_desc_list *cd_list = 0;
  cpu_desc_list *cl = 0;
  static CGEN_CPU_DESC cd = 0;
  static CGEN_BITSET *prev_isa;
  static int prev_mach;
  static int prev_endian;
  int length;
  CGEN_BITSET *isa;
  int mach;
  int endian = (info->endian == BFD_ENDIAN_BIG
		? CGEN_ENDIAN_BIG
		: CGEN_ENDIAN_LITTLE);
  enum bfd_architecture arch;

  /* ??? gdb will set mach but leave the architecture as "unknown" */
#ifndef CGEN_BFD_ARCH
#define CGEN_BFD_ARCH bfd_arch_riscv
#endif
  arch = info->arch;
  if (arch == bfd_arch_unknown)
    arch = CGEN_BFD_ARCH;

  /* There's no standard way to compute the machine or isa number
     so we leave it to the target.  */
#ifdef CGEN_COMPUTE_MACH
  mach = CGEN_COMPUTE_MACH (info);
#else
  mach = info->mach;
#endif

#ifdef CGEN_COMPUTE_ISA
  {
    static CGEN_BITSET *permanent_isa;

    if (!permanent_isa)
      permanent_isa = cgen_bitset_create (MAX_ISAS);
    isa = permanent_isa;
    cgen_bitset_clear (isa);
    cgen_bitset_add (isa, CGEN_COMPUTE_ISA (info));
  }
#else
  isa = info->insn_sets;
#endif

  /* If we've switched cpu's, try to find a handle we've used before */
  if (cd
      && (cgen_bitset_compare (isa, prev_isa) != 0
	  || mach != prev_mach
	  || endian != prev_endian))
    {
      cd = 0;
      for (cl = cd_list; cl; cl = cl->next)
	{
	  if (cgen_bitset_compare (cl->isa, isa) == 0 &&
	      cl->mach == mach &&
	      cl->endian == endian)
	    {
	      cd = cl->cd;
 	      prev_isa = cd->isas;
	      break;
	    }
	}
    }

  /* If we haven't initialized yet, initialize the opcode table.  */
  if (! cd)
    {
      const bfd_arch_info_type *arch_type = bfd_lookup_arch (arch, mach);
      const char *mach_name;

      if (!arch_type)
	abort ();
      mach_name = arch_type->printable_name;

      prev_isa = cgen_bitset_copy (isa);
      prev_mach = mach;
      prev_endian = endian;
      cd = riscv_cgen_cpu_open (CGEN_CPU_OPEN_ISAS, prev_isa,
				 CGEN_CPU_OPEN_BFDMACH, mach_name,
				 CGEN_CPU_OPEN_ENDIAN, prev_endian,
				 CGEN_CPU_OPEN_END);
      if (!cd)
	abort ();

      /* Save this away for future reference.  */
      cl = xmalloc (sizeof (struct cpu_desc_list));
      cl->cd = cd;
      cl->isa = prev_isa;
      cl->mach = mach;
      cl->endian = endian;
      cl->next = cd_list;
      cd_list = cl;

      riscv_cgen_init_dis (cd);
    }

  /* We try to have as much common code as possible.
     But at this point some targets need to take over.  */
  /* ??? Some targets may need a hook elsewhere.  Try to avoid this,
     but if not possible try to move this hook elsewhere rather than
     have two hooks.  */
  length = CGEN_PRINT_INSN (cd, pc, info);
  if (length > 0)
    return length;
  if (length < 0)
    return -1;

  (*info->fprintf_func) (info->stream, UNKNOWN_INSN_MSG);
  return cd->default_insn_bitsize / 8;
}
