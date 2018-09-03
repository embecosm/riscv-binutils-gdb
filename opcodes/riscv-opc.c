/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode table for riscv.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2017 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "riscv-desc.h"
#include "riscv-opc.h"
#include "libiberty.h"

/* -- opc.c */

int riscv_cgen_insn_supported (CGEN_CPU_DESC cd, const CGEN_INSN *insn)
{
  CGEN_BITSET isas = CGEN_INSN_BITSET_ATTR_VALUE (insn, CGEN_INSN_ISA);
  return cgen_bitset_intersect_p (cd->isas, &isas);
}


/* -- */
/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & riscv_cgen_ifld_table[RISCV_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_c_addi16sp ATTRIBUTE_UNUSED = {
  16, 16, 0xef83, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_IMM10_121_42_51_21_61_0000) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_addi4spn ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM10_104_122_51_61_00) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_nop ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_UIMM16_1516) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_jr ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_mv ATTRIBUTE_UNUSED = {
  16, 16, 0xf003, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_and ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_li ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_IMM6_121_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_lui ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_UIMM18_121_65_000000000000) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_addi ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_IMM6_121_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_slli ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_UIMM6_121_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_lwsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_UIMM8_32_121_63_00) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_swsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM8_82_124_00) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_lw ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_93) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_srli ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM3_93) }, { F (F_UIMM6_121_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_andi ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM3_93) }, { F (F_IMM6_121_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_beqz ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_93) }, { F (F_IMM9_121_62_21_112_42_0) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_j ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM12_121_81_102_61_71_21_111_53_0) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_ldsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM5_115) }, { F (F_UIMM9_43_121_62_000) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_sdsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM9_93_123_000) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_ld ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_93) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_flwsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_RD) }, { F (F_UIMM8_32_121_63_00) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_fswsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM9_93_123_000) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_fsw ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_93) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_flw ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_123) }, { F (F_UIMM3_93) }, { F (F_UIMM7_51_123_61_00) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_fldsp ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_RD) }, { F (F_UIMM9_43_121_62_000) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_fsd ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_93) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_c_fld ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM3_123) }, { F (F_UIMM3_93) }, { F (F_UIMM8_62_123_000) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_lui ATTRIBUTE_UNUSED = {
  32, 32, 0x7f, { { F (F_UIMM32_3120_000000000000) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_jal ATTRIBUTE_UNUSED = {
  32, 32, 0x7f, { { F (F_IMM21_311_198_201_3010_0) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_jalr ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_beq ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_IMM13_311_71_306_114_0) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_sb ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_IMM12_317_115) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_slli_shift5 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_add ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fence ATTRIBUTE_UNUSED = {
  32, 32, 0xf00fffff, { { F (F_UIMM4_314) }, { F (F_SUCC) }, { F (F_PRED) }, { F (F_UIMM20_1920) }, { 0 } }
};

static const CGEN_IFMT ifmt_fence_i ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM32_3132) }, { 0 } }
};

static const CGEN_IFMT ifmt_csrrw ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_csrrwi ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_sfence_vm ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_UIMM12_3112) }, { F (F_RS1) }, { F (F_UIMM15_1415) }, { 0 } }
};

static const CGEN_IFMT ifmt_sfence_vma ATTRIBUTE_UNUSED = {
  32, 32, 0xfe007fff, { { F (F_UIMM7_317) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_UIMM15_1415) }, { 0 } }
};

static const CGEN_IFMT ifmt_slli_shift6 ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00707f, { { F (F_FUNCT6) }, { F (F_UIMM6_256) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_lr_w ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT5) }, { F (F_AQ) }, { F (F_RL) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_sc_w ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT5) }, { F (F_AQ) }, { F (F_RL) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_flw ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fsw ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_IMM12_317_115) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fmadd_s ATTRIBUTE_UNUSED = {
  32, 32, 0x600707f, { { F (F_RS3) }, { F (F_FP2) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fadd_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_feq_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fsqrt_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fcvt_w_s ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_fcvt_s_w ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) RISCV_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE riscv_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* c.addi16sp ${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SP_REG), ',', OP (NZIMM10_121_42_51_21_61_0000_ABS), 0 } },
    & ifmt_c_addi16sp, { 0x6101 }
  },
/* c.addi4spn ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (SP_REG), ',', OP (NZUIMM10_104_122_51_61_00_ABS), 0 } },
    & ifmt_c_addi4spn, { 0x0 }
  },
/* c.nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_c_nop, { 0x1 }
  },
/* c.jr ${c-reg117-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), 0 } },
    & ifmt_c_jr, { 0x8002 }
  },
/* c.jalr ${c-reg117-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), 0 } },
    & ifmt_c_jr, { 0x9002 }
  },
/* c.mv ${c-reg117-ne0},${c-reg62-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (C_REG62_NE0), 0 } },
    & ifmt_c_mv, { 0x8002 }
  },
/* c.add ${c-reg117-ne0},${c-reg62-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (C_REG62_NE0), 0 } },
    & ifmt_c_mv, { 0x9002 }
  },
/* c.and ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x8c61 }
  },
/* c.or ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x8c41 }
  },
/* c.xor ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x8c21 }
  },
/* c.sub ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x8c01 }
  },
/* c.ebreak */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_c_nop, { 0x9002 }
  },
/* c.unimp */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_c_nop, { 0x0 }
  },
/* c.li ${c-reg117-ne0},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_c_li, { 0x4001 }
  },
/* c.lui ${c-reg117-ne0-ne2},${nzuimm18-121-65-000000000000-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0_NE2), ',', OP (NZUIMM18_121_65_000000000000_ABS), 0 } },
    & ifmt_c_lui, { 0x6001 }
  },
/* c.addi ${c-reg117},${nzimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117), ',', OP (NZIMM6_121_65_ABS), 0 } },
    & ifmt_c_addi, { 0x1 }
  },
/* c.slli ${c-reg117-ne0},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_c_slli, { 0x2 }
  },
/* c.lwsp ${c-reg117-ne0},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (UIMM8_32_121_63_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_lwsp, { 0x4002 }
  },
/* c.swsp ${c-reg62},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', OP (UIMM8_82_124_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_swsp, { 0xc002 }
  },
/* c.lw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_c_lw, { 0x4000 }
  },
/* c.sw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_c_lw, { 0xc000 }
  },
/* c.srli ${c-reg97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_c_srli, { 0x8001 }
  },
/* c.srai ${c-reg97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_c_srli, { 0x8401 }
  },
/* c.andi ${c-reg97},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_c_andi, { 0x8801 }
  },
/* c.beqz ${c-reg97},${cbranch9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (CBRANCH9), 0 } },
    & ifmt_c_beqz, { 0xc001 }
  },
/* c.bnez ${c-reg97},${cbranch9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (CBRANCH9), 0 } },
    & ifmt_c_beqz, { 0xe001 }
  },
/* c.j ${cjmp12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CJMP12), 0 } },
    & ifmt_c_j, { 0xa001 }
  },
/* c.jal ${cjmp12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CJMP12), 0 } },
    & ifmt_c_j, { 0x2001 }
  },
/* c.addw ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x9c21 }
  },
/* c.subw ${c-reg97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (C_REG42), 0 } },
    & ifmt_c_and, { 0x9c01 }
  },
/* c.addiw ${c-reg117-ne0},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_c_li, { 0x2001 }
  },
/* c.ldsp ${c-reg117-ne0},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (UIMM9_43_121_62_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_ldsp, { 0x6002 }
  },
/* c.sdsp ${c-reg62},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', OP (UIMM9_93_123_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_sdsp, { 0xe002 }
  },
/* c.ld ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM8_62_123_000_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_c_ld, { 0x6000 }
  },
/* c.sd ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM8_62_123_000_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_c_ld, { 0xe000 }
  },
/* c.flwsp ${fl-rd},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (UIMM8_32_121_63_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_flwsp, { 0x6002 }
  },
/* c.fswsp ${fc-rs3},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RS3), ',', OP (UIMM8_82_124_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_fswsp, { 0xe002 }
  },
/* c.fsw ${fc-rs2},${uimm7-51-123-61-00-abs}(${fc-rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RS2), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (FC_RS1), ')', 0 } },
    & ifmt_c_fsw, { 0xe000 }
  },
/* c.flw ${fc-rd},${uimm7-51-123-61-00-abs}(${fc-rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RD), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (FC_RS1), ')', 0 } },
    & ifmt_c_flw, { 0x6000 }
  },
/* c.fldsp ${fl-rd},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (UIMM9_43_121_62_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_fldsp, { 0x2002 }
  },
/* c.fsdsp ${fc-rs3},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RS3), ',', OP (UIMM9_93_123_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_c_fswsp, { 0xa002 }
  },
/* c.fsd ${fc-rs2},${uimm8-62-123-000-abs}(${fc-rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RS2), ',', OP (UIMM8_62_123_000_ABS), '(', OP (FC_RS1), ')', 0 } },
    & ifmt_c_fsd, { 0xa000 }
  },
/* c.fld ${fc-rd},${uimm8-62-123-000-abs}(${fc-rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FC_RD), ',', OP (UIMM8_62_123_000_ABS), '(', OP (FC_RS1), ')', 0 } },
    & ifmt_c_fld, { 0x2000 }
  },
/* lui ${rd},${uimm32-3120-000000000000} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (UIMM32_3120_000000000000), 0 } },
    & ifmt_lui, { 0x37 }
  },
/* auipc ${rd},${uimm32-3120-000000000000} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (UIMM32_3120_000000000000), 0 } },
    & ifmt_lui, { 0x17 }
  },
/* jal ${rd},${jmp21} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (JMP21), 0 } },
    & ifmt_jal, { 0x6f }
  },
/* jalr ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x67 }
  },
/* beq ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x63 }
  },
/* bne ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x1063 }
  },
/* blt ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x4063 }
  },
/* bge ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x5063 }
  },
/* bltu ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x6063 }
  },
/* bgeu ${rs1},${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_beq, { 0x7063 }
  },
/* lb ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x3 }
  },
/* lh ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x1003 }
  },
/* lw ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x2003 }
  },
/* lbu ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x4003 }
  },
/* lhu ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x5003 }
  },
/* sb ${rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_sb, { 0x23 }
  },
/* sh ${rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_sb, { 0x1023 }
  },
/* sw ${rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_sb, { 0x2023 }
  },
/* addi ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x13 }
  },
/* slti ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x2013 }
  },
/* sltiu ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x3013 }
  },
/* xori ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x4013 }
  },
/* ori ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x6013 }
  },
/* andi ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x7013 }
  },
/* slli ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x1013 }
  },
/* srli ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x5013 }
  },
/* srai ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x40005013 }
  },
/* add ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x33 }
  },
/* sub ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x40000033 }
  },
/* sll ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x1033 }
  },
/* slt ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2033 }
  },
/* sltu ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x3033 }
  },
/* xor ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x4033 }
  },
/* srl ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x5033 }
  },
/* sra ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x40005033 }
  },
/* or ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x6033 }
  },
/* and ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x7033 }
  },
/* fence ${succ},${pred} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SUCC), ',', OP (PRED), 0 } },
    & ifmt_fence, { 0xf }
  },
/* fence.i */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x100f }
  },
/* ecall */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x73 }
  },
/* ebreak */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x100073 }
  },
/* csrrw ${rd},${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_csrrw, { 0x1073 }
  },
/* csrrs ${rd},${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_csrrw, { 0x2073 }
  },
/* csrrc ${rd},${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_csrrw, { 0x3073 }
  },
/* csrrwi ${rd},${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_csrrwi, { 0x5073 }
  },
/* csrrsi ${rd},${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_csrrwi, { 0x6073 }
  },
/* csrrci ${rd},${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_csrrwi, { 0x7073 }
  },
/* uret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x200073 }
  },
/* sret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x10200073 }
  },
/* hret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x20200073 }
  },
/* mret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x30200073 }
  },
/* dret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x7b200073 }
  },
/* wfi */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_fence_i, { 0x10500073 }
  },
/* sfence.vm ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_sfence_vm, { 0x10400073 }
  },
/* sfence.vma ${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_sfence_vma, { 0x12000073 }
  },
/* lwu ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x6003 }
  },
/* ld ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_jalr, { 0x3003 }
  },
/* sd ${rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_sb, { 0x3023 }
  },
/* slli ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_slli_shift6, { 0x1013 }
  },
/* srli ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_slli_shift6, { 0x5013 }
  },
/* srai ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_slli_shift6, { 0x40005013 }
  },
/* addiw ${rd},${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_jalr, { 0x1b }
  },
/* slliw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x101b }
  },
/* srliw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x501b }
  },
/* sraiw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_slli_shift5, { 0x4000501b }
  },
/* addw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x3b }
  },
/* subw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x4000003b }
  },
/* sllw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x103b }
  },
/* srlw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x503b }
  },
/* sraw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x4000503b }
  },
/* mul ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2000033 }
  },
/* mulh ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2001033 }
  },
/* mulhsu ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2002033 }
  },
/* mulhu ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2003033 }
  },
/* div ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2004033 }
  },
/* divu ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2005033 }
  },
/* rem ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2006033 }
  },
/* remu ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x2007033 }
  },
/* mulw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x200003b }
  },
/* divw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x200403b }
  },
/* divuw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x200503b }
  },
/* remw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x200603b }
  },
/* remuw ${rd},${rs1},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (RS2), 0 } },
    & ifmt_add, { 0x200703b }
  },
/* lr.w ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1000202f }
  },
/* lr.w.aq ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1400202f }
  },
/* lr.w.rl ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1200202f }
  },
/* lr.w.aqrl ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1600202f }
  },
/* sc.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1800202f }
  },
/* sc.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1c00202f }
  },
/* sc.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1a00202f }
  },
/* sc.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1e00202f }
  },
/* amoswap.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x800202f }
  },
/* amoswap.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc00202f }
  },
/* amoswap.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa00202f }
  },
/* amoswap.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe00202f }
  },
/* amoadd.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x202f }
  },
/* amoadd.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x400202f }
  },
/* amoadd.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x200202f }
  },
/* amoadd.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x600202f }
  },
/* amoxor.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2000202f }
  },
/* amoxor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2400202f }
  },
/* amoxor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2200202f }
  },
/* amoxor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2600202f }
  },
/* amoand.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6000202f }
  },
/* amoand.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6400202f }
  },
/* amoand.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6200202f }
  },
/* amoand.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6600202f }
  },
/* amoor.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4000202f }
  },
/* amoor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4400202f }
  },
/* amoor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4200202f }
  },
/* amoor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4600202f }
  },
/* amomin.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8000202f }
  },
/* amomin.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8400202f }
  },
/* amomin.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8200202f }
  },
/* amomin.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8600202f }
  },
/* amomax.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa000202f }
  },
/* amomax.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa400202f }
  },
/* amomax.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa200202f }
  },
/* amomax.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa600202f }
  },
/* amominu.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc000202f }
  },
/* amominu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc400202f }
  },
/* amominu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc200202f }
  },
/* amominu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc600202f }
  },
/* amomaxu.w ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe000202f }
  },
/* amomaxu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe400202f }
  },
/* amomaxu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe200202f }
  },
/* amomaxu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe600202f }
  },
/* lr.d ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1000302f }
  },
/* lr.d.aq ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1400302f }
  },
/* lr.d.rl ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1200302f }
  },
/* lr.d.aqrl ${rd},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_lr_w, { 0x1600302f }
  },
/* sc.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1800302f }
  },
/* sc.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1c00302f }
  },
/* sc.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1a00302f }
  },
/* sc.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x1e00302f }
  },
/* amoswap.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x800302f }
  },
/* amoswap.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc00302f }
  },
/* amoswap.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa00302f }
  },
/* amoswap.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe00302f }
  },
/* amoadd.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x302f }
  },
/* amoadd.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x400302f }
  },
/* amoadd.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x200302f }
  },
/* amoadd.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x600302f }
  },
/* amoxor.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2000302f }
  },
/* amoxor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2400302f }
  },
/* amoxor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2200302f }
  },
/* amoxor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x2600302f }
  },
/* amoand.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6000302f }
  },
/* amoand.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6400302f }
  },
/* amoand.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6200302f }
  },
/* amoand.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x6600302f }
  },
/* amoor.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4000302f }
  },
/* amoor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4400302f }
  },
/* amoor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4200302f }
  },
/* amoor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x4600302f }
  },
/* amomin.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8000302f }
  },
/* amomin.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8400302f }
  },
/* amomin.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8200302f }
  },
/* amomin.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0x8600302f }
  },
/* amomax.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa000302f }
  },
/* amomax.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa400302f }
  },
/* amomax.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa200302f }
  },
/* amomax.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xa600302f }
  },
/* amominu.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc000302f }
  },
/* amominu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc400302f }
  },
/* amominu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc200302f }
  },
/* amominu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xc600302f }
  },
/* amomaxu.d ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe000302f }
  },
/* amomaxu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe400302f }
  },
/* amomaxu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe200302f }
  },
/* amomaxu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (IMM_ZERO), '(', OP (RS1), ')', 0 } },
    & ifmt_sc_w, { 0xe600302f }
  },
/* flw ${fl-rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_flw, { 0x2007 }
  },
/* fsw ${fl-rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_fsw, { 0x2027 }
  },
/* fmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x7043 }
  },
/* fmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x7047 }
  },
/* fnmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x704b }
  },
/* fnmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x704f }
  },
/* fadd.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x7053 }
  },
/* fsub.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x8007053 }
  },
/* fmul.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x10007053 }
  },
/* fdiv.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x18007053 }
  },
/* fsgnj.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x20000053 }
  },
/* fsgnjn.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x20001053 }
  },
/* fsgnjx.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x20002053 }
  },
/* fmin.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x28000053 }
  },
/* fmax.s ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x28001053 }
  },
/* feq.s ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa0002053 }
  },
/* flt.s ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa0001053 }
  },
/* fle.s ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa0000053 }
  },
/* fsqrt.s ${fl-rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fsqrt_s, { 0x58007053 }
  },
/* fcvt.w.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc0007053 }
  },
/* fcvt.wu.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc0107053 }
  },
/* fmv.x.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xe0000053 }
  },
/* fclass.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xe0001053 }
  },
/* fcvt.s.w ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd0007053 }
  },
/* fcvt.s.wu ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd0107053 }
  },
/* fmv.s.x ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xf0000053 }
  },
/* fcvt.l.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc0207053 }
  },
/* fcvt.lu.s ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc0307053 }
  },
/* fcvt.s.l ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd0207053 }
  },
/* fcvt.s.lu ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd0307053 }
  },
/* fld ${fl-rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_flw, { 0x3007 }
  },
/* fsd ${fl-rs2},${store12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RS2), ',', OP (STORE12), '(', OP (RS1), ')', 0 } },
    & ifmt_fsw, { 0x3027 }
  },
/* fmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x2007043 }
  },
/* fmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x2007047 }
  },
/* fnmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x200704b }
  },
/* fnmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), ',', OP (FL_RS3), 0 } },
    & ifmt_fmadd_s, { 0x200704f }
  },
/* fadd.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x2007053 }
  },
/* fsub.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0xa007053 }
  },
/* fmul.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x12007053 }
  },
/* fdiv.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x1a007053 }
  },
/* fsgnj.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x22000053 }
  },
/* fsgnjn.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x22001053 }
  },
/* fsgnjx.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x22002053 }
  },
/* fmin.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x2a000053 }
  },
/* fmax.d ${fl-rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_fadd_s, { 0x2a001053 }
  },
/* feq.d ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa2002053 }
  },
/* flt.d ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa2001053 }
  },
/* fle.d ${rd},${fl-rs1},${fl-rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), ',', OP (FL_RS2), 0 } },
    & ifmt_feq_s, { 0xa2000053 }
  },
/* fsqrt.d ${fl-rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fsqrt_s, { 0x5a007053 }
  },
/* fcvt.w.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc2007053 }
  },
/* fcvt.wu.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc2107053 }
  },
/* fclass.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xe2001053 }
  },
/* fcvt.d.w ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd2007053 }
  },
/* fcvt.d.wu ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd2107053 }
  },
/* fcvt.s.d ${fl-rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fsqrt_s, { 0x40107053 }
  },
/* fcvt.d.s ${fl-rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fsqrt_s, { 0x42007053 }
  },
/* fcvt.l.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc2207053 }
  },
/* fcvt.lu.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xc2307053 }
  },
/* fmv.x.d ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_fcvt_w_s, { 0xe2000053 }
  },
/* fcvt.d.l ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd2207053 }
  },
/* fcvt.d.lu ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xd2307053 }
  },
/* fmv.d.x ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_fcvt_s_w, { 0xf2000053 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & riscv_cgen_ifld_table[RISCV_##f]
static const CGEN_IFMT ifmt_p_c_nop ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_UIMM16_1516) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ebreak ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_UIMM16_1516) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_unimp ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_UIMM16_1516) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sbreak ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_UIMM16_1516) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ret ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_jr ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_jalr ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_j ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM12_121_81_102_61_71_21_111_53_0) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_jal ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM12_121_81_102_61_71_21_111_53_0) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_beqz ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM9_121_62_21_112_42_0) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_bnez ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM9_121_62_21_112_42_0) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_lui ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM18_121_65_000000000000) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_li ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_mv ATTRIBUTE_UNUSED = {
  16, 16, 0xf003, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_move ATTRIBUTE_UNUSED = {
  16, 16, 0xf003, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_andi ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_IMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_and_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_IMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_and_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addi_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xef83, { { F (F_C_FUNCT3) }, { F (F_IMM10_121_42_51_21_61_0000) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addi_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addi_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM10_104_122_51_61_00) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_add_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xef83, { { F (F_C_FUNCT3) }, { F (F_IMM10_121_42_51_21_61_0000) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_add_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xf003, { { F (F_C_FUNCT4) }, { F (F_UIMM5_115) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_add_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_add_4 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM10_104_122_51_61_00) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_slli ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sll ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_srli ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_srl ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_srai ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sra ATTRIBUTE_UNUSED = {
  16, 16, 0xec03, { { F (F_C_FUNCT3) }, { F (F_UIMM2_112) }, { F (F_UIMM6_121_65) }, { F (F_UIMM3_93) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sub ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_lw_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_lw_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM8_32_121_63_00) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_lw_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT3) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_lw_4 ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT3) }, { F (F_UIMM8_32_121_63_00) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_or ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sw_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sw_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM8_82_124_00) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sw_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT3) }, { F (F_UIMM7_51_123_61_00) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sw_4 ATTRIBUTE_UNUSED = {
  16, 16, 0xff83, { { F (F_C_FUNCT3) }, { F (F_UIMM8_82_124_00) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_xor ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ld_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ld_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM9_43_121_62_000) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ld_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT3) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_ld_4 ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT3) }, { F (F_UIMM9_43_121_62_000) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sd_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sd_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_UIMM9_93_123_000) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sd_3 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT3) }, { F (F_UIMM8_62_123_000) }, { F (F_UIMM3_93) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sd_4 ATTRIBUTE_UNUSED = {
  16, 16, 0xff83, { { F (F_C_FUNCT3) }, { F (F_UIMM9_93_123_000) }, { F (F_UIMM5_65) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_sext_w ATTRIBUTE_UNUSED = {
  16, 16, 0xf07f, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addiw ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addw_1 ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_addw_2 ATTRIBUTE_UNUSED = {
  16, 16, 0xe003, { { F (F_C_FUNCT3) }, { F (F_IMM6_121_65) }, { F (F_UIMM5_115) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_c_subw ATTRIBUTE_UNUSED = {
  16, 16, 0xfc63, { { F (F_C_FUNCT6) }, { F (F_UIMM3_93) }, { F (F_UIMM2_62) }, { F (F_UIMM3_43) }, { F (F_C_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jalr_1 ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_and ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_add ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sll_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_srl_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sra_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sll_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00707f, { { F (F_FUNCT6) }, { F (F_UIMM6_256) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_srl_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00707f, { { F (F_FUNCT6) }, { F (F_UIMM6_256) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sra_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfc00707f, { { F (F_FUNCT6) }, { F (F_UIMM6_256) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_slt ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sltu ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sgt ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sgtu ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_or ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_xor ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_addw ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sllw ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_srlw ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sraw ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_UIMM5_245) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lb ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lh ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lw ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lbu ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lhu ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sb ATTRIBUTE_UNUSED = {
  32, 32, 0xfe007fff, { { F (F_IMM12_317_115) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sh ATTRIBUTE_UNUSED = {
  32, 32, 0xfe007fff, { { F (F_IMM12_317_115) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sw ATTRIBUTE_UNUSED = {
  32, 32, 0xfe007fff, { { F (F_IMM12_317_115) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_lwu ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_ld ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sd ATTRIBUTE_UNUSED = {
  32, 32, 0xfe007fff, { { F (F_IMM12_317_115) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_nop ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_li ATTRIBUTE_UNUSED = {
  32, 32, 0xff07f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_mv ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_move ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_not ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_neg ATTRIBUTE_UNUSED = {
  32, 32, 0xfe0ff07f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_negw ATTRIBUTE_UNUSED = {
  32, 32, 0xfe0ff07f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sextw ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_seqz ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_snez ATTRIBUTE_UNUSED = {
  32, 32, 0xfe0ff07f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sltz ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sgtz ATTRIBUTE_UNUSED = {
  32, 32, 0xfe0ff07f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_beqz ATTRIBUTE_UNUSED = {
  32, 32, 0x1f0707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bnez ATTRIBUTE_UNUSED = {
  32, 32, 0x1f0707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_blez ATTRIBUTE_UNUSED = {
  32, 32, 0xff07f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bgez ATTRIBUTE_UNUSED = {
  32, 32, 0x1f0707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bltz ATTRIBUTE_UNUSED = {
  32, 32, 0x1f0707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bgtz ATTRIBUTE_UNUSED = {
  32, 32, 0xff07f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bgt ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_ble ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bgtu ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_bleu ATTRIBUTE_UNUSED = {
  32, 32, 0x707f, { { F (F_IMM13_311_71_306_114_0) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_j ATTRIBUTE_UNUSED = {
  32, 32, 0xfff, { { F (F_IMM21_311_198_201_3010_0) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jal ATTRIBUTE_UNUSED = {
  32, 32, 0xfff, { { F (F_IMM21_311_198_201_3010_0) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jr_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jr_2 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jr_3 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jalr_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jalr_3 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jalr_4 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_jalr_5 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_ret ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_IMM12_3112) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_unimp ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fence ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM4_314) }, { F (F_PRED) }, { F (F_SUCC) }, { F (F_UIMM20_1920) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_scall ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM32_3132) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sbreak ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM32_3132) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdinstret ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdcycle ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdtime ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdinstreth ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdcycleh ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_rdtimeh ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrr ATTRIBUTE_UNUSED = {
  32, 32, 0xff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrw_1 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrs_1 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrc_1 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrw_2 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrs_2 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrc_2 ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrwi ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrsi ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_csrci ATTRIBUTE_UNUSED = {
  32, 32, 0x7fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sfence_vm ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM12_3112) }, { F (F_RS1) }, { F (F_UIMM15_1415) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sfence_vma_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xffffffff, { { F (F_UIMM7_317) }, { F (F_RS1) }, { F (F_RS2) }, { F (F_UIMM15_1415) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_sfence_vma_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_UIMM7_317) }, { F (F_RS1) }, { F (F_RS2) }, { F (F_UIMM15_1415) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_frsr ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fssr_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fssr_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_frcsr ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fscsr_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fscsr_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_frrm ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsrm_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsrm_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsrmi_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsrmi_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_frflags ATTRIBUTE_UNUSED = {
  32, 32, 0xfffff07f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsflags_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsflags_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsflagsi_1 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fsflagsi_2 ATTRIBUTE_UNUSED = {
  32, 32, 0xfff07fff, { { F (F_CSR) }, { F (F_UIMM5_195) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fmv_x_w ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fmv_w_x ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fmvs ATTRIBUTE_UNUSED = {
  32, 32, 0xfff0707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fabss ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

static const CGEN_IFMT ifmt_p_fnegs ATTRIBUTE_UNUSED = {
  32, 32, 0xfe00707f, { { F (F_FUNCT7) }, { F (F_RS2) }, { F (F_RS1) }, { F (F_FUNCT3) }, { F (F_RD) }, { F (F_OPCODE) }, { 0 } }
};

#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) RISCV_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE riscv_cgen_macro_insn_table[] =
{
/* nop */
  {
    -1, "p-c-nop", "nop", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* ebreak */
  {
    -1, "p-c-ebreak", "ebreak", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* unimp */
  {
    -1, "p-c-unimp", "unimp", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sbreak */
  {
    -1, "p-c-sbreak", "sbreak", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* ret */
  {
    -1, "p-c-ret", "ret", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* jr ${c-reg117-ne0} */
  {
    -1, "p-c-jr", "jr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* jalr ${c-reg117-ne0} */
  {
    -1, "p-c-jalr", "jalr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* j ${cjmp12} */
  {
    -1, "p-c-j", "j", 16,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* jal ${cjmp12} */
  {
    -1, "p-c-jal", "jal", 16,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x4\x0" } } } }
  },
/* beqz ${c-reg97},${cbranch9} */
  {
    -1, "p-c-beqz", "beqz", 16,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* bnez ${c-reg97},${cbranch9} */
  {
    -1, "p-c-bnez", "bnez", 16,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* lui ${c-reg117-ne0-ne2},${nzuimm18-121-65-000000000000-abs} */
  {
    -1, "p-c-lui", "lui", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* li ${c-reg117-ne0},${imm6-121-65-abs} */
  {
    -1, "p-c-li", "li", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* mv ${c-reg117-ne0},${c-reg62-ne0} */
  {
    -1, "p-c-mv", "mv", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* move ${c-reg117-ne0},${c-reg62-ne0} */
  {
    -1, "p-c-move", "move", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* andi ${c-tied-regs97},${nzimm6-121-65-abs} */
  {
    -1, "p-c-andi", "andi", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* and ${c-tied-regs97},${nzimm6-121-65-abs} */
  {
    -1, "p-c-and-1", "and", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* and ${c-tied-regs97-commutative},${c-reg42} */
  {
    -1, "p-c-and-2", "and", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* addi ${sp-reg},${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    -1, "p-c-addi-1", "addi", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* addi ${c-tied-regs117},${nzimm6-121-65-abs} */
  {
    -1, "p-c-addi-2", "addi", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* addi ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    -1, "p-c-addi-3", "addi", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* add ${sp-reg},${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    -1, "p-c-add-1", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* add ${c-tied-regs117-ne0-commutative},${c-reg62-ne0} */
  {
    -1, "p-c-add-2", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* add ${c-tied-regs117},${nzimm6-121-65-abs} */
  {
    -1, "p-c-add-3", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* add ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    -1, "p-c-add-4", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* slli ${c-tied-regs117-ne0},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-slli", "slli", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sll ${c-tied-regs117-ne0},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-sll", "sll", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* srli ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-srli", "srli", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* srl ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-srl", "srl", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* srai ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-srai", "srai", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sra ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    -1, "p-c-sra", "sra", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sub ${c-tied-regs97},${c-reg42} */
  {
    -1, "p-c-sub", "sub", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* lw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    -1, "p-c-lw-1", "lw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* lw ${c-reg117-ne0},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    -1, "p-c-lw-2", "lw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* lw ${c-reg42},(${c-reg97}) */
  {
    -1, "p-c-lw-3", "lw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* lw ${c-reg117-ne0},(${sp-reg}) */
  {
    -1, "p-c-lw-4", "lw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* or ${c-tied-regs97-commutative},${c-reg42} */
  {
    -1, "p-c-or", "or", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    -1, "p-c-sw-1", "sw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sw ${c-reg62},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    -1, "p-c-sw-2", "sw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sw ${c-reg42},(${c-reg97}) */
  {
    -1, "p-c-sw-3", "sw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* sw ${c-reg62},(${sp-reg}) */
  {
    -1, "p-c-sw-4", "sw", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* xor ${c-tied-regs97-commutative},${c-reg42} */
  {
    -1, "p-c-xor", "xor", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x6\x0" } } } }
  },
/* ld ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    -1, "p-c-ld-1", "ld", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* ld ${c-reg117-ne0},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    -1, "p-c-ld-2", "ld", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* ld ${c-reg42},(${c-reg97}) */
  {
    -1, "p-c-ld-3", "ld", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* ld ${c-reg117-ne0},(${sp-reg}) */
  {
    -1, "p-c-ld-4", "ld", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* sd ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    -1, "p-c-sd-1", "sd", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* sd ${c-reg62},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    -1, "p-c-sd-2", "sd", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* sd ${c-reg42},(${c-reg97}) */
  {
    -1, "p-c-sd-3", "sd", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* sd ${c-reg62},(${sp-reg}) */
  {
    -1, "p-c-sd-4", "sd", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* sext.w ${c-tied-regs117-ne0} */
  {
    -1, "p-c-sext-w", "sext.w", 16,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* addiw ${c-tied-regs117-ne0},${imm6-121-65-abs} */
  {
    -1, "p-c-addiw", "addiw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* addw ${c-tied-regs97-commutative},${c-reg42} */
  {
    -1, "p-c-addw-1", "addw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* addw ${c-tied-regs117-ne0},${imm6-121-65-abs} */
  {
    -1, "p-c-addw-2", "addw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* subw ${c-tied-regs97},${c-reg42} */
  {
    -1, "p-c-subw", "subw", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x2\x0" } } } }
  },
/* jalr ${rd},${imm-lo12}(${rs1}) */
  {
    -1, "p-jalr-1", "jalr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* and ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-and", "and", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* add ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-add", "add", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sll ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-sll-1", "sll", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* srl ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-srl-1", "srl", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sra ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-sra-1", "sra", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sll ${rd},${rs1},${uimm6-256} */
  {
    -1, "p-sll-2", "sll", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* srl ${rd},${rs1},${uimm6-256} */
  {
    -1, "p-srl-2", "srl", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sra ${rd},${rs1},${uimm6-256} */
  {
    -1, "p-sra-2", "sra", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* slt ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-slt", "slt", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sltu ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-sltu", "sltu", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sgt ${rd},${rs2},${rs1} */
  {
    -1, "p-sgt", "sgt", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sgtu ${rd},${rs2},${rs1} */
  {
    -1, "p-sgtu", "sgtu", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* or ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-or", "or", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* xor ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-xor", "xor", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* addw ${rd},${rs1},${imm-lo12-abs} */
  {
    -1, "p-addw", "addw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* sllw ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-sllw", "sllw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* srlw ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-srlw", "srlw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* sraw ${rd},${rs1},${uimm5-245} */
  {
    -1, "p-sraw", "sraw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* lb ${rd},($rs1) */
  {
    -1, "p-lb", "lb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* lh ${rd},($rs1) */
  {
    -1, "p-lh", "lh", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* lw ${rd},($rs1) */
  {
    -1, "p-lw", "lw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* lbu ${rd},($rs1) */
  {
    -1, "p-lbu", "lbu", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* lhu ${rd},($rs1) */
  {
    -1, "p-lhu", "lhu", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sb ${rs2},($rs1) */
  {
    -1, "p-sb", "sb", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sh ${rs2},($rs1) */
  {
    -1, "p-sh", "sh", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sw ${rs2},($rs1) */
  {
    -1, "p-sw", "sw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* lwu ${rd},($rs1) */
  {
    -1, "p-lwu", "lwu", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* ld ${rd},($rs1) */
  {
    -1, "p-ld", "ld", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* sd ${rs2},($rs1) */
  {
    -1, "p-sd", "sd", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* nop */
  {
    -1, "p-nop", "nop", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* li ${rd},${imm-lo12} */
  {
    -1, "p-li", "li", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* mv ${rd},${rs1} */
  {
    -1, "p-mv", "mv", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* move ${rd},${rs1} */
  {
    -1, "p-move", "move", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* not ${rd},${rs1} */
  {
    -1, "p-not", "not", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* neg ${rd},${rs2} */
  {
    -1, "p-neg", "neg", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* negw ${rd},${rs2} */
  {
    -1, "p-negw", "negw", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sext.w ${rd},${rs1} */
  {
    -1, "p-sextw", "sext.w", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x40\x0" } } } }
  },
/* seqz ${rd},${rs1} */
  {
    -1, "p-seqz", "seqz", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* snez ${rd},${rs2} */
  {
    -1, "p-snez", "snez", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sltz ${rd},${rs1} */
  {
    -1, "p-sltz", "sltz", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sgtz ${rd},${rs2} */
  {
    -1, "p-sgtz", "sgtz", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* beqz ${rs1},${branch13} */
  {
    -1, "p-beqz", "beqz", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bnez ${rs1},${branch13} */
  {
    -1, "p-bnez", "bnez", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* blez ${rs2},${branch13} */
  {
    -1, "p-blez", "blez", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bgez ${rs1},${branch13} */
  {
    -1, "p-bgez", "bgez", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bltz ${rs1},${branch13} */
  {
    -1, "p-bltz", "bltz", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bgtz ${rs2},${branch13} */
  {
    -1, "p-bgtz", "bgtz", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bgt ${rs2},${rs1},${branch13} */
  {
    -1, "p-bgt", "bgt", 32,
    { 0|A(NO_DIS)|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* ble ${rs2},${rs1},${branch13} */
  {
    -1, "p-ble", "ble", 32,
    { 0|A(NO_DIS)|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bgtu ${rs2},${rs1},${branch13} */
  {
    -1, "p-bgtu", "bgtu", 32,
    { 0|A(NO_DIS)|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* bleu ${rs2},${rs1},${branch13} */
  {
    -1, "p-bleu", "bleu", 32,
    { 0|A(NO_DIS)|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* j ${jmp21} */
  {
    -1, "p-j", "j", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jal ${jmp21} */
  {
    -1, "p-jal", "jal", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jr ${rs1} */
  {
    -1, "p-jr-1", "jr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jr ${imm-lo12}(${rs1}) */
  {
    -1, "p-jr-2", "jr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jr ${rs1},${imm-lo12} */
  {
    -1, "p-jr-3", "jr", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jalr ${rs1} */
  {
    -1, "p-jalr-2", "jalr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jalr ${imm-lo12}(${rs1}) */
  {
    -1, "p-jalr-3", "jalr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jalr ${rs1},${imm-lo12} */
  {
    -1, "p-jalr-4", "jalr", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* jalr ${rd},${rs1} */
  {
    -1, "p-jalr-5", "jalr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* ret */
  {
    -1, "p-ret", "ret", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* unimp */
  {
    -1, "p-unimp", "unimp", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* fence */
  {
    -1, "p-fence", "fence", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* scall */
  {
    -1, "p-scall", "scall", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sbreak */
  {
    -1, "p-sbreak", "sbreak", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* rdinstret ${rd} */
  {
    -1, "p-rdinstret", "rdinstret", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* rdcycle ${rd} */
  {
    -1, "p-rdcycle", "rdcycle", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* rdtime ${rd} */
  {
    -1, "p-rdtime", "rdtime", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* rdinstreth ${rd} */
  {
    -1, "p-rdinstreth", "rdinstreth", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x80\x0" } } } }
  },
/* rdcycleh ${rd} */
  {
    -1, "p-rdcycleh", "rdcycleh", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x80\x0" } } } }
  },
/* rdtimeh ${rd} */
  {
    -1, "p-rdtimeh", "rdtimeh", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x80\x0" } } } }
  },
/* csrr ${rd},${csr} */
  {
    -1, "p-csrr", "csrr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrw ${csr},${rs1} */
  {
    -1, "p-csrw-1", "csrw", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrs ${csr},${rs1} */
  {
    -1, "p-csrs-1", "csrs", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrc ${csr},${rs1} */
  {
    -1, "p-csrc-1", "csrc", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrw ${csr},${uimm5-abs} */
  {
    -1, "p-csrw-2", "csrw", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrs ${csr},${uimm5-abs} */
  {
    -1, "p-csrs-2", "csrs", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrc ${csr},${uimm5-abs} */
  {
    -1, "p-csrc-2", "csrc", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrwi ${csr},${uimm5} */
  {
    -1, "p-csrwi", "csrwi", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrsi ${csr},${uimm5} */
  {
    -1, "p-csrsi", "csrsi", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* csrci ${csr},${uimm5} */
  {
    -1, "p-csrci", "csrci", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sfence.vm */
  {
    -1, "p-sfence-vm", "sfence.vm", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sfence.vma */
  {
    -1, "p-sfence-vma-1", "sfence.vma", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* sfence.vma ${rs1} */
  {
    -1, "p-sfence-vma-2", "sfence.vma", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\xe0\x0" } } } }
  },
/* frsr ${rd} */
  {
    -1, "p-frsr", "frsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fssr ${rd},${rs1} */
  {
    -1, "p-fssr-1", "fssr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fssr ${rs1} */
  {
    -1, "p-fssr-2", "fssr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* frcsr ${rd} */
  {
    -1, "p-frcsr", "frcsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fscsr ${rd},${rs1} */
  {
    -1, "p-fscsr-1", "fscsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fscsr ${rs1} */
  {
    -1, "p-fscsr-2", "fscsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* frrm ${rd} */
  {
    -1, "p-frrm", "frrm", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsrm ${rd},${rs1} */
  {
    -1, "p-fsrm-1", "fsrm", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsrm ${rs1} */
  {
    -1, "p-fsrm-2", "fsrm", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsrmi ${rd},${uimm5} */
  {
    -1, "p-fsrmi-1", "fsrmi", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsrmi ${uimm5} */
  {
    -1, "p-fsrmi-2", "fsrmi", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* frflags ${rd} */
  {
    -1, "p-frflags", "frflags", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsflags ${rd},${rs1} */
  {
    -1, "p-fsflags-1", "fsflags", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsflags ${rs1} */
  {
    -1, "p-fsflags-2", "fsflags", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsflagsi ${rd},${uimm5} */
  {
    -1, "p-fsflagsi-1", "fsflagsi", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fsflagsi ${uimm5} */
  {
    -1, "p-fsflagsi-2", "fsflagsi", 32,
    { 0|A(NO_DIS)|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fmv.x.w ${rd},${fl-rs1} */
  {
    -1, "p-fmv.x.w", "fmv.x.w", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fmv.w.x ${fl-rd},${rs1} */
  {
    -1, "p-fmv.w.x", "fmv.w.x", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fmv.s ${fl-rd},${fl-tied-regs2419} */
  {
    -1, "p-fmvs", "fmv.s", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fabs.s ${fl-rd},${fl-tied-regs2419} */
  {
    -1, "p-fabss", "fabs.s", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
/* fneg.s ${fl-rd},${fl-tied-regs2419} */
  {
    -1, "p-fnegs", "fneg.s", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } }, { { 2, "\x0\x60" } } } }
  },
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE riscv_cgen_macro_insn_opcode_table[] =
{
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_c_nop, { 0x1 }
  },
/* ebreak */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_c_ebreak, { 0x9002 }
  },
/* unimp */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_c_unimp, { 0x0 }
  },
/* sbreak */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_c_sbreak, { 0x9002 }
  },
/* ret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_c_ret, { 0x8082 }
  },
/* jr ${c-reg117-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), 0 } },
    & ifmt_p_c_jr, { 0x8002 }
  },
/* jalr ${c-reg117-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), 0 } },
    & ifmt_p_c_jalr, { 0x9002 }
  },
/* j ${cjmp12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CJMP12), 0 } },
    & ifmt_p_c_j, { 0xa001 }
  },
/* jal ${cjmp12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CJMP12), 0 } },
    & ifmt_p_c_jal, { 0x2001 }
  },
/* beqz ${c-reg97},${cbranch9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (CBRANCH9), 0 } },
    & ifmt_p_c_beqz, { 0xc001 }
  },
/* bnez ${c-reg97},${cbranch9} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG97), ',', OP (CBRANCH9), 0 } },
    & ifmt_p_c_bnez, { 0xe001 }
  },
/* lui ${c-reg117-ne0-ne2},${nzuimm18-121-65-000000000000-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0_NE2), ',', OP (NZUIMM18_121_65_000000000000_ABS), 0 } },
    & ifmt_p_c_lui, { 0x6001 }
  },
/* li ${c-reg117-ne0},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_p_c_li, { 0x4001 }
  },
/* mv ${c-reg117-ne0},${c-reg62-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (C_REG62_NE0), 0 } },
    & ifmt_p_c_mv, { 0x8002 }
  },
/* move ${c-reg117-ne0},${c-reg62-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (C_REG62_NE0), 0 } },
    & ifmt_p_c_move, { 0x8002 }
  },
/* andi ${c-tied-regs97},${nzimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_andi, { 0x8801 }
  },
/* and ${c-tied-regs97},${nzimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_and_1, { 0x8801 }
  },
/* and ${c-tied-regs97-commutative},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97_COMMUTATIVE), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_and_2, { 0x8c61 }
  },
/* addi ${sp-reg},${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SP_REG), ',', OP (SP_REG), ',', OP (NZIMM10_121_42_51_21_61_0000_ABS), 0 } },
    & ifmt_p_c_addi_1, { 0x6101 }
  },
/* addi ${c-tied-regs117},${nzimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117), ',', OP (NZIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_addi_2, { 0x1 }
  },
/* addi ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (SP_REG), ',', OP (NZUIMM10_104_122_51_61_00_ABS), 0 } },
    & ifmt_p_c_addi_3, { 0x0 }
  },
/* add ${sp-reg},${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SP_REG), ',', OP (SP_REG), ',', OP (NZIMM10_121_42_51_21_61_0000_ABS), 0 } },
    & ifmt_p_c_add_1, { 0x6101 }
  },
/* add ${c-tied-regs117-ne0-commutative},${c-reg62-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0_COMMUTATIVE), ',', OP (C_REG62_NE0), 0 } },
    & ifmt_p_c_add_2, { 0x9002 }
  },
/* add ${c-tied-regs117},${nzimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117), ',', OP (NZIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_add_3, { 0x1 }
  },
/* add ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (SP_REG), ',', OP (NZUIMM10_104_122_51_61_00_ABS), 0 } },
    & ifmt_p_c_add_4, { 0x0 }
  },
/* slli ${c-tied-regs117-ne0},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_slli, { 0x2 }
  },
/* sll ${c-tied-regs117-ne0},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_sll, { 0x2 }
  },
/* srli ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_srli, { 0x8001 }
  },
/* srl ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_srl, { 0x8001 }
  },
/* srai ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_srai, { 0x8401 }
  },
/* sra ${c-tied-regs97},${nzuimm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (NZUIMM6_121_65_ABS), 0 } },
    & ifmt_p_c_sra, { 0x8401 }
  },
/* sub ${c-tied-regs97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_sub, { 0x8c01 }
  },
/* lw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_lw_1, { 0x4000 }
  },
/* lw ${c-reg117-ne0},${uimm8-32-121-63-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (UIMM8_32_121_63_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_lw_2, { 0x4002 }
  },
/* lw ${c-reg42},(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_lw_3, { 0x4000 }
  },
/* lw ${c-reg117-ne0},(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_lw_4, { 0x4002 }
  },
/* or ${c-tied-regs97-commutative},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97_COMMUTATIVE), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_or, { 0x8c41 }
  },
/* sw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM7_51_123_61_00_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_sw_1, { 0xc000 }
  },
/* sw ${c-reg62},${uimm8-82-124-00-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', OP (UIMM8_82_124_00_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_sw_2, { 0xc002 }
  },
/* sw ${c-reg42},(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_sw_3, { 0xc000 }
  },
/* sw ${c-reg62},(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_sw_4, { 0xc002 }
  },
/* xor ${c-tied-regs97-commutative},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97_COMMUTATIVE), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_xor, { 0x8c21 }
  },
/* ld ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM8_62_123_000_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_ld_1, { 0x6000 }
  },
/* ld ${c-reg117-ne0},${uimm9-43-121-62-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', OP (UIMM9_43_121_62_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_ld_2, { 0x6002 }
  },
/* ld ${c-reg42},(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_ld_3, { 0x6000 }
  },
/* ld ${c-reg117-ne0},(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG117_NE0), ',', '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_ld_4, { 0x6002 }
  },
/* sd ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', OP (UIMM8_62_123_000_ABS), '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_sd_1, { 0xe000 }
  },
/* sd ${c-reg62},${uimm9-93-123-000-abs}(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', OP (UIMM9_93_123_000_ABS), '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_sd_2, { 0xe002 }
  },
/* sd ${c-reg42},(${c-reg97}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG42), ',', '(', OP (C_REG97), ')', 0 } },
    & ifmt_p_c_sd_3, { 0xe000 }
  },
/* sd ${c-reg62},(${sp-reg}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_REG62), ',', '(', OP (SP_REG), ')', 0 } },
    & ifmt_p_c_sd_4, { 0xe002 }
  },
/* sext.w ${c-tied-regs117-ne0} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0), 0 } },
    & ifmt_p_c_sext_w, { 0x2001 }
  },
/* addiw ${c-tied-regs117-ne0},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_p_c_addiw, { 0x2001 }
  },
/* addw ${c-tied-regs97-commutative},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97_COMMUTATIVE), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_addw_1, { 0x9c21 }
  },
/* addw ${c-tied-regs117-ne0},${imm6-121-65-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS117_NE0), ',', OP (IMM6_121_65_ABS), 0 } },
    & ifmt_p_c_addw_2, { 0x2001 }
  },
/* subw ${c-tied-regs97},${c-reg42} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (C_TIED_REGS97), ',', OP (C_REG42), 0 } },
    & ifmt_p_c_subw, { 0x9c01 }
  },
/* jalr ${rd},${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_p_jalr_1, { 0x67 }
  },
/* and ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_and, { 0x7013 }
  },
/* add ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_add, { 0x13 }
  },
/* sll ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_sll_1, { 0x1013 }
  },
/* srl ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_srl_1, { 0x5013 }
  },
/* sra ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_sra_1, { 0x40005013 }
  },
/* sll ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_p_sll_2, { 0x1013 }
  },
/* srl ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_p_srl_2, { 0x5013 }
  },
/* sra ${rd},${rs1},${uimm6-256} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM6_256), 0 } },
    & ifmt_p_sra_2, { 0x40005013 }
  },
/* slt ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_slt, { 0x2013 }
  },
/* sltu ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_sltu, { 0x3013 }
  },
/* sgt ${rd},${rs2},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (RS1), 0 } },
    & ifmt_p_sgt, { 0x2033 }
  },
/* sgtu ${rd},${rs2},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), ',', OP (RS1), 0 } },
    & ifmt_p_sgtu, { 0x3033 }
  },
/* or ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_or, { 0x6013 }
  },
/* xor ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_xor, { 0x4013 }
  },
/* addw ${rd},${rs1},${imm-lo12-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (IMM_LO12_ABS), 0 } },
    & ifmt_p_addw, { 0x1b }
  },
/* sllw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_sllw, { 0x101b }
  },
/* srlw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_srlw, { 0x501b }
  },
/* sraw ${rd},${rs1},${uimm5-245} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), ',', OP (UIMM5_245), 0 } },
    & ifmt_p_sraw, { 0x4000501b }
  },
/* lb ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lb, { 0x3 }
  },
/* lh ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lh, { 0x1003 }
  },
/* lw ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lw, { 0x2003 }
  },
/* lbu ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lbu, { 0x4003 }
  },
/* lhu ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lhu, { 0x5003 }
  },
/* sb ${rs2},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_sb, { 0x23 }
  },
/* sh ${rs2},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_sh, { 0x1023 }
  },
/* sw ${rs2},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_sw, { 0x2023 }
  },
/* lwu ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_lwu, { 0x6003 }
  },
/* ld ${rd},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_ld, { 0x3003 }
  },
/* sd ${rs2},($rs1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', '(', OP (RS1), ')', 0 } },
    & ifmt_p_sd, { 0x3023 }
  },
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_nop, { 0x13 }
  },
/* li ${rd},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (IMM_LO12), 0 } },
    & ifmt_p_li, { 0x13 }
  },
/* mv ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_mv, { 0x13 }
  },
/* move ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_move, { 0x13 }
  },
/* not ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_not, { 0xfff04013 }
  },
/* neg ${rd},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), 0 } },
    & ifmt_p_neg, { 0x40000033 }
  },
/* negw ${rd},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), 0 } },
    & ifmt_p_negw, { 0x4000003b }
  },
/* sext.w ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_sextw, { 0x1b }
  },
/* seqz ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_seqz, { 0x103013 }
  },
/* snez ${rd},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), 0 } },
    & ifmt_p_snez, { 0x3033 }
  },
/* sltz ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_sltz, { 0x2033 }
  },
/* sgtz ${rd},${rs2} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS2), 0 } },
    & ifmt_p_sgtz, { 0x2033 }
  },
/* beqz ${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_beqz, { 0x63 }
  },
/* bnez ${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bnez, { 0x1063 }
  },
/* blez ${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_p_blez, { 0x5063 }
  },
/* bgez ${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bgez, { 0x5063 }
  },
/* bltz ${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bltz, { 0x4063 }
  },
/* bgtz ${rs2},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bgtz, { 0x4063 }
  },
/* bgt ${rs2},${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bgt, { 0x4063 }
  },
/* ble ${rs2},${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_ble, { 0x5063 }
  },
/* bgtu ${rs2},${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bgtu, { 0x6063 }
  },
/* bleu ${rs2},${rs1},${branch13} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS2), ',', OP (RS1), ',', OP (BRANCH13), 0 } },
    & ifmt_p_bleu, { 0x7063 }
  },
/* j ${jmp21} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (JMP21), 0 } },
    & ifmt_p_j, { 0x6f }
  },
/* jal ${jmp21} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (JMP21), 0 } },
    & ifmt_p_jal, { 0xef }
  },
/* jr ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_jr_1, { 0x67 }
  },
/* jr ${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_p_jr_2, { 0x67 }
  },
/* jr ${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_p_jr_3, { 0x67 }
  },
/* jalr ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_jalr_2, { 0xe7 }
  },
/* jalr ${imm-lo12}(${rs1}) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (IMM_LO12), '(', OP (RS1), ')', 0 } },
    & ifmt_p_jalr_3, { 0xe7 }
  },
/* jalr ${rs1},${imm-lo12} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), ',', OP (IMM_LO12), 0 } },
    & ifmt_p_jalr_4, { 0xe7 }
  },
/* jalr ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_jalr_5, { 0x67 }
  },
/* ret */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_ret, { 0x8067 }
  },
/* unimp */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_unimp, { 0xc0001073 }
  },
/* fence */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_fence, { 0xff0000f }
  },
/* scall */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_scall, { 0x73 }
  },
/* sbreak */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_sbreak, { 0x100073 }
  },
/* rdinstret ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdinstret, { 0xc0202073 }
  },
/* rdcycle ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdcycle, { 0xc0002073 }
  },
/* rdtime ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdtime, { 0xc0102073 }
  },
/* rdinstreth ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdinstreth, { 0xc8202073 }
  },
/* rdcycleh ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdcycleh, { 0xc8002073 }
  },
/* rdtimeh ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_rdtimeh, { 0xc8102073 }
  },
/* csrr ${rd},${csr} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (CSR), 0 } },
    & ifmt_p_csrr, { 0x2073 }
  },
/* csrw ${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_p_csrw_1, { 0x1073 }
  },
/* csrs ${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_p_csrs_1, { 0x2073 }
  },
/* csrc ${csr},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (RS1), 0 } },
    & ifmt_p_csrc_1, { 0x3073 }
  },
/* csrw ${csr},${uimm5-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5_ABS), 0 } },
    & ifmt_p_csrw_2, { 0x5073 }
  },
/* csrs ${csr},${uimm5-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5_ABS), 0 } },
    & ifmt_p_csrs_2, { 0x6073 }
  },
/* csrc ${csr},${uimm5-abs} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5_ABS), 0 } },
    & ifmt_p_csrc_2, { 0x7073 }
  },
/* csrwi ${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_p_csrwi, { 0x5073 }
  },
/* csrsi ${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_p_csrsi, { 0x6073 }
  },
/* csrci ${csr},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (CSR), ',', OP (UIMM5), 0 } },
    & ifmt_p_csrci, { 0x7073 }
  },
/* sfence.vm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_sfence_vm, { 0x10400073 }
  },
/* sfence.vma */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_p_sfence_vma_1, { 0x12000073 }
  },
/* sfence.vma ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_sfence_vma_2, { 0x12000073 }
  },
/* frsr ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_frsr, { 0x302073 }
  },
/* fssr ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_fssr_1, { 0x301073 }
  },
/* fssr ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_fssr_2, { 0x301073 }
  },
/* frcsr ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_frcsr, { 0x302073 }
  },
/* fscsr ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_fscsr_1, { 0x301073 }
  },
/* fscsr ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_fscsr_2, { 0x301073 }
  },
/* frrm ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_frrm, { 0x202073 }
  },
/* fsrm ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_fsrm_1, { 0x201073 }
  },
/* fsrm ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_fsrm_2, { 0x201073 }
  },
/* fsrmi ${rd},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (UIMM5), 0 } },
    & ifmt_p_fsrmi_1, { 0x205073 }
  },
/* fsrmi ${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM5), 0 } },
    & ifmt_p_fsrmi_2, { 0x205073 }
  },
/* frflags ${rd} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), 0 } },
    & ifmt_p_frflags, { 0x102073 }
  },
/* fsflags ${rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (RS1), 0 } },
    & ifmt_p_fsflags_1, { 0x101073 }
  },
/* fsflags ${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RS1), 0 } },
    & ifmt_p_fsflags_2, { 0x101073 }
  },
/* fsflagsi ${rd},${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (UIMM5), 0 } },
    & ifmt_p_fsflagsi_1, { 0x105073 }
  },
/* fsflagsi ${uimm5} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (UIMM5), 0 } },
    & ifmt_p_fsflagsi_2, { 0x105073 }
  },
/* fmv.x.w ${rd},${fl-rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (RD), ',', OP (FL_RS1), 0 } },
    & ifmt_p_fmv_x_w, { 0xe0000053 }
  },
/* fmv.w.x ${fl-rd},${rs1} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (RS1), 0 } },
    & ifmt_p_fmv_w_x, { 0xf0000053 }
  },
/* fmv.s ${fl-rd},${fl-tied-regs2419} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_TIED_REGS2419), 0 } },
    & ifmt_p_fmvs, { 0x20000053 }
  },
/* fabs.s ${fl-rd},${fl-tied-regs2419} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_TIED_REGS2419), 0 } },
    & ifmt_p_fabss, { 0x20002053 }
  },
/* fneg.s ${fl-rd},${fl-tied-regs2419} */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (FL_RD), ',', OP (FL_TIED_REGS2419), 0 } },
    & ifmt_p_fnegs, { 0x20001053 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (const CGEN_INSN *insn ATTRIBUTE_UNUSED)
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (const CGEN_INSN *insn)
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (const char *mnem)
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (const char *buf ATTRIBUTE_UNUSED,
		     CGEN_INSN_INT value ATTRIBUTE_UNUSED)
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
riscv_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (riscv_cgen_macro_insn_table) /
		    sizeof (riscv_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & riscv_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & riscv_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      riscv_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & riscv_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      riscv_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
