/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction building/extraction support for riscv. -*- C -*-

   THIS FILE IS MACHINE GENERATED WITH CGEN: Cpu tools GENerator.
   - the resultant file is machine generated, cgen-ibld.in isn't

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
#include "dis-asm.h"
#include "bfd.h"
#include "symcat.h"
#include "riscv-desc.h"
#include "riscv-opc.h"
#include "cgen/basic-modes.h"
#include "opintl.h"
#include "safe-ctype.h"

#undef  min
#define min(a,b) ((a) < (b) ? (a) : (b))
#undef  max
#define max(a,b) ((a) > (b) ? (a) : (b))

/* Used by the ifield rtx function.  */
#define FLD(f) (fields->f)

static const char * insert_normal
  (CGEN_CPU_DESC, long, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, CGEN_INSN_BYTES_PTR);
static const char * insert_insn_normal
  (CGEN_CPU_DESC, const CGEN_INSN *,
   CGEN_FIELDS *, CGEN_INSN_BYTES_PTR, bfd_vma);
static int extract_normal
  (CGEN_CPU_DESC, CGEN_EXTRACT_INFO *, CGEN_INSN_INT,
   unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bfd_vma, long *);
static int extract_insn_normal
  (CGEN_CPU_DESC, const CGEN_INSN *, CGEN_EXTRACT_INFO *,
   CGEN_INSN_INT, CGEN_FIELDS *, bfd_vma);
#if CGEN_INT_INSN_P
static void put_insn_int_value
  (CGEN_CPU_DESC, CGEN_INSN_BYTES_PTR, int, int, CGEN_INSN_INT);
#endif
#if ! CGEN_INT_INSN_P
static CGEN_INLINE void insert_1
  (CGEN_CPU_DESC, unsigned long, int, int, int, unsigned char *);
static CGEN_INLINE int fill_cache
  (CGEN_CPU_DESC, CGEN_EXTRACT_INFO *,  int, int, bfd_vma);
static CGEN_INLINE long extract_1
  (CGEN_CPU_DESC, CGEN_EXTRACT_INFO *, int, int, int, unsigned char *, bfd_vma);
#endif

/* Operand insertion.  */

#if ! CGEN_INT_INSN_P

/* Subroutine of insert_normal.  */

static CGEN_INLINE void
insert_1 (CGEN_CPU_DESC cd,
	  unsigned long value,
	  int start,
	  int length,
	  int word_length,
	  unsigned char *bufp)
{
  unsigned long x,mask;
  int shift;

  x = cgen_get_insn_value (cd, bufp, word_length);

  /* Written this way to avoid undefined behaviour.  */
  mask = (((1L << (length - 1)) - 1) << 1) | 1;
  if (CGEN_INSN_LSB0_P)
    shift = (start + 1) - length;
  else
    shift = (word_length - (start + length));
  x = (x & ~(mask << shift)) | ((value & mask) << shift);

  cgen_put_insn_value (cd, bufp, word_length, (bfd_vma) x);
}

#endif /* ! CGEN_INT_INSN_P */

/* Default insertion routine.

   ATTRS is a mask of the boolean attributes.
   WORD_OFFSET is the offset in bits from the start of the insn of the value.
   WORD_LENGTH is the length of the word in bits in which the value resides.
   START is the starting bit number in the word, architecture origin.
   LENGTH is the length of VALUE in bits.
   TOTAL_LENGTH is the total length of the insn in bits.

   The result is an error message or NULL if success.  */

/* ??? This duplicates functionality with bfd's howto table and
   bfd_install_relocation.  */
/* ??? This doesn't handle bfd_vma's.  Create another function when
   necessary.  */

static const char *
insert_normal (CGEN_CPU_DESC cd,
	       long value,
	       unsigned int attrs,
	       unsigned int word_offset,
	       unsigned int start,
	       unsigned int length,
	       unsigned int word_length,
	       unsigned int total_length,
	       CGEN_INSN_BYTES_PTR buffer)
{
  static char errbuf[100];
  /* Written this way to avoid undefined behaviour.  */
  unsigned long mask = (((1L << (length - 1)) - 1) << 1) | 1;

  /* If LENGTH is zero, this operand doesn't contribute to the value.  */
  if (length == 0)
    return NULL;

  if (word_length > 8 * sizeof (CGEN_INSN_INT))
    abort ();

  /* For architectures with insns smaller than the base-insn-bitsize,
     word_length may be too big.  */
  if (cd->min_insn_bitsize < cd->base_insn_bitsize)
    {
      if (word_offset == 0
	  && word_length > total_length)
	word_length = total_length;
    }

  /* Ensure VALUE will fit.  */
  if (CGEN_BOOL_ATTR (attrs, CGEN_IFLD_SIGN_OPT))
    {
      long minval = - (1L << (length - 1));
      unsigned long maxval = mask;

      if ((value > 0 && (unsigned long) value > maxval)
	  || value < minval)
	{
	  /* xgettext:c-format */
	  sprintf (errbuf,
		   _("operand out of range (%ld not between %ld and %lu)"),
		   value, minval, maxval);
	  return errbuf;
	}
    }
  else if (! CGEN_BOOL_ATTR (attrs, CGEN_IFLD_SIGNED))
    {
      unsigned long maxval = mask;
      unsigned long val = (unsigned long) value;

      /* For hosts with a word size > 32 check to see if value has been sign
	 extended beyond 32 bits.  If so then ignore these higher sign bits
	 as the user is attempting to store a 32-bit signed value into an
	 unsigned 32-bit field which is allowed.  */
      if (sizeof (unsigned long) > 4 && ((value >> 32) == -1))
	val &= 0xFFFFFFFF;

      if (val > maxval)
	{
	  /* xgettext:c-format */
	  sprintf (errbuf,
		   _("operand out of range (0x%lx not between 0 and 0x%lx)"),
		   val, maxval);
	  return errbuf;
	}
    }
  else
    {
      if (! cgen_signed_overflow_ok_p (cd))
	{
	  long minval = - (1L << (length - 1));
	  long maxval =   (1L << (length - 1)) - 1;

	  if (value < minval || value > maxval)
	    {
	      sprintf
		/* xgettext:c-format */
		(errbuf, _("operand out of range (%ld not between %ld and %ld)"),
		 value, minval, maxval);
	      return errbuf;
	    }
	}
    }

#if CGEN_INT_INSN_P

  {
    int shift_within_word, shift_to_word, shift;

    /* How to shift the value to BIT0 of the word.  */
    shift_to_word = total_length - (word_offset + word_length);

    /* How to shift the value to the field within the word.  */
    if (CGEN_INSN_LSB0_P)
      shift_within_word = start + 1 - length;
    else
      shift_within_word = word_length - start - length;

    /* The total SHIFT, then mask in the value.  */
    shift = shift_to_word + shift_within_word;
    *buffer = (*buffer & ~(mask << shift)) | ((value & mask) << shift);
  }

#else /* ! CGEN_INT_INSN_P */

  {
    unsigned char *bufp = (unsigned char *) buffer + word_offset / 8;

    insert_1 (cd, value, start, length, word_length, bufp);
  }

#endif /* ! CGEN_INT_INSN_P */

  return NULL;
}

/* Default insn builder (insert handler).
   The instruction is recorded in CGEN_INT_INSN_P byte order (meaning
   that if CGEN_INSN_BYTES_PTR is an int * and thus, the value is
   recorded in host byte order, otherwise BUFFER is an array of bytes
   and the value is recorded in target byte order).
   The result is an error message or NULL if success.  */

static const char *
insert_insn_normal (CGEN_CPU_DESC cd,
		    const CGEN_INSN * insn,
		    CGEN_FIELDS * fields,
		    CGEN_INSN_BYTES_PTR buffer,
		    bfd_vma pc)
{
  const CGEN_SYNTAX *syntax = CGEN_INSN_SYNTAX (insn);
  unsigned long value;
  const CGEN_SYNTAX_CHAR_TYPE * syn;

  CGEN_INIT_INSERT (cd);
  value = CGEN_INSN_BASE_VALUE (insn);

  /* If we're recording insns as numbers (rather than a string of bytes),
     target byte order handling is deferred until later.  */

#if CGEN_INT_INSN_P

  put_insn_int_value (cd, buffer, cd->base_insn_bitsize,
		      CGEN_FIELDS_BITSIZE (fields), value);

#else

  cgen_put_insn_value (cd, buffer, min ((unsigned) cd->base_insn_bitsize,
					(unsigned) CGEN_FIELDS_BITSIZE (fields)),
		       value);

#endif /* ! CGEN_INT_INSN_P */

  /* ??? It would be better to scan the format's fields.
     Still need to be able to insert a value based on the operand though;
     e.g. storing a branch displacement that got resolved later.
     Needs more thought first.  */

  for (syn = CGEN_SYNTAX_STRING (syntax); * syn; ++ syn)
    {
      const char *errmsg;

      if (CGEN_SYNTAX_CHAR_P (* syn))
	continue;

      errmsg = (* cd->insert_operand) (cd, CGEN_SYNTAX_FIELD (*syn),
				       fields, buffer, pc);
      if (errmsg)
	return errmsg;
    }

  return NULL;
}

#if CGEN_INT_INSN_P
/* Cover function to store an insn value into an integral insn.  Must go here
   because it needs <prefix>-desc.h for CGEN_INT_INSN_P.  */

static void
put_insn_int_value (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
		    CGEN_INSN_BYTES_PTR buf,
		    int length,
		    int insn_length,
		    CGEN_INSN_INT value)
{
  /* For architectures with insns smaller than the base-insn-bitsize,
     length may be too big.  */
  if (length > insn_length)
    *buf = value;
  else
    {
      int shift = insn_length - length;
      /* Written this way to avoid undefined behaviour.  */
      CGEN_INSN_INT mask = (((1L << (length - 1)) - 1) << 1) | 1;

      *buf = (*buf & ~(mask << shift)) | ((value & mask) << shift);
    }
}
#endif

/* Operand extraction.  */

#if ! CGEN_INT_INSN_P

/* Subroutine of extract_normal.
   Ensure sufficient bytes are cached in EX_INFO.
   OFFSET is the offset in bytes from the start of the insn of the value.
   BYTES is the length of the needed value.
   Returns 1 for success, 0 for failure.  */

static CGEN_INLINE int
fill_cache (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
	    CGEN_EXTRACT_INFO *ex_info,
	    int offset,
	    int bytes,
	    bfd_vma pc)
{
  /* It's doubtful that the middle part has already been fetched so
     we don't optimize that case.  kiss.  */
  unsigned int mask;
  disassemble_info *info = (disassemble_info *) ex_info->dis_info;

  /* First do a quick check.  */
  mask = (1 << bytes) - 1;
  if (((ex_info->valid >> offset) & mask) == mask)
    return 1;

  /* Search for the first byte we need to read.  */
  for (mask = 1 << offset; bytes > 0; --bytes, ++offset, mask <<= 1)
    if (! (mask & ex_info->valid))
      break;

  if (bytes)
    {
      int status;

      pc += offset;
      status = (*info->read_memory_func)
	(pc, ex_info->insn_bytes + offset, bytes, info);

      if (status != 0)
	{
	  (*info->memory_error_func) (status, pc, info);
	  return 0;
	}

      ex_info->valid |= ((1 << bytes) - 1) << offset;
    }

  return 1;
}

/* Subroutine of extract_normal.  */

static CGEN_INLINE long
extract_1 (CGEN_CPU_DESC cd,
	   CGEN_EXTRACT_INFO *ex_info ATTRIBUTE_UNUSED,
	   int start,
	   int length,
	   int word_length,
	   unsigned char *bufp,
	   bfd_vma pc ATTRIBUTE_UNUSED)
{
  unsigned long x;
  int shift;

  x = cgen_get_insn_value (cd, bufp, word_length);

  if (CGEN_INSN_LSB0_P)
    shift = (start + 1) - length;
  else
    shift = (word_length - (start + length));
  return x >> shift;
}

#endif /* ! CGEN_INT_INSN_P */

/* Default extraction routine.

   INSN_VALUE is the first base_insn_bitsize bits of the insn in host order,
   or sometimes less for cases like the m32r where the base insn size is 32
   but some insns are 16 bits.
   ATTRS is a mask of the boolean attributes.  We only need `SIGNED',
   but for generality we take a bitmask of all of them.
   WORD_OFFSET is the offset in bits from the start of the insn of the value.
   WORD_LENGTH is the length of the word in bits in which the value resides.
   START is the starting bit number in the word, architecture origin.
   LENGTH is the length of VALUE in bits.
   TOTAL_LENGTH is the total length of the insn in bits.

   Returns 1 for success, 0 for failure.  */

/* ??? The return code isn't properly used.  wip.  */

/* ??? This doesn't handle bfd_vma's.  Create another function when
   necessary.  */

static int
extract_normal (CGEN_CPU_DESC cd,
#if ! CGEN_INT_INSN_P
		CGEN_EXTRACT_INFO *ex_info,
#else
		CGEN_EXTRACT_INFO *ex_info ATTRIBUTE_UNUSED,
#endif
		CGEN_INSN_INT insn_value,
		unsigned int attrs,
		unsigned int word_offset,
		unsigned int start,
		unsigned int length,
		unsigned int word_length,
		unsigned int total_length,
#if ! CGEN_INT_INSN_P
		bfd_vma pc,
#else
		bfd_vma pc ATTRIBUTE_UNUSED,
#endif
		long *valuep)
{
  long value, mask;

  /* If LENGTH is zero, this operand doesn't contribute to the value
     so give it a standard value of zero.  */
  if (length == 0)
    {
      *valuep = 0;
      return 1;
    }

  if (word_length > 8 * sizeof (CGEN_INSN_INT))
    abort ();

  /* For architectures with insns smaller than the insn-base-bitsize,
     word_length may be too big.  */
  if (cd->min_insn_bitsize < cd->base_insn_bitsize)
    {
      if (word_offset + word_length > total_length)
	word_length = total_length - word_offset;
    }

  /* Does the value reside in INSN_VALUE, and at the right alignment?  */

  if (CGEN_INT_INSN_P || (word_offset == 0 && word_length == total_length))
    {
      if (CGEN_INSN_LSB0_P)
	value = insn_value >> ((word_offset + start + 1) - length);
      else
	value = insn_value >> (total_length - ( word_offset + start + length));
    }

#if ! CGEN_INT_INSN_P

  else
    {
      unsigned char *bufp = ex_info->insn_bytes + word_offset / 8;

      if (word_length > 8 * sizeof (CGEN_INSN_INT))
	abort ();

      if (fill_cache (cd, ex_info, word_offset / 8, word_length / 8, pc) == 0)
	return 0;

      value = extract_1 (cd, ex_info, start, length, word_length, bufp, pc);
    }

#endif /* ! CGEN_INT_INSN_P */

  /* Written this way to avoid undefined behaviour.  */
  mask = (((1L << (length - 1)) - 1) << 1) | 1;

  value &= mask;
  /* sign extend? */
  if (CGEN_BOOL_ATTR (attrs, CGEN_IFLD_SIGNED)
      && (value & (1L << (length - 1))))
    value |= ~mask;

  *valuep = value;

  return 1;
}

/* Default insn extractor.

   INSN_VALUE is the first base_insn_bitsize bits, translated to host order.
   The extracted fields are stored in FIELDS.
   EX_INFO is used to handle reading variable length insns.
   Return the length of the insn in bits, or 0 if no match,
   or -1 if an error occurs fetching data (memory_error_func will have
   been called).  */

static int
extract_insn_normal (CGEN_CPU_DESC cd,
		     const CGEN_INSN *insn,
		     CGEN_EXTRACT_INFO *ex_info,
		     CGEN_INSN_INT insn_value,
		     CGEN_FIELDS *fields,
		     bfd_vma pc)
{
  const CGEN_SYNTAX *syntax = CGEN_INSN_SYNTAX (insn);
  const CGEN_SYNTAX_CHAR_TYPE *syn;

  CGEN_FIELDS_BITSIZE (fields) = CGEN_INSN_BITSIZE (insn);

  CGEN_INIT_EXTRACT (cd);

  for (syn = CGEN_SYNTAX_STRING (syntax); *syn; ++syn)
    {
      int length;

      if (CGEN_SYNTAX_CHAR_P (*syn))
	continue;

      length = (* cd->extract_operand) (cd, CGEN_SYNTAX_FIELD (*syn),
					ex_info, insn_value, fields, pc);
      if (length <= 0)
	return length;
    }

  /* We recognized and successfully extracted this insn.  */
  return CGEN_INSN_BITSIZE (insn);
}

/* Machine generated code added here.  */

const char * riscv_cgen_insert_operand
  (CGEN_CPU_DESC, int, CGEN_FIELDS *, CGEN_INSN_BYTES_PTR, bfd_vma);

/* Main entry point for operand insertion.

   This function is basically just a big switch statement.  Earlier versions
   used tables to look up the function to use, but
   - if the table contains both assembler and disassembler functions then
     the disassembler contains much of the assembler and vice-versa,
   - there's a lot of inlining possibilities as things grow,
   - using a switch statement avoids the function call overhead.

   This function could be moved into `parse_insn_normal', but keeping it
   separate makes clear the interface between `parse_insn_normal' and each of
   the handlers.  It's also needed by GAS to insert operands that couldn't be
   resolved during parsing.  */

const char *
riscv_cgen_insert_operand (CGEN_CPU_DESC cd,
			     int opindex,
			     CGEN_FIELDS * fields,
			     CGEN_INSN_BYTES_PTR buffer,
			     bfd_vma pc ATTRIBUTE_UNUSED)
{
  const char * errmsg = NULL;
  unsigned int total_length = CGEN_FIELDS_BITSIZE (fields);

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      {
        fields->f_imm13_311_71_306_114_0 = ((DI) (fields->f_imm13_311_71_306_114_0) >> (1));
{
  FLD (f_imm1_311) = ((DI) (FLD (f_imm13_311_71_306_114_0)) >> (11));
  FLD (f_uimm1_71) = ((((DI) (FLD (f_imm13_311_71_306_114_0)) >> (10))) & (1));
  FLD (f_uimm6_306) = ((((DI) (FLD (f_imm13_311_71_306_114_0)) >> (4))) & (63));
  FLD (f_uimm4_114) = ((FLD (f_imm13_311_71_306_114_0)) & (15));
}
        errmsg = insert_normal (cd, fields->f_imm1_311, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_71, 0, 0, 7, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm6_306, 0, 0, 30, 6, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm4_114, 0, 0, 11, 4, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_C_REG117 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG117_0 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG42 :
      errmsg = insert_normal (cd, fields->f_uimm3_43, 0, 0, 4, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG62 :
      errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_REG97 :
      errmsg = insert_normal (cd, fields->f_uimm3_93, 0, 0, 9, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      errmsg = insert_normal (cd, fields->f_uimm3_93, 0, 0, 9, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      errmsg = insert_normal (cd, fields->f_uimm3_93, 0, 0, 9, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_CBRANCH9 :
      {
        fields->f_imm9_121_62_21_112_42_0 = ((DI) (fields->f_imm9_121_62_21_112_42_0) >> (1));
{
  FLD (f_imm1_121) = ((DI) (FLD (f_imm9_121_62_21_112_42_0)) >> (7));
  FLD (f_uimm2_62) = ((((UDI) (FLD (f_imm9_121_62_21_112_42_0)) >> (5))) & (3));
  FLD (f_uimm1_21) = ((((UDI) (FLD (f_imm9_121_62_21_112_42_0)) >> (4))) & (1));
  FLD (f_uimm2_112) = ((((UDI) (FLD (f_imm9_121_62_21_112_42_0)) >> (2))) & (3));
  FLD (f_uimm2_42) = ((FLD (f_imm9_121_62_21_112_42_0)) & (3));
}
        errmsg = insert_normal (cd, fields->f_imm1_121, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_62, 0, 0, 6, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_21, 0, 0, 2, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_112, 0, 0, 11, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_42, 0, 0, 4, 2, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_CFUNCT3 :
      errmsg = insert_normal (cd, fields->f_c_funct3, 0, 0, 15, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_CFUNCT4 :
      errmsg = insert_normal (cd, fields->f_c_funct4, 0, 0, 15, 4, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_CJMP12 :
      {
        fields->f_imm12_121_81_102_61_71_21_111_53_0 = ((DI) (fields->f_imm12_121_81_102_61_71_21_111_53_0) >> (1));
{
  FLD (f_imm1_121) = ((((DI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (10))) & (1));
  FLD (f_uimm1_81) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (9))) & (1));
  FLD (f_uimm2_102) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (7))) & (3));
  FLD (f_uimm1_61) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (6))) & (1));
  FLD (f_uimm1_71) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (5))) & (1));
  FLD (f_uimm1_21) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (4))) & (1));
  FLD (f_uimm1_111) = ((((UDI) (FLD (f_imm12_121_81_102_61_71_21_111_53_0)) >> (3))) & (1));
  FLD (f_uimm3_53) = ((FLD (f_imm12_121_81_102_61_71_21_111_53_0)) & (7));
}
        errmsg = insert_normal (cd, fields->f_imm1_121, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_81, 0, 0, 8, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_102, 0, 0, 10, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_61, 0, 0, 6, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_71, 0, 0, 7, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_21, 0, 0, 2, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_111, 0, 0, 11, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm3_53, 0, 0, 5, 3, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_COPCODE2 :
      errmsg = insert_normal (cd, fields->f_c_opcode, 0, 0, 1, 2, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_CSR :
      errmsg = insert_normal (cd, fields->f_csr, 0, 0, 31, 12, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FC_RS2 :
      errmsg = insert_normal (cd, fields->f_uimm3_43, 0, 0, 4, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FC_RS3 :
      errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_DUMMY :
      errmsg = insert_normal (cd, fields->f_dummy, 0, 0, 0, 0, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_RD :
      errmsg = insert_normal (cd, fields->f_rd, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_RM :
      errmsg = insert_normal (cd, fields->f_funct3, 0, 0, 14, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_RS1 :
      errmsg = insert_normal (cd, fields->f_rs1, 0, 0, 19, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_RS2 :
      errmsg = insert_normal (cd, fields->f_rs2, 0, 0, 24, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_RS3 :
      errmsg = insert_normal (cd, fields->f_rs3, 0, 0, 31, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      errmsg = insert_normal (cd, fields->f_uimm5_195, 0, 0, 19, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FUNCT3 :
      errmsg = insert_normal (cd, fields->f_funct3, 0, 0, 14, 3, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_FUNCT7 :
      errmsg = insert_normal (cd, fields->f_funct7, 0, 0, 31, 7, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_IMM_LO12 :
      errmsg = insert_normal (cd, fields->f_imm12_3112, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 12, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      errmsg = insert_normal (cd, fields->f_imm12_3112, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 12, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_IMM_ZERO :
      errmsg = insert_normal (cd, fields->f_dummy, 0, 0, 0, 0, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      {
{
  FLD (f_imm1_121) = ((DI) (FLD (f_imm6_121_65)) >> (5));
  FLD (f_uimm5_65) = ((FLD (f_imm6_121_65)) & (31));
}
        errmsg = insert_normal (cd, fields->f_imm1_121, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_JMP21 :
      {
        fields->f_imm21_311_198_201_3010_0 = ((DI) (fields->f_imm21_311_198_201_3010_0) >> (1));
{
  FLD (f_imm1_311) = ((DI) (FLD (f_imm21_311_198_201_3010_0)) >> (19));
  FLD (f_uimm8_198) = ((((DI) (FLD (f_imm21_311_198_201_3010_0)) >> (11))) & (255));
  FLD (f_uimm1_201) = ((((DI) (FLD (f_imm21_311_198_201_3010_0)) >> (10))) & (1));
  FLD (f_uimm10_3010) = ((FLD (f_imm21_311_198_201_3010_0)) & (1023));
}
        errmsg = insert_normal (cd, fields->f_imm1_311, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm8_198, 0, 0, 19, 8, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_201, 0, 0, 20, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm10_3010, 0, 0, 30, 10, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      {
        fields->f_imm10_121_42_51_21_61_0000 = ((DI) (fields->f_imm10_121_42_51_21_61_0000) >> (4));
{
  FLD (f_imm1_121) = ((DI) (FLD (f_imm10_121_42_51_21_61_0000)) >> (5));
  FLD (f_uimm2_42) = ((((UDI) (FLD (f_imm10_121_42_51_21_61_0000)) >> (3))) & (3));
  FLD (f_uimm1_51) = ((((UDI) (FLD (f_imm10_121_42_51_21_61_0000)) >> (2))) & (1));
  FLD (f_uimm1_21) = ((((UDI) (FLD (f_imm10_121_42_51_21_61_0000)) >> (1))) & (1));
  FLD (f_uimm1_61) = ((FLD (f_imm10_121_42_51_21_61_0000)) & (1));
}
        errmsg = insert_normal (cd, fields->f_imm1_121, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_42, 0, 0, 4, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_51, 0, 0, 5, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_21, 0, 0, 2, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_61, 0, 0, 6, 1, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      {
{
  FLD (f_imm1_121) = ((DI) (FLD (f_imm6_121_65)) >> (5));
  FLD (f_uimm5_65) = ((FLD (f_imm6_121_65)) & (31));
}
        errmsg = insert_normal (cd, fields->f_imm1_121, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      {
        fields->f_uimm10_104_122_51_61_00 = ((UDI) (fields->f_uimm10_104_122_51_61_00) >> (2));
{
  FLD (f_uimm4_104) = ((((UDI) (FLD (f_uimm10_104_122_51_61_00)) >> (4))) & (15));
  FLD (f_uimm2_122) = ((((UDI) (FLD (f_uimm10_104_122_51_61_00)) >> (2))) & (3));
  FLD (f_uimm1_51) = ((((UDI) (FLD (f_uimm10_104_122_51_61_00)) >> (1))) & (1));
  FLD (f_uimm1_61) = ((FLD (f_uimm10_104_122_51_61_00)) & (1));
}
        errmsg = insert_normal (cd, fields->f_uimm4_104, 0, 0, 10, 4, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_122, 0, 0, 12, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_51, 0, 0, 5, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_61, 0, 0, 6, 1, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      {
        fields->f_uimm18_121_65_000000000000 = ((UDI) (fields->f_uimm18_121_65_000000000000) >> (12));
{
  FLD (f_uimm1_121) = ((UDI) (FLD (f_uimm18_121_65_000000000000)) >> (5));
  FLD (f_uimm5_65) = ((FLD (f_uimm18_121_65_000000000000)) & (31));
}
        errmsg = insert_normal (cd, fields->f_uimm1_121, 0, 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      {
{
  FLD (f_uimm1_121) = ((((UDI) (FLD (f_uimm6_121_65)) >> (5))) & (1));
  FLD (f_uimm5_65) = ((FLD (f_uimm6_121_65)) & (31));
}
        errmsg = insert_normal (cd, fields->f_uimm1_121, 0, 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm5_65, 0, 0, 6, 5, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_OPCODE7 :
      errmsg = insert_normal (cd, fields->f_opcode, 0, 0, 6, 7, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_PRED :
      errmsg = insert_normal (cd, fields->f_pred, 0, 0, 23, 4, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_RD :
      errmsg = insert_normal (cd, fields->f_rd, 0, 0, 11, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_RS1 :
      errmsg = insert_normal (cd, fields->f_rs1, 0, 0, 19, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_RS2 :
      errmsg = insert_normal (cd, fields->f_rs2, 0, 0, 24, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_SP_REG :
      errmsg = insert_normal (cd, fields->f_dummy, 0, 0, 0, 0, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_STORE12 :
      {
{
  FLD (f_imm7_317) = ((DI) (FLD (f_imm12_317_115)) >> (5));
  FLD (f_uimm5_115) = ((FLD (f_imm12_317_115)) & (31));
}
        errmsg = insert_normal (cd, fields->f_imm7_317, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 7, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm5_115, 0, 0, 11, 5, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_SUCC :
      errmsg = insert_normal (cd, fields->f_succ, 0, 0, 27, 4, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_TPREL_ADD :
      errmsg = insert_normal (cd, fields->f_dummy, 0, 0, 0, 0, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      {
        long value = fields->f_uimm32_3120_000000000000;
        value = ((UDI) (value) >> (12));
        errmsg = insert_normal (cd, value, 0, 0, 31, 20, 32, total_length, buffer);
      }
      break;
    case RISCV_OPERAND_UIMM5 :
      errmsg = insert_normal (cd, fields->f_uimm5_195, 0, 0, 19, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_UIMM5_245 :
      errmsg = insert_normal (cd, fields->f_uimm5_245, 0, 0, 24, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      errmsg = insert_normal (cd, fields->f_uimm5_195, 0, 0, 19, 5, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_UIMM6_256 :
      errmsg = insert_normal (cd, fields->f_uimm6_256, 0, 0, 25, 6, 32, total_length, buffer);
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      {
        fields->f_uimm7_51_123_61_00 = ((UDI) (fields->f_uimm7_51_123_61_00) >> (2));
{
  FLD (f_uimm1_51) = ((((UDI) (FLD (f_uimm7_51_123_61_00)) >> (4))) & (1));
  FLD (f_uimm3_123) = ((((UDI) (FLD (f_uimm7_51_123_61_00)) >> (1))) & (7));
  FLD (f_uimm1_61) = ((FLD (f_uimm7_51_123_61_00)) & (1));
}
        errmsg = insert_normal (cd, fields->f_uimm1_51, 0, 0, 5, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm3_123, 0, 0, 12, 3, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_61, 0, 0, 6, 1, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      {
        fields->f_uimm8_32_121_63_00 = ((UDI) (fields->f_uimm8_32_121_63_00) >> (2));
{
  FLD (f_uimm2_32) = ((((UDI) (FLD (f_uimm8_32_121_63_00)) >> (4))) & (3));
  FLD (f_uimm1_121) = ((((UDI) (FLD (f_uimm8_32_121_63_00)) >> (3))) & (1));
  FLD (f_uimm3_63) = ((FLD (f_uimm8_32_121_63_00)) & (7));
}
        errmsg = insert_normal (cd, fields->f_uimm2_32, 0, 0, 3, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_121, 0, 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm3_63, 0, 0, 6, 3, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      {
        fields->f_uimm8_62_123_000 = ((UDI) (fields->f_uimm8_62_123_000) >> (3));
{
  FLD (f_uimm2_62) = ((((UDI) (FLD (f_uimm8_62_123_000)) >> (3))) & (3));
  FLD (f_uimm3_123) = ((FLD (f_uimm8_62_123_000)) & (7));
}
        errmsg = insert_normal (cd, fields->f_uimm2_62, 0, 0, 6, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm3_123, 0, 0, 12, 3, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      {
        fields->f_uimm8_82_124_00 = ((UDI) (fields->f_uimm8_82_124_00) >> (2));
{
  FLD (f_uimm2_82) = ((((UDI) (FLD (f_uimm8_82_124_00)) >> (4))) & (3));
  FLD (f_uimm4_124) = ((FLD (f_uimm8_82_124_00)) & (15));
}
        errmsg = insert_normal (cd, fields->f_uimm2_82, 0, 0, 8, 2, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm4_124, 0, 0, 12, 4, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      {
        fields->f_uimm9_43_121_62_000 = ((UDI) (fields->f_uimm9_43_121_62_000) >> (3));
{
  FLD (f_uimm3_43) = ((((UDI) (FLD (f_uimm9_43_121_62_000)) >> (3))) & (7));
  FLD (f_uimm1_121) = ((((UDI) (FLD (f_uimm9_43_121_62_000)) >> (2))) & (1));
  FLD (f_uimm2_62) = ((FLD (f_uimm9_43_121_62_000)) & (3));
}
        errmsg = insert_normal (cd, fields->f_uimm3_43, 0, 0, 4, 3, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm1_121, 0, 0, 12, 1, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm2_62, 0, 0, 6, 2, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      {
        fields->f_uimm9_93_123_000 = ((UDI) (fields->f_uimm9_93_123_000) >> (3));
{
  FLD (f_uimm3_93) = ((((UDI) (FLD (f_uimm9_93_123_000)) >> (3))) & (7));
  FLD (f_uimm3_123) = ((FLD (f_uimm9_93_123_000)) & (7));
}
        errmsg = insert_normal (cd, fields->f_uimm3_93, 0, 0, 9, 3, 32, total_length, buffer);
        if (errmsg)
          break;
        errmsg = insert_normal (cd, fields->f_uimm3_123, 0, 0, 12, 3, 32, total_length, buffer);
        if (errmsg)
          break;
      }
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while building insn.\n"),
	       opindex);
      abort ();
  }

  return errmsg;
}

int riscv_cgen_extract_operand
  (CGEN_CPU_DESC, int, CGEN_EXTRACT_INFO *, CGEN_INSN_INT, CGEN_FIELDS *, bfd_vma);

/* Main entry point for operand extraction.
   The result is <= 0 for error, >0 for success.
   ??? Actual values aren't well defined right now.

   This function is basically just a big switch statement.  Earlier versions
   used tables to look up the function to use, but
   - if the table contains both assembler and disassembler functions then
     the disassembler contains much of the assembler and vice-versa,
   - there's a lot of inlining possibilities as things grow,
   - using a switch statement avoids the function call overhead.

   This function could be moved into `print_insn_normal', but keeping it
   separate makes clear the interface between `print_insn_normal' and each of
   the handlers.  */

int
riscv_cgen_extract_operand (CGEN_CPU_DESC cd,
			     int opindex,
			     CGEN_EXTRACT_INFO *ex_info,
			     CGEN_INSN_INT insn_value,
			     CGEN_FIELDS * fields,
			     bfd_vma pc)
{
  /* Assume success (for those operands that are nops).  */
  int length = 1;
  unsigned int total_length = CGEN_FIELDS_BITSIZE (fields);

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 1, 32, total_length, pc, & fields->f_imm1_311);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 7, 1, 32, total_length, pc, & fields->f_uimm1_71);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 30, 6, 32, total_length, pc, & fields->f_uimm6_306);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 4, 32, total_length, pc, & fields->f_uimm4_114);
        if (length <= 0) break;
  FLD (f_imm13_311_71_306_114_0) = ((((((FLD (f_imm1_311)) << (11))) | (((FLD (f_uimm1_71)) << (10))))) | (((((FLD (f_uimm6_306)) << (4))) | (FLD (f_uimm4_114)))));
        fields->f_imm13_311_71_306_114_0 = ((fields->f_imm13_311_71_306_114_0) << (1));
      }
      break;
    case RISCV_OPERAND_C_REG117 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG117_0 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_REG42 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 4, 3, 32, total_length, pc, & fields->f_uimm3_43);
      break;
    case RISCV_OPERAND_C_REG62 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_C_REG97 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 9, 3, 32, total_length, pc, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 9, 3, 32, total_length, pc, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 9, 3, 32, total_length, pc, & fields->f_uimm3_93);
      break;
    case RISCV_OPERAND_CBRANCH9 :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, pc, & fields->f_imm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 2, 32, total_length, pc, & fields->f_uimm2_62);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 2, 1, 32, total_length, pc, & fields->f_uimm1_21);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 2, 32, total_length, pc, & fields->f_uimm2_112);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 4, 2, 32, total_length, pc, & fields->f_uimm2_42);
        if (length <= 0) break;
{
  FLD (f_imm9_121_62_21_112_42_0) = ((((((((FLD (f_imm1_121)) << (7))) | (((FLD (f_uimm2_62)) << (5))))) | (((((FLD (f_uimm1_21)) << (4))) | (((FLD (f_uimm2_112)) << (2))))))) | (FLD (f_uimm2_42)));
}
        fields->f_imm9_121_62_21_112_42_0 = ((fields->f_imm9_121_62_21_112_42_0) << (1));
      }
      break;
    case RISCV_OPERAND_CFUNCT3 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 15, 3, 32, total_length, pc, & fields->f_c_funct3);
      break;
    case RISCV_OPERAND_CFUNCT4 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 15, 4, 32, total_length, pc, & fields->f_c_funct4);
      break;
    case RISCV_OPERAND_CJMP12 :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, pc, & fields->f_imm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 8, 1, 32, total_length, pc, & fields->f_uimm1_81);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 10, 2, 32, total_length, pc, & fields->f_uimm2_102);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 1, 32, total_length, pc, & fields->f_uimm1_61);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 7, 1, 32, total_length, pc, & fields->f_uimm1_71);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 2, 1, 32, total_length, pc, & fields->f_uimm1_21);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 1, 32, total_length, pc, & fields->f_uimm1_111);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 5, 3, 32, total_length, pc, & fields->f_uimm3_53);
        if (length <= 0) break;
{
  FLD (f_imm12_121_81_102_61_71_21_111_53_0) = ((((((((FLD (f_imm1_121)) << (10))) | (((FLD (f_uimm1_81)) << (9))))) | (((((FLD (f_uimm2_102)) << (7))) | (((FLD (f_uimm1_61)) << (6))))))) | (((((((FLD (f_uimm1_71)) << (5))) | (((FLD (f_uimm1_21)) << (4))))) | (((((FLD (f_uimm1_111)) << (3))) | (FLD (f_uimm3_53)))))));
}
        fields->f_imm12_121_81_102_61_71_21_111_53_0 = ((fields->f_imm12_121_81_102_61_71_21_111_53_0) << (1));
      }
      break;
    case RISCV_OPERAND_COPCODE2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 1, 2, 32, total_length, pc, & fields->f_c_opcode);
      break;
    case RISCV_OPERAND_CSR :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 31, 12, 32, total_length, pc, & fields->f_csr);
      break;
    case RISCV_OPERAND_FC_RS2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 4, 3, 32, total_length, pc, & fields->f_uimm3_43);
      break;
    case RISCV_OPERAND_FC_RS3 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
      break;
    case RISCV_OPERAND_FL_DUMMY :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 0, 0, 32, total_length, pc, & fields->f_dummy);
      break;
    case RISCV_OPERAND_FL_RD :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_rd);
      break;
    case RISCV_OPERAND_FL_RM :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 14, 3, 32, total_length, pc, & fields->f_funct3);
      break;
    case RISCV_OPERAND_FL_RS1 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 5, 32, total_length, pc, & fields->f_rs1);
      break;
    case RISCV_OPERAND_FL_RS2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 24, 5, 32, total_length, pc, & fields->f_rs2);
      break;
    case RISCV_OPERAND_FL_RS3 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 31, 5, 32, total_length, pc, & fields->f_rs3);
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 5, 32, total_length, pc, & fields->f_uimm5_195);
      break;
    case RISCV_OPERAND_FUNCT3 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 14, 3, 32, total_length, pc, & fields->f_funct3);
      break;
    case RISCV_OPERAND_FUNCT7 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 31, 7, 32, total_length, pc, & fields->f_funct7);
      break;
    case RISCV_OPERAND_IMM_LO12 :
      length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 12, 32, total_length, pc, & fields->f_imm12_3112);
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 12, 32, total_length, pc, & fields->f_imm12_3112);
      break;
    case RISCV_OPERAND_IMM_ZERO :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 0, 0, 32, total_length, pc, & fields->f_dummy);
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, pc, & fields->f_imm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
        if (length <= 0) break;
{
  FLD (f_imm6_121_65) = ((((FLD (f_imm1_121)) << (5))) | (FLD (f_uimm5_65)));
}
      }
      break;
    case RISCV_OPERAND_JMP21 :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 1, 32, total_length, pc, & fields->f_imm1_311);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 8, 32, total_length, pc, & fields->f_uimm8_198);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 20, 1, 32, total_length, pc, & fields->f_uimm1_201);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 30, 10, 32, total_length, pc, & fields->f_uimm10_3010);
        if (length <= 0) break;
  FLD (f_imm21_311_198_201_3010_0) = ((((((FLD (f_imm1_311)) << (19))) | (((FLD (f_uimm8_198)) << (11))))) | (((((FLD (f_uimm1_201)) << (10))) | (FLD (f_uimm10_3010)))));
        fields->f_imm21_311_198_201_3010_0 = ((fields->f_imm21_311_198_201_3010_0) << (1));
      }
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, pc, & fields->f_imm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 4, 2, 32, total_length, pc, & fields->f_uimm2_42);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 5, 1, 32, total_length, pc, & fields->f_uimm1_51);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 2, 1, 32, total_length, pc, & fields->f_uimm1_21);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 1, 32, total_length, pc, & fields->f_uimm1_61);
        if (length <= 0) break;
{
  FLD (f_imm10_121_42_51_21_61_0000) = ((((((((FLD (f_imm1_121)) << (5))) | (((FLD (f_uimm2_42)) << (3))))) | (((((FLD (f_uimm1_51)) << (2))) | (((FLD (f_uimm1_21)) << (1))))))) | (FLD (f_uimm1_61)));
}
        fields->f_imm10_121_42_51_21_61_0000 = ((fields->f_imm10_121_42_51_21_61_0000) << (4));
      }
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 12, 1, 32, total_length, pc, & fields->f_imm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
        if (length <= 0) break;
{
  FLD (f_imm6_121_65) = ((((FLD (f_imm1_121)) << (5))) | (FLD (f_uimm5_65)));
}
      }
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 10, 4, 32, total_length, pc, & fields->f_uimm4_104);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 2, 32, total_length, pc, & fields->f_uimm2_122);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 5, 1, 32, total_length, pc, & fields->f_uimm1_51);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 1, 32, total_length, pc, & fields->f_uimm1_61);
        if (length <= 0) break;
{
  FLD (f_uimm10_104_122_51_61_00) = ((((((FLD (f_uimm4_104)) << (4))) | (((FLD (f_uimm2_122)) << (2))))) | (((((FLD (f_uimm1_51)) << (1))) | (FLD (f_uimm1_61)))));
}
        fields->f_uimm10_104_122_51_61_00 = ((fields->f_uimm10_104_122_51_61_00) << (2));
      }
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 1, 32, total_length, pc, & fields->f_uimm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
        if (length <= 0) break;
{
  FLD (f_uimm18_121_65_000000000000) = ((((FLD (f_uimm1_121)) << (5))) | (FLD (f_uimm5_65)));
}
        fields->f_uimm18_121_65_000000000000 = ((fields->f_uimm18_121_65_000000000000) << (12));
      }
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 1, 32, total_length, pc, & fields->f_uimm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 5, 32, total_length, pc, & fields->f_uimm5_65);
        if (length <= 0) break;
{
  FLD (f_uimm6_121_65) = ((((FLD (f_uimm1_121)) << (5))) | (FLD (f_uimm5_65)));
}
      }
      break;
    case RISCV_OPERAND_OPCODE7 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 7, 32, total_length, pc, & fields->f_opcode);
      break;
    case RISCV_OPERAND_PRED :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 23, 4, 32, total_length, pc, & fields->f_pred);
      break;
    case RISCV_OPERAND_RD :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_rd);
      break;
    case RISCV_OPERAND_RS1 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 5, 32, total_length, pc, & fields->f_rs1);
      break;
    case RISCV_OPERAND_RS2 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 24, 5, 32, total_length, pc, & fields->f_rs2);
      break;
    case RISCV_OPERAND_SP_REG :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 0, 0, 32, total_length, pc, & fields->f_dummy);
      break;
    case RISCV_OPERAND_STORE12 :
      {
        length = extract_normal (cd, ex_info, insn_value, 0|(1<<CGEN_IFLD_SIGNED), 0, 31, 7, 32, total_length, pc, & fields->f_imm7_317);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 11, 5, 32, total_length, pc, & fields->f_uimm5_115);
        if (length <= 0) break;
{
  FLD (f_imm12_317_115) = ((((FLD (f_imm7_317)) << (5))) | (FLD (f_uimm5_115)));
}
      }
      break;
    case RISCV_OPERAND_SUCC :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 27, 4, 32, total_length, pc, & fields->f_succ);
      break;
    case RISCV_OPERAND_TPREL_ADD :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 0, 0, 32, total_length, pc, & fields->f_dummy);
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      {
        long value;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 31, 20, 32, total_length, pc, & value);
        value = ((value) << (12));
        fields->f_uimm32_3120_000000000000 = value;
      }
      break;
    case RISCV_OPERAND_UIMM5 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 5, 32, total_length, pc, & fields->f_uimm5_195);
      break;
    case RISCV_OPERAND_UIMM5_245 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 24, 5, 32, total_length, pc, & fields->f_uimm5_245);
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 19, 5, 32, total_length, pc, & fields->f_uimm5_195);
      break;
    case RISCV_OPERAND_UIMM6_256 :
      length = extract_normal (cd, ex_info, insn_value, 0, 0, 25, 6, 32, total_length, pc, & fields->f_uimm6_256);
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 5, 1, 32, total_length, pc, & fields->f_uimm1_51);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 3, 32, total_length, pc, & fields->f_uimm3_123);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 1, 32, total_length, pc, & fields->f_uimm1_61);
        if (length <= 0) break;
{
  FLD (f_uimm7_51_123_61_00) = ((((((FLD (f_uimm1_51)) << (4))) | (((FLD (f_uimm3_123)) << (1))))) | (FLD (f_uimm1_61)));
}
        fields->f_uimm7_51_123_61_00 = ((fields->f_uimm7_51_123_61_00) << (2));
      }
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 3, 2, 32, total_length, pc, & fields->f_uimm2_32);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 1, 32, total_length, pc, & fields->f_uimm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 3, 32, total_length, pc, & fields->f_uimm3_63);
        if (length <= 0) break;
{
  FLD (f_uimm8_32_121_63_00) = ((((((FLD (f_uimm2_32)) << (4))) | (((FLD (f_uimm1_121)) << (3))))) | (FLD (f_uimm3_63)));
}
        fields->f_uimm8_32_121_63_00 = ((fields->f_uimm8_32_121_63_00) << (2));
      }
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 2, 32, total_length, pc, & fields->f_uimm2_62);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 3, 32, total_length, pc, & fields->f_uimm3_123);
        if (length <= 0) break;
{
  FLD (f_uimm8_62_123_000) = ((((FLD (f_uimm2_62)) << (3))) | (FLD (f_uimm3_123)));
}
        fields->f_uimm8_62_123_000 = ((fields->f_uimm8_62_123_000) << (3));
      }
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 8, 2, 32, total_length, pc, & fields->f_uimm2_82);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 4, 32, total_length, pc, & fields->f_uimm4_124);
        if (length <= 0) break;
{
  FLD (f_uimm8_82_124_00) = ((((FLD (f_uimm2_82)) << (4))) | (FLD (f_uimm4_124)));
}
        fields->f_uimm8_82_124_00 = ((fields->f_uimm8_82_124_00) << (2));
      }
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 4, 3, 32, total_length, pc, & fields->f_uimm3_43);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 1, 32, total_length, pc, & fields->f_uimm1_121);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 6, 2, 32, total_length, pc, & fields->f_uimm2_62);
        if (length <= 0) break;
{
  FLD (f_uimm9_43_121_62_000) = ((((((FLD (f_uimm3_43)) << (3))) | (((FLD (f_uimm1_121)) << (2))))) | (FLD (f_uimm2_62)));
}
        fields->f_uimm9_43_121_62_000 = ((fields->f_uimm9_43_121_62_000) << (3));
      }
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      {
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 9, 3, 32, total_length, pc, & fields->f_uimm3_93);
        if (length <= 0) break;
        length = extract_normal (cd, ex_info, insn_value, 0, 0, 12, 3, 32, total_length, pc, & fields->f_uimm3_123);
        if (length <= 0) break;
{
  FLD (f_uimm9_93_123_000) = ((((FLD (f_uimm3_93)) << (3))) | (FLD (f_uimm3_123)));
}
        fields->f_uimm9_93_123_000 = ((fields->f_uimm9_93_123_000) << (3));
      }
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while decoding insn.\n"),
	       opindex);
      abort ();
    }

  return length;
}

cgen_insert_fn * const riscv_cgen_insert_handlers[] =
{
  insert_insn_normal,
};

cgen_extract_fn * const riscv_cgen_extract_handlers[] =
{
  extract_insn_normal,
};

int riscv_cgen_get_int_operand     (CGEN_CPU_DESC, int, const CGEN_FIELDS *);
bfd_vma riscv_cgen_get_vma_operand (CGEN_CPU_DESC, int, const CGEN_FIELDS *);

/* Getting values from cgen_fields is handled by a collection of functions.
   They are distinguished by the type of the VALUE argument they return.
   TODO: floating point, inlining support, remove cases where result type
   not appropriate.  */

int
riscv_cgen_get_int_operand (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
			     int opindex,
			     const CGEN_FIELDS * fields)
{
  int value;

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      value = fields->f_imm13_311_71_306_114_0;
      break;
    case RISCV_OPERAND_C_REG117 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG42 :
      value = fields->f_uimm3_43;
      break;
    case RISCV_OPERAND_C_REG62 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_C_REG97 :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_CBRANCH9 :
      value = fields->f_imm9_121_62_21_112_42_0;
      break;
    case RISCV_OPERAND_CFUNCT3 :
      value = fields->f_c_funct3;
      break;
    case RISCV_OPERAND_CFUNCT4 :
      value = fields->f_c_funct4;
      break;
    case RISCV_OPERAND_CJMP12 :
      value = fields->f_imm12_121_81_102_61_71_21_111_53_0;
      break;
    case RISCV_OPERAND_COPCODE2 :
      value = fields->f_c_opcode;
      break;
    case RISCV_OPERAND_CSR :
      value = fields->f_csr;
      break;
    case RISCV_OPERAND_FC_RS2 :
      value = fields->f_uimm3_43;
      break;
    case RISCV_OPERAND_FC_RS3 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_FL_DUMMY :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_FL_RD :
      value = fields->f_rd;
      break;
    case RISCV_OPERAND_FL_RM :
      value = fields->f_funct3;
      break;
    case RISCV_OPERAND_FL_RS1 :
      value = fields->f_rs1;
      break;
    case RISCV_OPERAND_FL_RS2 :
      value = fields->f_rs2;
      break;
    case RISCV_OPERAND_FL_RS3 :
      value = fields->f_rs3;
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_FUNCT3 :
      value = fields->f_funct3;
      break;
    case RISCV_OPERAND_FUNCT7 :
      value = fields->f_funct7;
      break;
    case RISCV_OPERAND_IMM_LO12 :
      value = fields->f_imm12_3112;
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      value = fields->f_imm12_3112;
      break;
    case RISCV_OPERAND_IMM_ZERO :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      value = fields->f_imm6_121_65;
      break;
    case RISCV_OPERAND_JMP21 :
      value = fields->f_imm21_311_198_201_3010_0;
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      value = fields->f_imm10_121_42_51_21_61_0000;
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      value = fields->f_imm6_121_65;
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      value = fields->f_uimm10_104_122_51_61_00;
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      value = fields->f_uimm18_121_65_000000000000;
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      value = fields->f_uimm6_121_65;
      break;
    case RISCV_OPERAND_OPCODE7 :
      value = fields->f_opcode;
      break;
    case RISCV_OPERAND_PRED :
      value = fields->f_pred;
      break;
    case RISCV_OPERAND_RD :
      value = fields->f_rd;
      break;
    case RISCV_OPERAND_RS1 :
      value = fields->f_rs1;
      break;
    case RISCV_OPERAND_RS2 :
      value = fields->f_rs2;
      break;
    case RISCV_OPERAND_SP_REG :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_STORE12 :
      value = fields->f_imm12_317_115;
      break;
    case RISCV_OPERAND_SUCC :
      value = fields->f_succ;
      break;
    case RISCV_OPERAND_TPREL_ADD :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      value = fields->f_uimm32_3120_000000000000;
      break;
    case RISCV_OPERAND_UIMM5 :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_UIMM5_245 :
      value = fields->f_uimm5_245;
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_UIMM6_256 :
      value = fields->f_uimm6_256;
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      value = fields->f_uimm7_51_123_61_00;
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      value = fields->f_uimm8_32_121_63_00;
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      value = fields->f_uimm8_62_123_000;
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      value = fields->f_uimm8_82_124_00;
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      value = fields->f_uimm9_43_121_62_000;
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      value = fields->f_uimm9_93_123_000;
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while getting int operand.\n"),
		       opindex);
      abort ();
  }

  return value;
}

bfd_vma
riscv_cgen_get_vma_operand (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
			     int opindex,
			     const CGEN_FIELDS * fields)
{
  bfd_vma value;

  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      value = fields->f_imm13_311_71_306_114_0;
      break;
    case RISCV_OPERAND_C_REG117 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_REG42 :
      value = fields->f_uimm3_43;
      break;
    case RISCV_OPERAND_C_REG62 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_C_REG97 :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      value = fields->f_uimm5_115;
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      value = fields->f_uimm3_93;
      break;
    case RISCV_OPERAND_CBRANCH9 :
      value = fields->f_imm9_121_62_21_112_42_0;
      break;
    case RISCV_OPERAND_CFUNCT3 :
      value = fields->f_c_funct3;
      break;
    case RISCV_OPERAND_CFUNCT4 :
      value = fields->f_c_funct4;
      break;
    case RISCV_OPERAND_CJMP12 :
      value = fields->f_imm12_121_81_102_61_71_21_111_53_0;
      break;
    case RISCV_OPERAND_COPCODE2 :
      value = fields->f_c_opcode;
      break;
    case RISCV_OPERAND_CSR :
      value = fields->f_csr;
      break;
    case RISCV_OPERAND_FC_RS2 :
      value = fields->f_uimm3_43;
      break;
    case RISCV_OPERAND_FC_RS3 :
      value = fields->f_uimm5_65;
      break;
    case RISCV_OPERAND_FL_DUMMY :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_FL_RD :
      value = fields->f_rd;
      break;
    case RISCV_OPERAND_FL_RM :
      value = fields->f_funct3;
      break;
    case RISCV_OPERAND_FL_RS1 :
      value = fields->f_rs1;
      break;
    case RISCV_OPERAND_FL_RS2 :
      value = fields->f_rs2;
      break;
    case RISCV_OPERAND_FL_RS3 :
      value = fields->f_rs3;
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_FUNCT3 :
      value = fields->f_funct3;
      break;
    case RISCV_OPERAND_FUNCT7 :
      value = fields->f_funct7;
      break;
    case RISCV_OPERAND_IMM_LO12 :
      value = fields->f_imm12_3112;
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      value = fields->f_imm12_3112;
      break;
    case RISCV_OPERAND_IMM_ZERO :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      value = fields->f_imm6_121_65;
      break;
    case RISCV_OPERAND_JMP21 :
      value = fields->f_imm21_311_198_201_3010_0;
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      value = fields->f_imm10_121_42_51_21_61_0000;
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      value = fields->f_imm6_121_65;
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      value = fields->f_uimm10_104_122_51_61_00;
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      value = fields->f_uimm18_121_65_000000000000;
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      value = fields->f_uimm6_121_65;
      break;
    case RISCV_OPERAND_OPCODE7 :
      value = fields->f_opcode;
      break;
    case RISCV_OPERAND_PRED :
      value = fields->f_pred;
      break;
    case RISCV_OPERAND_RD :
      value = fields->f_rd;
      break;
    case RISCV_OPERAND_RS1 :
      value = fields->f_rs1;
      break;
    case RISCV_OPERAND_RS2 :
      value = fields->f_rs2;
      break;
    case RISCV_OPERAND_SP_REG :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_STORE12 :
      value = fields->f_imm12_317_115;
      break;
    case RISCV_OPERAND_SUCC :
      value = fields->f_succ;
      break;
    case RISCV_OPERAND_TPREL_ADD :
      value = fields->f_dummy;
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      value = fields->f_uimm32_3120_000000000000;
      break;
    case RISCV_OPERAND_UIMM5 :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_UIMM5_245 :
      value = fields->f_uimm5_245;
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      value = fields->f_uimm5_195;
      break;
    case RISCV_OPERAND_UIMM6_256 :
      value = fields->f_uimm6_256;
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      value = fields->f_uimm7_51_123_61_00;
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      value = fields->f_uimm8_32_121_63_00;
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      value = fields->f_uimm8_62_123_000;
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      value = fields->f_uimm8_82_124_00;
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      value = fields->f_uimm9_43_121_62_000;
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      value = fields->f_uimm9_93_123_000;
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while getting vma operand.\n"),
		       opindex);
      abort ();
  }

  return value;
}

void riscv_cgen_set_int_operand  (CGEN_CPU_DESC, int, CGEN_FIELDS *, int);
void riscv_cgen_set_vma_operand  (CGEN_CPU_DESC, int, CGEN_FIELDS *, bfd_vma);

/* Stuffing values in cgen_fields is handled by a collection of functions.
   They are distinguished by the type of the VALUE argument they accept.
   TODO: floating point, inlining support, remove cases where argument type
   not appropriate.  */

void
riscv_cgen_set_int_operand (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
			     int opindex,
			     CGEN_FIELDS * fields,
			     int value)
{
  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      fields->f_imm13_311_71_306_114_0 = value;
      break;
    case RISCV_OPERAND_C_REG117 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG42 :
      fields->f_uimm3_43 = value;
      break;
    case RISCV_OPERAND_C_REG62 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_C_REG97 :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_CBRANCH9 :
      fields->f_imm9_121_62_21_112_42_0 = value;
      break;
    case RISCV_OPERAND_CFUNCT3 :
      fields->f_c_funct3 = value;
      break;
    case RISCV_OPERAND_CFUNCT4 :
      fields->f_c_funct4 = value;
      break;
    case RISCV_OPERAND_CJMP12 :
      fields->f_imm12_121_81_102_61_71_21_111_53_0 = value;
      break;
    case RISCV_OPERAND_COPCODE2 :
      fields->f_c_opcode = value;
      break;
    case RISCV_OPERAND_CSR :
      fields->f_csr = value;
      break;
    case RISCV_OPERAND_FC_RS2 :
      fields->f_uimm3_43 = value;
      break;
    case RISCV_OPERAND_FC_RS3 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_FL_DUMMY :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_FL_RD :
      fields->f_rd = value;
      break;
    case RISCV_OPERAND_FL_RM :
      fields->f_funct3 = value;
      break;
    case RISCV_OPERAND_FL_RS1 :
      fields->f_rs1 = value;
      break;
    case RISCV_OPERAND_FL_RS2 :
      fields->f_rs2 = value;
      break;
    case RISCV_OPERAND_FL_RS3 :
      fields->f_rs3 = value;
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_FUNCT3 :
      fields->f_funct3 = value;
      break;
    case RISCV_OPERAND_FUNCT7 :
      fields->f_funct7 = value;
      break;
    case RISCV_OPERAND_IMM_LO12 :
      fields->f_imm12_3112 = value;
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      fields->f_imm12_3112 = value;
      break;
    case RISCV_OPERAND_IMM_ZERO :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      fields->f_imm6_121_65 = value;
      break;
    case RISCV_OPERAND_JMP21 :
      fields->f_imm21_311_198_201_3010_0 = value;
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      fields->f_imm10_121_42_51_21_61_0000 = value;
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      fields->f_imm6_121_65 = value;
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      fields->f_uimm10_104_122_51_61_00 = value;
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      fields->f_uimm18_121_65_000000000000 = value;
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      fields->f_uimm6_121_65 = value;
      break;
    case RISCV_OPERAND_OPCODE7 :
      fields->f_opcode = value;
      break;
    case RISCV_OPERAND_PRED :
      fields->f_pred = value;
      break;
    case RISCV_OPERAND_RD :
      fields->f_rd = value;
      break;
    case RISCV_OPERAND_RS1 :
      fields->f_rs1 = value;
      break;
    case RISCV_OPERAND_RS2 :
      fields->f_rs2 = value;
      break;
    case RISCV_OPERAND_SP_REG :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_STORE12 :
      fields->f_imm12_317_115 = value;
      break;
    case RISCV_OPERAND_SUCC :
      fields->f_succ = value;
      break;
    case RISCV_OPERAND_TPREL_ADD :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      fields->f_uimm32_3120_000000000000 = value;
      break;
    case RISCV_OPERAND_UIMM5 :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_UIMM5_245 :
      fields->f_uimm5_245 = value;
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_UIMM6_256 :
      fields->f_uimm6_256 = value;
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      fields->f_uimm7_51_123_61_00 = value;
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      fields->f_uimm8_32_121_63_00 = value;
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      fields->f_uimm8_62_123_000 = value;
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      fields->f_uimm8_82_124_00 = value;
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      fields->f_uimm9_43_121_62_000 = value;
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      fields->f_uimm9_93_123_000 = value;
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while setting int operand.\n"),
		       opindex);
      abort ();
  }
}

void
riscv_cgen_set_vma_operand (CGEN_CPU_DESC cd ATTRIBUTE_UNUSED,
			     int opindex,
			     CGEN_FIELDS * fields,
			     bfd_vma value)
{
  switch (opindex)
    {
    case RISCV_OPERAND_BRANCH13 :
      fields->f_imm13_311_71_306_114_0 = value;
      break;
    case RISCV_OPERAND_C_REG117 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_NE0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG117_NE0_NE2 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_REG42 :
      fields->f_uimm3_43 = value;
      break;
    case RISCV_OPERAND_C_REG62 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_C_REG62_NE0 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_C_REG97 :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_COMMUTATIVE :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS117_NE0_NE2 :
      fields->f_uimm5_115 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS97 :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_C_TIED_REGS97_COMMUTATIVE :
      fields->f_uimm3_93 = value;
      break;
    case RISCV_OPERAND_CBRANCH9 :
      fields->f_imm9_121_62_21_112_42_0 = value;
      break;
    case RISCV_OPERAND_CFUNCT3 :
      fields->f_c_funct3 = value;
      break;
    case RISCV_OPERAND_CFUNCT4 :
      fields->f_c_funct4 = value;
      break;
    case RISCV_OPERAND_CJMP12 :
      fields->f_imm12_121_81_102_61_71_21_111_53_0 = value;
      break;
    case RISCV_OPERAND_COPCODE2 :
      fields->f_c_opcode = value;
      break;
    case RISCV_OPERAND_CSR :
      fields->f_csr = value;
      break;
    case RISCV_OPERAND_FC_RS2 :
      fields->f_uimm3_43 = value;
      break;
    case RISCV_OPERAND_FC_RS3 :
      fields->f_uimm5_65 = value;
      break;
    case RISCV_OPERAND_FL_DUMMY :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_FL_RD :
      fields->f_rd = value;
      break;
    case RISCV_OPERAND_FL_RM :
      fields->f_funct3 = value;
      break;
    case RISCV_OPERAND_FL_RS1 :
      fields->f_rs1 = value;
      break;
    case RISCV_OPERAND_FL_RS2 :
      fields->f_rs2 = value;
      break;
    case RISCV_OPERAND_FL_RS3 :
      fields->f_rs3 = value;
      break;
    case RISCV_OPERAND_FL_TIED_REGS1915 :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_FUNCT3 :
      fields->f_funct3 = value;
      break;
    case RISCV_OPERAND_FUNCT7 :
      fields->f_funct7 = value;
      break;
    case RISCV_OPERAND_IMM_LO12 :
      fields->f_imm12_3112 = value;
      break;
    case RISCV_OPERAND_IMM_LO12_ABS :
      fields->f_imm12_3112 = value;
      break;
    case RISCV_OPERAND_IMM_ZERO :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_IMM6_121_65_ABS :
      fields->f_imm6_121_65 = value;
      break;
    case RISCV_OPERAND_JMP21 :
      fields->f_imm21_311_198_201_3010_0 = value;
      break;
    case RISCV_OPERAND_NZIMM10_121_42_51_21_61_0000_ABS :
      fields->f_imm10_121_42_51_21_61_0000 = value;
      break;
    case RISCV_OPERAND_NZIMM6_121_65_ABS :
      fields->f_imm6_121_65 = value;
      break;
    case RISCV_OPERAND_NZUIMM10_104_122_51_61_00_ABS :
      fields->f_uimm10_104_122_51_61_00 = value;
      break;
    case RISCV_OPERAND_NZUIMM18_121_65_000000000000_ABS :
      fields->f_uimm18_121_65_000000000000 = value;
      break;
    case RISCV_OPERAND_NZUIMM6_121_65_ABS :
      fields->f_uimm6_121_65 = value;
      break;
    case RISCV_OPERAND_OPCODE7 :
      fields->f_opcode = value;
      break;
    case RISCV_OPERAND_PRED :
      fields->f_pred = value;
      break;
    case RISCV_OPERAND_RD :
      fields->f_rd = value;
      break;
    case RISCV_OPERAND_RS1 :
      fields->f_rs1 = value;
      break;
    case RISCV_OPERAND_RS2 :
      fields->f_rs2 = value;
      break;
    case RISCV_OPERAND_SP_REG :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_STORE12 :
      fields->f_imm12_317_115 = value;
      break;
    case RISCV_OPERAND_SUCC :
      fields->f_succ = value;
      break;
    case RISCV_OPERAND_TPREL_ADD :
      fields->f_dummy = value;
      break;
    case RISCV_OPERAND_UIMM32_3120_000000000000 :
      fields->f_uimm32_3120_000000000000 = value;
      break;
    case RISCV_OPERAND_UIMM5 :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_UIMM5_245 :
      fields->f_uimm5_245 = value;
      break;
    case RISCV_OPERAND_UIMM5_ABS :
      fields->f_uimm5_195 = value;
      break;
    case RISCV_OPERAND_UIMM6_256 :
      fields->f_uimm6_256 = value;
      break;
    case RISCV_OPERAND_UIMM7_51_123_61_00_ABS :
      fields->f_uimm7_51_123_61_00 = value;
      break;
    case RISCV_OPERAND_UIMM8_32_121_63_00_ABS :
      fields->f_uimm8_32_121_63_00 = value;
      break;
    case RISCV_OPERAND_UIMM8_62_123_000_ABS :
      fields->f_uimm8_62_123_000 = value;
      break;
    case RISCV_OPERAND_UIMM8_82_124_00_ABS :
      fields->f_uimm8_82_124_00 = value;
      break;
    case RISCV_OPERAND_UIMM9_43_121_62_000_ABS :
      fields->f_uimm9_43_121_62_000 = value;
      break;
    case RISCV_OPERAND_UIMM9_93_123_000_ABS :
      fields->f_uimm9_93_123_000 = value;
      break;

    default :
      /* xgettext:c-format */
      fprintf (stderr, _("Unrecognized field %d while setting vma operand.\n"),
		       opindex);
      abort ();
  }
}

/* Function to call before using the instruction builder tables.  */

void
riscv_cgen_init_ibld_table (CGEN_CPU_DESC cd)
{
  cd->insert_handlers = & riscv_cgen_insert_handlers[0];
  cd->extract_handlers = & riscv_cgen_extract_handlers[0];

  cd->insert_operand = riscv_cgen_insert_operand;
  cd->extract_operand = riscv_cgen_extract_operand;

  cd->get_int_operand = riscv_cgen_get_int_operand;
  cd->set_int_operand = riscv_cgen_set_int_operand;
  cd->get_vma_operand = riscv_cgen_get_vma_operand;
  cd->set_vma_operand = riscv_cgen_set_vma_operand;
}
