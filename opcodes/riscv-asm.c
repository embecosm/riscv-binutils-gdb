/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Assembler interface for targets using CGEN. -*- C -*-
   CGEN: Cpu tools GENerator

   THIS FILE IS MACHINE GENERATED WITH CGEN.
   - the resultant file is machine generated, cgen-asm.in isn't

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
#include "bfd.h"
#include "symcat.h"
#include "riscv-desc.h"
#include "riscv-opc.h"
#include "opintl.h"
#include "xregex.h"
#include "libiberty.h"
#include "safe-ctype.h"

#undef  min
#define min(a,b) ((a) < (b) ? (a) : (b))
#undef  max
#define max(a,b) ((a) > (b) ? (a) : (b))

static const char * parse_insn_normal
  (CGEN_CPU_DESC, const CGEN_INSN *, const char **, CGEN_FIELDS *);

/* -- assembler routines inserted here.  */

/* -- asm.c */

#define CGEN_VALIDATE_INSN_SUPPORTED
#define CGEN_VERBOSE_ASSEMBLER_ERRORS

#include "../include/cgen/bitset.h"

#ifdef HAVE_LIMITS_H
#include <limits.h>
#endif

#ifndef CHAR_BIT
#define CHAR_BIT 8
#endif


#define MISSING_CLOSING_PARENS  "missing closing parenthesis"
#define TLS_RELOC_AGAINST_CONST "TLS relocation against a constant"
#define ILLEGAL_OPERANDS        "illegal operands"
#define UNKNOWN_CSR             "unknown CSR"
#define OUT_OF_RANGE            "operand out of range"
#define TIED_REGISTERS_NO_MATCH "tied register operands do not match"
#define NOT_COMPRESSED          "operand not compressed"
#define SYMBOL_NOT_ALLOWED      "operand can not be a symbol"
#define ILLEGAL_REGISTER        "register illegal in RV32E"
#define UNKNOWN_ROUNDING_MODE   "unknown rounding mode for floating point " \
                                "operation"

static const char *
parse_value (CGEN_CPU_DESC cd, const char **strp, int opindex,
             bfd_vma *valuep, int non_zero, bfd_vma mask)
{
  enum cgen_parse_operand_result result_type;
  const char *errmsg;

  if (**strp == '%')
    return SYMBOL_NOT_ALLOWED;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_INTEGER, strp, opindex, BFD_RELOC_NONE,
     &result_type, valuep);
  if (errmsg)
    return errmsg;
  else if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
    {
      if (non_zero && *valuep == 0)
        return ILLEGAL_OPERANDS;
      if (*valuep & mask)
        return ILLEGAL_OPERANDS;
      return NULL;
    }
  else
    return ILLEGAL_OPERANDS;
}

static const char *
parse_imm (CGEN_CPU_DESC cd, const char **strp, int opindex,
           long *valuep, int non_zero, long min, long max, bfd_vma mask)
{
  bfd_vma value;
  const char *errmsg = parse_value (cd, strp, opindex, &value, non_zero, mask);
  if (!errmsg)
    *valuep = (long)value;
  if (*valuep < min || *valuep > max)
    return OUT_OF_RANGE;
  return errmsg;
}

static const char *
parse_uimm (CGEN_CPU_DESC cd, const char **strp, int opindex,
            unsigned long *valuep, int non_zero, unsigned long min,
            unsigned long max, bfd_vma mask)
{
  bfd_vma value;
  const char *errmsg = parse_value (cd, strp, opindex, &value, non_zero, mask);
  if (!errmsg)
    *valuep = (unsigned long)value;
  if (*valuep < min || *valuep > max)
    return OUT_OF_RANGE;
  return errmsg;
}


#define DEF_PARSE_IMM_FN(name, non_zero, min, max, mask)                       \
    static const char *                                                        \
    parse_##name (CGEN_CPU_DESC cd, const char **strp, int opindex,            \
                  long *valuep) {                                              \
      return parse_imm (cd, strp, opindex, valuep, non_zero, min, max, mask);  \
    }
#define DEF_PARSE_UIMM_FN(name, non_zero, min, max, mask)                      \
    static const char *                                                        \
    parse_##name (CGEN_CPU_DESC cd, const char **strp, int opindex,            \
                  unsigned long *valuep) {                                     \
      return parse_uimm (cd, strp, opindex, valuep, non_zero, min, max, mask); \
    }

DEF_PARSE_UIMM_FN(nzuimm6_abs,         1, 0, 63,     0x0)
DEF_PARSE_UIMM_FN(nzuimm10_mask2_abs,  0, 1, 1023,   0x3)
DEF_PARSE_UIMM_FN(uimm5_abs,           0, 0, 31,     0x0)
DEF_PARSE_UIMM_FN(uimm6_abs,           0, 0, 63,     0x0)
DEF_PARSE_UIMM_FN(uimm7_mask2_abs,     0, 0, 127,    0x3)
DEF_PARSE_UIMM_FN(uimm8_mask2_abs,     0, 0, 255,    0x3)
DEF_PARSE_UIMM_FN(uimm8_mask3_abs,     0, 0, 255,    0x7)
DEF_PARSE_UIMM_FN(uimm9_mask3_abs,     0, 0, 511,    0x7)

DEF_PARSE_IMM_FN (nzimm6_abs,          1, -32,  31,  0x0)
DEF_PARSE_IMM_FN (nzimm10_mask4_abs,   1, -512, 511, 0xf)
DEF_PARSE_IMM_FN (imm6_abs,            0, -32,  31,  0x0)

#undef DEF_PARSE_IMM_FN
#undef DEF_PARSE_UIMM_FN


static const char *
parse_imm_lo12 (CGEN_CPU_DESC cd,
                const char **strp,
                int opindex,
                long *valuep,
                int lo_reloc_info,
                int pcrel_reloc_info,
                int tprel_reloc_info);


static const char *
parse_imm_lo12_i (CGEN_CPU_DESC cd,
                  const char **strp,
                  int opindex,
                  long *valuep)
{
  return parse_imm_lo12 (cd, strp, opindex, valuep,
                         BFD_RELOC_RISCV_LO12_I,
                         BFD_RELOC_RISCV_PCREL_LO12_I,
                         BFD_RELOC_RISCV_TPREL_LO12_I);
}

static const char *
parse_imm_lo12_s (CGEN_CPU_DESC cd,
                  const char **strp,
                  int opindex,
                  long *valuep)
{
  return parse_imm_lo12 (cd, strp, opindex, valuep,
                         BFD_RELOC_RISCV_LO12_S,
                         BFD_RELOC_RISCV_PCREL_LO12_S,
                         BFD_RELOC_RISCV_TPREL_LO12_S);
}

static const char *
parse_imm_lo12 (CGEN_CPU_DESC cd,
                const char **strp,
                int opindex,
                long *valuep,
                int lo_reloc_info,
                int pcrel_reloc_info,
                int tprel_reloc_info)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  if (strncasecmp (*strp, "%lo(", 4) == 0)
    {
      *strp += 4;
      errmsg = cgen_parse_address (cd, strp, opindex, lo_reloc_info,
                                   &result_type, &value);
      if (errmsg)
        return errmsg;
      if (**strp != ')')
        return MISSING_CLOSING_PARENS;
      ++*strp;

      if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
        {
          /* sign extend bottom 12 bits */
          int shift = sizeof(value) * CHAR_BIT - 12;
          value = (bfd_signed_vma)(value) << shift >> shift;
        }

      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%pcrel_lo(", 10) == 0)
    {
      *strp += 10;
      errmsg = cgen_parse_address (cd, strp, opindex, pcrel_reloc_info,
                                   &result_type, &value);
      if (errmsg)
        return errmsg;
      if (**strp != ')')
        return MISSING_CLOSING_PARENS;
      ++*strp;

      /* TODO: generate a reloc for offset relative to current pc */
      if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
	{
	  /* sign extend bottom 12 bits */
	  int shift = sizeof(value) * CHAR_BIT - 12;
	  value = (bfd_signed_vma)(value) << shift >> shift;
	}
      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%tprel_lo(", 10) == 0)
    {
      *strp += 10;
      errmsg = cgen_parse_address (cd, strp, opindex, tprel_reloc_info,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
	return TLS_RELOC_AGAINST_CONST;
      *valuep = value;
      return NULL;
    }
  else if (**strp == '%')
    {
      return ILLEGAL_OPERANDS;
    }
  else
    {
      errmsg = cgen_parse_address (cd, strp, opindex, BFD_RELOC_NONE,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (result_type != CGEN_PARSE_OPERAND_RESULT_NUMBER)
	return ILLEGAL_OPERANDS;
      if ((bfd_signed_vma)value > 2047 || (bfd_signed_vma)value < -2048)
	return ILLEGAL_OPERANDS;
      *valuep = value;
      return NULL;
    }
}

/* This is like simm_lo12, but it must be an absolute value (no symbols) */
static const char *
parse_imm_lo12_abs (CGEN_CPU_DESC cd,
                    const char **strp,
                    int opindex,
                    long *valuep)
{
  bfd_vma value;
  enum cgen_parse_operand_result result_type;
  const char *errmsg;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_INTEGER, strp, opindex, BFD_RELOC_NONE,
     &result_type, &value);
  if (errmsg)
    return errmsg;
  else if (result_type != CGEN_PARSE_OPERAND_RESULT_NUMBER)
    return ILLEGAL_OPERANDS;
  *valuep = value;
  if (*valuep > 2047 || *valuep < -2048)
    return ILLEGAL_OPERANDS;
  return NULL;
}

static const char *
parse_uimm32_hi20 (CGEN_CPU_DESC cd,
                   const char **strp,
                   int opindex,
                   unsigned long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  if (strncasecmp (*strp, "%hi(", 4) == 0)
    {
      *strp += 4;
      errmsg = cgen_parse_address (cd, strp, opindex, BFD_RELOC_RISCV_HI20,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%pcrel_hi(", 10) == 0)
    {
      *strp += 10;
      errmsg = cgen_parse_address (cd, strp, opindex,
                                   BFD_RELOC_RISCV_PCREL_HI20,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%tls_ie_pcrel_hi(", 17) == 0)
    {
      *strp += 17;
      errmsg = cgen_parse_address (cd, strp, opindex,
                                   BFD_RELOC_RISCV_TLS_GOT_HI20,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%tls_gd_pcrel_hi(", 17) == 0)
    {
      *strp += 17;
      errmsg = cgen_parse_address (cd, strp, opindex,
                                   BFD_RELOC_RISCV_TLS_GD_HI20,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      *valuep = value;
      return NULL;
    }
  else if (strncasecmp (*strp, "%tprel_hi(", 10) == 0)
    {
      *strp += 10;
      errmsg = cgen_parse_address (cd, strp, opindex,
                                   BFD_RELOC_RISCV_TPREL_HI20,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (**strp != ')')
	return MISSING_CLOSING_PARENS;
      ++*strp;

      if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
	return TLS_RELOC_AGAINST_CONST;

      *valuep = value;
      return NULL;
    }
  else if (**strp == '%')
    {
      return ILLEGAL_OPERANDS;
    }
  else
    {
      errmsg = cgen_parse_address (cd, strp, opindex, BFD_RELOC_NONE,
                                   &result_type, &value);
      if (errmsg)
	return errmsg;
      if (result_type != CGEN_PARSE_OPERAND_RESULT_NUMBER)
	return ILLEGAL_OPERANDS;
      if (value > 1048575)
	return ILLEGAL_OPERANDS;
      *valuep = value << 12;
      return NULL;
    }
}

static const char *
parse_branch13 (CGEN_CPU_DESC cd,
                const char **strp,
                int opindex,
                long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_SYMBOLIC, strp, opindex, BFD_RELOC_12_PCREL,
     &result_type, &value);
  if (errmsg)
    return errmsg;
  *valuep = 0;
  return NULL;
}

static const char *
parse_jmp21 (CGEN_CPU_DESC cd,
             const char **strp,
             int opindex,
             long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_SYMBOLIC, strp, opindex, BFD_RELOC_RISCV_JMP,
     &result_type, &value);
  if (errmsg)
    return errmsg;
  *valuep = 0;
  return NULL;
}

static const char *
parse_csr (CGEN_CPU_DESC cd,
           const char **strp,
           CGEN_KEYWORD *keyword,
           long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  errmsg = cgen_parse_keyword (cd, strp, keyword, valuep);
  if (!errmsg)
    return NULL;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_INTEGER, strp, /*opindex*/ 0, BFD_RELOC_NONE,
    &result_type, &value);
  if (errmsg)
    return errmsg;
  else if (result_type != CGEN_PARSE_OPERAND_RESULT_NUMBER)
    return UNKNOWN_CSR;

  *valuep = value;
  if (*valuep < 0 || *valuep > 4095)
    return ILLEGAL_OPERANDS;
  return NULL;
}

static const char *
parse_gpr (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
           const char **strp,
           CGEN_KEYWORD *keyword,
           long *valuep)
{
  const char *errmsg;

  errmsg = cgen_parse_keyword (cd, strp, keyword, valuep);
  if(errmsg)
    return errmsg;

  if ((*valuep >= 16) && cgen_bitset_contains (cd->isas, ISA_RV32E))
    return ILLEGAL_REGISTER;

  return NULL;
}

static const char *
parse_fence_succ_pred (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
                       const char **strp,
                       int opindex ATTRIBUTE_UNUSED,
                       unsigned long *valuep)
{
  unsigned long res = 0;
  if (**strp == 'i')
    {
      res |= 0x8;
      (*strp)++;
    }
  if (**strp == 'o')
    {
      res |= 0x4;
      (*strp)++;
    }
  if (**strp == 'r')
    {
      res |= 0x2;
      (*strp)++;
    }
  if (**strp == 'w')
    {
      res |= 0x1;
      (*strp)++;
    }

  /* If no character was specified, then it is treated as a 'w' */
  if (res == 0)
    res |= 0x1;
  *valuep = res;
  return NULL;
}

static const char *
parse_float_rounding_mode (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
                           const char **strp,
                           int opindex ATTRIBUTE_UNUSED,
                           unsigned long *valuep)
{
  unsigned long res = 0;
  if (!strncmp (*strp, "rne", strlen ("rne")))
    {
      res = 0x0;
      *strp += strlen ("rne");
    }
  else if (!strncmp (*strp, "rtz", strlen ("rtz")))
    {
      res = 0x1;
      *strp += strlen ("rtz");
    }
  else if (!strncmp (*strp, "rdn", strlen ("rdn")))
    {
      res = 0x2;
      *strp += strlen ("rdn");
    }
  else if (!strncmp (*strp, "rup", strlen ("rup")))
    {
      res = 0x3;
      *strp += strlen ("rup");
    }
  else if (!strncmp (*strp, "rmm", strlen ("rmm")))
    {
      res = 0x4;
      *strp += strlen ("rmm");
    }
  else
    {
      *valuep = 0;
      return UNKNOWN_ROUNDING_MODE;
    }
  *valuep = res;
  return NULL;
}

/* A tprel_add operand is only used as an optional final operand to the
   add instruction. It only parses %tprel_add(<x>) where <x> is a symbol,
   and is used to attach a BFD_RELOC_RISCV_TPREL_ADD reloc to the add.  */
static const char *
parse_tprel_add (CGEN_CPU_DESC cd,
                 const char **strp,
                 int opindex,
                 long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  if (strncasecmp (*strp, "%tprel_add(", strlen ("%tprel_add(")) == 0)
    {
      *strp += strlen("%tprel_add(");

      errmsg = (* cd->parse_operand_fn)
        (cd, CGEN_PARSE_OPERAND_SYMBOLIC, strp, opindex,
         BFD_RELOC_RISCV_TPREL_ADD, &result_type, &value);
      if (errmsg)
        return errmsg;
      if (**strp != ')')
        return MISSING_CLOSING_PARENS;
      ++*strp;

      if (result_type == CGEN_PARSE_OPERAND_RESULT_NUMBER)
        return TLS_RELOC_AGAINST_CONST;
      *valuep = 0;
      return NULL;
    }
  return ILLEGAL_OPERANDS;
}

static const char *
parse_cjmp12 (CGEN_CPU_DESC cd,
              const char **strp,
              int opindex,
              long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_SYMBOLIC, strp, opindex, BFD_RELOC_RISCV_RVC_JUMP,
     &result_type, &value);
  if (errmsg)
    return errmsg;
  *valuep = 0;
  return NULL;
}

static const char *
parse_cbranch9 (CGEN_CPU_DESC cd,
                const char **strp,
                int opindex,
                long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  errmsg = (* cd->parse_operand_fn)
    (cd, CGEN_PARSE_OPERAND_SYMBOLIC, strp, opindex, BFD_RELOC_RISCV_RVC_BRANCH,
     &result_type, &value);
  if (errmsg)
    return errmsg;
  *valuep = 0;
  return NULL;
}


static const char *
parse_tied_regs (CGEN_CPU_DESC cd,
                 const char **strp,
                 CGEN_KEYWORD *keyword,
                 long *valuep,
                 bfd_boolean is_commutative);

static const char *
parse_tied_reg_pair_commutative (CGEN_CPU_DESC cd,
                                 const char **strp,
                                 CGEN_KEYWORD *keyword,
                                 long *valuep)
{
  return parse_tied_regs (cd, strp, keyword, valuep, /*is_commutative*/TRUE);
}

static const char *
parse_tied_reg_pair (CGEN_CPU_DESC cd,
                     const char **strp,
                     CGEN_KEYWORD *keyword,
                     long *valuep)
{
  return parse_tied_regs (cd, strp, keyword, valuep, /*is_commutative*/FALSE);
}

static const char *
parse_tied_regs (CGEN_CPU_DESC cd,
                 const char **strp,
                 CGEN_KEYWORD *keyword,
                 long *valuep,
                 bfd_boolean is_commutative)
{
  const char *errmsg;

  long rs1;
  errmsg = cgen_parse_keyword (cd, strp, keyword, &rs1);
  if (errmsg)
    return errmsg;
  const char *after_1st_op = *strp;

  for ( ; **strp == ' ' || **strp == '\t'; *strp += 1);
  if (**strp != ',')
    return ILLEGAL_OPERANDS;
  *strp += 1;
  for ( ; **strp == ' ' || **strp == '\t'; *strp += 1);

  long rs2;
  errmsg = cgen_parse_keyword (cd, strp, keyword, &rs2);
  if (errmsg)
    return errmsg;

  /* Check the rs1 and rs2 both have the same value */
  if (rs1 == rs2)
    {
      *valuep = rs1;
      return NULL;
    }
  if (!is_commutative)
    return TIED_REGISTERS_NO_MATCH;

  const char *after_2nd_op = (char *)*strp;

  for ( ; **strp == ' ' || **strp == '\t'; *strp += 1);
  if (**strp != ',')
    return ILLEGAL_OPERANDS;
  *strp += 1;
  for ( ; **strp == ' ' || **strp == '\t'; *strp += 1);

  long rs3;
  errmsg = cgen_parse_keyword (cd, strp, keyword, &rs3);
  if (errmsg)
    return errmsg;

  /* Check that the rs1 and rs3 both have the same value.  */
  if (rs1 == rs3)
    {
      *valuep = rs1;

      /* Remove rs3 from *strp by injecting a comment character
         after the second operand.  */
      *(char*)after_2nd_op = '\0';

      /* Jump back to after the first operand, so that we can
         now parse the second operand.  */
      *strp = after_1st_op;
    }
  else
    {
      return TIED_REGISTERS_NO_MATCH;
    }

  return NULL;
}

static const char *
parse_nzuimm18_hi6_abs (CGEN_CPU_DESC cd,
                        const char **strp,
                        int opindex,
                        unsigned long *valuep)
{
  enum cgen_parse_operand_result result_type;
  bfd_vma value;
  const char *errmsg;

  if (**strp == '%')
    return SYMBOL_NOT_ALLOWED;

  errmsg = cgen_parse_address (cd, strp, opindex, BFD_RELOC_NONE,
                               &result_type, &value);
  if (errmsg)
    return errmsg;
  if (result_type != CGEN_PARSE_OPERAND_RESULT_NUMBER)
    return ILLEGAL_OPERANDS;

  /* Although only a 6-bit immediate can be parsed, we can actually parse up
     to a 20-bit immediate *iff* the upper 14 bits are just a copy of bit 5. */
  if (value > 1048575 || value == 0)
    return ILLEGAL_OPERANDS;
  if (value != ((((char)(value << 2) << 12) >> 14) & 0xfffff))
    return ILLEGAL_OPERANDS;
  value &= 0x3f;

  *valuep = value << 12;
  return NULL;
}

/* -- dis.c */

const char * riscv_cgen_parse_operand
  (CGEN_CPU_DESC, int, const char **, CGEN_FIELDS *);

/* Main entry point for operand parsing.

   This function is basically just a big switch statement.  Earlier versions
   used tables to look up the function to use, but
   - if the table contains both assembler and disassembler functions then
     the disassembler contains much of the assembler and vice-versa,
   - there's a lot of inlining possibilities as things grow,
   - using a switch statement avoids the function call overhead.

   This function could be moved into `parse_insn_normal', but keeping it
   separate makes clear the interface between `parse_insn_normal' and each of
   the handlers.  */

const char *
riscv_cgen_parse_operand (CGEN_CPU_DESC cd,
			   int opindex,
			   const char ** strp,
			   CGEN_FIELDS * fields)
{
  const char * errmsg = NULL;
  /* Used by scalar operands that still need to be parsed.  */
  long junk ATTRIBUTE_UNUSED;

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      errmsg = parse_branch13 (cd, strp, RISCV_OPERAND_BRANCH13, (long *) (& fields->f_imm13_311_71_306_114_0));
      break;
    case RISCV_OPERAND_C_REG117 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_gpr_not_zero, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_gpr_not_zero_or_sp, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG42 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_c_gpr, & fields->f_uimm3_43);
      break;
    case RISCV_OPERAND_C_REG62 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_gpr_not_zero, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_C_REG97 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_c_gpr, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      errmsg = parse_tied_reg_pair (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      errmsg = parse_tied_reg_pair (cd, strp, & riscv_cgen_opval_h_gpr_not_zero, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      errmsg = parse_tied_reg_pair_commutative (cd, strp, & riscv_cgen_opval_h_gpr_not_zero, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      errmsg = parse_tied_reg_pair (cd, strp, & riscv_cgen_opval_h_gpr_not_zero_or_sp, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      errmsg = parse_tied_reg_pair (cd, strp, & riscv_cgen_opval_h_c_gpr, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      errmsg = parse_tied_reg_pair_commutative (cd, strp, & riscv_cgen_opval_h_c_gpr, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_CBRANCH9 :
      errmsg = parse_cbranch9 (cd, strp, RISCV_OPERAND_CBRANCH9, (long *) (& fields->f_imm9_121_62_21_112_42_0));
      break;
    case RISCV_OPERAND_CJMP12 :
      errmsg = parse_cjmp12 (cd, strp, RISCV_OPERAND_CJMP12, (long *) (& fields->f_imm12_121_81_102_61_71_21_111_53_0));
      break;
    case RISCV_OPERAND_CSR :
      errmsg = parse_csr (cd, strp, & riscv_cgen_opval_h_csr, & fields->f_csr);
      break;
    case RISCV_OPERAND_FC_RS2 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_c_fpr, & fields->f_uimm3_43);
      break;
    case RISCV_OPERAND_FC_RS3 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_FL_DUMMY :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_dummy);
      break;
    case RISCV_OPERAND_FL_RD :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_rd);
      break;
    case RISCV_OPERAND_FL_RM :
      errmsg = parse_float_rounding_mode (cd, strp, RISCV_OPERAND_FL_RM, (unsigned long *) (& fields->f_funct3));
      break;
    case RISCV_OPERAND_FL_RS1 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_rs1);
      break;
    case RISCV_OPERAND_FL_RS2 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_rs2);
      break;
    case RISCV_OPERAND_FL_RS3 :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_rs3);
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      errmsg = parse_tied_reg_pair (cd, strp, & riscv_cgen_opval_h_fpr, & fields->f_uimm5_195);
      break;
    case RISCV_OPERAND_IMM_LO12 :
      errmsg = parse_imm_lo12_i (cd, strp, RISCV_OPERAND_IMM_LO12, (long *) (& fields->f_imm12_3112));
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      errmsg = parse_imm_lo12_abs (cd, strp, RISCV_OPERAND_IMM_LO12_ABS, (long *) (& fields->f_imm12_3112));
      break;
    case RISCV_OPERAND_IMM_ZERO :
      errmsg = cgen_parse_signed_integer (cd, strp, RISCV_OPERAND_IMM_ZERO, (long *) (& fields->f_dummy));
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      errmsg = parse_imm6_abs (cd, strp, RISCV_OPERAND_IMM6_121_65_ABS, (long *) (& fields->f_imm6_121_65));
      break;
    case RISCV_OPERAND_JMP21 :
      errmsg = parse_jmp21 (cd, strp, RISCV_OPERAND_JMP21, (long *) (& fields->f_imm21_311_198_201_3010_0));
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      errmsg = parse_nzimm10_mask4_abs (cd, strp, RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS, (long *) (& fields->f_imm10_121_42_51_21_61_0000));
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      errmsg = parse_nzimm6_abs (cd, strp, RISCV_OPERAND_NZIMM6_121_65_ABS, (long *) (& fields->f_imm6_121_65));
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      errmsg = parse_nzuimm10_mask2_abs (cd, strp, RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS, (unsigned long *) (& fields->f_uimm10_104_122_51_61_00));
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      errmsg = parse_nzuimm18_hi6_abs (cd, strp, RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS, (unsigned long *) (& fields->f_uimm18_121_65_000000000000));
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      errmsg = parse_nzuimm6_abs (cd, strp, RISCV_OPERAND_NZUIMM6_121_65_ABS, (unsigned long *) (& fields->f_uimm6_121_65));
      break;
    case RISCV_OPERAND_PRED :
      errmsg = parse_fence_succ_pred (cd, strp, RISCV_OPERAND_PRED, (unsigned long *) (& fields->f_pred));
      break;
    case RISCV_OPERAND_RD :
      errmsg = parse_gpr (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_rd);
      break;
    case RISCV_OPERAND_RS1 :
      errmsg = parse_gpr (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_rs1);
      break;
    case RISCV_OPERAND_RS2 :
      errmsg = parse_gpr (cd, strp, & riscv_cgen_opval_h_gpr, & fields->f_rs2);
      break;
    case RISCV_OPERAND_SP_REG :
      errmsg = cgen_parse_keyword (cd, strp, & riscv_cgen_opval_h_sp, & fields->f_dummy);
      break;
    case RISCV_OPERAND_STORE12 :
      errmsg = parse_imm_lo12_s (cd, strp, RISCV_OPERAND_STORE12, (long *) (& fields->f_imm12_317_115));
      break;
    case RISCV_OPERAND_SUCC :
      errmsg = parse_fence_succ_pred (cd, strp, RISCV_OPERAND_SUCC, (unsigned long *) (& fields->f_succ));
      break;
    case RISCV_OPERAND_TPREL_ADD :
      errmsg = parse_tprel_add (cd, strp, RISCV_OPERAND_TPREL_ADD, (long *) (& fields->f_dummy));
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      errmsg = parse_uimm32_hi20 (cd, strp, RISCV_OPERAND_UIMM32_3120_000000000000, (unsigned long *) (& fields->f_uimm32_3120_000000000000));
      break;
    case RISCV_OPERAND_UIMM5 :
      errmsg = cgen_parse_unsigned_integer (cd, strp, RISCV_OPERAND_UIMM5, (unsigned long *) (& fields->f_uimm5_195));
      break;
    case RISCV_OPERAND_UIMM5_245 :
      errmsg = parse_uimm5_abs (cd, strp, RISCV_OPERAND_UIMM5_245, (unsigned long *) (& fields->f_uimm5_245));
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      errmsg = parse_uimm5_abs (cd, strp, RISCV_OPERAND_UIMM5_ABS, (unsigned long *) (& fields->f_uimm5_195));
      break;
    case RISCV_OPERAND_UIMM6_256 :
      errmsg = parse_uimm6_abs (cd, strp, RISCV_OPERAND_UIMM6_256, (unsigned long *) (& fields->f_uimm6_256));
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      errmsg = parse_uimm7_mask2_abs (cd, strp, RISCV_OPERAND_UIMM7_51_123_61_00_ABS, (unsigned long *) (& fields->f_uimm7_51_123_61_00));
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      errmsg = parse_uimm8_mask2_abs (cd, strp, RISCV_OPERAND_UIMM8_32_121_63_00_ABS, (unsigned long *) (& fields->f_uimm8_32_121_63_00));
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      errmsg = parse_uimm8_mask3_abs (cd, strp, RISCV_OPERAND_UIMM8_62_123_000_ABS, (unsigned long *) (& fields->f_uimm8_62_123_000));
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      errmsg = parse_uimm8_mask2_abs (cd, strp, RISCV_OPERAND_UIMM8_82_124_00_ABS, (unsigned long *) (& fields->f_uimm8_82_124_00));
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      errmsg = parse_uimm9_mask3_abs (cd, strp, RISCV_OPERAND_UIMM9_43_121_62_000_ABS, (unsigned long *) (& fields->f_uimm9_43_121_62_000));
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      errmsg = parse_uimm9_mask3_abs (cd, strp, RISCV_OPERAND_UIMM9_93_123_000_ABS, (unsigned long *) (& fields->f_uimm9_93_123_000));
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while parsing.\n"), opindex);
      abort ();
  }

  return errmsg;
}

cgen_parse_fn * const riscv_cgen_parse_handlers[] =
{
  parse_insn_normal,
};

void
riscv_cgen_init_asm (CGEN_CPU_DESC cd)
{
  riscv_cgen_init_opcode_table (cd);
  riscv_cgen_init_ibld_table (cd);
  cd->parse_handlers = & riscv_cgen_parse_handlers[0];
  cd->parse_operand = riscv_cgen_parse_operand;
#ifdef CGEN_ASM_INIT_HOOK
CGEN_ASM_INIT_HOOK
#endif
}



/* Regex construction routine.

   This translates an opcode syntax string into a regex string,
   by replacing any non-character syntax element (such as an
   opcode) with the pattern '.*'

   It then compiles the regex and stores it in the opcode, for
   later use by riscv_cgen_assemble_insn

   Returns NULL for success, an error message for failure.  */

char *
riscv_cgen_build_insn_regex (CGEN_INSN *insn)
{
  CGEN_OPCODE *opc = (CGEN_OPCODE *) CGEN_INSN_OPCODE (insn);
  const char *mnem = CGEN_INSN_MNEMONIC (insn);
  char rxbuf[CGEN_MAX_RX_ELEMENTS];
  char *rx = rxbuf;
  const CGEN_SYNTAX_CHAR_TYPE *syn;
  int reg_err;

  syn = CGEN_SYNTAX_STRING (CGEN_OPCODE_SYNTAX (opc));

  /* Mnemonics come first in the syntax string.  */
  if (! CGEN_SYNTAX_MNEMONIC_P (* syn))
    return _("missing mnemonic in syntax string");
  ++syn;

  /* Generate a case sensitive regular expression that emulates case
     insensitive matching in the "C" locale.  We cannot generate a case
     insensitive regular expression because in Turkish locales, 'i' and 'I'
     are not equal modulo case conversion.  */

  /* Copy the literal mnemonic out of the insn.  */
  for (; *mnem; mnem++)
    {
      char c = *mnem;

      if (ISALPHA (c))
	{
	  *rx++ = '[';
	  *rx++ = TOLOWER (c);
	  *rx++ = TOUPPER (c);
	  *rx++ = ']';
	}
      else
	*rx++ = c;
    }

  /* Copy any remaining literals from the syntax string into the rx.  */
  for(; * syn != 0 && rx <= rxbuf + (CGEN_MAX_RX_ELEMENTS - 7 - 4); ++syn)
    {
      if (CGEN_SYNTAX_CHAR_P (* syn))
	{
	  char c = CGEN_SYNTAX_CHAR (* syn);

	  switch (c)
	    {
	      /* Escape any regex metacharacters in the syntax.  */
	    case '.': case '[': case '\\':
	    case '*': case '^': case '$':

#ifdef CGEN_ESCAPE_EXTENDED_REGEX
	    case '?': case '{': case '}':
	    case '(': case ')': case '*':
	    case '|': case '+': case ']':
#endif
	      *rx++ = '\\';
	      *rx++ = c;
	      break;

	    default:
	      if (ISALPHA (c))
		{
		  *rx++ = '[';
		  *rx++ = TOLOWER (c);
		  *rx++ = TOUPPER (c);
		  *rx++ = ']';
		}
	      else
		*rx++ = c;
	      break;
	    }
	}
      else
	{
	  /* Replace non-syntax fields with globs.  */
	  *rx++ = '.';
	  *rx++ = '*';
	}
    }

  /* Trailing whitespace ok.  */
  * rx++ = '[';
  * rx++ = ' ';
  * rx++ = '\t';
  * rx++ = ']';
  * rx++ = '*';

  /* But anchor it after that.  */
  * rx++ = '$';
  * rx = '\0';

  CGEN_INSN_RX (insn) = xmalloc (sizeof (regex_t));
  reg_err = regcomp ((regex_t *) CGEN_INSN_RX (insn), rxbuf, REG_NOSUB);

  if (reg_err == 0)
    return NULL;
  else
    {
      static char msg[80];

      regerror (reg_err, (regex_t *) CGEN_INSN_RX (insn), msg, 80);
      regfree ((regex_t *) CGEN_INSN_RX (insn));
      free (CGEN_INSN_RX (insn));
      (CGEN_INSN_RX (insn)) = NULL;
      return msg;
    }
}


/* Default insn parser.

   The syntax string is scanned and operands are parsed and stored in FIELDS.
   Relocs are queued as we go via other callbacks.

   ??? Note that this is currently an all-or-nothing parser.  If we fail to
   parse the instruction, we return 0 and the caller will start over from
   the beginning.  Backtracking will be necessary in parsing subexpressions,
   but that can be handled there.  Not handling backtracking here may get
   expensive in the case of the m68k.  Deal with later.

   Returns NULL for success, an error message for failure.  */

static const char *
parse_insn_normal (CGEN_CPU_DESC cd,
		   const CGEN_INSN *insn,
		   const char **strp,
		   CGEN_FIELDS *fields)
{
  /* ??? Runtime added insns not handled yet.  */
  const CGEN_SYNTAX *syntax = CGEN_INSN_SYNTAX (insn);
  const char *str = *strp;
  const char *errmsg;
  const char *p;
  const CGEN_SYNTAX_CHAR_TYPE * syn;
#ifdef CGEN_MNEMONIC_OPERANDS
  /* FIXME: wip */
  int past_opcode_p;
#endif

  /* For now we assume the mnemonic is first (there are no leading operands).
     We can parse it without needing to set up operand parsing.
     GAS's input scrubber will ensure mnemonics are lowercase, but we may
     not be called from GAS.  */
  p = CGEN_INSN_MNEMONIC (insn);
  while (*p && TOLOWER (*p) == TOLOWER (*str))
    ++p, ++str;

  if (* p)
    return _("unrecognized instruction");

#ifndef CGEN_MNEMONIC_OPERANDS
  if (* str && ! ISSPACE (* str))
    return _("unrecognized instruction");
#endif

  CGEN_INIT_PARSE (cd);
  cgen_init_parse_operand (cd);
#ifdef CGEN_MNEMONIC_OPERANDS
  past_opcode_p = 0;
#endif

  /* We don't check for (*str != '\0') here because we want to parse
     any trailing fake arguments in the syntax string.  */
  syn = CGEN_SYNTAX_STRING (syntax);

  /* Mnemonics come first for now, ensure valid string.  */
  if (! CGEN_SYNTAX_MNEMONIC_P (* syn))
    abort ();

  ++syn;

  while (* syn != 0)
    {
      /* Non operand chars must match exactly.  */
      if (CGEN_SYNTAX_CHAR_P (* syn))
	{
	  /* FIXME: While we allow for non-GAS callers above, we assume the
	     first char after the mnemonic part is a space.  */
	  /* FIXME: We also take inappropriate advantage of the fact that
	     GAS's input scrubber will remove extraneous blanks.  */
	  if (TOLOWER (*str) == TOLOWER (CGEN_SYNTAX_CHAR (* syn)))
	    {
#ifdef CGEN_MNEMONIC_OPERANDS
	      if (CGEN_SYNTAX_CHAR(* syn) == ' ')
		past_opcode_p = 1;
#endif
	      ++ syn;
	      ++ str;
	    }
	  else if (*str)
	    {
	      /* Syntax char didn't match.  Can't be this insn.  */
	      static char msg [80];

	      /* xgettext:c-format */
	      sprintf (msg, _("syntax error (expected char `%c', found `%c')"),
		       CGEN_SYNTAX_CHAR(*syn), *str);
	      return msg;
	    }
	  else
	    {
	      /* Ran out of input.  */
	      static char msg [80];

	      /* xgettext:c-format */
	      sprintf (msg, _("syntax error (expected char `%c', found end of instruction)"),
		       CGEN_SYNTAX_CHAR(*syn));
	      return msg;
	    }
	  continue;
	}

#ifdef CGEN_MNEMONIC_OPERANDS
      (void) past_opcode_p;
#endif
      /* We have an operand of some sort.  */
      errmsg = cd->parse_operand (cd, CGEN_SYNTAX_FIELD (*syn), &str, fields);
      if (errmsg)
	return errmsg;

      /* Done with this operand, continue with next one.  */
      ++ syn;
    }

  /* If we're at the end of the syntax string, we're done.  */
  if (* syn == 0)
    {
      /* FIXME: For the moment we assume a valid `str' can only contain
	 blanks now.  IE: We needn't try again with a longer version of
	 the insn and it is assumed that longer versions of insns appear
	 before shorter ones (eg: lsr r2,r3,1 vs lsr r2,r3).  */
      while (ISSPACE (* str))
	++ str;

      if (* str != '\0')
	return _("junk at end of line"); /* FIXME: would like to include `str' */

      return NULL;
    }

  /* We couldn't parse it.  */
  return _("unrecognized instruction");
}

/* Main entry point.
   This routine is called for each instruction to be assembled.
   STR points to the insn to be assembled.
   We assume all necessary tables have been initialized.
   The assembled instruction, less any fixups, is stored in BUF.
   Remember that if CGEN_INT_INSN_P then BUF is an int and thus the value
   still needs to be converted to target byte order, otherwise BUF is an array
   of bytes in target byte order.
   The result is a pointer to the insn's entry in the opcode table,
   or NULL if an error occured (an error message will have already been
   printed).

   Note that when processing (non-alias) macro-insns,
   this function recurses.

   ??? It's possible to make this cpu-independent.
   One would have to deal with a few minor things.
   At this point in time doing so would be more of a curiosity than useful
   [for example this file isn't _that_ big], but keeping the possibility in
   mind helps keep the design clean.  */

const CGEN_INSN *
riscv_cgen_assemble_insn (CGEN_CPU_DESC cd,
			   const char *str,
			   CGEN_FIELDS *fields,
			   CGEN_INSN_BYTES_PTR buf,
			   char **errmsg)
{
  const char *start;
  CGEN_INSN_LIST *ilist;
  const char *parse_errmsg = NULL;
  const char *insert_errmsg = NULL;
  int recognized_mnemonic = 0;

  /* Skip leading white space.  */
  while (ISSPACE (* str))
    ++ str;

  /* The instructions are stored in hashed lists.
     Get the first in the list.  */
  ilist = CGEN_ASM_LOOKUP_INSN (cd, str);

  /* Keep looking until we find a match.  */
  start = str;
  for ( ; ilist != NULL ; ilist = CGEN_ASM_NEXT_INSN (ilist))
    {
      const CGEN_INSN *insn = ilist->insn;
      recognized_mnemonic = 1;

#ifdef CGEN_VALIDATE_INSN_SUPPORTED
      /* Not usually needed as unsupported opcodes
	 shouldn't be in the hash lists.  */
      /* Is this insn supported by the selected cpu?  */
      if (! riscv_cgen_insn_supported (cd, insn))
	continue;
#endif
      /* If the RELAXED attribute is set, this is an insn that shouldn't be
	 chosen immediately.  Instead, it is used during assembler/linker
	 relaxation if possible.  */
      if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_RELAXED) != 0)
	continue;

      str = start;

      /* Skip this insn if str doesn't look right lexically.  */
      if (CGEN_INSN_RX (insn) != NULL &&
	  regexec ((regex_t *) CGEN_INSN_RX (insn), str, 0, NULL, 0) == REG_NOMATCH)
	continue;

      /* Allow parse/insert handlers to obtain length of insn.  */
      CGEN_FIELDS_BITSIZE (fields) = CGEN_INSN_BITSIZE (insn);

      parse_errmsg = CGEN_PARSE_FN (cd, insn) (cd, insn, & str, fields);
      if (parse_errmsg != NULL)
	continue;

      /* ??? 0 is passed for `pc'.  */
      insert_errmsg = CGEN_INSERT_FN (cd, insn) (cd, insn, fields, buf,
						 (bfd_vma) 0);
      if (insert_errmsg != NULL)
        continue;

      /* It is up to the caller to actually output the insn and any
         queued relocs.  */
      return insn;
    }

  {
    static char errbuf[150];
    const char *tmp_errmsg;
#ifdef CGEN_VERBOSE_ASSEMBLER_ERRORS
#define be_verbose 1
#else
#define be_verbose 0
#endif

    if (be_verbose)
      {
	/* If requesting verbose error messages, use insert_errmsg.
	   Failing that, use parse_errmsg.  */
	tmp_errmsg = (insert_errmsg ? insert_errmsg :
		      parse_errmsg ? parse_errmsg :
		      recognized_mnemonic ?
		      _("unrecognized form of instruction") :
		      _("unrecognized instruction"));

	if (strlen (start) > 50)
	  /* xgettext:c-format */
	  sprintf (errbuf, "%s `%.50s...'", tmp_errmsg, start);
	else
	  /* xgettext:c-format */
	  sprintf (errbuf, "%s `%.50s'", tmp_errmsg, start);
      }
    else
      {
	if (strlen (start) > 50)
	  /* xgettext:c-format */
	  sprintf (errbuf, _("bad instruction `%.50s...'"), start);
	else
	  /* xgettext:c-format */
	  sprintf (errbuf, _("bad instruction `%.50s'"), start);
      }

    *errmsg = errbuf;
    return NULL;
  }
}
