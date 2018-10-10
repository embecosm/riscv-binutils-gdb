/* CPU family header for riscvbf32.

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

#ifndef CPU_RISCVBF32_H
#define CPU_RISCVBF32_H

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
#define GET_H_GPR(index) riscvbf32_h_gpr_get_handler (current_cpu, index)
#define SET_H_GPR(index, x) \
do { \
riscvbf32_h_gpr_set_handler (current_cpu, (index), (x));\
;} while (0)
  /* CSRs */
  UDI h_csr[64];
#define GET_H_CSR(index) riscvbf32_h_csr_get_handler (current_cpu, index)
#define SET_H_CSR(index, x) \
do { \
riscvbf32_h_csr_set_handler (current_cpu, (index), (x));\
;} while (0)
  /* Floating Point Registers */
  DI h_fpr[64];
#define GET_H_FPR(a1) CPU (h_fpr)[a1]
#define SET_H_FPR(a1, x) (CPU (h_fpr)[a1] = (x))
  } hardware;
#define CPU_CGEN_HW(cpu) (& (cpu)->cpu_data.hardware)
} RISCVBF32_CPU_DATA;

/* Virtual regs.  */

#define GET_H_GPR_NOT_ZERO(index) GET_H_GPR (index)
#define SET_H_GPR_NOT_ZERO(index, x) \
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
USI riscvbf32_h_pc_get (SIM_CPU *);
void riscvbf32_h_pc_set (SIM_CPU *, USI);
DI riscvbf32_h_gpr_get (SIM_CPU *, UINT);
void riscvbf32_h_gpr_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_gpr_not_zero_get (SIM_CPU *, UINT);
void riscvbf32_h_gpr_not_zero_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_gpr_not_zero_or_sp_get (SIM_CPU *, UINT);
void riscvbf32_h_gpr_not_zero_or_sp_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_zero_get (SIM_CPU *, UINT);
void riscvbf32_h_zero_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_sp_get (SIM_CPU *, UINT);
void riscvbf32_h_sp_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_c_gpr_get (SIM_CPU *, UINT);
void riscvbf32_h_c_gpr_set (SIM_CPU *, UINT, DI);
UDI riscvbf32_h_csr_get (SIM_CPU *, UINT);
void riscvbf32_h_csr_set (SIM_CPU *, UINT, UDI);
DI riscvbf32_h_fpr_get (SIM_CPU *, UINT);
void riscvbf32_h_fpr_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_c_fpr_get (SIM_CPU *, UINT);
void riscvbf32_h_c_fpr_set (SIM_CPU *, UINT, DI);
DI riscvbf32_h_opcode7_get (SIM_CPU *);
void riscvbf32_h_opcode7_set (SIM_CPU *, DI);
DI riscvbf32_h_copcode2_get (SIM_CPU *);
void riscvbf32_h_copcode2_set (SIM_CPU *, DI);

/* These must be hand-written.  */
extern CPUREG_FETCH_FN riscvbf32_fetch_register;
extern CPUREG_STORE_FN riscvbf32_store_register;

typedef struct {
  int empty;
} MODEL_RISCV_DATA;

/* Instruction argument buffer.  */

union sem_fields {
  struct { /*  */
    int empty;
  } sfmt_empty;
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

#endif /* CPU_RISCVBF32_H */
