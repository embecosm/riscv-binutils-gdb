/* Decode header for riscv32bf_rv32.

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

#ifndef RISCV32BF_RV32_DECODE_H
#define RISCV32BF_RV32_DECODE_H

extern const IDESC *riscv32bf_rv32_decode (SIM_CPU *, IADDR,
                                  CGEN_INSN_WORD, CGEN_INSN_WORD,
                                  ARGBUF *);
extern void riscv32bf_rv32_init_idesc_table (SIM_CPU *);
extern void riscv32bf_rv32_sem_init_idesc_table (SIM_CPU *);
extern void riscv32bf_rv32_semf_init_idesc_table (SIM_CPU *);

/* Enum declaration for instructions in cpu family riscv32bf.  */
typedef enum riscv32bf_rv32_insn_type {
  RISCV32BF_RV32_INSN_X_INVALID, RISCV32BF_RV32_INSN_X_AFTER, RISCV32BF_RV32_INSN_X_BEFORE, RISCV32BF_RV32_INSN_X_CTI_CHAIN
 , RISCV32BF_RV32_INSN_X_CHAIN, RISCV32BF_RV32_INSN_X_BEGIN, RISCV32BF_RV32_INSN_C_ADDI16SP, RISCV32BF_RV32_INSN_C_ADDI4SPN
 , RISCV32BF_RV32_INSN_C_NOP, RISCV32BF_RV32_INSN_C_EBREAK, RISCV32BF_RV32_INSN_C_UNIMP, RISCV32BF_RV32_INSN_C_JR
 , RISCV32BF_RV32_INSN_C_JALR, RISCV32BF_RV32_INSN_C_MV, RISCV32BF_RV32_INSN_C_ADD, RISCV32BF_RV32_INSN_C_AND
 , RISCV32BF_RV32_INSN_C_OR, RISCV32BF_RV32_INSN_C_XOR, RISCV32BF_RV32_INSN_C_SUB, RISCV32BF_RV32_INSN_C_LI
 , RISCV32BF_RV32_INSN_C_LUI, RISCV32BF_RV32_INSN_C_ADDI, RISCV32BF_RV32_INSN_C_SLLI, RISCV32BF_RV32_INSN_C_LWSP
 , RISCV32BF_RV32_INSN_C_SWSP, RISCV32BF_RV32_INSN_C_LW, RISCV32BF_RV32_INSN_C_SW, RISCV32BF_RV32_INSN_C_SRLI
 , RISCV32BF_RV32_INSN_C_SRAI, RISCV32BF_RV32_INSN_C_ANDI, RISCV32BF_RV32_INSN_C_BEQZ, RISCV32BF_RV32_INSN_C_BNEZ
 , RISCV32BF_RV32_INSN_C_J, RISCV32BF_RV32_INSN_C_SLLI64, RISCV32BF_RV32_INSN_C_SRLI64, RISCV32BF_RV32_INSN_C_SRAI64
 , RISCV32BF_RV32_INSN_C_JAL, RISCV32BF_RV32_INSN_C_FLWSP, RISCV32BF_RV32_INSN_C_FSWSP, RISCV32BF_RV32_INSN_C_FSW
 , RISCV32BF_RV32_INSN_C_FLW, RISCV32BF_RV32_INSN_C_FLDSP, RISCV32BF_RV32_INSN_C_FSDSP, RISCV32BF_RV32_INSN_C_FSD
 , RISCV32BF_RV32_INSN_C_FLD, RISCV32BF_RV32_INSN_LUI, RISCV32BF_RV32_INSN_AUIPC, RISCV32BF_RV32_INSN_JAL
 , RISCV32BF_RV32_INSN_JALR, RISCV32BF_RV32_INSN_BEQ, RISCV32BF_RV32_INSN_BNE, RISCV32BF_RV32_INSN_BLT
 , RISCV32BF_RV32_INSN_BGE, RISCV32BF_RV32_INSN_BLTU, RISCV32BF_RV32_INSN_BGEU, RISCV32BF_RV32_INSN_LB
 , RISCV32BF_RV32_INSN_LH, RISCV32BF_RV32_INSN_LW, RISCV32BF_RV32_INSN_LBU, RISCV32BF_RV32_INSN_LHU
 , RISCV32BF_RV32_INSN_SB, RISCV32BF_RV32_INSN_SH, RISCV32BF_RV32_INSN_SW, RISCV32BF_RV32_INSN_ADDI
 , RISCV32BF_RV32_INSN_SLTI, RISCV32BF_RV32_INSN_SLTIU, RISCV32BF_RV32_INSN_XORI, RISCV32BF_RV32_INSN_ORI
 , RISCV32BF_RV32_INSN_ANDI, RISCV32BF_RV32_INSN_SLLI_SHIFT5, RISCV32BF_RV32_INSN_SRLI_SHIFT5, RISCV32BF_RV32_INSN_SRAI_SHIFT5
 , RISCV32BF_RV32_INSN_ADD, RISCV32BF_RV32_INSN_SUB, RISCV32BF_RV32_INSN_SLL, RISCV32BF_RV32_INSN_SLT
 , RISCV32BF_RV32_INSN_SLTU, RISCV32BF_RV32_INSN_XOR, RISCV32BF_RV32_INSN_SRL, RISCV32BF_RV32_INSN_SRA
 , RISCV32BF_RV32_INSN_OR, RISCV32BF_RV32_INSN_AND, RISCV32BF_RV32_INSN_FENCE, RISCV32BF_RV32_INSN_SFENCE_VM
 , RISCV32BF_RV32_INSN_SFENCE_VMA, RISCV32BF_RV32_INSN_FENCE_TSO, RISCV32BF_RV32_INSN_FENCE_I, RISCV32BF_RV32_INSN_ECALL
 , RISCV32BF_RV32_INSN_EBREAK, RISCV32BF_RV32_INSN_CSRRW, RISCV32BF_RV32_INSN_CSRRS, RISCV32BF_RV32_INSN_CSRRC
 , RISCV32BF_RV32_INSN_CSRRWI, RISCV32BF_RV32_INSN_CSRRSI, RISCV32BF_RV32_INSN_CSRRCI, RISCV32BF_RV32_INSN_URET
 , RISCV32BF_RV32_INSN_SRET, RISCV32BF_RV32_INSN_HRET, RISCV32BF_RV32_INSN_MRET, RISCV32BF_RV32_INSN_DRET
 , RISCV32BF_RV32_INSN_WFI, RISCV32BF_RV32_INSN_MUL, RISCV32BF_RV32_INSN_MULH, RISCV32BF_RV32_INSN_MULHSU
 , RISCV32BF_RV32_INSN_MULHU, RISCV32BF_RV32_INSN_DIV, RISCV32BF_RV32_INSN_DIVU, RISCV32BF_RV32_INSN_REM
 , RISCV32BF_RV32_INSN_REMU, RISCV32BF_RV32_INSN_LR_W, RISCV32BF_RV32_INSN_LR_W_AQ, RISCV32BF_RV32_INSN_LR_W_RL
 , RISCV32BF_RV32_INSN_LR_W_AQRL, RISCV32BF_RV32_INSN_SC_W, RISCV32BF_RV32_INSN_SC_W_AQ, RISCV32BF_RV32_INSN_SC_W_RL
 , RISCV32BF_RV32_INSN_SC_W_AQRL, RISCV32BF_RV32_INSN_AMOSWAP_W, RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, RISCV32BF_RV32_INSN_AMOSWAP_W_RL
 , RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, RISCV32BF_RV32_INSN_AMOADD_W, RISCV32BF_RV32_INSN_AMOADD_W_AQ, RISCV32BF_RV32_INSN_AMOADD_W_RL
 , RISCV32BF_RV32_INSN_AMOADD_W_AQRL, RISCV32BF_RV32_INSN_AMOXOR_W, RISCV32BF_RV32_INSN_AMOXOR_W_AQ, RISCV32BF_RV32_INSN_AMOXOR_W_RL
 , RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, RISCV32BF_RV32_INSN_AMOAND_W, RISCV32BF_RV32_INSN_AMOAND_W_AQ, RISCV32BF_RV32_INSN_AMOAND_W_RL
 , RISCV32BF_RV32_INSN_AMOAND_W_AQRL, RISCV32BF_RV32_INSN_AMOOR_W, RISCV32BF_RV32_INSN_AMOOR_W_AQ, RISCV32BF_RV32_INSN_AMOOR_W_RL
 , RISCV32BF_RV32_INSN_AMOOR_W_AQRL, RISCV32BF_RV32_INSN_AMOMIN_W, RISCV32BF_RV32_INSN_AMOMIN_W_AQ, RISCV32BF_RV32_INSN_AMOMIN_W_RL
 , RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, RISCV32BF_RV32_INSN_AMOMAX_W, RISCV32BF_RV32_INSN_AMOMAX_W_AQ, RISCV32BF_RV32_INSN_AMOMAX_W_RL
 , RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, RISCV32BF_RV32_INSN_AMOMINU_W, RISCV32BF_RV32_INSN_AMOMINU_W_AQ, RISCV32BF_RV32_INSN_AMOMINU_W_RL
 , RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, RISCV32BF_RV32_INSN_AMOMAXU_W, RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, RISCV32BF_RV32_INSN_AMOMAXU_W_RL
 , RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, RISCV32BF_RV32_INSN_CLZ, RISCV32BF_RV32_INSN_CTZ, RISCV32BF_RV32_INSN_PCNT
 , RISCV32BF_RV32_INSN_ANDN, RISCV32BF_RV32_INSN_ORN, RISCV32BF_RV32_INSN_XNOR, RISCV32BF_RV32_INSN_PACK
 , RISCV32BF_RV32_INSN_MIN, RISCV32BF_RV32_INSN_MAX, RISCV32BF_RV32_INSN_MINU, RISCV32BF_RV32_INSN_MAXU
 , RISCV32BF_RV32_INSN_SBSET, RISCV32BF_RV32_INSN_SBCLR, RISCV32BF_RV32_INSN_SBINV, RISCV32BF_RV32_INSN_SBEXT
 , RISCV32BF_RV32_INSN_SBSETI_SHIFT5, RISCV32BF_RV32_INSN_SBCLRI_SHIFT5, RISCV32BF_RV32_INSN_SBINVI_SHIFT5, RISCV32BF_RV32_INSN_SBEXTI_SHIFT5
 , RISCV32BF_RV32_INSN_SLO, RISCV32BF_RV32_INSN_SRO, RISCV32BF_RV32_INSN_SLOI_SHIFT5, RISCV32BF_RV32_INSN_SROI_SHIFT5
 , RISCV32BF_RV32_INSN_ROL, RISCV32BF_RV32_INSN_ROR, RISCV32BF_RV32_INSN_RORI_SHIFT5, RISCV32BF_RV32_INSN_GREV
 , RISCV32BF_RV32_INSN_GREVI_SHIFT5, RISCV32BF_RV32_INSN_GREVI_SHIFT6, RISCV32BF_RV32_INSN_SHFL, RISCV32BF_RV32_INSN_UNSHFL
 , RISCV32BF_RV32_INSN_SHFLI_SHIFT5, RISCV32BF_RV32_INSN_UNSHFLI_SHIFT5, RISCV32BF_RV32_INSN_GORC, RISCV32BF_RV32_INSN_GORCI_SHIFT5
 , RISCV32BF_RV32_INSN_GORCI_SHIFT6, RISCV32BF_RV32_INSN_GORCW, RISCV32BF_RV32_INSN_BFP, RISCV32BF_RV32_INSN_BFPW
 , RISCV32BF_RV32_INSN_BEXT, RISCV32BF_RV32_INSN_BDEP, RISCV32BF_RV32_INSN_CLMUL, RISCV32BF_RV32_INSN_CLMULH
 , RISCV32BF_RV32_INSN_CLMULR, RISCV32BF_RV32_INSN_CRC32_B, RISCV32BF_RV32_INSN_CRC32_H, RISCV32BF_RV32_INSN_CRC32_W
 , RISCV32BF_RV32_INSN_CRC32C_B, RISCV32BF_RV32_INSN_CRC32C_H, RISCV32BF_RV32_INSN_CRC32C_W, RISCV32BF_RV32_INSN_CMIX
 , RISCV32BF_RV32_INSN_CMOV, RISCV32BF_RV32_INSN_FSL, RISCV32BF_RV32_INSN_FSR, RISCV32BF_RV32_INSN_FSRI
 , RISCV32BF_RV32_INSN_FLW, RISCV32BF_RV32_INSN_FSW, RISCV32BF_RV32_INSN_FMADD_S, RISCV32BF_RV32_INSN_FMSUB_S
 , RISCV32BF_RV32_INSN_FNMSUB_S, RISCV32BF_RV32_INSN_FNMADD_S, RISCV32BF_RV32_INSN_FADD_S, RISCV32BF_RV32_INSN_FSUB_S
 , RISCV32BF_RV32_INSN_FMUL_S, RISCV32BF_RV32_INSN_FDIV_S, RISCV32BF_RV32_INSN_FSGNJ_S, RISCV32BF_RV32_INSN_FSGNJN_S
 , RISCV32BF_RV32_INSN_FSGNJX_S, RISCV32BF_RV32_INSN_FMIN_S, RISCV32BF_RV32_INSN_FMAX_S, RISCV32BF_RV32_INSN_FEQ_S
 , RISCV32BF_RV32_INSN_FLT_S, RISCV32BF_RV32_INSN_FLE_S, RISCV32BF_RV32_INSN_FSQRT_S, RISCV32BF_RV32_INSN_FCVT_W_S
 , RISCV32BF_RV32_INSN_FCVT_WU_S, RISCV32BF_RV32_INSN_FMV_X_W, RISCV32BF_RV32_INSN_FCLASS_S, RISCV32BF_RV32_INSN_FCVT_S_W
 , RISCV32BF_RV32_INSN_FCVT_S_WU, RISCV32BF_RV32_INSN_FMV_W_X, RISCV32BF_RV32_INSN_FLD, RISCV32BF_RV32_INSN_FSD
 , RISCV32BF_RV32_INSN_FMADD_D, RISCV32BF_RV32_INSN_FMSUB_D, RISCV32BF_RV32_INSN_FNMSUB_D, RISCV32BF_RV32_INSN_FNMADD_D
 , RISCV32BF_RV32_INSN_FADD_D, RISCV32BF_RV32_INSN_FSUB_D, RISCV32BF_RV32_INSN_FMUL_D, RISCV32BF_RV32_INSN_FDIV_D
 , RISCV32BF_RV32_INSN_FSGNJ_D, RISCV32BF_RV32_INSN_FSGNJN_D, RISCV32BF_RV32_INSN_FSGNJX_D, RISCV32BF_RV32_INSN_FMIN_D
 , RISCV32BF_RV32_INSN_FMAX_D, RISCV32BF_RV32_INSN_FEQ_D, RISCV32BF_RV32_INSN_FLT_D, RISCV32BF_RV32_INSN_FLE_D
 , RISCV32BF_RV32_INSN_FSQRT_D, RISCV32BF_RV32_INSN_FCVT_W_D, RISCV32BF_RV32_INSN_FCVT_WU_D, RISCV32BF_RV32_INSN_FCLASS_D
 , RISCV32BF_RV32_INSN_FCVT_D_W, RISCV32BF_RV32_INSN_FCVT_D_WU, RISCV32BF_RV32_INSN_FCVT_S_D, RISCV32BF_RV32_INSN_FCVT_D_S
 , RISCV32BF_RV32_INSN_FLQ, RISCV32BF_RV32_INSN_FSQ, RISCV32BF_RV32_INSN_FMADD_Q, RISCV32BF_RV32_INSN_FMSUB_Q
 , RISCV32BF_RV32_INSN_FNMSUB_Q, RISCV32BF_RV32_INSN_FNMADD_Q, RISCV32BF_RV32_INSN_FADD_Q, RISCV32BF_RV32_INSN_FSUB_Q
 , RISCV32BF_RV32_INSN_FMUL_Q, RISCV32BF_RV32_INSN_FDIV_Q, RISCV32BF_RV32_INSN_FSGNJ_Q, RISCV32BF_RV32_INSN_FSGNJN_Q
 , RISCV32BF_RV32_INSN_FSGNJX_Q, RISCV32BF_RV32_INSN_FMIN_Q, RISCV32BF_RV32_INSN_FMAX_Q, RISCV32BF_RV32_INSN_FEQ_Q
 , RISCV32BF_RV32_INSN_FLT_Q, RISCV32BF_RV32_INSN_FLE_Q, RISCV32BF_RV32_INSN_FSQRT_Q, RISCV32BF_RV32_INSN_FCVT_W_Q
 , RISCV32BF_RV32_INSN_FCVT_WU_Q, RISCV32BF_RV32_INSN_FCLASS_Q, RISCV32BF_RV32_INSN_FCVT_Q_W, RISCV32BF_RV32_INSN_FCVT_Q_WU
 , RISCV32BF_RV32_INSN_FCVT_S_Q, RISCV32BF_RV32_INSN_FCVT_D_Q, RISCV32BF_RV32_INSN_FCVT_Q_S, RISCV32BF_RV32_INSN_FCVT_Q_D
 , RISCV32BF_RV32_INSN__MAX
} RISCV32BF_RV32_INSN_TYPE;

/* Enum declaration for semantic formats in cpu family riscv32bf.  */
typedef enum riscv32bf_rv32_sfmt_type {
  RISCV32BF_RV32_SFMT_EMPTY, RISCV32BF_RV32_SFMT_C_ADDI16SP, RISCV32BF_RV32_SFMT_C_ADDI4SPN, RISCV32BF_RV32_SFMT_C_NOP
 , RISCV32BF_RV32_SFMT_C_EBREAK, RISCV32BF_RV32_SFMT_C_JR, RISCV32BF_RV32_SFMT_C_JALR, RISCV32BF_RV32_SFMT_C_MV
 , RISCV32BF_RV32_SFMT_C_ADD, RISCV32BF_RV32_SFMT_C_AND, RISCV32BF_RV32_SFMT_C_LI, RISCV32BF_RV32_SFMT_C_LUI
 , RISCV32BF_RV32_SFMT_C_ADDI, RISCV32BF_RV32_SFMT_C_SLLI, RISCV32BF_RV32_SFMT_C_LWSP, RISCV32BF_RV32_SFMT_C_SWSP
 , RISCV32BF_RV32_SFMT_C_LW, RISCV32BF_RV32_SFMT_C_SW, RISCV32BF_RV32_SFMT_C_SRLI, RISCV32BF_RV32_SFMT_C_ANDI
 , RISCV32BF_RV32_SFMT_C_BEQZ, RISCV32BF_RV32_SFMT_C_J, RISCV32BF_RV32_SFMT_C_JAL, RISCV32BF_RV32_SFMT_C_FLWSP
 , RISCV32BF_RV32_SFMT_C_FSWSP, RISCV32BF_RV32_SFMT_C_FSW, RISCV32BF_RV32_SFMT_C_FLW, RISCV32BF_RV32_SFMT_C_FLDSP
 , RISCV32BF_RV32_SFMT_C_FSDSP, RISCV32BF_RV32_SFMT_C_FSD, RISCV32BF_RV32_SFMT_C_FLD, RISCV32BF_RV32_SFMT_LUI
 , RISCV32BF_RV32_SFMT_AUIPC, RISCV32BF_RV32_SFMT_JAL, RISCV32BF_RV32_SFMT_JALR, RISCV32BF_RV32_SFMT_BEQ
 , RISCV32BF_RV32_SFMT_LB, RISCV32BF_RV32_SFMT_LH, RISCV32BF_RV32_SFMT_LW, RISCV32BF_RV32_SFMT_LBU
 , RISCV32BF_RV32_SFMT_LHU, RISCV32BF_RV32_SFMT_SB, RISCV32BF_RV32_SFMT_SH, RISCV32BF_RV32_SFMT_SW
 , RISCV32BF_RV32_SFMT_ADDI, RISCV32BF_RV32_SFMT_SLLI_SHIFT5, RISCV32BF_RV32_SFMT_ADD, RISCV32BF_RV32_SFMT_CSRRW
 , RISCV32BF_RV32_SFMT_CSRRS, RISCV32BF_RV32_SFMT_CSRRWI, RISCV32BF_RV32_SFMT_MULH, RISCV32BF_RV32_SFMT_LR_W
 , RISCV32BF_RV32_SFMT_SC_W, RISCV32BF_RV32_SFMT_AMOSWAP_W, RISCV32BF_RV32_SFMT_AMOMIN_W, RISCV32BF_RV32_SFMT_CLZ
 , RISCV32BF_RV32_SFMT_PACK, RISCV32BF_RV32_SFMT_GREVI_SHIFT6, RISCV32BF_RV32_SFMT_GORCI_SHIFT6, RISCV32BF_RV32_SFMT_BEXT
 , RISCV32BF_RV32_SFMT_CRC32_B, RISCV32BF_RV32_SFMT_CMIX, RISCV32BF_RV32_SFMT_CMOV, RISCV32BF_RV32_SFMT_FSL
 , RISCV32BF_RV32_SFMT_FSRI, RISCV32BF_RV32_SFMT_FLW, RISCV32BF_RV32_SFMT_FSW, RISCV32BF_RV32_SFMT_FMADD_S
 , RISCV32BF_RV32_SFMT_FADD_S, RISCV32BF_RV32_SFMT_FSGNJ_S, RISCV32BF_RV32_SFMT_FMIN_S, RISCV32BF_RV32_SFMT_FEQ_S
 , RISCV32BF_RV32_SFMT_FSQRT_S, RISCV32BF_RV32_SFMT_FCVT_W_S, RISCV32BF_RV32_SFMT_FMV_X_W, RISCV32BF_RV32_SFMT_FCVT_S_W
 , RISCV32BF_RV32_SFMT_FMV_W_X, RISCV32BF_RV32_SFMT_FLD, RISCV32BF_RV32_SFMT_FSD, RISCV32BF_RV32_SFMT_FMADD_D
 , RISCV32BF_RV32_SFMT_FADD_D, RISCV32BF_RV32_SFMT_FSQRT_D, RISCV32BF_RV32_SFMT_FCVT_W_D, RISCV32BF_RV32_SFMT_FCVT_D_S
} RISCV32BF_RV32_SFMT_TYPE;

/* Function unit handlers (user written).  */

extern int riscv32bf_model_rv32gc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32i_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32ic_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32im_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32imc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32g_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);
extern int riscv32bf_model_rv32gqc_u_exec (SIM_CPU *, const IDESC *, int /*unit_num*/, int /*referenced*/);

/* Profiling before/after handlers (user written) */

extern void riscv32bf_model_insn_before (SIM_CPU *, int /*first_p*/);
extern void riscv32bf_model_insn_after (SIM_CPU *, int /*last_p*/, int /*cycles*/);

#endif /* RISCV32BF_RV32_DECODE_H */
