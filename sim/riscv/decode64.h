/* Decode header for riscv64bf_rv64.

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

#ifndef RISCV64BF_RV64_DECODE_H
#define RISCV64BF_RV64_DECODE_H

extern const IDESC *riscv64bf_rv64_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void riscv64bf_rv64_init_idesc_table (SIM_CPU *);
extern void riscv64bf_rv64_sem_init_idesc_table (SIM_CPU *);
extern void riscv64bf_rv64_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family riscv64bf.  */
typedef enum riscv64bf_rv64_insn_type {
  RISCV64BF_RV64_INSN_X_INVALID, RISCV64BF_RV64_INSN_X_AFTER, RISCV64BF_RV64_INSN_X_BEFORE, RISCV64BF_RV64_INSN_X_CTI_CHAIN
 , RISCV64BF_RV64_INSN_X_CHAIN, RISCV64BF_RV64_INSN_X_BEGIN, RISCV64BF_RV64_INSN_C_ADDI16SP, RISCV64BF_RV64_INSN_C_ADDI4SPN
 , RISCV64BF_RV64_INSN_C_NOP, RISCV64BF_RV64_INSN_C_EBREAK, RISCV64BF_RV64_INSN_C_UNIMP, RISCV64BF_RV64_INSN_C_JR
 , RISCV64BF_RV64_INSN_C_JALR, RISCV64BF_RV64_INSN_C_MV, RISCV64BF_RV64_INSN_C_ADD, RISCV64BF_RV64_INSN_C_AND
 , RISCV64BF_RV64_INSN_C_OR, RISCV64BF_RV64_INSN_C_XOR, RISCV64BF_RV64_INSN_C_SUB, RISCV64BF_RV64_INSN_C_LI
 , RISCV64BF_RV64_INSN_C_LUI, RISCV64BF_RV64_INSN_C_ADDI, RISCV64BF_RV64_INSN_C_SLLI, RISCV64BF_RV64_INSN_C_LWSP
 , RISCV64BF_RV64_INSN_C_SWSP, RISCV64BF_RV64_INSN_C_LW, RISCV64BF_RV64_INSN_C_SW, RISCV64BF_RV64_INSN_C_SRLI
 , RISCV64BF_RV64_INSN_C_SRAI, RISCV64BF_RV64_INSN_C_ANDI, RISCV64BF_RV64_INSN_C_BEQZ, RISCV64BF_RV64_INSN_C_BNEZ
 , RISCV64BF_RV64_INSN_C_J, RISCV64BF_RV64_INSN_C_SLLI64, RISCV64BF_RV64_INSN_C_SRLI64, RISCV64BF_RV64_INSN_C_SRAI64
 , RISCV64BF_RV64_INSN_C_ADDW, RISCV64BF_RV64_INSN_C_SUBW, RISCV64BF_RV64_INSN_C_ADDIW, RISCV64BF_RV64_INSN_C_LDSP
 , RISCV64BF_RV64_INSN_C_SDSP, RISCV64BF_RV64_INSN_C_LD, RISCV64BF_RV64_INSN_C_SD, RISCV64BF_RV64_INSN_C_FLDSP
 , RISCV64BF_RV64_INSN_C_FSDSP, RISCV64BF_RV64_INSN_C_FSD, RISCV64BF_RV64_INSN_C_FLD, RISCV64BF_RV64_INSN_LUI
 , RISCV64BF_RV64_INSN_AUIPC, RISCV64BF_RV64_INSN_JAL, RISCV64BF_RV64_INSN_JALR, RISCV64BF_RV64_INSN_BEQ
 , RISCV64BF_RV64_INSN_BNE, RISCV64BF_RV64_INSN_BLT, RISCV64BF_RV64_INSN_BGE, RISCV64BF_RV64_INSN_BLTU
 , RISCV64BF_RV64_INSN_BGEU, RISCV64BF_RV64_INSN_LB, RISCV64BF_RV64_INSN_LH, RISCV64BF_RV64_INSN_LW
 , RISCV64BF_RV64_INSN_LBU, RISCV64BF_RV64_INSN_LHU, RISCV64BF_RV64_INSN_SB, RISCV64BF_RV64_INSN_SH
 , RISCV64BF_RV64_INSN_SW, RISCV64BF_RV64_INSN_ADDI, RISCV64BF_RV64_INSN_SLTI, RISCV64BF_RV64_INSN_SLTIU
 , RISCV64BF_RV64_INSN_XORI, RISCV64BF_RV64_INSN_ORI, RISCV64BF_RV64_INSN_ANDI, RISCV64BF_RV64_INSN_SLLI_SHIFT5
 , RISCV64BF_RV64_INSN_SRLI_SHIFT5, RISCV64BF_RV64_INSN_SRAI_SHIFT5, RISCV64BF_RV64_INSN_ADD, RISCV64BF_RV64_INSN_SUB
 , RISCV64BF_RV64_INSN_SLL, RISCV64BF_RV64_INSN_SLT, RISCV64BF_RV64_INSN_SLTU, RISCV64BF_RV64_INSN_XOR
 , RISCV64BF_RV64_INSN_SRL, RISCV64BF_RV64_INSN_SRA, RISCV64BF_RV64_INSN_OR, RISCV64BF_RV64_INSN_AND
 , RISCV64BF_RV64_INSN_FENCE, RISCV64BF_RV64_INSN_SFENCE_VM, RISCV64BF_RV64_INSN_SFENCE_VMA, RISCV64BF_RV64_INSN_FENCE_TSO
 , RISCV64BF_RV64_INSN_FENCE_I, RISCV64BF_RV64_INSN_ECALL, RISCV64BF_RV64_INSN_EBREAK, RISCV64BF_RV64_INSN_CSRRW
 , RISCV64BF_RV64_INSN_CSRRS, RISCV64BF_RV64_INSN_CSRRC, RISCV64BF_RV64_INSN_CSRRWI, RISCV64BF_RV64_INSN_CSRRSI
 , RISCV64BF_RV64_INSN_CSRRCI, RISCV64BF_RV64_INSN_URET, RISCV64BF_RV64_INSN_SRET, RISCV64BF_RV64_INSN_HRET
 , RISCV64BF_RV64_INSN_MRET, RISCV64BF_RV64_INSN_DRET, RISCV64BF_RV64_INSN_WFI, RISCV64BF_RV64_INSN_LWU
 , RISCV64BF_RV64_INSN_LD, RISCV64BF_RV64_INSN_SD, RISCV64BF_RV64_INSN_SLLI_SHIFT6, RISCV64BF_RV64_INSN_SRLI_SHIFT6
 , RISCV64BF_RV64_INSN_SRAI_SHIFT6, RISCV64BF_RV64_INSN_ADDIW, RISCV64BF_RV64_INSN_SLLIW_SHIFT5, RISCV64BF_RV64_INSN_SRLIW_SHIFT5
 , RISCV64BF_RV64_INSN_SRAIW_SHIFT5, RISCV64BF_RV64_INSN_ADDW, RISCV64BF_RV64_INSN_SUBW, RISCV64BF_RV64_INSN_SLLW
 , RISCV64BF_RV64_INSN_SRLW, RISCV64BF_RV64_INSN_SRAW, RISCV64BF_RV64_INSN_MUL, RISCV64BF_RV64_INSN_MULH
 , RISCV64BF_RV64_INSN_MULHSU, RISCV64BF_RV64_INSN_MULHU, RISCV64BF_RV64_INSN_DIV, RISCV64BF_RV64_INSN_DIVU
 , RISCV64BF_RV64_INSN_REM, RISCV64BF_RV64_INSN_REMU, RISCV64BF_RV64_INSN_MULW, RISCV64BF_RV64_INSN_DIVW
 , RISCV64BF_RV64_INSN_DIVUW, RISCV64BF_RV64_INSN_REMW, RISCV64BF_RV64_INSN_REMUW, RISCV64BF_RV64_INSN_LR_W
 , RISCV64BF_RV64_INSN_LR_W_AQ, RISCV64BF_RV64_INSN_LR_W_RL, RISCV64BF_RV64_INSN_LR_W_AQRL, RISCV64BF_RV64_INSN_SC_W
 , RISCV64BF_RV64_INSN_SC_W_AQ, RISCV64BF_RV64_INSN_SC_W_RL, RISCV64BF_RV64_INSN_SC_W_AQRL, RISCV64BF_RV64_INSN_AMOSWAP_W
 , RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, RISCV64BF_RV64_INSN_AMOSWAP_W_RL, RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, RISCV64BF_RV64_INSN_AMOADD_W
 , RISCV64BF_RV64_INSN_AMOADD_W_AQ, RISCV64BF_RV64_INSN_AMOADD_W_RL, RISCV64BF_RV64_INSN_AMOADD_W_AQRL, RISCV64BF_RV64_INSN_AMOXOR_W
 , RISCV64BF_RV64_INSN_AMOXOR_W_AQ, RISCV64BF_RV64_INSN_AMOXOR_W_RL, RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, RISCV64BF_RV64_INSN_AMOAND_W
 , RISCV64BF_RV64_INSN_AMOAND_W_AQ, RISCV64BF_RV64_INSN_AMOAND_W_RL, RISCV64BF_RV64_INSN_AMOAND_W_AQRL, RISCV64BF_RV64_INSN_AMOOR_W
 , RISCV64BF_RV64_INSN_AMOOR_W_AQ, RISCV64BF_RV64_INSN_AMOOR_W_RL, RISCV64BF_RV64_INSN_AMOOR_W_AQRL, RISCV64BF_RV64_INSN_AMOMIN_W
 , RISCV64BF_RV64_INSN_AMOMIN_W_AQ, RISCV64BF_RV64_INSN_AMOMIN_W_RL, RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, RISCV64BF_RV64_INSN_AMOMAX_W
 , RISCV64BF_RV64_INSN_AMOMAX_W_AQ, RISCV64BF_RV64_INSN_AMOMAX_W_RL, RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, RISCV64BF_RV64_INSN_AMOMINU_W
 , RISCV64BF_RV64_INSN_AMOMINU_W_AQ, RISCV64BF_RV64_INSN_AMOMINU_W_RL, RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, RISCV64BF_RV64_INSN_AMOMAXU_W
 , RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, RISCV64BF_RV64_INSN_AMOMAXU_W_RL, RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, RISCV64BF_RV64_INSN_LR_D
 , RISCV64BF_RV64_INSN_LR_D_AQ, RISCV64BF_RV64_INSN_LR_D_RL, RISCV64BF_RV64_INSN_LR_D_AQRL, RISCV64BF_RV64_INSN_SC_D
 , RISCV64BF_RV64_INSN_SC_D_AQ, RISCV64BF_RV64_INSN_SC_D_RL, RISCV64BF_RV64_INSN_SC_D_AQRL, RISCV64BF_RV64_INSN_AMOSWAP_D
 , RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, RISCV64BF_RV64_INSN_AMOSWAP_D_RL, RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, RISCV64BF_RV64_INSN_AMOADD_D
 , RISCV64BF_RV64_INSN_AMOADD_D_AQ, RISCV64BF_RV64_INSN_AMOADD_D_RL, RISCV64BF_RV64_INSN_AMOADD_D_AQRL, RISCV64BF_RV64_INSN_AMOXOR_D
 , RISCV64BF_RV64_INSN_AMOXOR_D_AQ, RISCV64BF_RV64_INSN_AMOXOR_D_RL, RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, RISCV64BF_RV64_INSN_AMOAND_D
 , RISCV64BF_RV64_INSN_AMOAND_D_AQ, RISCV64BF_RV64_INSN_AMOAND_D_RL, RISCV64BF_RV64_INSN_AMOAND_D_AQRL, RISCV64BF_RV64_INSN_AMOOR_D
 , RISCV64BF_RV64_INSN_AMOOR_D_AQ, RISCV64BF_RV64_INSN_AMOOR_D_RL, RISCV64BF_RV64_INSN_AMOOR_D_AQRL, RISCV64BF_RV64_INSN_AMOMIN_D
 , RISCV64BF_RV64_INSN_AMOMIN_D_AQ, RISCV64BF_RV64_INSN_AMOMIN_D_RL, RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, RISCV64BF_RV64_INSN_AMOMAX_D
 , RISCV64BF_RV64_INSN_AMOMAX_D_AQ, RISCV64BF_RV64_INSN_AMOMAX_D_RL, RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, RISCV64BF_RV64_INSN_AMOMINU_D
 , RISCV64BF_RV64_INSN_AMOMINU_D_AQ, RISCV64BF_RV64_INSN_AMOMINU_D_RL, RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, RISCV64BF_RV64_INSN_AMOMAXU_D
 , RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, RISCV64BF_RV64_INSN_AMOMAXU_D_RL, RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, RISCV64BF_RV64_INSN_FLW
 , RISCV64BF_RV64_INSN_FSW, RISCV64BF_RV64_INSN_FMADD_S, RISCV64BF_RV64_INSN_FMSUB_S, RISCV64BF_RV64_INSN_FNMSUB_S
 , RISCV64BF_RV64_INSN_FNMADD_S, RISCV64BF_RV64_INSN_FADD_S, RISCV64BF_RV64_INSN_FSUB_S, RISCV64BF_RV64_INSN_FMUL_S
 , RISCV64BF_RV64_INSN_FDIV_S, RISCV64BF_RV64_INSN_FSGNJ_S, RISCV64BF_RV64_INSN_FSGNJN_S, RISCV64BF_RV64_INSN_FSGNJX_S
 , RISCV64BF_RV64_INSN_FMIN_S, RISCV64BF_RV64_INSN_FMAX_S, RISCV64BF_RV64_INSN_FEQ_S, RISCV64BF_RV64_INSN_FLT_S
 , RISCV64BF_RV64_INSN_FLE_S, RISCV64BF_RV64_INSN_FSQRT_S, RISCV64BF_RV64_INSN_FCVT_W_S, RISCV64BF_RV64_INSN_FCVT_WU_S
 , RISCV64BF_RV64_INSN_FMV_X_W, RISCV64BF_RV64_INSN_FCLASS_S, RISCV64BF_RV64_INSN_FCVT_S_W, RISCV64BF_RV64_INSN_FCVT_S_WU
 , RISCV64BF_RV64_INSN_FMV_W_X, RISCV64BF_RV64_INSN_FCVT_S_L, RISCV64BF_RV64_INSN_FCVT_S_LU, RISCV64BF_RV64_INSN_FCVT_L_S
 , RISCV64BF_RV64_INSN_FCVT_LU_S, RISCV64BF_RV64_INSN_FLD, RISCV64BF_RV64_INSN_FSD, RISCV64BF_RV64_INSN_FMADD_D
 , RISCV64BF_RV64_INSN_FMSUB_D, RISCV64BF_RV64_INSN_FNMSUB_D, RISCV64BF_RV64_INSN_FNMADD_D, RISCV64BF_RV64_INSN_FADD_D
 , RISCV64BF_RV64_INSN_FSUB_D, RISCV64BF_RV64_INSN_FMUL_D, RISCV64BF_RV64_INSN_FDIV_D, RISCV64BF_RV64_INSN_FSGNJ_D
 , RISCV64BF_RV64_INSN_FSGNJN_D, RISCV64BF_RV64_INSN_FSGNJX_D, RISCV64BF_RV64_INSN_FMIN_D, RISCV64BF_RV64_INSN_FMAX_D
 , RISCV64BF_RV64_INSN_FEQ_D, RISCV64BF_RV64_INSN_FLT_D, RISCV64BF_RV64_INSN_FLE_D, RISCV64BF_RV64_INSN_FSQRT_D
 , RISCV64BF_RV64_INSN_FCVT_W_D, RISCV64BF_RV64_INSN_FCVT_WU_D, RISCV64BF_RV64_INSN_FCLASS_D, RISCV64BF_RV64_INSN_FCVT_D_W
 , RISCV64BF_RV64_INSN_FCVT_D_WU, RISCV64BF_RV64_INSN_FCVT_S_D, RISCV64BF_RV64_INSN_FCVT_D_S, RISCV64BF_RV64_INSN_FCVT_L_D
 , RISCV64BF_RV64_INSN_FCVT_LU_D, RISCV64BF_RV64_INSN_FMV_X_D, RISCV64BF_RV64_INSN_FCVT_D_L, RISCV64BF_RV64_INSN_FCVT_D_LU
 , RISCV64BF_RV64_INSN_FMV_D_X, RISCV64BF_RV64_INSN_FLQ, RISCV64BF_RV64_INSN_FSQ, RISCV64BF_RV64_INSN_FMADD_Q
 , RISCV64BF_RV64_INSN_FMSUB_Q, RISCV64BF_RV64_INSN_FNMSUB_Q, RISCV64BF_RV64_INSN_FNMADD_Q, RISCV64BF_RV64_INSN_FADD_Q
 , RISCV64BF_RV64_INSN_FSUB_Q, RISCV64BF_RV64_INSN_FMUL_Q, RISCV64BF_RV64_INSN_FDIV_Q, RISCV64BF_RV64_INSN_FSGNJ_Q
 , RISCV64BF_RV64_INSN_FSGNJN_Q, RISCV64BF_RV64_INSN_FSGNJX_Q, RISCV64BF_RV64_INSN_FMIN_Q, RISCV64BF_RV64_INSN_FMAX_Q
 , RISCV64BF_RV64_INSN_FEQ_Q, RISCV64BF_RV64_INSN_FLT_Q, RISCV64BF_RV64_INSN_FLE_Q, RISCV64BF_RV64_INSN_FSQRT_Q
 , RISCV64BF_RV64_INSN_FCVT_W_Q, RISCV64BF_RV64_INSN_FCVT_WU_Q, RISCV64BF_RV64_INSN_FCLASS_Q, RISCV64BF_RV64_INSN_FCVT_Q_W
 , RISCV64BF_RV64_INSN_FCVT_Q_WU, RISCV64BF_RV64_INSN_FCVT_S_Q, RISCV64BF_RV64_INSN_FCVT_D_Q, RISCV64BF_RV64_INSN_FCVT_Q_S
 , RISCV64BF_RV64_INSN_FCVT_Q_D, RISCV64BF_RV64_INSN_FCVT_L_Q, RISCV64BF_RV64_INSN_FCVT_LU_Q, RISCV64BF_RV64_INSN_FCVT_Q_L
 , RISCV64BF_RV64_INSN_FCVT_Q_LU, RISCV64BF_RV64_INSN__MAX
} RISCV64BF_RV64_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family riscv64bf.  */
typedef enum riscv64bf_rv64_sfmt_type {
  RISCV64BF_RV64_SFMT_EMPTY, RISCV64BF_RV64_SFMT_C_ADDI16SP, RISCV64BF_RV64_SFMT_C_ADDI4SPN, RISCV64BF_RV64_SFMT_C_NOP
 , RISCV64BF_RV64_SFMT_C_EBREAK, RISCV64BF_RV64_SFMT_C_JR, RISCV64BF_RV64_SFMT_C_JALR, RISCV64BF_RV64_SFMT_C_MV
 , RISCV64BF_RV64_SFMT_C_ADD, RISCV64BF_RV64_SFMT_C_AND, RISCV64BF_RV64_SFMT_C_LI, RISCV64BF_RV64_SFMT_C_LUI
 , RISCV64BF_RV64_SFMT_C_ADDI, RISCV64BF_RV64_SFMT_C_SLLI, RISCV64BF_RV64_SFMT_C_LWSP, RISCV64BF_RV64_SFMT_C_SWSP
 , RISCV64BF_RV64_SFMT_C_LW, RISCV64BF_RV64_SFMT_C_SW, RISCV64BF_RV64_SFMT_C_SRLI, RISCV64BF_RV64_SFMT_C_ANDI
 , RISCV64BF_RV64_SFMT_C_BEQZ, RISCV64BF_RV64_SFMT_C_J, RISCV64BF_RV64_SFMT_C_ADDIW, RISCV64BF_RV64_SFMT_C_LDSP
 , RISCV64BF_RV64_SFMT_C_SDSP, RISCV64BF_RV64_SFMT_C_LD, RISCV64BF_RV64_SFMT_C_SD, RISCV64BF_RV64_SFMT_C_FLDSP
 , RISCV64BF_RV64_SFMT_C_FSDSP, RISCV64BF_RV64_SFMT_C_FSD, RISCV64BF_RV64_SFMT_C_FLD, RISCV64BF_RV64_SFMT_LUI
 , RISCV64BF_RV64_SFMT_AUIPC, RISCV64BF_RV64_SFMT_JAL, RISCV64BF_RV64_SFMT_JALR, RISCV64BF_RV64_SFMT_BEQ
 , RISCV64BF_RV64_SFMT_LB, RISCV64BF_RV64_SFMT_LH, RISCV64BF_RV64_SFMT_LW, RISCV64BF_RV64_SFMT_LBU
 , RISCV64BF_RV64_SFMT_LHU, RISCV64BF_RV64_SFMT_SB, RISCV64BF_RV64_SFMT_SH, RISCV64BF_RV64_SFMT_SW
 , RISCV64BF_RV64_SFMT_ADDI, RISCV64BF_RV64_SFMT_SLLI_SHIFT5, RISCV64BF_RV64_SFMT_ADD, RISCV64BF_RV64_SFMT_LWU
 , RISCV64BF_RV64_SFMT_LD, RISCV64BF_RV64_SFMT_SD, RISCV64BF_RV64_SFMT_SLLI_SHIFT6, RISCV64BF_RV64_SFMT_MULH
 , RISCV64BF_RV64_SFMT_LR_W, RISCV64BF_RV64_SFMT_SC_W, RISCV64BF_RV64_SFMT_AMOSWAP_W, RISCV64BF_RV64_SFMT_AMOMIN_W
 , RISCV64BF_RV64_SFMT_LR_D, RISCV64BF_RV64_SFMT_SC_D, RISCV64BF_RV64_SFMT_AMOSWAP_D, RISCV64BF_RV64_SFMT_AMOMIN_D
 , RISCV64BF_RV64_SFMT_FLW, RISCV64BF_RV64_SFMT_FSW, RISCV64BF_RV64_SFMT_FMADD_S, RISCV64BF_RV64_SFMT_FADD_S
 , RISCV64BF_RV64_SFMT_FSGNJ_S, RISCV64BF_RV64_SFMT_FMIN_S, RISCV64BF_RV64_SFMT_FEQ_S, RISCV64BF_RV64_SFMT_FSQRT_S
 , RISCV64BF_RV64_SFMT_FCVT_W_S, RISCV64BF_RV64_SFMT_FMV_X_W, RISCV64BF_RV64_SFMT_FCVT_S_W, RISCV64BF_RV64_SFMT_FMV_W_X
 , RISCV64BF_RV64_SFMT_FLD, RISCV64BF_RV64_SFMT_FSD, RISCV64BF_RV64_SFMT_FCVT_D_S
} RISCV64BF_RV64_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int riscv64bf_model_rv64gc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64i_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64ic_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64im_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64imc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64g_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv64bf_model_rv64gqc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void riscv64bf_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void riscv64bf_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* RISCV64BF_RV64_DECODE_H */
