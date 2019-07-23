/* CPU family header for riscv64bf.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright (C) 1996-2017 Free Software Foundation, Inc.

This file is part of the GNU simulators.

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

#ifndef CPU_RISCV64BF_H
#define CPU_RISCV64BF_H

/* Maximum number of instructions that are fetched at a time.
   This is for LIW type instructions sets (e.g. m32r).  */
#define MAX_LIW_INSNS 1

/* Maximum number of instructions that can be executed in parallel.  */
#define MAX_PARALLEL_INSNS 1

/* The size of an "int" needed to hold an instruction word.
   This is usually 32 bits, but some architectures needs 64 bits.  */
typedef CGEN_INSN_INT CGEN_INSN_WORD;

#include "cgen-engine.h"

/* CPU state information.  */
typedef struct {
  /* Hardware elements.  */
  struct {
  /* program counter */
  USI h_pc;
#define GET_H_PC() CPU (h_pc)
#define SET_H_PC(x) \
do { \
CPU (h_pc) = (x);\
;} while (0)
  /* General Purpose Registers */
  DI h_gpr[64];
#define GET_H_GPR(index) CPU (h_gpr[index])
#define SET_H_GPR(index, x) \
do { \
if ((((index)) != (0))) {\
CPU (h_gpr[(index)]) = (x);\
}\
;} while (0)
  /* CSRs */
  UDI h_csr[4096];
#define GET_H_CSR(index) CPU (h_csr[index])
#define SET_H_CSR(index, x) \
do { \
CPU (h_csr[(index)]) = (x);\
;} while (0)
  /* Floating Point Registers */
  DI h_fpr[32];
#define GET_H_FPR(a1) CPU (h_fpr)[a1]
#define SET_H_FPR(a1, x) (CPU (h_fpr)[a1] = (x))
  } hardware;
#define CPU_CGEN_HW(cpu) (& (cpu)->cpu_data.hardware)
} RISCV64BF_CPU_DATA;

/* Virtual regs.  */

#define GET_H_XLEN() riscv64bf_h_xlen_get_handler (current_cpu)
#define SET_H_XLEN(x) \
do { \
((void) 0); /*nop*/\
;} while (0)
#define GET_H_GPR_NOT_ZERO(index) GET_H_GPR (index)
#define SET_H_GPR_NOT_ZERO(index, x) \
do { \
SET_H_GPR ((index), (x));\
;} while (0)
#define GET_H_GPR_NOT_SP(index) GET_H_GPR (index)
#define SET_H_GPR_NOT_SP(index, x) \
do { \
SET_H_GPR ((index), (x));\
;} while (0)
#define GET_H_GPR_NOT_ZERO_OR_SP(index) GET_H_GPR (index)
#define SET_H_GPR_NOT_ZERO_OR_SP(index, x) \
do { \
SET_H_GPR ((index), (x));\
;} while (0)
#define GET_H_ZERO(index) GET_H_GPR (index)
#define SET_H_ZERO(index, x) \
do { \
SET_H_GPR ((index), (x));\
;} while (0)
#define GET_H_SP(index) GET_H_GPR (index)
#define SET_H_SP(index, x) \
do { \
SET_H_GPR ((index), (x));\
;} while (0)
#define GET_H_C_GPR(index) GET_H_GPR (((index) + (8)))
#define SET_H_C_GPR(index, x) \
do { \
SET_H_GPR ((((index)) + (8)), (x));\
;} while (0)
#define GET_H_C_FPR(index) CPU (h_fpr[((index) + (8))])
#define SET_H_C_FPR(index, x) \
do { \
CPU (h_fpr[(((index)) + (8))]) = (x);\
;} while (0)
#define GET_H_OPCODE7() MAKEDI (0, 0)
#define SET_H_OPCODE7(x) \
do { \
((void) 0); /*nop*/\
;} while (0)
#define GET_H_COPCODE2() MAKEDI (0, 0)
#define SET_H_COPCODE2(x) \
do { \
((void) 0); /*nop*/\
;} while (0)

/* Cover fns for register access.  */
USI riscv64bf_h_pc_get (SIM_CPU *);
void riscv64bf_h_pc_set (SIM_CPU *, USI);
DI riscv64bf_h_xlen_get (SIM_CPU *);
void riscv64bf_h_xlen_set (SIM_CPU *, DI);
DI riscv64bf_h_gpr_get (SIM_CPU *, UINT);
void riscv64bf_h_gpr_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_gpr_not_zero_get (SIM_CPU *, UINT);
void riscv64bf_h_gpr_not_zero_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_gpr_not_sp_get (SIM_CPU *, UINT);
void riscv64bf_h_gpr_not_sp_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_gpr_not_zero_or_sp_get (SIM_CPU *, UINT);
void riscv64bf_h_gpr_not_zero_or_sp_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_zero_get (SIM_CPU *, UINT);
void riscv64bf_h_zero_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_sp_get (SIM_CPU *, UINT);
void riscv64bf_h_sp_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_c_gpr_get (SIM_CPU *, UINT);
void riscv64bf_h_c_gpr_set (SIM_CPU *, UINT, DI);
UDI riscv64bf_h_csr_get (SIM_CPU *, UINT);
void riscv64bf_h_csr_set (SIM_CPU *, UINT, UDI);
DI riscv64bf_h_fpr_get (SIM_CPU *, UINT);
void riscv64bf_h_fpr_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_c_fpr_get (SIM_CPU *, UINT);
void riscv64bf_h_c_fpr_set (SIM_CPU *, UINT, DI);
DI riscv64bf_h_opcode7_get (SIM_CPU *);
void riscv64bf_h_opcode7_set (SIM_CPU *, DI);
DI riscv64bf_h_copcode2_get (SIM_CPU *);
void riscv64bf_h_copcode2_set (SIM_CPU *, DI);

/* These must be hand-written.  */
extern CPUREG_FETCH_FN riscv64bf_fetch_register;
extern CPUREG_STORE_FN riscv64bf_store_register;

typedef struct {
  int empty;
} MODEL_RV64I_DATA;

typedef struct {
  int empty;
} MODEL_RV64IC_DATA;

typedef struct {
  int empty;
} MODEL_RV64IM_DATA;

typedef struct {
  int empty;
} MODEL_RV64IMC_DATA;

typedef struct {
  int empty;
} MODEL_RV64G_DATA;

typedef struct {
  int empty;
} MODEL_RV64GC_DATA;

typedef struct {
  int empty;
} MODEL_RV64GQC_DATA;

/* Instruction argument buffer.  */

union sem_fields {
  struct { /* no operands */
    int empty;
  } sfmt_empty;
  struct { /*  */
    DI f_imm12_121_81_102_61_71_21_111_53_0;
  } sfmt_c_j;
  struct { /*  */
    DI f_imm10_121_42_51_21_61_0000;
  } sfmt_c_addi16sp;
  struct { /*  */
    DI f_imm21_311_198_201_3010_0;
    UINT f_rd;
  } sfmt_jal;
  struct { /*  */
    DI f_uimm32_3120_000000000000;
    UINT f_rd;
  } sfmt_lui;
  struct { /*  */
    DI f_uimm9_93_123_000;
    UDI f_uimm5_65;
  } sfmt_c_sdsp;
  struct { /*  */
    DI f_uimm9_43_121_62_000;
    UDI f_uimm5_115;
  } sfmt_c_ldsp;
  struct { /*  */
    DI f_imm9_121_62_21_112_42_0;
    UDI f_uimm3_93;
  } sfmt_c_beqz;
  struct { /*  */
    DI f_imm6_121_65;
    UDI f_uimm3_93;
  } sfmt_c_andi;
  struct { /*  */
    UDI f_uimm3_93;
    UDI f_uimm6_121_65;
  } sfmt_c_srli;
  struct { /*  */
    DI f_uimm8_82_124_00;
    UDI f_uimm5_65;
  } sfmt_c_swsp;
  struct { /*  */
    DI f_uimm8_32_121_63_00;
    UDI f_uimm5_115;
  } sfmt_c_lwsp;
  struct { /*  */
    UDI f_uimm5_115;
    UDI f_uimm6_121_65;
  } sfmt_c_slli;
  struct { /*  */
    DI f_uimm18_121_65_000000000000;
    UDI f_uimm5_115;
  } sfmt_c_lui;
  struct { /*  */
    DI f_imm6_121_65;
    UDI f_uimm5_115;
  } sfmt_c_li;
  struct { /*  */
    UDI f_uimm5_115;
    UDI f_uimm5_65;
  } sfmt_c_mv;
  struct { /*  */
    DI f_uimm10_104_122_51_61_00;
    UDI f_uimm3_43;
  } sfmt_c_addi4spn;
  struct { /*  */
    UDI f_uimm6_256;
    UINT f_rd;
    UINT f_rs1;
  } sfmt_slli_shift6;
  struct { /*  */
    UINT f_rd;
    UINT f_rs1;
    UINT f_rs2;
  } sfmt_add;
  struct { /*  */
    UDI f_uimm5_245;
    UINT f_rd;
    UINT f_rs1;
  } sfmt_slli_shift5;
  struct { /*  */
    DI f_imm12_317_115;
    UINT f_rs1;
    UINT f_rs2;
  } sfmt_sb;
  struct { /*  */
    DI f_imm13_311_71_306_114_0;
    UINT f_rs1;
    UINT f_rs2;
  } sfmt_beq;
  struct { /*  */
    DI f_imm12_3112;
    UINT f_rd;
    UINT f_rs1;
  } sfmt_jalr;
  struct { /*  */
    DI f_uimm8_62_123_000;
    UDI f_uimm3_43;
    UDI f_uimm3_93;
  } sfmt_c_ld;
  struct { /*  */
    DI f_uimm7_51_123_61_00;
    UDI f_uimm3_43;
    UDI f_uimm3_93;
  } sfmt_c_lw;
#if WITH_SCACHE_PBB
  /* Writeback handler.  */
  struct {
    /* Pointer to argbuf entry for insn whose results need writing back.  */
    const struct argbuf *abuf;
  } write;
  /* x-before handler */
  struct {
    /*const SCACHE *insns[MAX_PARALLEL_INSNS];*/
    int first_p;
  } before;
  /* x-after handler */
  struct {
    int empty;
  } after;
  /* This entry is used to terminate each pbb.  */
  struct {
    /* Number of insns in pbb.  */
    int insn_count;
    /* Next pbb to execute.  */
    SCACHE *next;
    SCACHE *branch_target;
  } chain;
#endif
};

/* The ARGBUF struct.  */
struct argbuf {
  /* These are the baseclass definitions.  */
  IADDR addr;
  const IDESC *idesc;
  char trace_p;
  char profile_p;
  /* ??? Temporary hack for skip insns.  */
  char skip_count;
  char unused;
  /* cpu specific data follows */
  union sem semantic;
  int written;
  union sem_fields fields;
};

/* A cached insn.

   ??? SCACHE used to contain more than just argbuf.  We could delete the
   type entirely and always just use ARGBUF, but for future concerns and as
   a level of abstraction it is left in.  */

struct scache {
  struct argbuf argbuf;
};

/* Macros to simplify extraction, reading and semantic code.
   These define and assign the local vars that contain the insn's fields.  */

#define EXTRACT_IFMT_EMPTY_VARS \
  unsigned int length;
#define EXTRACT_IFMT_EMPTY_CODE \
  length = 0; \

#define EXTRACT_IFMT_C_ADDI16SP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  DI f_imm1_121; \
  UDI f_uimm2_42; \
  UDI f_uimm1_51; \
  UDI f_uimm1_21; \
  UDI f_uimm1_61; \
  DI f_imm10_121_42_51_21_61_0000; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_ADDI16SP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm2_42 = EXTRACT_LSB0_UINT (insn, 16, 4, 2); \
  f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1); \
  f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1); \
  f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1); \
{\
  f_imm10_121_42_51_21_61_0000 = ((((((((f_imm1_121) << (5))) | (((f_uimm2_42) << (3))))) | (((((f_uimm1_51) << (2))) | (((f_uimm1_21) << (1))))))) | (f_uimm1_61));\
}\
  f_imm10_121_42_51_21_61_0000 = ((f_imm10_121_42_51_21_61_0000) << (4));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_ADDI4SPN_VARS \
  UINT f_c_funct3; \
  UDI f_uimm4_104; \
  UDI f_uimm2_122; \
  UDI f_uimm1_51; \
  UDI f_uimm1_61; \
  DI f_uimm10_104_122_51_61_00; \
  UDI f_uimm3_43; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_ADDI4SPN_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm4_104 = EXTRACT_LSB0_UINT (insn, 16, 10, 4); \
  f_uimm2_122 = EXTRACT_LSB0_UINT (insn, 16, 12, 2); \
  f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1); \
  f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1); \
{\
  f_uimm10_104_122_51_61_00 = ((((((f_uimm4_104) << (4))) | (((f_uimm2_122) << (2))))) | (((((f_uimm1_51) << (1))) | (f_uimm1_61))));\
}\
  f_uimm10_104_122_51_61_00 = ((f_uimm10_104_122_51_61_00) << (2));\
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_NOP_VARS \
  UDI f_uimm16_1516; \
  unsigned int length;
#define EXTRACT_IFMT_C_NOP_CODE \
  length = 2; \
  f_uimm16_1516 = EXTRACT_LSB0_UINT (insn, 16, 15, 16); \

#define EXTRACT_IFMT_C_JR_VARS \
  UINT f_c_funct4; \
  UDI f_uimm5_115; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_JR_CODE \
  length = 2; \
  f_c_funct4 = EXTRACT_LSB0_UINT (insn, 16, 15, 4); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_MV_VARS \
  UINT f_c_funct4; \
  UDI f_uimm5_115; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_MV_CODE \
  length = 2; \
  f_c_funct4 = EXTRACT_LSB0_UINT (insn, 16, 15, 4); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_AND_VARS \
  UINT f_c_funct6; \
  UDI f_uimm3_93; \
  UDI f_uimm2_62; \
  UDI f_uimm3_43; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_AND_CODE \
  length = 2; \
  f_c_funct6 = EXTRACT_LSB0_UINT (insn, 16, 15, 6); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LI_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  DI f_imm1_121; \
  UDI f_uimm5_65; \
  DI f_imm6_121_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LI_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));\
}\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LUI_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  UDI f_uimm1_121; \
  UDI f_uimm5_65; \
  DI f_uimm18_121_65_000000000000; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LUI_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_uimm18_121_65_000000000000 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));\
}\
  f_uimm18_121_65_000000000000 = ((f_uimm18_121_65_000000000000) << (12));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SLLI_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  UDI f_uimm1_121; \
  UDI f_uimm5_65; \
  UDI f_uimm6_121_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SLLI_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_uimm6_121_65 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));\
}\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LWSP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  UDI f_uimm2_32; \
  UDI f_uimm1_121; \
  UDI f_uimm3_63; \
  DI f_uimm8_32_121_63_00; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LWSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm2_32 = EXTRACT_LSB0_UINT (insn, 16, 3, 2); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm3_63 = EXTRACT_LSB0_UINT (insn, 16, 6, 3); \
{\
  f_uimm8_32_121_63_00 = ((((((f_uimm2_32) << (4))) | (((f_uimm1_121) << (3))))) | (f_uimm3_63));\
}\
  f_uimm8_32_121_63_00 = ((f_uimm8_32_121_63_00) << (2));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SWSP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm2_82; \
  UDI f_uimm4_124; \
  DI f_uimm8_82_124_00; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SWSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm2_82 = EXTRACT_LSB0_UINT (insn, 16, 8, 2); \
  f_uimm4_124 = EXTRACT_LSB0_UINT (insn, 16, 12, 4); \
{\
  f_uimm8_82_124_00 = ((((f_uimm2_82) << (4))) | (f_uimm4_124));\
}\
  f_uimm8_82_124_00 = ((f_uimm8_82_124_00) << (2));\
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LW_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  UDI f_uimm1_51; \
  UDI f_uimm3_123; \
  UDI f_uimm1_61; \
  DI f_uimm7_51_123_61_00; \
  UDI f_uimm3_43; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LW_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1); \
  f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3); \
  f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1); \
{\
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));\
}\
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));\
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SRLI_VARS \
  UINT f_c_funct3; \
  UDI f_uimm2_112; \
  UDI f_uimm3_93; \
  UDI f_uimm1_121; \
  UDI f_uimm5_65; \
  UDI f_uimm6_121_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SRLI_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm2_112 = EXTRACT_LSB0_UINT (insn, 16, 11, 2); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_uimm6_121_65 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));\
}\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_ANDI_VARS \
  UINT f_c_funct3; \
  UDI f_uimm2_112; \
  UDI f_uimm3_93; \
  DI f_imm1_121; \
  UDI f_uimm5_65; \
  DI f_imm6_121_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_ANDI_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm2_112 = EXTRACT_LSB0_UINT (insn, 16, 11, 2); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));\
}\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_BEQZ_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  DI f_imm1_121; \
  UDI f_uimm2_62; \
  UDI f_uimm1_21; \
  UDI f_uimm2_112; \
  UDI f_uimm2_42; \
  DI f_imm9_121_62_21_112_42_0; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_BEQZ_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
  f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1); \
  f_uimm2_112 = EXTRACT_LSB0_UINT (insn, 16, 11, 2); \
  f_uimm2_42 = EXTRACT_LSB0_UINT (insn, 16, 4, 2); \
{\
  f_imm9_121_62_21_112_42_0 = ((((((((f_imm1_121) << (7))) | (((f_uimm2_62) << (5))))) | (((((f_uimm1_21) << (4))) | (((f_uimm2_112) << (2))))))) | (f_uimm2_42));\
}\
  f_imm9_121_62_21_112_42_0 = ((f_imm9_121_62_21_112_42_0) << (1));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_J_VARS \
  UINT f_c_funct3; \
  DI f_imm1_121; \
  UDI f_uimm1_81; \
  UDI f_uimm2_102; \
  UDI f_uimm1_61; \
  UDI f_uimm1_71; \
  UDI f_uimm1_21; \
  UDI f_uimm1_111; \
  UDI f_uimm3_53; \
  DI f_imm12_121_81_102_61_71_21_111_53_0; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_J_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm1_81 = EXTRACT_LSB0_UINT (insn, 16, 8, 1); \
  f_uimm2_102 = EXTRACT_LSB0_UINT (insn, 16, 10, 2); \
  f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1); \
  f_uimm1_71 = EXTRACT_LSB0_UINT (insn, 16, 7, 1); \
  f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1); \
  f_uimm1_111 = EXTRACT_LSB0_UINT (insn, 16, 11, 1); \
  f_uimm3_53 = EXTRACT_LSB0_UINT (insn, 16, 5, 3); \
{\
  f_imm12_121_81_102_61_71_21_111_53_0 = ((((((((f_imm1_121) << (10))) | (((f_uimm1_81) << (9))))) | (((((f_uimm2_102) << (7))) | (((f_uimm1_61) << (6))))))) | (((((((f_uimm1_71) << (5))) | (((f_uimm1_21) << (4))))) | (((((f_uimm1_111) << (3))) | (f_uimm3_53))))));\
}\
  f_imm12_121_81_102_61_71_21_111_53_0 = ((f_imm12_121_81_102_61_71_21_111_53_0) << (1));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SLLI64_VARS \
  UINT f_c_funct3; \
  UDI f_uimm1_121; \
  UDI f_uimm5_115; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SLLI64_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SRLI64_VARS \
  UINT f_c_funct3; \
  UDI f_uimm1_121; \
  UDI f_uimm2_112; \
  UDI f_uimm3_93; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SRLI64_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm2_112 = EXTRACT_LSB0_UINT (insn, 16, 11, 2); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_ADDIW_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  DI f_imm1_121; \
  UDI f_uimm5_65; \
  DI f_imm6_121_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_ADDIW_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1); \
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
{\
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));\
}\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LDSP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm5_115; \
  UDI f_uimm3_43; \
  UDI f_uimm1_121; \
  UDI f_uimm2_62; \
  DI f_uimm9_43_121_62_000; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LDSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
{\
  f_uimm9_43_121_62_000 = ((((((f_uimm3_43) << (3))) | (((f_uimm1_121) << (2))))) | (f_uimm2_62));\
}\
  f_uimm9_43_121_62_000 = ((f_uimm9_43_121_62_000) << (3));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_SDSP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  UDI f_uimm3_123; \
  DI f_uimm9_93_123_000; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_SDSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3); \
{\
  f_uimm9_93_123_000 = ((((f_uimm3_93) << (3))) | (f_uimm3_123));\
}\
  f_uimm9_93_123_000 = ((f_uimm9_93_123_000) << (3));\
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_LD_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  UDI f_uimm2_62; \
  UDI f_uimm3_123; \
  DI f_uimm8_62_123_000; \
  UDI f_uimm3_43; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_LD_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
  f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3); \
{\
  f_uimm8_62_123_000 = ((((f_uimm2_62) << (3))) | (f_uimm3_123));\
}\
  f_uimm8_62_123_000 = ((f_uimm8_62_123_000) << (3));\
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_FLDSP_VARS \
  UINT f_c_funct3; \
  UINT f_rd; \
  UDI f_uimm3_43; \
  UDI f_uimm1_121; \
  UDI f_uimm2_62; \
  DI f_uimm9_43_121_62_000; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_FLDSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 16, 11, 5); \
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
{\
  f_uimm9_43_121_62_000 = ((((((f_uimm3_43) << (3))) | (((f_uimm1_121) << (2))))) | (f_uimm2_62));\
}\
  f_uimm9_43_121_62_000 = ((f_uimm9_43_121_62_000) << (3));\
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_FSDSP_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  UDI f_uimm3_123; \
  DI f_uimm9_93_123_000; \
  UDI f_uimm5_65; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_FSDSP_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3); \
{\
  f_uimm9_93_123_000 = ((((f_uimm3_93) << (3))) | (f_uimm3_123));\
}\
  f_uimm9_93_123_000 = ((f_uimm9_93_123_000) << (3));\
  f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_C_FSD_VARS \
  UINT f_c_funct3; \
  UDI f_uimm3_93; \
  UDI f_uimm2_62; \
  UDI f_uimm3_123; \
  DI f_uimm8_62_123_000; \
  UDI f_uimm3_43; \
  UINT f_c_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_C_FSD_CODE \
  length = 2; \
  f_c_funct3 = EXTRACT_LSB0_UINT (insn, 16, 15, 3); \
  f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3); \
  f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2); \
  f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3); \
{\
  f_uimm8_62_123_000 = ((((f_uimm2_62) << (3))) | (f_uimm3_123));\
}\
  f_uimm8_62_123_000 = ((f_uimm8_62_123_000) << (3));\
  f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3); \
  f_c_opcode = EXTRACT_LSB0_UINT (insn, 16, 1, 2); \

#define EXTRACT_IFMT_LUI_VARS \
  DI f_uimm32_3120_000000000000; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_LUI_CODE \
  length = 4; \
  f_uimm32_3120_000000000000 = ((EXTRACT_LSB0_UINT (insn, 32, 31, 20)) << (12)); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_JAL_VARS \
  DI f_imm1_311; \
  UDI f_uimm8_198; \
  UDI f_uimm1_201; \
  UDI f_uimm10_3010; \
  DI f_imm21_311_198_201_3010_0; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_JAL_CODE \
  length = 4; \
  f_imm1_311 = EXTRACT_LSB0_SINT (insn, 32, 31, 1); \
  f_uimm8_198 = EXTRACT_LSB0_UINT (insn, 32, 19, 8); \
  f_uimm1_201 = EXTRACT_LSB0_UINT (insn, 32, 20, 1); \
  f_uimm10_3010 = EXTRACT_LSB0_UINT (insn, 32, 30, 10); \
  f_imm21_311_198_201_3010_0 = ((((((f_imm1_311) << (19))) | (((f_uimm8_198) << (11))))) | (((((f_uimm1_201) << (10))) | (f_uimm10_3010))));\
  f_imm21_311_198_201_3010_0 = ((f_imm21_311_198_201_3010_0) << (1));\
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_JALR_VARS \
  DI f_imm12_3112; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_JALR_CODE \
  length = 4; \
  f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_BEQ_VARS \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  DI f_imm1_311; \
  UDI f_uimm1_71; \
  UDI f_uimm6_306; \
  UDI f_uimm4_114; \
  DI f_imm13_311_71_306_114_0; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_BEQ_CODE \
  length = 4; \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_imm1_311 = EXTRACT_LSB0_SINT (insn, 32, 31, 1); \
  f_uimm1_71 = EXTRACT_LSB0_UINT (insn, 32, 7, 1); \
  f_uimm6_306 = EXTRACT_LSB0_UINT (insn, 32, 30, 6); \
  f_uimm4_114 = EXTRACT_LSB0_UINT (insn, 32, 11, 4); \
  f_imm13_311_71_306_114_0 = ((((((f_imm1_311) << (11))) | (((f_uimm1_71) << (10))))) | (((((f_uimm6_306) << (4))) | (f_uimm4_114))));\
  f_imm13_311_71_306_114_0 = ((f_imm13_311_71_306_114_0) << (1));\
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_SB_VARS \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  DI f_imm7_317; \
  UDI f_uimm5_115; \
  DI f_imm12_317_115; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_SB_CODE \
  length = 4; \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
{\
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));\
}\
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_SLLI_SHIFT5_VARS \
  UINT f_funct7; \
  UDI f_uimm5_245; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_SLLI_SHIFT5_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_uimm5_245 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_ADD_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_ADD_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FENCE_VARS \
  UDI f_uimm4_314; \
  UINT f_succ; \
  UINT f_pred; \
  UDI f_uimm20_1920; \
  unsigned int length;
#define EXTRACT_IFMT_FENCE_CODE \
  length = 4; \
  f_uimm4_314 = EXTRACT_LSB0_UINT (insn, 32, 31, 4); \
  f_succ = EXTRACT_LSB0_UINT (insn, 32, 27, 4); \
  f_pred = EXTRACT_LSB0_UINT (insn, 32, 23, 4); \
  f_uimm20_1920 = EXTRACT_LSB0_UINT (insn, 32, 19, 20); \

#define EXTRACT_IFMT_SFENCE_VM_VARS \
  UDI f_uimm12_3112; \
  UINT f_rs1; \
  UDI f_uimm15_1415; \
  unsigned int length;
#define EXTRACT_IFMT_SFENCE_VM_CODE \
  length = 4; \
  f_uimm12_3112 = EXTRACT_LSB0_UINT (insn, 32, 31, 12); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_uimm15_1415 = EXTRACT_LSB0_UINT (insn, 32, 14, 15); \

#define EXTRACT_IFMT_SFENCE_VMA_VARS \
  UDI f_uimm7_317; \
  UINT f_rs2; \
  UINT f_rs1; \
  UDI f_uimm15_1415; \
  unsigned int length;
#define EXTRACT_IFMT_SFENCE_VMA_CODE \
  length = 4; \
  f_uimm7_317 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_uimm15_1415 = EXTRACT_LSB0_UINT (insn, 32, 14, 15); \

#define EXTRACT_IFMT_FENCE_I_VARS \
  UDI f_uimm32_3132; \
  unsigned int length;
#define EXTRACT_IFMT_FENCE_I_CODE \
  length = 4; \
  f_uimm32_3132 = EXTRACT_LSB0_UINT (insn, 32, 31, 32); \

#define EXTRACT_IFMT_CSRRW_VARS \
  UINT f_csr; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_CSRRW_CODE \
  length = 4; \
  f_csr = EXTRACT_LSB0_UINT (insn, 32, 31, 12); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_CSRRWI_VARS \
  UINT f_csr; \
  UDI f_uimm5_195; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_CSRRWI_CODE \
  length = 4; \
  f_csr = EXTRACT_LSB0_UINT (insn, 32, 31, 12); \
  f_uimm5_195 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_SLLI_SHIFT6_VARS \
  UINT f_funct6; \
  UDI f_uimm6_256; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_SLLI_SHIFT6_CODE \
  length = 4; \
  f_funct6 = EXTRACT_LSB0_UINT (insn, 32, 31, 6); \
  f_uimm6_256 = EXTRACT_LSB0_UINT (insn, 32, 25, 6); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_LR_W_VARS \
  UINT f_funct5; \
  UINT f_aq; \
  UINT f_rl; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_LR_W_CODE \
  length = 4; \
  f_funct5 = EXTRACT_LSB0_UINT (insn, 32, 31, 5); \
  f_aq = EXTRACT_LSB0_UINT (insn, 32, 26, 1); \
  f_rl = EXTRACT_LSB0_UINT (insn, 32, 25, 1); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_SC_W_VARS \
  UINT f_funct5; \
  UINT f_aq; \
  UINT f_rl; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_SC_W_CODE \
  length = 4; \
  f_funct5 = EXTRACT_LSB0_UINT (insn, 32, 31, 5); \
  f_aq = EXTRACT_LSB0_UINT (insn, 32, 26, 1); \
  f_rl = EXTRACT_LSB0_UINT (insn, 32, 25, 1); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FLW_VARS \
  DI f_imm12_3112; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FLW_CODE \
  length = 4; \
  f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FSW_VARS \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  DI f_imm7_317; \
  UDI f_uimm5_115; \
  DI f_imm12_317_115; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FSW_CODE \
  length = 4; \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7); \
  f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
{\
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));\
}\
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FMADD_S_VARS \
  UINT f_rs3; \
  UINT f_fp2; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FMADD_S_CODE \
  length = 4; \
  f_rs3 = EXTRACT_LSB0_UINT (insn, 32, 31, 5); \
  f_fp2 = EXTRACT_LSB0_UINT (insn, 32, 26, 2); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FADD_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FADD_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FSGNJ_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FSGNJ_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FEQ_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FEQ_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FSQRT_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FSQRT_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FCVT_W_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FCVT_W_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FMV_X_W_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FMV_X_W_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FCVT_S_W_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FCVT_S_W_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FMV_W_X_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FMV_W_X_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

#define EXTRACT_IFMT_FCVT_D_S_VARS \
  UINT f_funct7; \
  UINT f_rs2; \
  UINT f_rs1; \
  UINT f_funct3; \
  UINT f_rd; \
  UINT f_opcode; \
  unsigned int length;
#define EXTRACT_IFMT_FCVT_D_S_CODE \
  length = 4; \
  f_funct7 = EXTRACT_LSB0_UINT (insn, 32, 31, 7); \
  f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5); \
  f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5); \
  f_funct3 = EXTRACT_LSB0_UINT (insn, 32, 14, 3); \
  f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5); \
  f_opcode = EXTRACT_LSB0_UINT (insn, 32, 6, 7); \

/* Collection of various things for the trace handler to use.  */

typedef struct trace_record {
  IADDR pc;
  /* FIXME:wip */
} TRACE_RECORD;

#endif /* CPU_RISCV64BF_H */
