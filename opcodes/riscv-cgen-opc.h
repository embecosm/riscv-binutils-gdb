/* DO NOT EDIT!  -*- buffer-read-only: t -*- vi:set ro:  */
/* Instruction opcode header for riscv.

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

#ifndef RISCV_OPC_H
#define RISCV_OPC_H

#ifdef __cplusplus
extern "C" {
#endif

/* -- opc.h */

extern int  riscv_cgen_insn_supported (CGEN_CPU_DESC cd, const CGEN_INSN *insn);
extern void riscv_cgen_init_riscv_extensions (CGEN_BITSET *exts);
extern void riscv_cgen_set_rvc (int rvc);

#undef  CGEN_DIS_HASH_SIZE
#define CGEN_DIS_HASH_SIZE 1
#undef  CGEN_DIS_HASH
#define CGEN_DIS_HASH(buffer, value) 0

struct disassemble_info;
extern void disassemble_init_riscv (struct disassemble_info *info);

/* -- */
/* Enum declaration for riscv instruction types.  */
typedef enum cgen_insn_type {
  RISCV_INSN_INVALID, RISCV_INSN_C_ADDI16SP, RISCV_INSN_C_ADDI4SPN, RISCV_INSN_C_NOP
 , RISCV_INSN_C_EBREAK, RISCV_INSN_C_UNIMP, RISCV_INSN_C_JR, RISCV_INSN_C_JALR
 , RISCV_INSN_C_MV, RISCV_INSN_C_ADD, RISCV_INSN_C_AND, RISCV_INSN_C_OR
 , RISCV_INSN_C_XOR, RISCV_INSN_C_SUB, RISCV_INSN_C_LI, RISCV_INSN_C_LUI
 , RISCV_INSN_C_ADDI, RISCV_INSN_C_SLLI, RISCV_INSN_C_LWSP, RISCV_INSN_C_SWSP
 , RISCV_INSN_C_LW, RISCV_INSN_C_SW, RISCV_INSN_C_SRLI, RISCV_INSN_C_SRAI
 , RISCV_INSN_C_ANDI, RISCV_INSN_C_BEQZ, RISCV_INSN_C_BNEZ, RISCV_INSN_C_J
 , RISCV_INSN_C_SLLI64, RISCV_INSN_C_SRLI64, RISCV_INSN_C_SRAI64, RISCV_INSN_C_JAL
 , RISCV_INSN_C_ADDW, RISCV_INSN_C_SUBW, RISCV_INSN_C_ADDIW, RISCV_INSN_C_LDSP
 , RISCV_INSN_C_SDSP, RISCV_INSN_C_LD, RISCV_INSN_C_SD, RISCV_INSN_C_FLWSP
 , RISCV_INSN_C_FSWSP, RISCV_INSN_C_FSW, RISCV_INSN_C_FLW, RISCV_INSN_C_FLDSP
 , RISCV_INSN_C_FSDSP, RISCV_INSN_C_FSD, RISCV_INSN_C_FLD, RISCV_INSN_LUI
 , RISCV_INSN_AUIPC, RISCV_INSN_JAL, RISCV_INSN_JALR, RISCV_INSN_BEQ
 , RISCV_INSN_BNE, RISCV_INSN_BLT, RISCV_INSN_BGE, RISCV_INSN_BLTU
 , RISCV_INSN_BGEU, RISCV_INSN_LB, RISCV_INSN_LH, RISCV_INSN_LW
 , RISCV_INSN_LBU, RISCV_INSN_LHU, RISCV_INSN_SB, RISCV_INSN_SH
 , RISCV_INSN_SW, RISCV_INSN_ADDI, RISCV_INSN_SLTI, RISCV_INSN_SLTIU
 , RISCV_INSN_XORI, RISCV_INSN_ORI, RISCV_INSN_ANDI, RISCV_INSN_SLLI_SHIFT5
 , RISCV_INSN_SRLI_SHIFT5, RISCV_INSN_SRAI_SHIFT5, RISCV_INSN_ADD, RISCV_INSN_SUB
 , RISCV_INSN_SLL, RISCV_INSN_SLT, RISCV_INSN_SLTU, RISCV_INSN_XOR
 , RISCV_INSN_SRL, RISCV_INSN_SRA, RISCV_INSN_OR, RISCV_INSN_AND
 , RISCV_INSN_FENCE, RISCV_INSN_SFENCE_VM, RISCV_INSN_SFENCE_VMA, RISCV_INSN_FENCE_TSO
 , RISCV_INSN_FENCE_I, RISCV_INSN_ECALL, RISCV_INSN_EBREAK, RISCV_INSN_CSRRW
 , RISCV_INSN_CSRRS, RISCV_INSN_CSRRC, RISCV_INSN_CSRRWI, RISCV_INSN_CSRRSI
 , RISCV_INSN_CSRRCI, RISCV_INSN_URET, RISCV_INSN_SRET, RISCV_INSN_HRET
 , RISCV_INSN_MRET, RISCV_INSN_DRET, RISCV_INSN_WFI, RISCV_INSN_LWU
 , RISCV_INSN_LD, RISCV_INSN_SD, RISCV_INSN_SLLI_SHIFT6, RISCV_INSN_SRLI_SHIFT6
 , RISCV_INSN_SRAI_SHIFT6, RISCV_INSN_ADDIW, RISCV_INSN_SLLIW_SHIFT5, RISCV_INSN_SRLIW_SHIFT5
 , RISCV_INSN_SRAIW_SHIFT5, RISCV_INSN_ADDW, RISCV_INSN_SUBW, RISCV_INSN_SLLW
 , RISCV_INSN_SRLW, RISCV_INSN_SRAW, RISCV_INSN_MUL, RISCV_INSN_MULH
 , RISCV_INSN_MULHSU, RISCV_INSN_MULHU, RISCV_INSN_DIV, RISCV_INSN_DIVU
 , RISCV_INSN_REM, RISCV_INSN_REMU, RISCV_INSN_MULW, RISCV_INSN_DIVW
 , RISCV_INSN_DIVUW, RISCV_INSN_REMW, RISCV_INSN_REMUW, RISCV_INSN_LR_W
 , RISCV_INSN_LR_W_AQ, RISCV_INSN_LR_W_RL, RISCV_INSN_LR_W_AQRL, RISCV_INSN_SC_W
 , RISCV_INSN_SC_W_AQ, RISCV_INSN_SC_W_RL, RISCV_INSN_SC_W_AQRL, RISCV_INSN_AMOSWAP_W
 , RISCV_INSN_AMOSWAP_W_AQ, RISCV_INSN_AMOSWAP_W_RL, RISCV_INSN_AMOSWAP_W_AQRL, RISCV_INSN_AMOADD_W
 , RISCV_INSN_AMOADD_W_AQ, RISCV_INSN_AMOADD_W_RL, RISCV_INSN_AMOADD_W_AQRL, RISCV_INSN_AMOXOR_W
 , RISCV_INSN_AMOXOR_W_AQ, RISCV_INSN_AMOXOR_W_RL, RISCV_INSN_AMOXOR_W_AQRL, RISCV_INSN_AMOAND_W
 , RISCV_INSN_AMOAND_W_AQ, RISCV_INSN_AMOAND_W_RL, RISCV_INSN_AMOAND_W_AQRL, RISCV_INSN_AMOOR_W
 , RISCV_INSN_AMOOR_W_AQ, RISCV_INSN_AMOOR_W_RL, RISCV_INSN_AMOOR_W_AQRL, RISCV_INSN_AMOMIN_W
 , RISCV_INSN_AMOMIN_W_AQ, RISCV_INSN_AMOMIN_W_RL, RISCV_INSN_AMOMIN_W_AQRL, RISCV_INSN_AMOMAX_W
 , RISCV_INSN_AMOMAX_W_AQ, RISCV_INSN_AMOMAX_W_RL, RISCV_INSN_AMOMAX_W_AQRL, RISCV_INSN_AMOMINU_W
 , RISCV_INSN_AMOMINU_W_AQ, RISCV_INSN_AMOMINU_W_RL, RISCV_INSN_AMOMINU_W_AQRL, RISCV_INSN_AMOMAXU_W
 , RISCV_INSN_AMOMAXU_W_AQ, RISCV_INSN_AMOMAXU_W_RL, RISCV_INSN_AMOMAXU_W_AQRL, RISCV_INSN_LR_D
 , RISCV_INSN_LR_D_AQ, RISCV_INSN_LR_D_RL, RISCV_INSN_LR_D_AQRL, RISCV_INSN_SC_D
 , RISCV_INSN_SC_D_AQ, RISCV_INSN_SC_D_RL, RISCV_INSN_SC_D_AQRL, RISCV_INSN_AMOSWAP_D
 , RISCV_INSN_AMOSWAP_D_AQ, RISCV_INSN_AMOSWAP_D_RL, RISCV_INSN_AMOSWAP_D_AQRL, RISCV_INSN_AMOADD_D
 , RISCV_INSN_AMOADD_D_AQ, RISCV_INSN_AMOADD_D_RL, RISCV_INSN_AMOADD_D_AQRL, RISCV_INSN_AMOXOR_D
 , RISCV_INSN_AMOXOR_D_AQ, RISCV_INSN_AMOXOR_D_RL, RISCV_INSN_AMOXOR_D_AQRL, RISCV_INSN_AMOAND_D
 , RISCV_INSN_AMOAND_D_AQ, RISCV_INSN_AMOAND_D_RL, RISCV_INSN_AMOAND_D_AQRL, RISCV_INSN_AMOOR_D
 , RISCV_INSN_AMOOR_D_AQ, RISCV_INSN_AMOOR_D_RL, RISCV_INSN_AMOOR_D_AQRL, RISCV_INSN_AMOMIN_D
 , RISCV_INSN_AMOMIN_D_AQ, RISCV_INSN_AMOMIN_D_RL, RISCV_INSN_AMOMIN_D_AQRL, RISCV_INSN_AMOMAX_D
 , RISCV_INSN_AMOMAX_D_AQ, RISCV_INSN_AMOMAX_D_RL, RISCV_INSN_AMOMAX_D_AQRL, RISCV_INSN_AMOMINU_D
 , RISCV_INSN_AMOMINU_D_AQ, RISCV_INSN_AMOMINU_D_RL, RISCV_INSN_AMOMINU_D_AQRL, RISCV_INSN_AMOMAXU_D
 , RISCV_INSN_AMOMAXU_D_AQ, RISCV_INSN_AMOMAXU_D_RL, RISCV_INSN_AMOMAXU_D_AQRL, RISCV_INSN_CLZ
 , RISCV_INSN_CTZ, RISCV_INSN_CLZW, RISCV_INSN_CTZW, RISCV_INSN_PCNT
 , RISCV_INSN_PCNTW, RISCV_INSN_ANDN, RISCV_INSN_ORN, RISCV_INSN_XNOR
 , RISCV_INSN_PACK, RISCV_INSN_PACKW, RISCV_INSN_MIN, RISCV_INSN_MAX
 , RISCV_INSN_MINU, RISCV_INSN_MAXU, RISCV_INSN_SBSET, RISCV_INSN_SBCLR
 , RISCV_INSN_SBINV, RISCV_INSN_SBEXT, RISCV_INSN_SBSETI_SHIFT5, RISCV_INSN_SBSETI_SHIFT6
 , RISCV_INSN_SBCLRI_SHIFT5, RISCV_INSN_SBCLRI_SHIFT6, RISCV_INSN_SBINVI_SHIFT5, RISCV_INSN_SBINVI_SHIFT6
 , RISCV_INSN_SBEXTI_SHIFT5, RISCV_INSN_SBEXTI_SHIFT6, RISCV_INSN_SBSETW, RISCV_INSN_SBCLRW
 , RISCV_INSN_SBINVW, RISCV_INSN_SBEXTW, RISCV_INSN_SBSETIW, RISCV_INSN_SBCLRIW
 , RISCV_INSN_SBINVIW, RISCV_INSN_SLO, RISCV_INSN_SRO, RISCV_INSN_SLOI_SHIFT5
 , RISCV_INSN_SLOI_SHIFT6, RISCV_INSN_SROI_SHIFT5, RISCV_INSN_SROI_SHIFT6, RISCV_INSN_SLOW
 , RISCV_INSN_SROW, RISCV_INSN_SLOIW, RISCV_INSN_SROIW, RISCV_INSN_ROL
 , RISCV_INSN_ROR, RISCV_INSN_RORI_SHIFT5, RISCV_INSN_RORI_SHIFT6, RISCV_INSN_ROLW
 , RISCV_INSN_RORW, RISCV_INSN_RORIW, RISCV_INSN_GREV, RISCV_INSN_GREVI_SHIFT5
 , RISCV_INSN_GREVI_SHIFT6, RISCV_INSN_GREVW, RISCV_INSN_GREVIW, RISCV_INSN_SHFL
 , RISCV_INSN_UNSHFL, RISCV_INSN_SHFLI_SHIFT5, RISCV_INSN_SHFLI_SHIFT6, RISCV_INSN_UNSHFLI_SHIFT5
 , RISCV_INSN_UNSHFLI_SHIFT6, RISCV_INSN_SHFLW, RISCV_INSN_UNSHFLW, RISCV_INSN_GORC
 , RISCV_INSN_GORCI_SHIFT5, RISCV_INSN_GORCI_SHIFT6, RISCV_INSN_GORCW, RISCV_INSN_GORCIW
 , RISCV_INSN_BFP, RISCV_INSN_BFPW, RISCV_INSN_BEXT, RISCV_INSN_BDEP
 , RISCV_INSN_BEXTW, RISCV_INSN_BDEPW, RISCV_INSN_CLMUL, RISCV_INSN_CLMULH
 , RISCV_INSN_CLMULR, RISCV_INSN_CLMULW, RISCV_INSN_CLMULHW, RISCV_INSN_CLMULRW
 , RISCV_INSN_CRC32_B, RISCV_INSN_CRC32_H, RISCV_INSN_CRC32_W, RISCV_INSN_CRC32C_B
 , RISCV_INSN_CRC32C_H, RISCV_INSN_CRC32C_W, RISCV_INSN_CRC32_D, RISCV_INSN_CRC32C_D
 , RISCV_INSN_BMATOR, RISCV_INSN_BMATXOR, RISCV_INSN_BMATFLIP, RISCV_INSN_CMIX
 , RISCV_INSN_CMOV, RISCV_INSN_FSL, RISCV_INSN_FSR, RISCV_INSN_FSRI
 , RISCV_INSN_FSLW, RISCV_INSN_FSRW, RISCV_INSN_FSRIW, RISCV_INSN_ADDWU
 , RISCV_INSN_SUBWU, RISCV_INSN_ADDIWU, RISCV_INSN_ADDU_W, RISCV_INSN_SUBU_W
 , RISCV_INSN_SLLIU_W, RISCV_INSN_FLW, RISCV_INSN_FSW, RISCV_INSN_FMADD_S
 , RISCV_INSN_FMSUB_S, RISCV_INSN_FNMSUB_S, RISCV_INSN_FNMADD_S, RISCV_INSN_FADD_S
 , RISCV_INSN_FSUB_S, RISCV_INSN_FMUL_S, RISCV_INSN_FDIV_S, RISCV_INSN_FSGNJ_S
 , RISCV_INSN_FSGNJN_S, RISCV_INSN_FSGNJX_S, RISCV_INSN_FMIN_S, RISCV_INSN_FMAX_S
 , RISCV_INSN_FEQ_S, RISCV_INSN_FLT_S, RISCV_INSN_FLE_S, RISCV_INSN_FSQRT_S
 , RISCV_INSN_FCVT_W_S, RISCV_INSN_FCVT_WU_S, RISCV_INSN_FMV_X_W, RISCV_INSN_FCLASS_S
 , RISCV_INSN_FCVT_S_W, RISCV_INSN_FCVT_S_WU, RISCV_INSN_FMV_W_X, RISCV_INSN_FCVT_S_L
 , RISCV_INSN_FCVT_S_LU, RISCV_INSN_FCVT_L_S, RISCV_INSN_FCVT_LU_S, RISCV_INSN_FLD
 , RISCV_INSN_FSD, RISCV_INSN_FMADD_D, RISCV_INSN_FMSUB_D, RISCV_INSN_FNMSUB_D
 , RISCV_INSN_FNMADD_D, RISCV_INSN_FADD_D, RISCV_INSN_FSUB_D, RISCV_INSN_FMUL_D
 , RISCV_INSN_FDIV_D, RISCV_INSN_FSGNJ_D, RISCV_INSN_FSGNJN_D, RISCV_INSN_FSGNJX_D
 , RISCV_INSN_FMIN_D, RISCV_INSN_FMAX_D, RISCV_INSN_FEQ_D, RISCV_INSN_FLT_D
 , RISCV_INSN_FLE_D, RISCV_INSN_FSQRT_D, RISCV_INSN_FCVT_W_D, RISCV_INSN_FCVT_WU_D
 , RISCV_INSN_FCLASS_D, RISCV_INSN_FCVT_D_W, RISCV_INSN_FCVT_D_WU, RISCV_INSN_FCVT_S_D
 , RISCV_INSN_FCVT_D_S, RISCV_INSN_FCVT_L_D, RISCV_INSN_FCVT_LU_D, RISCV_INSN_FMV_X_D
 , RISCV_INSN_FCVT_D_L, RISCV_INSN_FCVT_D_LU, RISCV_INSN_FMV_D_X, RISCV_INSN_FLQ
 , RISCV_INSN_FSQ, RISCV_INSN_FMADD_Q, RISCV_INSN_FMSUB_Q, RISCV_INSN_FNMSUB_Q
 , RISCV_INSN_FNMADD_Q, RISCV_INSN_FADD_Q, RISCV_INSN_FSUB_Q, RISCV_INSN_FMUL_Q
 , RISCV_INSN_FDIV_Q, RISCV_INSN_FSGNJ_Q, RISCV_INSN_FSGNJN_Q, RISCV_INSN_FSGNJX_Q
 , RISCV_INSN_FMIN_Q, RISCV_INSN_FMAX_Q, RISCV_INSN_FEQ_Q, RISCV_INSN_FLT_Q
 , RISCV_INSN_FLE_Q, RISCV_INSN_FSQRT_Q, RISCV_INSN_FCVT_W_Q, RISCV_INSN_FCVT_WU_Q
 , RISCV_INSN_FCLASS_Q, RISCV_INSN_FCVT_Q_W, RISCV_INSN_FCVT_Q_WU, RISCV_INSN_FCVT_S_Q
 , RISCV_INSN_FCVT_D_Q, RISCV_INSN_FCVT_Q_S, RISCV_INSN_FCVT_Q_D, RISCV_INSN_FCVT_L_Q
 , RISCV_INSN_FCVT_LU_Q, RISCV_INSN_FCVT_Q_L, RISCV_INSN_FCVT_Q_LU, RISCV_INSN_INSN_R_FFF
 , RISCV_INSN_INSN_R_FGG, RISCV_INSN_INSN_R_GFG, RISCV_INSN_INSN_R_GGF, RISCV_INSN_INSN_R_FFG
 , RISCV_INSN_INSN_R_FGF, RISCV_INSN_INSN_R_GFF, RISCV_INSN_INSN_R4, RISCV_INSN_INSN_R
 , RISCV_INSN_INSN_I_1, RISCV_INSN_INSN_I_2, RISCV_INSN_INSN_S, RISCV_INSN_INSN_SB_1
 , RISCV_INSN_INSN_SB_2, RISCV_INSN_INSN_U, RISCV_INSN_INSN_UJ, RISCV_INSN_INSN_CI
 , RISCV_INSN_INSN_CR, RISCV_INSN_INSN_CIW, RISCV_INSN_INSN_CA, RISCV_INSN_INSN_CB
 , RISCV_INSN_INSN_CJ
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID RISCV_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) RISCV_INSN_INSN_CJ + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_dummy;
  long f_opcode;
  long f_c_opcode;
  long f_rd;
  long f_rs1;
  long f_rs2;
  long f_rs3;
  long f_csr;
  long f_succ;
  long f_pred;
  long f_funct1;
  long f_funct2;
  long f_funct5;
  long f_funct6;
  long f_funct7;
  long f_funct3;
  long f_c_funct2;
  long f_c_funct3;
  long f_c_funct4;
  long f_c_funct6;
  long f_aq;
  long f_rl;
  long f_fp2;
  long f_uimm1_21;
  long f_uimm2_32;
  long f_uimm2_42;
  long f_uimm3_43;
  long f_uimm1_51;
  long f_uimm3_53;
  long f_uimm1_61;
  long f_uimm2_62;
  long f_uimm3_63;
  long f_uimm5_65;
  long f_uimm1_71;
  long f_uimm1_81;
  long f_uimm2_82;
  long f_uimm3_93;
  long f_uimm2_102;
  long f_uimm4_104;
  long f_uimm1_111;
  long f_uimm2_112;
  long f_uimm4_114;
  long f_uimm5_115;
  long f_uimm1_121;
  long f_uimm2_122;
  long f_uimm3_123;
  long f_uimm4_124;
  long f_uimm8_128;
  long f_uimm15_1415;
  long f_uimm16_1516;
  long f_uimm5_195;
  long f_uimm8_198;
  long f_uimm20_1920;
  long f_uimm1_201;
  long f_uimm5_245;
  long f_uimm6_256;
  long f_uimm7_267;
  long f_uimm6_306;
  long f_uimm10_3010;
  long f_uimm4_314;
  long f_uimm7_317;
  long f_uimm12_3112;
  long f_uimm32_3132;
  long f_uimm32_3120_000000000000;
  long f_imm1_121;
  long f_imm1_311;
  long f_imm7_317;
  long f_imm12_3112;
  long f_imm12_317_115;
  long f_imm13_311_71_306_114_0;
  long f_imm21_311_198_201_3010_0;
  long f_imm6_121_65;
  long f_uimm6_121_65;
  long f_uimm18_121_65_000000000000;
  long f_imm9_121_62_21_112_42_0;
  long f_uimm7_51_123_61_00;
  long f_uimm8_62_123_000;
  long f_uimm10_104_122_51_61_00;
  long f_imm10_121_42_51_21_61_0000;
  long f_uimm9_93_123_000;
  long f_uimm8_82_124_00;
  long f_imm12_121_81_102_61_71_21_111_53_0;
  long f_uimm8_32_121_63_00;
  long f_uimm9_43_121_62_000;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


   #ifdef __cplusplus
   }
   #endif

#endif /* RISCV_OPC_H */
