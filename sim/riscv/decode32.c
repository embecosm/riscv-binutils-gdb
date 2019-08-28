/* Simulator instruction decoder for riscv32bf_rv32.

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

#define WANT_CPU riscv32bf
#define WANT_CPU_RISCV32BF

#include "sim-main.h"
#include "sim-assert.h"

/* The instruction descriptor array.
   This is computed at runtime.  Space for it is not malloc'd to save a
   teensy bit of cpu in the decoder.  Moving it to malloc space is trivial
   but won't be done until necessary (we don't currently support the runtime
   addition of instructions nor an SMP machine with different cpus).  */
static IDESC riscv32bf_rv32_insn_data[RISCV32BF_RV32_INSN__MAX];

/* Commas between elements are contained in the macros.
   Some of these are conditionally compiled out.  */

static const struct insn_sem riscv32bf_rv32_insn_sem[] =
{
  { VIRTUAL_INSN_X_INVALID, RISCV32BF_RV32_INSN_X_INVALID, RISCV32BF_RV32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_AFTER, RISCV32BF_RV32_INSN_X_AFTER, RISCV32BF_RV32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEFORE, RISCV32BF_RV32_INSN_X_BEFORE, RISCV32BF_RV32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CTI_CHAIN, RISCV32BF_RV32_INSN_X_CTI_CHAIN, RISCV32BF_RV32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CHAIN, RISCV32BF_RV32_INSN_X_CHAIN, RISCV32BF_RV32_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEGIN, RISCV32BF_RV32_INSN_X_BEGIN, RISCV32BF_RV32_SFMT_EMPTY },
  { RISCV_INSN_C_ADDI16SP, RISCV32BF_RV32_INSN_C_ADDI16SP, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_C_ADDI4SPN, RISCV32BF_RV32_INSN_C_ADDI4SPN, RISCV32BF_RV32_SFMT_C_ADDI4SPN },
  { RISCV_INSN_C_NOP, RISCV32BF_RV32_INSN_C_NOP, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_C_EBREAK, RISCV32BF_RV32_INSN_C_EBREAK, RISCV32BF_RV32_SFMT_C_EBREAK },
  { RISCV_INSN_C_UNIMP, RISCV32BF_RV32_INSN_C_UNIMP, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_C_JR, RISCV32BF_RV32_INSN_C_JR, RISCV32BF_RV32_SFMT_C_JR },
  { RISCV_INSN_C_JALR, RISCV32BF_RV32_INSN_C_JALR, RISCV32BF_RV32_SFMT_C_JALR },
  { RISCV_INSN_C_MV, RISCV32BF_RV32_INSN_C_MV, RISCV32BF_RV32_SFMT_C_MV },
  { RISCV_INSN_C_ADD, RISCV32BF_RV32_INSN_C_ADD, RISCV32BF_RV32_SFMT_C_ADD },
  { RISCV_INSN_C_AND, RISCV32BF_RV32_INSN_C_AND, RISCV32BF_RV32_SFMT_C_AND },
  { RISCV_INSN_C_OR, RISCV32BF_RV32_INSN_C_OR, RISCV32BF_RV32_SFMT_C_AND },
  { RISCV_INSN_C_XOR, RISCV32BF_RV32_INSN_C_XOR, RISCV32BF_RV32_SFMT_C_AND },
  { RISCV_INSN_C_SUB, RISCV32BF_RV32_INSN_C_SUB, RISCV32BF_RV32_SFMT_C_AND },
  { RISCV_INSN_C_LI, RISCV32BF_RV32_INSN_C_LI, RISCV32BF_RV32_SFMT_C_LI },
  { RISCV_INSN_C_LUI, RISCV32BF_RV32_INSN_C_LUI, RISCV32BF_RV32_SFMT_C_LUI },
  { RISCV_INSN_C_ADDI, RISCV32BF_RV32_INSN_C_ADDI, RISCV32BF_RV32_SFMT_C_ADDI },
  { RISCV_INSN_C_SLLI, RISCV32BF_RV32_INSN_C_SLLI, RISCV32BF_RV32_SFMT_C_SLLI },
  { RISCV_INSN_C_LWSP, RISCV32BF_RV32_INSN_C_LWSP, RISCV32BF_RV32_SFMT_C_LWSP },
  { RISCV_INSN_C_SWSP, RISCV32BF_RV32_INSN_C_SWSP, RISCV32BF_RV32_SFMT_C_SWSP },
  { RISCV_INSN_C_LW, RISCV32BF_RV32_INSN_C_LW, RISCV32BF_RV32_SFMT_C_LW },
  { RISCV_INSN_C_SW, RISCV32BF_RV32_INSN_C_SW, RISCV32BF_RV32_SFMT_C_SW },
  { RISCV_INSN_C_SRLI, RISCV32BF_RV32_INSN_C_SRLI, RISCV32BF_RV32_SFMT_C_SRLI },
  { RISCV_INSN_C_SRAI, RISCV32BF_RV32_INSN_C_SRAI, RISCV32BF_RV32_SFMT_C_SRLI },
  { RISCV_INSN_C_ANDI, RISCV32BF_RV32_INSN_C_ANDI, RISCV32BF_RV32_SFMT_C_ANDI },
  { RISCV_INSN_C_BEQZ, RISCV32BF_RV32_INSN_C_BEQZ, RISCV32BF_RV32_SFMT_C_BEQZ },
  { RISCV_INSN_C_BNEZ, RISCV32BF_RV32_INSN_C_BNEZ, RISCV32BF_RV32_SFMT_C_BEQZ },
  { RISCV_INSN_C_J, RISCV32BF_RV32_INSN_C_J, RISCV32BF_RV32_SFMT_C_J },
  { RISCV_INSN_C_SLLI64, RISCV32BF_RV32_INSN_C_SLLI64, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_C_SRLI64, RISCV32BF_RV32_INSN_C_SRLI64, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_C_SRAI64, RISCV32BF_RV32_INSN_C_SRAI64, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_C_JAL, RISCV32BF_RV32_INSN_C_JAL, RISCV32BF_RV32_SFMT_C_JAL },
  { RISCV_INSN_C_FLWSP, RISCV32BF_RV32_INSN_C_FLWSP, RISCV32BF_RV32_SFMT_C_FLWSP },
  { RISCV_INSN_C_FSWSP, RISCV32BF_RV32_INSN_C_FSWSP, RISCV32BF_RV32_SFMT_C_FSWSP },
  { RISCV_INSN_C_FSW, RISCV32BF_RV32_INSN_C_FSW, RISCV32BF_RV32_SFMT_C_FSW },
  { RISCV_INSN_C_FLW, RISCV32BF_RV32_INSN_C_FLW, RISCV32BF_RV32_SFMT_C_FLW },
  { RISCV_INSN_C_FLDSP, RISCV32BF_RV32_INSN_C_FLDSP, RISCV32BF_RV32_SFMT_C_FLDSP },
  { RISCV_INSN_C_FSDSP, RISCV32BF_RV32_INSN_C_FSDSP, RISCV32BF_RV32_SFMT_C_FSDSP },
  { RISCV_INSN_C_FSD, RISCV32BF_RV32_INSN_C_FSD, RISCV32BF_RV32_SFMT_C_FSD },
  { RISCV_INSN_C_FLD, RISCV32BF_RV32_INSN_C_FLD, RISCV32BF_RV32_SFMT_C_FLD },
  { RISCV_INSN_LUI, RISCV32BF_RV32_INSN_LUI, RISCV32BF_RV32_SFMT_LUI },
  { RISCV_INSN_AUIPC, RISCV32BF_RV32_INSN_AUIPC, RISCV32BF_RV32_SFMT_AUIPC },
  { RISCV_INSN_JAL, RISCV32BF_RV32_INSN_JAL, RISCV32BF_RV32_SFMT_JAL },
  { RISCV_INSN_JALR, RISCV32BF_RV32_INSN_JALR, RISCV32BF_RV32_SFMT_JALR },
  { RISCV_INSN_BEQ, RISCV32BF_RV32_INSN_BEQ, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_BNE, RISCV32BF_RV32_INSN_BNE, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_BLT, RISCV32BF_RV32_INSN_BLT, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_BGE, RISCV32BF_RV32_INSN_BGE, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_BLTU, RISCV32BF_RV32_INSN_BLTU, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_BGEU, RISCV32BF_RV32_INSN_BGEU, RISCV32BF_RV32_SFMT_BEQ },
  { RISCV_INSN_LB, RISCV32BF_RV32_INSN_LB, RISCV32BF_RV32_SFMT_LB },
  { RISCV_INSN_LH, RISCV32BF_RV32_INSN_LH, RISCV32BF_RV32_SFMT_LH },
  { RISCV_INSN_LW, RISCV32BF_RV32_INSN_LW, RISCV32BF_RV32_SFMT_LW },
  { RISCV_INSN_LBU, RISCV32BF_RV32_INSN_LBU, RISCV32BF_RV32_SFMT_LBU },
  { RISCV_INSN_LHU, RISCV32BF_RV32_INSN_LHU, RISCV32BF_RV32_SFMT_LHU },
  { RISCV_INSN_SB, RISCV32BF_RV32_INSN_SB, RISCV32BF_RV32_SFMT_SB },
  { RISCV_INSN_SH, RISCV32BF_RV32_INSN_SH, RISCV32BF_RV32_SFMT_SH },
  { RISCV_INSN_SW, RISCV32BF_RV32_INSN_SW, RISCV32BF_RV32_SFMT_SW },
  { RISCV_INSN_ADDI, RISCV32BF_RV32_INSN_ADDI, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_SLTI, RISCV32BF_RV32_INSN_SLTI, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_SLTIU, RISCV32BF_RV32_INSN_SLTIU, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_XORI, RISCV32BF_RV32_INSN_XORI, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_ORI, RISCV32BF_RV32_INSN_ORI, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_ANDI, RISCV32BF_RV32_INSN_ANDI, RISCV32BF_RV32_SFMT_ADDI },
  { RISCV_INSN_SLLI_SHIFT5, RISCV32BF_RV32_INSN_SLLI_SHIFT5, RISCV32BF_RV32_SFMT_SLLI_SHIFT5 },
  { RISCV_INSN_SRLI_SHIFT5, RISCV32BF_RV32_INSN_SRLI_SHIFT5, RISCV32BF_RV32_SFMT_SLLI_SHIFT5 },
  { RISCV_INSN_SRAI_SHIFT5, RISCV32BF_RV32_INSN_SRAI_SHIFT5, RISCV32BF_RV32_SFMT_SLLI_SHIFT5 },
  { RISCV_INSN_ADD, RISCV32BF_RV32_INSN_ADD, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SUB, RISCV32BF_RV32_INSN_SUB, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SLL, RISCV32BF_RV32_INSN_SLL, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SLT, RISCV32BF_RV32_INSN_SLT, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SLTU, RISCV32BF_RV32_INSN_SLTU, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_XOR, RISCV32BF_RV32_INSN_XOR, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SRL, RISCV32BF_RV32_INSN_SRL, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_SRA, RISCV32BF_RV32_INSN_SRA, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_OR, RISCV32BF_RV32_INSN_OR, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_AND, RISCV32BF_RV32_INSN_AND, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_FENCE, RISCV32BF_RV32_INSN_FENCE, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_SFENCE_VM, RISCV32BF_RV32_INSN_SFENCE_VM, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_SFENCE_VMA, RISCV32BF_RV32_INSN_SFENCE_VMA, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FENCE_TSO, RISCV32BF_RV32_INSN_FENCE_TSO, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FENCE_I, RISCV32BF_RV32_INSN_FENCE_I, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_ECALL, RISCV32BF_RV32_INSN_ECALL, RISCV32BF_RV32_SFMT_C_EBREAK },
  { RISCV_INSN_EBREAK, RISCV32BF_RV32_INSN_EBREAK, RISCV32BF_RV32_SFMT_C_EBREAK },
  { RISCV_INSN_CSRRW, RISCV32BF_RV32_INSN_CSRRW, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_CSRRS, RISCV32BF_RV32_INSN_CSRRS, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_CSRRC, RISCV32BF_RV32_INSN_CSRRC, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_CSRRWI, RISCV32BF_RV32_INSN_CSRRWI, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_CSRRSI, RISCV32BF_RV32_INSN_CSRRSI, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_CSRRCI, RISCV32BF_RV32_INSN_CSRRCI, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_URET, RISCV32BF_RV32_INSN_URET, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_SRET, RISCV32BF_RV32_INSN_SRET, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_HRET, RISCV32BF_RV32_INSN_HRET, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_MRET, RISCV32BF_RV32_INSN_MRET, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_DRET, RISCV32BF_RV32_INSN_DRET, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_WFI, RISCV32BF_RV32_INSN_WFI, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_MUL, RISCV32BF_RV32_INSN_MUL, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_MULH, RISCV32BF_RV32_INSN_MULH, RISCV32BF_RV32_SFMT_MULH },
  { RISCV_INSN_MULHSU, RISCV32BF_RV32_INSN_MULHSU, RISCV32BF_RV32_SFMT_MULH },
  { RISCV_INSN_MULHU, RISCV32BF_RV32_INSN_MULHU, RISCV32BF_RV32_SFMT_MULH },
  { RISCV_INSN_DIV, RISCV32BF_RV32_INSN_DIV, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_DIVU, RISCV32BF_RV32_INSN_DIVU, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_REM, RISCV32BF_RV32_INSN_REM, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_REMU, RISCV32BF_RV32_INSN_REMU, RISCV32BF_RV32_SFMT_ADD },
  { RISCV_INSN_LR_W, RISCV32BF_RV32_INSN_LR_W, RISCV32BF_RV32_SFMT_LR_W },
  { RISCV_INSN_LR_W_AQ, RISCV32BF_RV32_INSN_LR_W_AQ, RISCV32BF_RV32_SFMT_LR_W },
  { RISCV_INSN_LR_W_RL, RISCV32BF_RV32_INSN_LR_W_RL, RISCV32BF_RV32_SFMT_LR_W },
  { RISCV_INSN_LR_W_AQRL, RISCV32BF_RV32_INSN_LR_W_AQRL, RISCV32BF_RV32_SFMT_LR_W },
  { RISCV_INSN_SC_W, RISCV32BF_RV32_INSN_SC_W, RISCV32BF_RV32_SFMT_SC_W },
  { RISCV_INSN_SC_W_AQ, RISCV32BF_RV32_INSN_SC_W_AQ, RISCV32BF_RV32_SFMT_SC_W },
  { RISCV_INSN_SC_W_RL, RISCV32BF_RV32_INSN_SC_W_RL, RISCV32BF_RV32_SFMT_SC_W },
  { RISCV_INSN_SC_W_AQRL, RISCV32BF_RV32_INSN_SC_W_AQRL, RISCV32BF_RV32_SFMT_SC_W },
  { RISCV_INSN_AMOSWAP_W, RISCV32BF_RV32_INSN_AMOSWAP_W, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOSWAP_W_AQ, RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOSWAP_W_RL, RISCV32BF_RV32_INSN_AMOSWAP_W_RL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOSWAP_W_AQRL, RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOADD_W, RISCV32BF_RV32_INSN_AMOADD_W, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOADD_W_AQ, RISCV32BF_RV32_INSN_AMOADD_W_AQ, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOADD_W_RL, RISCV32BF_RV32_INSN_AMOADD_W_RL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOADD_W_AQRL, RISCV32BF_RV32_INSN_AMOADD_W_AQRL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOXOR_W, RISCV32BF_RV32_INSN_AMOXOR_W, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOXOR_W_AQ, RISCV32BF_RV32_INSN_AMOXOR_W_AQ, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOXOR_W_RL, RISCV32BF_RV32_INSN_AMOXOR_W_RL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOXOR_W_AQRL, RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOAND_W, RISCV32BF_RV32_INSN_AMOAND_W, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOAND_W_AQ, RISCV32BF_RV32_INSN_AMOAND_W_AQ, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOAND_W_RL, RISCV32BF_RV32_INSN_AMOAND_W_RL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOAND_W_AQRL, RISCV32BF_RV32_INSN_AMOAND_W_AQRL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOOR_W, RISCV32BF_RV32_INSN_AMOOR_W, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOOR_W_AQ, RISCV32BF_RV32_INSN_AMOOR_W_AQ, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOOR_W_RL, RISCV32BF_RV32_INSN_AMOOR_W_RL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOOR_W_AQRL, RISCV32BF_RV32_INSN_AMOOR_W_AQRL, RISCV32BF_RV32_SFMT_AMOSWAP_W },
  { RISCV_INSN_AMOMIN_W, RISCV32BF_RV32_INSN_AMOMIN_W, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMIN_W_AQ, RISCV32BF_RV32_INSN_AMOMIN_W_AQ, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMIN_W_RL, RISCV32BF_RV32_INSN_AMOMIN_W_RL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMIN_W_AQRL, RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAX_W, RISCV32BF_RV32_INSN_AMOMAX_W, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAX_W_AQ, RISCV32BF_RV32_INSN_AMOMAX_W_AQ, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAX_W_RL, RISCV32BF_RV32_INSN_AMOMAX_W_RL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAX_W_AQRL, RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMINU_W, RISCV32BF_RV32_INSN_AMOMINU_W, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMINU_W_AQ, RISCV32BF_RV32_INSN_AMOMINU_W_AQ, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMINU_W_RL, RISCV32BF_RV32_INSN_AMOMINU_W_RL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMINU_W_AQRL, RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAXU_W, RISCV32BF_RV32_INSN_AMOMAXU_W, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAXU_W_AQ, RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAXU_W_RL, RISCV32BF_RV32_INSN_AMOMAXU_W_RL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_AMOMAXU_W_AQRL, RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, RISCV32BF_RV32_SFMT_AMOMIN_W },
  { RISCV_INSN_FLW, RISCV32BF_RV32_INSN_FLW, RISCV32BF_RV32_SFMT_FLW },
  { RISCV_INSN_FSW, RISCV32BF_RV32_INSN_FSW, RISCV32BF_RV32_SFMT_FSW },
  { RISCV_INSN_FMADD_S, RISCV32BF_RV32_INSN_FMADD_S, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FMSUB_S, RISCV32BF_RV32_INSN_FMSUB_S, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FNMSUB_S, RISCV32BF_RV32_INSN_FNMSUB_S, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FNMADD_S, RISCV32BF_RV32_INSN_FNMADD_S, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FADD_S, RISCV32BF_RV32_INSN_FADD_S, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FSUB_S, RISCV32BF_RV32_INSN_FSUB_S, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FMUL_S, RISCV32BF_RV32_INSN_FMUL_S, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FDIV_S, RISCV32BF_RV32_INSN_FDIV_S, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FSGNJ_S, RISCV32BF_RV32_INSN_FSGNJ_S, RISCV32BF_RV32_SFMT_FSGNJ_S },
  { RISCV_INSN_FSGNJN_S, RISCV32BF_RV32_INSN_FSGNJN_S, RISCV32BF_RV32_SFMT_FSGNJ_S },
  { RISCV_INSN_FSGNJX_S, RISCV32BF_RV32_INSN_FSGNJX_S, RISCV32BF_RV32_SFMT_FSGNJ_S },
  { RISCV_INSN_FMIN_S, RISCV32BF_RV32_INSN_FMIN_S, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FMAX_S, RISCV32BF_RV32_INSN_FMAX_S, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FEQ_S, RISCV32BF_RV32_INSN_FEQ_S, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FLT_S, RISCV32BF_RV32_INSN_FLT_S, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FLE_S, RISCV32BF_RV32_INSN_FLE_S, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FSQRT_S, RISCV32BF_RV32_INSN_FSQRT_S, RISCV32BF_RV32_SFMT_FSQRT_S },
  { RISCV_INSN_FCVT_W_S, RISCV32BF_RV32_INSN_FCVT_W_S, RISCV32BF_RV32_SFMT_FCVT_W_S },
  { RISCV_INSN_FCVT_WU_S, RISCV32BF_RV32_INSN_FCVT_WU_S, RISCV32BF_RV32_SFMT_FCVT_W_S },
  { RISCV_INSN_FMV_X_W, RISCV32BF_RV32_INSN_FMV_X_W, RISCV32BF_RV32_SFMT_FMV_X_W },
  { RISCV_INSN_FCLASS_S, RISCV32BF_RV32_INSN_FCLASS_S, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_S_W, RISCV32BF_RV32_INSN_FCVT_S_W, RISCV32BF_RV32_SFMT_FCVT_S_W },
  { RISCV_INSN_FCVT_S_WU, RISCV32BF_RV32_INSN_FCVT_S_WU, RISCV32BF_RV32_SFMT_FCVT_S_W },
  { RISCV_INSN_FMV_W_X, RISCV32BF_RV32_INSN_FMV_W_X, RISCV32BF_RV32_SFMT_FMV_W_X },
  { RISCV_INSN_FLD, RISCV32BF_RV32_INSN_FLD, RISCV32BF_RV32_SFMT_FLD },
  { RISCV_INSN_FSD, RISCV32BF_RV32_INSN_FSD, RISCV32BF_RV32_SFMT_FSD },
  { RISCV_INSN_FMADD_D, RISCV32BF_RV32_INSN_FMADD_D, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FMSUB_D, RISCV32BF_RV32_INSN_FMSUB_D, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FNMSUB_D, RISCV32BF_RV32_INSN_FNMSUB_D, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FNMADD_D, RISCV32BF_RV32_INSN_FNMADD_D, RISCV32BF_RV32_SFMT_FMADD_S },
  { RISCV_INSN_FADD_D, RISCV32BF_RV32_INSN_FADD_D, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FSUB_D, RISCV32BF_RV32_INSN_FSUB_D, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FMUL_D, RISCV32BF_RV32_INSN_FMUL_D, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FDIV_D, RISCV32BF_RV32_INSN_FDIV_D, RISCV32BF_RV32_SFMT_FADD_S },
  { RISCV_INSN_FSGNJ_D, RISCV32BF_RV32_INSN_FSGNJ_D, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FSGNJN_D, RISCV32BF_RV32_INSN_FSGNJN_D, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FSGNJX_D, RISCV32BF_RV32_INSN_FSGNJX_D, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FMIN_D, RISCV32BF_RV32_INSN_FMIN_D, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FMAX_D, RISCV32BF_RV32_INSN_FMAX_D, RISCV32BF_RV32_SFMT_FMIN_S },
  { RISCV_INSN_FEQ_D, RISCV32BF_RV32_INSN_FEQ_D, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FLT_D, RISCV32BF_RV32_INSN_FLT_D, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FLE_D, RISCV32BF_RV32_INSN_FLE_D, RISCV32BF_RV32_SFMT_FEQ_S },
  { RISCV_INSN_FSQRT_D, RISCV32BF_RV32_INSN_FSQRT_D, RISCV32BF_RV32_SFMT_FSQRT_S },
  { RISCV_INSN_FCVT_W_D, RISCV32BF_RV32_INSN_FCVT_W_D, RISCV32BF_RV32_SFMT_FCVT_W_S },
  { RISCV_INSN_FCVT_WU_D, RISCV32BF_RV32_INSN_FCVT_WU_D, RISCV32BF_RV32_SFMT_FCVT_W_S },
  { RISCV_INSN_FCLASS_D, RISCV32BF_RV32_INSN_FCLASS_D, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_D_W, RISCV32BF_RV32_INSN_FCVT_D_W, RISCV32BF_RV32_SFMT_FCVT_D_W },
  { RISCV_INSN_FCVT_D_WU, RISCV32BF_RV32_INSN_FCVT_D_WU, RISCV32BF_RV32_SFMT_FCVT_D_W },
  { RISCV_INSN_FCVT_S_D, RISCV32BF_RV32_INSN_FCVT_S_D, RISCV32BF_RV32_SFMT_FSQRT_S },
  { RISCV_INSN_FCVT_D_S, RISCV32BF_RV32_INSN_FCVT_D_S, RISCV32BF_RV32_SFMT_FCVT_D_S },
  { RISCV_INSN_FLQ, RISCV32BF_RV32_INSN_FLQ, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSQ, RISCV32BF_RV32_INSN_FSQ, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FMADD_Q, RISCV32BF_RV32_INSN_FMADD_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FMSUB_Q, RISCV32BF_RV32_INSN_FMSUB_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FNMSUB_Q, RISCV32BF_RV32_INSN_FNMSUB_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FNMADD_Q, RISCV32BF_RV32_INSN_FNMADD_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FADD_Q, RISCV32BF_RV32_INSN_FADD_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSUB_Q, RISCV32BF_RV32_INSN_FSUB_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FMUL_Q, RISCV32BF_RV32_INSN_FMUL_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FDIV_Q, RISCV32BF_RV32_INSN_FDIV_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSGNJ_Q, RISCV32BF_RV32_INSN_FSGNJ_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSGNJN_Q, RISCV32BF_RV32_INSN_FSGNJN_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSGNJX_Q, RISCV32BF_RV32_INSN_FSGNJX_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FMIN_Q, RISCV32BF_RV32_INSN_FMIN_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FMAX_Q, RISCV32BF_RV32_INSN_FMAX_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FEQ_Q, RISCV32BF_RV32_INSN_FEQ_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FLT_Q, RISCV32BF_RV32_INSN_FLT_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FLE_Q, RISCV32BF_RV32_INSN_FLE_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FSQRT_Q, RISCV32BF_RV32_INSN_FSQRT_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_W_Q, RISCV32BF_RV32_INSN_FCVT_W_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_WU_Q, RISCV32BF_RV32_INSN_FCVT_WU_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCLASS_Q, RISCV32BF_RV32_INSN_FCLASS_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_Q_W, RISCV32BF_RV32_INSN_FCVT_Q_W, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_Q_WU, RISCV32BF_RV32_INSN_FCVT_Q_WU, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_S_Q, RISCV32BF_RV32_INSN_FCVT_S_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_D_Q, RISCV32BF_RV32_INSN_FCVT_D_Q, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_Q_S, RISCV32BF_RV32_INSN_FCVT_Q_S, RISCV32BF_RV32_SFMT_C_NOP },
  { RISCV_INSN_FCVT_Q_D, RISCV32BF_RV32_INSN_FCVT_Q_D, RISCV32BF_RV32_SFMT_C_NOP },
};

static const struct insn_sem riscv32bf_rv32_insn_sem_invalid =
{
  VIRTUAL_INSN_X_INVALID, RISCV32BF_RV32_INSN_X_INVALID, RISCV32BF_RV32_SFMT_EMPTY
};

/* Initialize an IDESC from the compile-time computable parts.  */

static INLINE void
init_idesc (SIM_CPU *cpu, IDESC *id, const struct insn_sem *t)
{
  const CGEN_INSN *insn_table = CGEN_CPU_INSN_TABLE (CPU_CPU_DESC (cpu))->init_entries;

  id->num = t->index;
  id->sfmt = t->sfmt;
  if ((int) t->type <= 0)
    id->idata = & cgen_virtual_insn_table[- (int) t->type];
  else
    id->idata = & insn_table[t->type];
  id->attrs = CGEN_INSN_ATTRS (id->idata);
  /* Oh my god, a magic number.  */
  id->length = CGEN_INSN_BITSIZE (id->idata) / 8;

#if WITH_PROFILE_MODEL_P
  id->timing = & MODEL_TIMING (CPU_MODEL (cpu)) [t->index];
  {
    SIM_DESC sd = CPU_STATE (cpu);
    SIM_ASSERT (t->index == id->timing->num);
  }
#endif

  /* Semantic pointers are initialized elsewhere.  */
}

/* Initialize the instruction descriptor table.  */

void
riscv32bf_rv32_init_idesc_table (SIM_CPU *cpu)
{
  IDESC *id,*tabend;
  const struct insn_sem *t,*tend;
  int tabsize = RISCV32BF_RV32_INSN__MAX;
  IDESC *table = riscv32bf_rv32_insn_data;

  memset (table, 0, tabsize * sizeof (IDESC));

  /* First set all entries to the `invalid insn'.  */
  t = & riscv32bf_rv32_insn_sem_invalid;
  for (id = table, tabend = table + tabsize; id < tabend; ++id)
    init_idesc (cpu, id, t);

  /* Now fill in the values for the chosen cpu.  */
  for (t = riscv32bf_rv32_insn_sem, tend = t + sizeof (riscv32bf_rv32_insn_sem) / sizeof (*t);
       t != tend; ++t)
    {
      init_idesc (cpu, & table[t->index], t);
    }

  /* Link the IDESC table into the cpu.  */
  CPU_IDESC (cpu) = table;
}

/* Given an instruction, return a pointer to its IDESC entry.  */

const IDESC *
riscv32bf_rv32_decode (SIM_CPU *current_cpu, IADDR pc,
              CGEN_INSN_WORD base_insn, CGEN_INSN_WORD entire_insn,
              ARGBUF *abuf)
{
  /* Result of decoder.  */
  RISCV32BF_RV32_INSN_TYPE itype;

  {
    CGEN_INSN_WORD insn = base_insn;

    {
      unsigned int val = (((insn >> 5) & (15 << 7)) | ((insn >> 0) & (127 << 0)));
      switch (val)
      {
      case 0 :
        {
          unsigned int val = (((insn >> 7) & (31 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_UNIMP; goto extract_sfmt_c_nop;
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 : /* fall through */
          case 16 : /* fall through */
          case 17 : /* fall through */
          case 18 : /* fall through */
          case 19 : /* fall through */
          case 20 : /* fall through */
          case 21 : /* fall through */
          case 22 : /* fall through */
          case 23 : /* fall through */
          case 24 : /* fall through */
          case 25 : /* fall through */
          case 26 : /* fall through */
          case 27 : /* fall through */
          case 28 : /* fall through */
          case 29 : /* fall through */
          case 30 : /* fall through */
          case 31 : itype = RISCV32BF_RV32_INSN_C_ADDI4SPN; goto extract_sfmt_c_addi4spn;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1 :
        {
          unsigned int val = (((insn >> 7) & (31 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_NOP; goto extract_sfmt_c_nop;
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 : /* fall through */
          case 16 : /* fall through */
          case 17 : /* fall through */
          case 18 : /* fall through */
          case 19 : /* fall through */
          case 20 : /* fall through */
          case 21 : /* fall through */
          case 22 : /* fall through */
          case 23 : /* fall through */
          case 24 : /* fall through */
          case 25 : /* fall through */
          case 26 : /* fall through */
          case 27 : /* fall through */
          case 28 : /* fall through */
          case 29 : /* fall through */
          case 30 : /* fall through */
          case 31 : itype = RISCV32BF_RV32_INSN_C_ADDI; goto extract_sfmt_c_addi;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 2 : itype = RISCV32BF_RV32_INSN_C_SLLI64; goto extract_sfmt_c_nop;
      case 3 : /* fall through */
      case 1027 : itype = RISCV32BF_RV32_INSN_LB; goto extract_sfmt_lb;
      case 4 : /* fall through */
      case 8 : /* fall through */
      case 12 : /* fall through */
      case 16 : /* fall through */
      case 20 : /* fall through */
      case 24 : /* fall through */
      case 28 : /* fall through */
      case 32 : /* fall through */
      case 36 : /* fall through */
      case 40 : /* fall through */
      case 44 : /* fall through */
      case 48 : /* fall through */
      case 52 : /* fall through */
      case 56 : /* fall through */
      case 60 : /* fall through */
      case 64 : /* fall through */
      case 68 : /* fall through */
      case 72 : /* fall through */
      case 76 : /* fall through */
      case 80 : /* fall through */
      case 84 : /* fall through */
      case 88 : /* fall through */
      case 92 : /* fall through */
      case 96 : /* fall through */
      case 100 : /* fall through */
      case 104 : /* fall through */
      case 108 : /* fall through */
      case 112 : /* fall through */
      case 116 : /* fall through */
      case 120 : /* fall through */
      case 124 : /* fall through */
      case 128 : /* fall through */
      case 132 : /* fall through */
      case 136 : /* fall through */
      case 140 : /* fall through */
      case 144 : /* fall through */
      case 148 : /* fall through */
      case 152 : /* fall through */
      case 156 : /* fall through */
      case 160 : /* fall through */
      case 164 : /* fall through */
      case 168 : /* fall through */
      case 172 : /* fall through */
      case 176 : /* fall through */
      case 180 : /* fall through */
      case 184 : /* fall through */
      case 188 : /* fall through */
      case 192 : /* fall through */
      case 196 : /* fall through */
      case 200 : /* fall through */
      case 204 : /* fall through */
      case 208 : /* fall through */
      case 212 : /* fall through */
      case 216 : /* fall through */
      case 220 : /* fall through */
      case 224 : /* fall through */
      case 228 : /* fall through */
      case 232 : /* fall through */
      case 236 : /* fall through */
      case 240 : /* fall through */
      case 244 : /* fall through */
      case 248 : /* fall through */
      case 252 : itype = RISCV32BF_RV32_INSN_C_ADDI4SPN; goto extract_sfmt_c_addi4spn;
      case 5 : /* fall through */
      case 9 : /* fall through */
      case 13 : /* fall through */
      case 17 : /* fall through */
      case 21 : /* fall through */
      case 25 : /* fall through */
      case 29 : /* fall through */
      case 33 : /* fall through */
      case 37 : /* fall through */
      case 41 : /* fall through */
      case 45 : /* fall through */
      case 49 : /* fall through */
      case 53 : /* fall through */
      case 57 : /* fall through */
      case 61 : /* fall through */
      case 65 : /* fall through */
      case 69 : /* fall through */
      case 73 : /* fall through */
      case 77 : /* fall through */
      case 81 : /* fall through */
      case 85 : /* fall through */
      case 89 : /* fall through */
      case 93 : /* fall through */
      case 97 : /* fall through */
      case 101 : /* fall through */
      case 105 : /* fall through */
      case 109 : /* fall through */
      case 113 : /* fall through */
      case 117 : /* fall through */
      case 121 : /* fall through */
      case 125 : /* fall through */
      case 129 : /* fall through */
      case 133 : /* fall through */
      case 137 : /* fall through */
      case 141 : /* fall through */
      case 145 : /* fall through */
      case 149 : /* fall through */
      case 153 : /* fall through */
      case 157 : /* fall through */
      case 161 : /* fall through */
      case 165 : /* fall through */
      case 169 : /* fall through */
      case 173 : /* fall through */
      case 177 : /* fall through */
      case 181 : /* fall through */
      case 185 : /* fall through */
      case 189 : /* fall through */
      case 193 : /* fall through */
      case 197 : /* fall through */
      case 201 : /* fall through */
      case 205 : /* fall through */
      case 209 : /* fall through */
      case 213 : /* fall through */
      case 217 : /* fall through */
      case 221 : /* fall through */
      case 225 : /* fall through */
      case 229 : /* fall through */
      case 233 : /* fall through */
      case 237 : /* fall through */
      case 241 : /* fall through */
      case 245 : /* fall through */
      case 249 : /* fall through */
      case 253 : itype = RISCV32BF_RV32_INSN_C_ADDI; goto extract_sfmt_c_addi;
      case 6 : /* fall through */
      case 10 : /* fall through */
      case 14 : /* fall through */
      case 18 : /* fall through */
      case 22 : /* fall through */
      case 26 : /* fall through */
      case 30 : /* fall through */
      case 34 : /* fall through */
      case 38 : /* fall through */
      case 42 : /* fall through */
      case 46 : /* fall through */
      case 50 : /* fall through */
      case 54 : /* fall through */
      case 58 : /* fall through */
      case 62 : /* fall through */
      case 66 : /* fall through */
      case 70 : /* fall through */
      case 74 : /* fall through */
      case 78 : /* fall through */
      case 82 : /* fall through */
      case 86 : /* fall through */
      case 90 : /* fall through */
      case 94 : /* fall through */
      case 98 : /* fall through */
      case 102 : /* fall through */
      case 106 : /* fall through */
      case 110 : /* fall through */
      case 114 : /* fall through */
      case 118 : /* fall through */
      case 122 : /* fall through */
      case 126 : /* fall through */
      case 130 : /* fall through */
      case 134 : /* fall through */
      case 138 : /* fall through */
      case 142 : /* fall through */
      case 146 : /* fall through */
      case 150 : /* fall through */
      case 154 : /* fall through */
      case 158 : /* fall through */
      case 162 : /* fall through */
      case 166 : /* fall through */
      case 170 : /* fall through */
      case 174 : /* fall through */
      case 178 : /* fall through */
      case 182 : /* fall through */
      case 186 : /* fall through */
      case 190 : /* fall through */
      case 194 : /* fall through */
      case 198 : /* fall through */
      case 202 : /* fall through */
      case 206 : /* fall through */
      case 210 : /* fall through */
      case 214 : /* fall through */
      case 218 : /* fall through */
      case 222 : /* fall through */
      case 226 : /* fall through */
      case 230 : /* fall through */
      case 234 : /* fall through */
      case 238 : /* fall through */
      case 242 : /* fall through */
      case 246 : /* fall through */
      case 250 : /* fall through */
      case 254 : itype = RISCV32BF_RV32_INSN_C_SLLI; goto extract_sfmt_c_slli;
      case 15 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 31) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xf00fffff) == 0xf)
              { itype = RISCV32BF_RV32_INSN_FENCE; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xf00fffff) == 0x8000000f)
              { itype = RISCV32BF_RV32_INSN_FENCE_TSO; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 19 : /* fall through */
      case 1043 : itype = RISCV32BF_RV32_INSN_ADDI; goto extract_sfmt_addi;
      case 23 : /* fall through */
      case 151 : /* fall through */
      case 279 : /* fall through */
      case 407 : /* fall through */
      case 535 : /* fall through */
      case 663 : /* fall through */
      case 791 : /* fall through */
      case 919 : /* fall through */
      case 1047 : /* fall through */
      case 1175 : /* fall through */
      case 1303 : /* fall through */
      case 1431 : /* fall through */
      case 1559 : /* fall through */
      case 1687 : /* fall through */
      case 1815 : /* fall through */
      case 1943 : itype = RISCV32BF_RV32_INSN_AUIPC; goto extract_sfmt_auipc;
      case 35 : /* fall through */
      case 1059 : itype = RISCV32BF_RV32_INSN_SB; goto extract_sfmt_sb;
      case 51 : /* fall through */
      case 1075 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 29) & (1 << 1)) | ((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x33)
              { itype = RISCV32BF_RV32_INSN_ADD; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2000033)
              { itype = RISCV32BF_RV32_INSN_MUL; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00707f) == 0x40000033)
              { itype = RISCV32BF_RV32_INSN_SUB; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 55 : /* fall through */
      case 183 : /* fall through */
      case 311 : /* fall through */
      case 439 : /* fall through */
      case 567 : /* fall through */
      case 695 : /* fall through */
      case 823 : /* fall through */
      case 951 : /* fall through */
      case 1079 : /* fall through */
      case 1207 : /* fall through */
      case 1335 : /* fall through */
      case 1463 : /* fall through */
      case 1591 : /* fall through */
      case 1719 : /* fall through */
      case 1847 : /* fall through */
      case 1975 : itype = RISCV32BF_RV32_INSN_LUI; goto extract_sfmt_lui;
      case 67 : /* fall through */
      case 195 : /* fall through */
      case 323 : /* fall through */
      case 451 : /* fall through */
      case 579 : /* fall through */
      case 707 : /* fall through */
      case 835 : /* fall through */
      case 963 : /* fall through */
      case 1091 : /* fall through */
      case 1219 : /* fall through */
      case 1347 : /* fall through */
      case 1475 : /* fall through */
      case 1603 : /* fall through */
      case 1731 : /* fall through */
      case 1859 : /* fall through */
      case 1987 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FMADD_S; goto extract_sfmt_fmadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FMADD_D; goto extract_sfmt_fmadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FMADD_Q; goto extract_sfmt_c_nop;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 71 : /* fall through */
      case 199 : /* fall through */
      case 327 : /* fall through */
      case 455 : /* fall through */
      case 583 : /* fall through */
      case 711 : /* fall through */
      case 839 : /* fall through */
      case 967 : /* fall through */
      case 1095 : /* fall through */
      case 1223 : /* fall through */
      case 1351 : /* fall through */
      case 1479 : /* fall through */
      case 1607 : /* fall through */
      case 1735 : /* fall through */
      case 1863 : /* fall through */
      case 1991 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FMSUB_S; goto extract_sfmt_fmadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FMSUB_D; goto extract_sfmt_fmadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FMSUB_Q; goto extract_sfmt_c_nop;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 75 : /* fall through */
      case 203 : /* fall through */
      case 331 : /* fall through */
      case 459 : /* fall through */
      case 587 : /* fall through */
      case 715 : /* fall through */
      case 843 : /* fall through */
      case 971 : /* fall through */
      case 1099 : /* fall through */
      case 1227 : /* fall through */
      case 1355 : /* fall through */
      case 1483 : /* fall through */
      case 1611 : /* fall through */
      case 1739 : /* fall through */
      case 1867 : /* fall through */
      case 1995 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FNMSUB_S; goto extract_sfmt_fmadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FNMSUB_D; goto extract_sfmt_fmadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FNMSUB_Q; goto extract_sfmt_c_nop;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 79 : /* fall through */
      case 207 : /* fall through */
      case 335 : /* fall through */
      case 463 : /* fall through */
      case 591 : /* fall through */
      case 719 : /* fall through */
      case 847 : /* fall through */
      case 975 : /* fall through */
      case 1103 : /* fall through */
      case 1231 : /* fall through */
      case 1359 : /* fall through */
      case 1487 : /* fall through */
      case 1615 : /* fall through */
      case 1743 : /* fall through */
      case 1871 : /* fall through */
      case 1999 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FNMADD_S; goto extract_sfmt_fmadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FNMADD_D; goto extract_sfmt_fmadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FNMADD_Q; goto extract_sfmt_c_nop;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 83 : /* fall through */
      case 1107 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_fadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_fadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_nop;
          case 4 : itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_fadd_s;
          case 5 : itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_fadd_s;
          case 7 : itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_nop;
          case 8 : itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_fadd_s;
          case 9 : itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_fadd_s;
          case 11 : itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_nop;
          case 12 : itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_fadd_s;
          case 13 : itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_fadd_s;
          case 15 : itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_nop;
          case 16 : itype = RISCV32BF_RV32_INSN_FSGNJ_S; goto extract_sfmt_fsgnj_s;
          case 17 : itype = RISCV32BF_RV32_INSN_FSGNJ_D; goto extract_sfmt_fmin_s;
          case 19 : itype = RISCV32BF_RV32_INSN_FSGNJ_Q; goto extract_sfmt_c_nop;
          case 20 : itype = RISCV32BF_RV32_INSN_FMIN_S; goto extract_sfmt_fmin_s;
          case 21 : itype = RISCV32BF_RV32_INSN_FMIN_D; goto extract_sfmt_fmin_s;
          case 23 : itype = RISCV32BF_RV32_INSN_FMIN_Q; goto extract_sfmt_c_nop;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_fsqrt_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 33 :
            {
              unsigned int val = (((insn >> 20) & (3 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0707f) == 0x42000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_S; goto extract_sfmt_fcvt_d_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0xfff0007f) == 0x42300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 35 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0707f) == 0x46000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_S; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0x46100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_D; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 : itype = RISCV32BF_RV32_INSN_FLE_S; goto extract_sfmt_feq_s;
          case 81 : itype = RISCV32BF_RV32_INSN_FLE_D; goto extract_sfmt_feq_s;
          case 83 : itype = RISCV32BF_RV32_INSN_FLE_Q; goto extract_sfmt_c_nop;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 97 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc2000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 99 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc6000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 104 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xd0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 105 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0707f) == 0xd2000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_W; goto extract_sfmt_fcvt_d_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0xd2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_WU; goto extract_sfmt_fcvt_d_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 107 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0707f) == 0xd6000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_W; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0xd6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_WU; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 112 :
            if ((entire_insn & 0xfff0707f) == 0xe0000053)
              { itype = RISCV32BF_RV32_INSN_FMV_X_W; goto extract_sfmt_fmv_x_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 120 :
            if ((entire_insn & 0xfff0707f) == 0xf0000053)
              { itype = RISCV32BF_RV32_INSN_FMV_W_X; goto extract_sfmt_fmv_w_x; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 99 : /* fall through */
      case 1123 : itype = RISCV32BF_RV32_INSN_BEQ; goto extract_sfmt_beq;
      case 103 : /* fall through */
      case 1127 : itype = RISCV32BF_RV32_INSN_JALR; goto extract_sfmt_jalr;
      case 111 : /* fall through */
      case 239 : /* fall through */
      case 367 : /* fall through */
      case 495 : /* fall through */
      case 623 : /* fall through */
      case 751 : /* fall through */
      case 879 : /* fall through */
      case 1007 : /* fall through */
      case 1135 : /* fall through */
      case 1263 : /* fall through */
      case 1391 : /* fall through */
      case 1519 : /* fall through */
      case 1647 : /* fall through */
      case 1775 : /* fall through */
      case 1903 : /* fall through */
      case 2031 : itype = RISCV32BF_RV32_INSN_JAL; goto extract_sfmt_jal;
      case 115 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 23) & (7 << 4)) | ((insn >> 22) & (1 << 3)) | ((insn >> 20) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xffffffff) == 0x73)
              { itype = RISCV32BF_RV32_INSN_ECALL; goto extract_sfmt_c_ebreak; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xffffffff) == 0x100073)
              { itype = RISCV32BF_RV32_INSN_EBREAK; goto extract_sfmt_c_ebreak; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xffffffff) == 0x200073)
              { itype = RISCV32BF_RV32_INSN_URET; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 34 :
            if ((entire_insn & 0xffffffff) == 0x10200073)
              { itype = RISCV32BF_RV32_INSN_SRET; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 36 :
            if ((entire_insn & 0xfff07fff) == 0x10400073)
              { itype = RISCV32BF_RV32_INSN_SFENCE_VM; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 37 :
            if ((entire_insn & 0xffffffff) == 0x10500073)
              { itype = RISCV32BF_RV32_INSN_WFI; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 40 : /* fall through */
          case 41 : /* fall through */
          case 42 : /* fall through */
          case 43 : /* fall through */
          case 44 : /* fall through */
          case 45 : /* fall through */
          case 46 : /* fall through */
          case 47 :
            if ((entire_insn & 0xfe007fff) == 0x12000073)
              { itype = RISCV32BF_RV32_INSN_SFENCE_VMA; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 66 :
            if ((entire_insn & 0xffffffff) == 0x20200073)
              { itype = RISCV32BF_RV32_INSN_HRET; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 98 :
            if ((entire_insn & 0xffffffff) == 0x30200073)
              { itype = RISCV32BF_RV32_INSN_MRET; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 122 :
            if ((entire_insn & 0xffffffff) == 0x7b200073)
              { itype = RISCV32BF_RV32_INSN_DRET; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 131 : /* fall through */
      case 1155 : itype = RISCV32BF_RV32_INSN_LH; goto extract_sfmt_lh;
      case 143 :
        if ((entire_insn & 0xffffffff) == 0x100f)
          { itype = RISCV32BF_RV32_INSN_FENCE_I; goto extract_sfmt_c_nop; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 147 : /* fall through */
      case 1171 :
        if ((entire_insn & 0xfe00707f) == 0x1013)
          { itype = RISCV32BF_RV32_INSN_SLLI_SHIFT5; goto extract_sfmt_slli_shift5; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 163 : /* fall through */
      case 1187 : itype = RISCV32BF_RV32_INSN_SH; goto extract_sfmt_sh;
      case 179 : /* fall through */
      case 1203 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x1033)
              { itype = RISCV32BF_RV32_INSN_SLL; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2001033)
              { itype = RISCV32BF_RV32_INSN_MULH; goto extract_sfmt_mulh; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 211 : /* fall through */
      case 1235 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_fadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_fadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_nop;
          case 4 : itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_fadd_s;
          case 5 : itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_fadd_s;
          case 7 : itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_nop;
          case 8 : itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_fadd_s;
          case 9 : itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_fadd_s;
          case 11 : itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_nop;
          case 12 : itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_fadd_s;
          case 13 : itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_fadd_s;
          case 15 : itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_nop;
          case 16 : itype = RISCV32BF_RV32_INSN_FSGNJN_S; goto extract_sfmt_fsgnj_s;
          case 17 : itype = RISCV32BF_RV32_INSN_FSGNJN_D; goto extract_sfmt_fmin_s;
          case 19 : itype = RISCV32BF_RV32_INSN_FSGNJN_Q; goto extract_sfmt_c_nop;
          case 20 : itype = RISCV32BF_RV32_INSN_FMAX_S; goto extract_sfmt_fmin_s;
          case 21 : itype = RISCV32BF_RV32_INSN_FMAX_D; goto extract_sfmt_fmin_s;
          case 23 : itype = RISCV32BF_RV32_INSN_FMAX_Q; goto extract_sfmt_c_nop;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_fsqrt_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 33 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 : itype = RISCV32BF_RV32_INSN_FLT_S; goto extract_sfmt_feq_s;
          case 81 : itype = RISCV32BF_RV32_INSN_FLT_D; goto extract_sfmt_feq_s;
          case 83 : itype = RISCV32BF_RV32_INSN_FLT_Q; goto extract_sfmt_c_nop;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 97 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc2000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 99 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc6000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 104 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xd0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 112 :
            if ((entire_insn & 0xfff0707f) == 0xe0001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_S; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 113 :
            if ((entire_insn & 0xfff0707f) == 0xe2001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_D; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 115 :
            if ((entire_insn & 0xfff0707f) == 0xe6001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 227 : /* fall through */
      case 1251 : itype = RISCV32BF_RV32_INSN_BNE; goto extract_sfmt_beq;
      case 243 : /* fall through */
      case 1267 : itype = RISCV32BF_RV32_INSN_CSRRW; goto extract_sfmt_c_nop;
      case 256 : /* fall through */
      case 260 : /* fall through */
      case 264 : /* fall through */
      case 268 : /* fall through */
      case 272 : /* fall through */
      case 276 : /* fall through */
      case 280 : /* fall through */
      case 284 : /* fall through */
      case 288 : /* fall through */
      case 292 : /* fall through */
      case 296 : /* fall through */
      case 300 : /* fall through */
      case 304 : /* fall through */
      case 308 : /* fall through */
      case 312 : /* fall through */
      case 316 : /* fall through */
      case 320 : /* fall through */
      case 324 : /* fall through */
      case 328 : /* fall through */
      case 332 : /* fall through */
      case 336 : /* fall through */
      case 340 : /* fall through */
      case 344 : /* fall through */
      case 348 : /* fall through */
      case 352 : /* fall through */
      case 356 : /* fall through */
      case 360 : /* fall through */
      case 364 : /* fall through */
      case 368 : /* fall through */
      case 372 : /* fall through */
      case 376 : /* fall through */
      case 380 : /* fall through */
      case 384 : /* fall through */
      case 388 : /* fall through */
      case 392 : /* fall through */
      case 396 : /* fall through */
      case 400 : /* fall through */
      case 404 : /* fall through */
      case 408 : /* fall through */
      case 412 : /* fall through */
      case 416 : /* fall through */
      case 420 : /* fall through */
      case 424 : /* fall through */
      case 428 : /* fall through */
      case 432 : /* fall through */
      case 436 : /* fall through */
      case 440 : /* fall through */
      case 444 : /* fall through */
      case 448 : /* fall through */
      case 452 : /* fall through */
      case 456 : /* fall through */
      case 460 : /* fall through */
      case 464 : /* fall through */
      case 468 : /* fall through */
      case 472 : /* fall through */
      case 476 : /* fall through */
      case 480 : /* fall through */
      case 484 : /* fall through */
      case 488 : /* fall through */
      case 492 : /* fall through */
      case 496 : /* fall through */
      case 500 : /* fall through */
      case 504 : /* fall through */
      case 508 : itype = RISCV32BF_RV32_INSN_C_FLD; goto extract_sfmt_c_fld;
      case 257 : /* fall through */
      case 261 : /* fall through */
      case 265 : /* fall through */
      case 269 : /* fall through */
      case 273 : /* fall through */
      case 277 : /* fall through */
      case 281 : /* fall through */
      case 285 : /* fall through */
      case 289 : /* fall through */
      case 293 : /* fall through */
      case 297 : /* fall through */
      case 301 : /* fall through */
      case 305 : /* fall through */
      case 309 : /* fall through */
      case 313 : /* fall through */
      case 317 : /* fall through */
      case 321 : /* fall through */
      case 325 : /* fall through */
      case 329 : /* fall through */
      case 333 : /* fall through */
      case 337 : /* fall through */
      case 341 : /* fall through */
      case 345 : /* fall through */
      case 349 : /* fall through */
      case 353 : /* fall through */
      case 357 : /* fall through */
      case 361 : /* fall through */
      case 365 : /* fall through */
      case 369 : /* fall through */
      case 373 : /* fall through */
      case 377 : /* fall through */
      case 381 : /* fall through */
      case 385 : /* fall through */
      case 389 : /* fall through */
      case 393 : /* fall through */
      case 397 : /* fall through */
      case 401 : /* fall through */
      case 405 : /* fall through */
      case 409 : /* fall through */
      case 413 : /* fall through */
      case 417 : /* fall through */
      case 421 : /* fall through */
      case 425 : /* fall through */
      case 429 : /* fall through */
      case 433 : /* fall through */
      case 437 : /* fall through */
      case 441 : /* fall through */
      case 445 : /* fall through */
      case 449 : /* fall through */
      case 453 : /* fall through */
      case 457 : /* fall through */
      case 461 : /* fall through */
      case 465 : /* fall through */
      case 469 : /* fall through */
      case 473 : /* fall through */
      case 477 : /* fall through */
      case 481 : /* fall through */
      case 485 : /* fall through */
      case 489 : /* fall through */
      case 493 : /* fall through */
      case 497 : /* fall through */
      case 501 : /* fall through */
      case 505 : /* fall through */
      case 509 : itype = RISCV32BF_RV32_INSN_C_JAL; goto extract_sfmt_c_jal;
      case 258 : /* fall through */
      case 262 : /* fall through */
      case 266 : /* fall through */
      case 270 : /* fall through */
      case 274 : /* fall through */
      case 278 : /* fall through */
      case 282 : /* fall through */
      case 286 : /* fall through */
      case 290 : /* fall through */
      case 294 : /* fall through */
      case 298 : /* fall through */
      case 302 : /* fall through */
      case 306 : /* fall through */
      case 310 : /* fall through */
      case 314 : /* fall through */
      case 318 : /* fall through */
      case 322 : /* fall through */
      case 326 : /* fall through */
      case 330 : /* fall through */
      case 334 : /* fall through */
      case 338 : /* fall through */
      case 342 : /* fall through */
      case 346 : /* fall through */
      case 350 : /* fall through */
      case 354 : /* fall through */
      case 358 : /* fall through */
      case 362 : /* fall through */
      case 366 : /* fall through */
      case 370 : /* fall through */
      case 374 : /* fall through */
      case 378 : /* fall through */
      case 382 : /* fall through */
      case 386 : /* fall through */
      case 390 : /* fall through */
      case 394 : /* fall through */
      case 398 : /* fall through */
      case 402 : /* fall through */
      case 406 : /* fall through */
      case 410 : /* fall through */
      case 414 : /* fall through */
      case 418 : /* fall through */
      case 422 : /* fall through */
      case 426 : /* fall through */
      case 430 : /* fall through */
      case 434 : /* fall through */
      case 438 : /* fall through */
      case 442 : /* fall through */
      case 446 : /* fall through */
      case 450 : /* fall through */
      case 454 : /* fall through */
      case 458 : /* fall through */
      case 462 : /* fall through */
      case 466 : /* fall through */
      case 470 : /* fall through */
      case 474 : /* fall through */
      case 478 : /* fall through */
      case 482 : /* fall through */
      case 486 : /* fall through */
      case 490 : /* fall through */
      case 494 : /* fall through */
      case 498 : /* fall through */
      case 502 : /* fall through */
      case 506 : /* fall through */
      case 510 : itype = RISCV32BF_RV32_INSN_C_FLDSP; goto extract_sfmt_c_fldsp;
      case 259 : /* fall through */
      case 1283 : itype = RISCV32BF_RV32_INSN_LW; goto extract_sfmt_lw;
      case 263 : /* fall through */
      case 1287 : itype = RISCV32BF_RV32_INSN_FLW; goto extract_sfmt_flw;
      case 275 : /* fall through */
      case 1299 : itype = RISCV32BF_RV32_INSN_SLTI; goto extract_sfmt_addi;
      case 291 : /* fall through */
      case 1315 : itype = RISCV32BF_RV32_INSN_SW; goto extract_sfmt_sw;
      case 295 : /* fall through */
      case 1319 : itype = RISCV32BF_RV32_INSN_FSW; goto extract_sfmt_fsw;
      case 303 : /* fall through */
      case 1327 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_AMOADD_W; goto extract_sfmt_amoswap_w;
          case 1 : itype = RISCV32BF_RV32_INSN_AMOADD_W_RL; goto extract_sfmt_amoswap_w;
          case 2 : itype = RISCV32BF_RV32_INSN_AMOADD_W_AQ; goto extract_sfmt_amoswap_w;
          case 3 : itype = RISCV32BF_RV32_INSN_AMOADD_W_AQRL; goto extract_sfmt_amoswap_w;
          case 4 : itype = RISCV32BF_RV32_INSN_AMOSWAP_W; goto extract_sfmt_amoswap_w;
          case 5 : itype = RISCV32BF_RV32_INSN_AMOSWAP_W_RL; goto extract_sfmt_amoswap_w;
          case 6 : itype = RISCV32BF_RV32_INSN_AMOSWAP_W_AQ; goto extract_sfmt_amoswap_w;
          case 7 : itype = RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL; goto extract_sfmt_amoswap_w;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0x1000202f)
              { itype = RISCV32BF_RV32_INSN_LR_W; goto extract_sfmt_lr_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((entire_insn & 0xfff0707f) == 0x1200202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_RL; goto extract_sfmt_lr_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 :
            if ((entire_insn & 0xfff0707f) == 0x1400202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_AQ; goto extract_sfmt_lr_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 11 :
            if ((entire_insn & 0xfff0707f) == 0x1600202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_AQRL; goto extract_sfmt_lr_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 : itype = RISCV32BF_RV32_INSN_SC_W; goto extract_sfmt_sc_w;
          case 13 : itype = RISCV32BF_RV32_INSN_SC_W_RL; goto extract_sfmt_sc_w;
          case 14 : itype = RISCV32BF_RV32_INSN_SC_W_AQ; goto extract_sfmt_sc_w;
          case 15 : itype = RISCV32BF_RV32_INSN_SC_W_AQRL; goto extract_sfmt_sc_w;
          case 16 : itype = RISCV32BF_RV32_INSN_AMOXOR_W; goto extract_sfmt_amoswap_w;
          case 17 : itype = RISCV32BF_RV32_INSN_AMOXOR_W_RL; goto extract_sfmt_amoswap_w;
          case 18 : itype = RISCV32BF_RV32_INSN_AMOXOR_W_AQ; goto extract_sfmt_amoswap_w;
          case 19 : itype = RISCV32BF_RV32_INSN_AMOXOR_W_AQRL; goto extract_sfmt_amoswap_w;
          case 32 : itype = RISCV32BF_RV32_INSN_AMOOR_W; goto extract_sfmt_amoswap_w;
          case 33 : itype = RISCV32BF_RV32_INSN_AMOOR_W_RL; goto extract_sfmt_amoswap_w;
          case 34 : itype = RISCV32BF_RV32_INSN_AMOOR_W_AQ; goto extract_sfmt_amoswap_w;
          case 35 : itype = RISCV32BF_RV32_INSN_AMOOR_W_AQRL; goto extract_sfmt_amoswap_w;
          case 48 : itype = RISCV32BF_RV32_INSN_AMOAND_W; goto extract_sfmt_amoswap_w;
          case 49 : itype = RISCV32BF_RV32_INSN_AMOAND_W_RL; goto extract_sfmt_amoswap_w;
          case 50 : itype = RISCV32BF_RV32_INSN_AMOAND_W_AQ; goto extract_sfmt_amoswap_w;
          case 51 : itype = RISCV32BF_RV32_INSN_AMOAND_W_AQRL; goto extract_sfmt_amoswap_w;
          case 64 : itype = RISCV32BF_RV32_INSN_AMOMIN_W; goto extract_sfmt_amomin_w;
          case 65 : itype = RISCV32BF_RV32_INSN_AMOMIN_W_RL; goto extract_sfmt_amomin_w;
          case 66 : itype = RISCV32BF_RV32_INSN_AMOMIN_W_AQ; goto extract_sfmt_amomin_w;
          case 67 : itype = RISCV32BF_RV32_INSN_AMOMIN_W_AQRL; goto extract_sfmt_amomin_w;
          case 80 : itype = RISCV32BF_RV32_INSN_AMOMAX_W; goto extract_sfmt_amomin_w;
          case 81 : itype = RISCV32BF_RV32_INSN_AMOMAX_W_RL; goto extract_sfmt_amomin_w;
          case 82 : itype = RISCV32BF_RV32_INSN_AMOMAX_W_AQ; goto extract_sfmt_amomin_w;
          case 83 : itype = RISCV32BF_RV32_INSN_AMOMAX_W_AQRL; goto extract_sfmt_amomin_w;
          case 96 : itype = RISCV32BF_RV32_INSN_AMOMINU_W; goto extract_sfmt_amomin_w;
          case 97 : itype = RISCV32BF_RV32_INSN_AMOMINU_W_RL; goto extract_sfmt_amomin_w;
          case 98 : itype = RISCV32BF_RV32_INSN_AMOMINU_W_AQ; goto extract_sfmt_amomin_w;
          case 99 : itype = RISCV32BF_RV32_INSN_AMOMINU_W_AQRL; goto extract_sfmt_amomin_w;
          case 112 : itype = RISCV32BF_RV32_INSN_AMOMAXU_W; goto extract_sfmt_amomin_w;
          case 113 : itype = RISCV32BF_RV32_INSN_AMOMAXU_W_RL; goto extract_sfmt_amomin_w;
          case 114 : itype = RISCV32BF_RV32_INSN_AMOMAXU_W_AQ; goto extract_sfmt_amomin_w;
          case 115 : itype = RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL; goto extract_sfmt_amomin_w;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 307 : /* fall through */
      case 1331 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2033)
              { itype = RISCV32BF_RV32_INSN_SLT; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2002033)
              { itype = RISCV32BF_RV32_INSN_MULHSU; goto extract_sfmt_mulh; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 339 : /* fall through */
      case 1363 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_fadd_s;
          case 1 : itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_fadd_s;
          case 3 : itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_nop;
          case 4 : itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_fadd_s;
          case 5 : itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_fadd_s;
          case 7 : itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_nop;
          case 8 : itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_fadd_s;
          case 9 : itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_fadd_s;
          case 11 : itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_nop;
          case 12 : itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_fadd_s;
          case 13 : itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_fadd_s;
          case 15 : itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_nop;
          case 16 : itype = RISCV32BF_RV32_INSN_FSGNJX_S; goto extract_sfmt_fsgnj_s;
          case 17 : itype = RISCV32BF_RV32_INSN_FSGNJX_D; goto extract_sfmt_fmin_s;
          case 19 : itype = RISCV32BF_RV32_INSN_FSGNJX_Q; goto extract_sfmt_c_nop;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_fsqrt_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 33 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 : itype = RISCV32BF_RV32_INSN_FEQ_S; goto extract_sfmt_feq_s;
          case 81 : itype = RISCV32BF_RV32_INSN_FEQ_D; goto extract_sfmt_feq_s;
          case 83 : itype = RISCV32BF_RV32_INSN_FEQ_Q; goto extract_sfmt_c_nop;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 97 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc2000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_fcvt_w_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 99 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc6000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 104 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xd0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_fcvt_s_w; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 371 : /* fall through */
      case 1395 : itype = RISCV32BF_RV32_INSN_CSRRS; goto extract_sfmt_c_nop;
      case 391 : /* fall through */
      case 1415 : itype = RISCV32BF_RV32_INSN_FLD; goto extract_sfmt_fld;
      case 403 : /* fall through */
      case 1427 : itype = RISCV32BF_RV32_INSN_SLTIU; goto extract_sfmt_addi;
      case 423 : /* fall through */
      case 1447 : itype = RISCV32BF_RV32_INSN_FSD; goto extract_sfmt_fsd;
      case 435 : /* fall through */
      case 1459 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x3033)
              { itype = RISCV32BF_RV32_INSN_SLTU; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2003033)
              { itype = RISCV32BF_RV32_INSN_MULHU; goto extract_sfmt_mulh; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 467 : /* fall through */
      case 595 : /* fall through */
      case 723 : /* fall through */
      case 851 : /* fall through */
      case 979 : /* fall through */
      case 1491 : /* fall through */
      case 1619 : /* fall through */
      case 1747 : /* fall through */
      case 1875 : /* fall through */
      case 2003 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (3 << 5)) | ((insn >> 24) & (15 << 1)) | ((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 : /* fall through */
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 : /* fall through */
          case 7 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 : /* fall through */
          case 9 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 : /* fall through */
          case 11 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 14 : /* fall through */
          case 15 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 : /* fall through */
          case 17 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 18 : /* fall through */
          case 19 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 22 : /* fall through */
          case 23 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 24 : /* fall through */
          case 25 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 26 : /* fall through */
          case 27 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_fadd_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 30 : /* fall through */
          case 31 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 33 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_fsqrt_s; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_nop; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 35 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 56 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 58 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_fsqrt_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 62 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            if ((entire_insn & 0xfff0007f) == 0xc0000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_fcvt_w_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 97 :
            if ((entire_insn & 0xfff0007f) == 0xc0100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_fcvt_w_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 98 :
            if ((entire_insn & 0xfff0007f) == 0xc2000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_fcvt_w_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 99 :
            if ((entire_insn & 0xfff0007f) == 0xc2100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_fcvt_w_s; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 102 :
            if ((entire_insn & 0xfff0007f) == 0xc6000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 103 :
            if ((entire_insn & 0xfff0007f) == 0xc6100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 112 :
            if ((entire_insn & 0xfff0007f) == 0xd0000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_fcvt_s_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 113 :
            if ((entire_insn & 0xfff0007f) == 0xd0100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_fcvt_s_w; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 499 : /* fall through */
      case 1523 : itype = RISCV32BF_RV32_INSN_CSRRC; goto extract_sfmt_c_nop;
      case 512 : /* fall through */
      case 516 : /* fall through */
      case 520 : /* fall through */
      case 524 : /* fall through */
      case 528 : /* fall through */
      case 532 : /* fall through */
      case 536 : /* fall through */
      case 540 : /* fall through */
      case 544 : /* fall through */
      case 548 : /* fall through */
      case 552 : /* fall through */
      case 556 : /* fall through */
      case 560 : /* fall through */
      case 564 : /* fall through */
      case 568 : /* fall through */
      case 572 : /* fall through */
      case 576 : /* fall through */
      case 580 : /* fall through */
      case 584 : /* fall through */
      case 588 : /* fall through */
      case 592 : /* fall through */
      case 596 : /* fall through */
      case 600 : /* fall through */
      case 604 : /* fall through */
      case 608 : /* fall through */
      case 612 : /* fall through */
      case 616 : /* fall through */
      case 620 : /* fall through */
      case 624 : /* fall through */
      case 628 : /* fall through */
      case 632 : /* fall through */
      case 636 : /* fall through */
      case 640 : /* fall through */
      case 644 : /* fall through */
      case 648 : /* fall through */
      case 652 : /* fall through */
      case 656 : /* fall through */
      case 660 : /* fall through */
      case 664 : /* fall through */
      case 668 : /* fall through */
      case 672 : /* fall through */
      case 676 : /* fall through */
      case 680 : /* fall through */
      case 684 : /* fall through */
      case 688 : /* fall through */
      case 692 : /* fall through */
      case 696 : /* fall through */
      case 700 : /* fall through */
      case 704 : /* fall through */
      case 708 : /* fall through */
      case 712 : /* fall through */
      case 716 : /* fall through */
      case 720 : /* fall through */
      case 724 : /* fall through */
      case 728 : /* fall through */
      case 732 : /* fall through */
      case 736 : /* fall through */
      case 740 : /* fall through */
      case 744 : /* fall through */
      case 748 : /* fall through */
      case 752 : /* fall through */
      case 756 : /* fall through */
      case 760 : /* fall through */
      case 764 : itype = RISCV32BF_RV32_INSN_C_LW; goto extract_sfmt_c_lw;
      case 513 : /* fall through */
      case 517 : /* fall through */
      case 521 : /* fall through */
      case 525 : /* fall through */
      case 529 : /* fall through */
      case 533 : /* fall through */
      case 537 : /* fall through */
      case 541 : /* fall through */
      case 545 : /* fall through */
      case 549 : /* fall through */
      case 553 : /* fall through */
      case 557 : /* fall through */
      case 561 : /* fall through */
      case 565 : /* fall through */
      case 569 : /* fall through */
      case 573 : /* fall through */
      case 577 : /* fall through */
      case 581 : /* fall through */
      case 585 : /* fall through */
      case 589 : /* fall through */
      case 593 : /* fall through */
      case 597 : /* fall through */
      case 601 : /* fall through */
      case 605 : /* fall through */
      case 609 : /* fall through */
      case 613 : /* fall through */
      case 617 : /* fall through */
      case 621 : /* fall through */
      case 625 : /* fall through */
      case 629 : /* fall through */
      case 633 : /* fall through */
      case 637 : /* fall through */
      case 641 : /* fall through */
      case 645 : /* fall through */
      case 649 : /* fall through */
      case 653 : /* fall through */
      case 657 : /* fall through */
      case 661 : /* fall through */
      case 665 : /* fall through */
      case 669 : /* fall through */
      case 673 : /* fall through */
      case 677 : /* fall through */
      case 681 : /* fall through */
      case 685 : /* fall through */
      case 689 : /* fall through */
      case 693 : /* fall through */
      case 697 : /* fall through */
      case 701 : /* fall through */
      case 705 : /* fall through */
      case 709 : /* fall through */
      case 713 : /* fall through */
      case 717 : /* fall through */
      case 721 : /* fall through */
      case 725 : /* fall through */
      case 729 : /* fall through */
      case 733 : /* fall through */
      case 737 : /* fall through */
      case 741 : /* fall through */
      case 745 : /* fall through */
      case 749 : /* fall through */
      case 753 : /* fall through */
      case 757 : /* fall through */
      case 761 : /* fall through */
      case 765 : itype = RISCV32BF_RV32_INSN_C_LI; goto extract_sfmt_c_li;
      case 514 : /* fall through */
      case 518 : /* fall through */
      case 522 : /* fall through */
      case 526 : /* fall through */
      case 530 : /* fall through */
      case 534 : /* fall through */
      case 538 : /* fall through */
      case 542 : /* fall through */
      case 546 : /* fall through */
      case 550 : /* fall through */
      case 554 : /* fall through */
      case 558 : /* fall through */
      case 562 : /* fall through */
      case 566 : /* fall through */
      case 570 : /* fall through */
      case 574 : /* fall through */
      case 578 : /* fall through */
      case 582 : /* fall through */
      case 586 : /* fall through */
      case 590 : /* fall through */
      case 594 : /* fall through */
      case 598 : /* fall through */
      case 602 : /* fall through */
      case 606 : /* fall through */
      case 610 : /* fall through */
      case 614 : /* fall through */
      case 618 : /* fall through */
      case 622 : /* fall through */
      case 626 : /* fall through */
      case 630 : /* fall through */
      case 634 : /* fall through */
      case 638 : /* fall through */
      case 642 : /* fall through */
      case 646 : /* fall through */
      case 650 : /* fall through */
      case 654 : /* fall through */
      case 658 : /* fall through */
      case 662 : /* fall through */
      case 666 : /* fall through */
      case 670 : /* fall through */
      case 674 : /* fall through */
      case 678 : /* fall through */
      case 682 : /* fall through */
      case 686 : /* fall through */
      case 690 : /* fall through */
      case 694 : /* fall through */
      case 698 : /* fall through */
      case 702 : /* fall through */
      case 706 : /* fall through */
      case 710 : /* fall through */
      case 714 : /* fall through */
      case 718 : /* fall through */
      case 722 : /* fall through */
      case 726 : /* fall through */
      case 730 : /* fall through */
      case 734 : /* fall through */
      case 738 : /* fall through */
      case 742 : /* fall through */
      case 746 : /* fall through */
      case 750 : /* fall through */
      case 754 : /* fall through */
      case 758 : /* fall through */
      case 762 : /* fall through */
      case 766 : itype = RISCV32BF_RV32_INSN_C_LWSP; goto extract_sfmt_c_lwsp;
      case 515 : /* fall through */
      case 1539 : itype = RISCV32BF_RV32_INSN_LBU; goto extract_sfmt_lbu;
      case 519 : /* fall through */
      case 1543 : itype = RISCV32BF_RV32_INSN_FLQ; goto extract_sfmt_c_nop;
      case 531 : /* fall through */
      case 1555 : itype = RISCV32BF_RV32_INSN_XORI; goto extract_sfmt_addi;
      case 551 : /* fall through */
      case 1575 : itype = RISCV32BF_RV32_INSN_FSQ; goto extract_sfmt_c_nop;
      case 563 : /* fall through */
      case 1587 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4033)
              { itype = RISCV32BF_RV32_INSN_XOR; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2004033)
              { itype = RISCV32BF_RV32_INSN_DIV; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 611 : /* fall through */
      case 1635 : itype = RISCV32BF_RV32_INSN_BLT; goto extract_sfmt_beq;
      case 643 : /* fall through */
      case 1667 : itype = RISCV32BF_RV32_INSN_LHU; goto extract_sfmt_lhu;
      case 659 : /* fall through */
      case 1683 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 30) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x5013)
              { itype = RISCV32BF_RV32_INSN_SRLI_SHIFT5; goto extract_sfmt_slli_shift5; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x40005013)
              { itype = RISCV32BF_RV32_INSN_SRAI_SHIFT5; goto extract_sfmt_slli_shift5; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 691 : /* fall through */
      case 1715 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 29) & (1 << 1)) | ((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x5033)
              { itype = RISCV32BF_RV32_INSN_SRL; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2005033)
              { itype = RISCV32BF_RV32_INSN_DIVU; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00707f) == 0x40005033)
              { itype = RISCV32BF_RV32_INSN_SRA; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 739 : /* fall through */
      case 1763 : itype = RISCV32BF_RV32_INSN_BGE; goto extract_sfmt_beq;
      case 755 : /* fall through */
      case 1779 : itype = RISCV32BF_RV32_INSN_CSRRWI; goto extract_sfmt_c_nop;
      case 768 : /* fall through */
      case 772 : /* fall through */
      case 776 : /* fall through */
      case 780 : /* fall through */
      case 784 : /* fall through */
      case 788 : /* fall through */
      case 792 : /* fall through */
      case 796 : /* fall through */
      case 800 : /* fall through */
      case 804 : /* fall through */
      case 808 : /* fall through */
      case 812 : /* fall through */
      case 816 : /* fall through */
      case 820 : /* fall through */
      case 824 : /* fall through */
      case 828 : /* fall through */
      case 832 : /* fall through */
      case 836 : /* fall through */
      case 840 : /* fall through */
      case 844 : /* fall through */
      case 848 : /* fall through */
      case 852 : /* fall through */
      case 856 : /* fall through */
      case 860 : /* fall through */
      case 864 : /* fall through */
      case 868 : /* fall through */
      case 872 : /* fall through */
      case 876 : /* fall through */
      case 880 : /* fall through */
      case 884 : /* fall through */
      case 888 : /* fall through */
      case 892 : /* fall through */
      case 896 : /* fall through */
      case 900 : /* fall through */
      case 904 : /* fall through */
      case 908 : /* fall through */
      case 912 : /* fall through */
      case 916 : /* fall through */
      case 920 : /* fall through */
      case 924 : /* fall through */
      case 928 : /* fall through */
      case 932 : /* fall through */
      case 936 : /* fall through */
      case 940 : /* fall through */
      case 944 : /* fall through */
      case 948 : /* fall through */
      case 952 : /* fall through */
      case 956 : /* fall through */
      case 960 : /* fall through */
      case 964 : /* fall through */
      case 968 : /* fall through */
      case 972 : /* fall through */
      case 976 : /* fall through */
      case 980 : /* fall through */
      case 984 : /* fall through */
      case 988 : /* fall through */
      case 992 : /* fall through */
      case 996 : /* fall through */
      case 1000 : /* fall through */
      case 1004 : /* fall through */
      case 1008 : /* fall through */
      case 1012 : /* fall through */
      case 1016 : /* fall through */
      case 1020 : itype = RISCV32BF_RV32_INSN_C_FLW; goto extract_sfmt_c_flw;
      case 769 : /* fall through */
      case 773 : /* fall through */
      case 777 : /* fall through */
      case 781 : /* fall through */
      case 785 : /* fall through */
      case 789 : /* fall through */
      case 793 : /* fall through */
      case 797 : /* fall through */
      case 801 : /* fall through */
      case 805 : /* fall through */
      case 809 : /* fall through */
      case 813 : /* fall through */
      case 817 : /* fall through */
      case 821 : /* fall through */
      case 825 : /* fall through */
      case 829 : /* fall through */
      case 833 : /* fall through */
      case 837 : /* fall through */
      case 841 : /* fall through */
      case 845 : /* fall through */
      case 849 : /* fall through */
      case 853 : /* fall through */
      case 857 : /* fall through */
      case 861 : /* fall through */
      case 865 : /* fall through */
      case 869 : /* fall through */
      case 873 : /* fall through */
      case 877 : /* fall through */
      case 881 : /* fall through */
      case 885 : /* fall through */
      case 889 : /* fall through */
      case 893 : /* fall through */
      case 897 : /* fall through */
      case 901 : /* fall through */
      case 905 : /* fall through */
      case 909 : /* fall through */
      case 913 : /* fall through */
      case 917 : /* fall through */
      case 921 : /* fall through */
      case 925 : /* fall through */
      case 929 : /* fall through */
      case 933 : /* fall through */
      case 937 : /* fall through */
      case 941 : /* fall through */
      case 945 : /* fall through */
      case 949 : /* fall through */
      case 953 : /* fall through */
      case 957 : /* fall through */
      case 961 : /* fall through */
      case 965 : /* fall through */
      case 969 : /* fall through */
      case 973 : /* fall through */
      case 977 : /* fall through */
      case 981 : /* fall through */
      case 985 : /* fall through */
      case 989 : /* fall through */
      case 993 : /* fall through */
      case 997 : /* fall through */
      case 1001 : /* fall through */
      case 1005 : /* fall through */
      case 1009 : /* fall through */
      case 1013 : /* fall through */
      case 1017 : /* fall through */
      case 1021 :
        {
          unsigned int val = (((insn >> 7) & (31 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 : /* fall through */
          case 16 : /* fall through */
          case 17 : /* fall through */
          case 18 : /* fall through */
          case 19 : /* fall through */
          case 20 : /* fall through */
          case 21 : /* fall through */
          case 22 : /* fall through */
          case 23 : /* fall through */
          case 24 : /* fall through */
          case 25 : /* fall through */
          case 26 : /* fall through */
          case 27 : /* fall through */
          case 28 : /* fall through */
          case 29 : /* fall through */
          case 30 : /* fall through */
          case 31 : itype = RISCV32BF_RV32_INSN_C_LUI; goto extract_sfmt_c_lui;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 770 : /* fall through */
      case 774 : /* fall through */
      case 778 : /* fall through */
      case 782 : /* fall through */
      case 786 : /* fall through */
      case 790 : /* fall through */
      case 794 : /* fall through */
      case 798 : /* fall through */
      case 802 : /* fall through */
      case 806 : /* fall through */
      case 810 : /* fall through */
      case 814 : /* fall through */
      case 818 : /* fall through */
      case 822 : /* fall through */
      case 826 : /* fall through */
      case 830 : /* fall through */
      case 834 : /* fall through */
      case 838 : /* fall through */
      case 842 : /* fall through */
      case 846 : /* fall through */
      case 850 : /* fall through */
      case 854 : /* fall through */
      case 858 : /* fall through */
      case 862 : /* fall through */
      case 866 : /* fall through */
      case 870 : /* fall through */
      case 874 : /* fall through */
      case 878 : /* fall through */
      case 882 : /* fall through */
      case 886 : /* fall through */
      case 890 : /* fall through */
      case 894 : /* fall through */
      case 898 : /* fall through */
      case 902 : /* fall through */
      case 906 : /* fall through */
      case 910 : /* fall through */
      case 914 : /* fall through */
      case 918 : /* fall through */
      case 922 : /* fall through */
      case 926 : /* fall through */
      case 930 : /* fall through */
      case 934 : /* fall through */
      case 938 : /* fall through */
      case 942 : /* fall through */
      case 946 : /* fall through */
      case 950 : /* fall through */
      case 954 : /* fall through */
      case 958 : /* fall through */
      case 962 : /* fall through */
      case 966 : /* fall through */
      case 970 : /* fall through */
      case 974 : /* fall through */
      case 978 : /* fall through */
      case 982 : /* fall through */
      case 986 : /* fall through */
      case 990 : /* fall through */
      case 994 : /* fall through */
      case 998 : /* fall through */
      case 1002 : /* fall through */
      case 1006 : /* fall through */
      case 1010 : /* fall through */
      case 1014 : /* fall through */
      case 1018 : /* fall through */
      case 1022 : itype = RISCV32BF_RV32_INSN_C_FLWSP; goto extract_sfmt_c_flwsp;
      case 787 : /* fall through */
      case 1811 : itype = RISCV32BF_RV32_INSN_ORI; goto extract_sfmt_addi;
      case 819 : /* fall through */
      case 1843 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x6033)
              { itype = RISCV32BF_RV32_INSN_OR; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2006033)
              { itype = RISCV32BF_RV32_INSN_REM; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 867 : /* fall through */
      case 1891 : itype = RISCV32BF_RV32_INSN_BLTU; goto extract_sfmt_beq;
      case 883 : /* fall through */
      case 1907 : itype = RISCV32BF_RV32_INSN_CSRRSI; goto extract_sfmt_c_nop;
      case 915 : /* fall through */
      case 1939 : itype = RISCV32BF_RV32_INSN_ANDI; goto extract_sfmt_addi;
      case 947 : /* fall through */
      case 1971 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x7033)
              { itype = RISCV32BF_RV32_INSN_AND; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2007033)
              { itype = RISCV32BF_RV32_INSN_REMU; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 995 : /* fall through */
      case 2019 : itype = RISCV32BF_RV32_INSN_BGEU; goto extract_sfmt_beq;
      case 1011 : /* fall through */
      case 2035 : itype = RISCV32BF_RV32_INSN_CSRRCI; goto extract_sfmt_c_nop;
      case 1025 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI64; goto extract_sfmt_c_nop;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI64; goto extract_sfmt_c_nop;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          case 3 : itype = RISCV32BF_RV32_INSN_C_SUB; goto extract_sfmt_c_and;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1026 : itype = RISCV32BF_RV32_INSN_C_JR; goto extract_sfmt_c_jr;
      case 1029 : /* fall through */
      case 1033 : /* fall through */
      case 1037 : /* fall through */
      case 1041 : /* fall through */
      case 1045 : /* fall through */
      case 1049 : /* fall through */
      case 1053 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI; goto extract_sfmt_c_srli;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI; goto extract_sfmt_c_srli;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          case 3 : itype = RISCV32BF_RV32_INSN_C_SUB; goto extract_sfmt_c_and;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1030 : /* fall through */
      case 1034 : /* fall through */
      case 1038 : /* fall through */
      case 1042 : /* fall through */
      case 1046 : /* fall through */
      case 1050 : /* fall through */
      case 1054 : /* fall through */
      case 1058 : /* fall through */
      case 1062 : /* fall through */
      case 1066 : /* fall through */
      case 1070 : /* fall through */
      case 1074 : /* fall through */
      case 1078 : /* fall through */
      case 1082 : /* fall through */
      case 1086 : /* fall through */
      case 1090 : /* fall through */
      case 1094 : /* fall through */
      case 1098 : /* fall through */
      case 1102 : /* fall through */
      case 1106 : /* fall through */
      case 1110 : /* fall through */
      case 1114 : /* fall through */
      case 1118 : /* fall through */
      case 1122 : /* fall through */
      case 1126 : /* fall through */
      case 1130 : /* fall through */
      case 1134 : /* fall through */
      case 1138 : /* fall through */
      case 1142 : /* fall through */
      case 1146 : /* fall through */
      case 1150 : itype = RISCV32BF_RV32_INSN_C_MV; goto extract_sfmt_c_mv;
      case 1057 : /* fall through */
      case 1061 : /* fall through */
      case 1065 : /* fall through */
      case 1069 : /* fall through */
      case 1073 : /* fall through */
      case 1077 : /* fall through */
      case 1081 : /* fall through */
      case 1085 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI; goto extract_sfmt_c_srli;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI; goto extract_sfmt_c_srli;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          case 3 : itype = RISCV32BF_RV32_INSN_C_XOR; goto extract_sfmt_c_and;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1089 : /* fall through */
      case 1093 : /* fall through */
      case 1097 : /* fall through */
      case 1101 : /* fall through */
      case 1105 : /* fall through */
      case 1109 : /* fall through */
      case 1113 : /* fall through */
      case 1117 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI; goto extract_sfmt_c_srli;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI; goto extract_sfmt_c_srli;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          case 3 : itype = RISCV32BF_RV32_INSN_C_OR; goto extract_sfmt_c_and;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1121 : /* fall through */
      case 1125 : /* fall through */
      case 1129 : /* fall through */
      case 1133 : /* fall through */
      case 1137 : /* fall through */
      case 1141 : /* fall through */
      case 1145 : /* fall through */
      case 1149 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI; goto extract_sfmt_c_srli;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI; goto extract_sfmt_c_srli;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          case 3 : itype = RISCV32BF_RV32_INSN_C_AND; goto extract_sfmt_c_and;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1139 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn |= GETIMEMUHI (current_cpu, pc + 2) << 16;
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff07fff) == 0x10400073)
              { itype = RISCV32BF_RV32_INSN_SFENCE_VM; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe007fff) == 0x12000073)
              { itype = RISCV32BF_RV32_INSN_SFENCE_VMA; goto extract_sfmt_c_nop; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1153 : /* fall through */
      case 1157 : /* fall through */
      case 1161 : /* fall through */
      case 1165 : /* fall through */
      case 1169 : /* fall through */
      case 1173 : /* fall through */
      case 1177 : /* fall through */
      case 1181 : /* fall through */
      case 1185 : /* fall through */
      case 1189 : /* fall through */
      case 1193 : /* fall through */
      case 1197 : /* fall through */
      case 1201 : /* fall through */
      case 1205 : /* fall through */
      case 1209 : /* fall through */
      case 1213 : /* fall through */
      case 1217 : /* fall through */
      case 1221 : /* fall through */
      case 1225 : /* fall through */
      case 1229 : /* fall through */
      case 1233 : /* fall through */
      case 1237 : /* fall through */
      case 1241 : /* fall through */
      case 1245 : /* fall through */
      case 1249 : /* fall through */
      case 1253 : /* fall through */
      case 1257 : /* fall through */
      case 1261 : /* fall through */
      case 1265 : /* fall through */
      case 1269 : /* fall through */
      case 1273 : /* fall through */
      case 1277 :
        {
          unsigned int val = (((insn >> 10) & (3 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_SRLI; goto extract_sfmt_c_srli;
          case 1 : itype = RISCV32BF_RV32_INSN_C_SRAI; goto extract_sfmt_c_srli;
          case 2 : itype = RISCV32BF_RV32_INSN_C_ANDI; goto extract_sfmt_c_andi;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1154 :
        {
          unsigned int val = (((insn >> 7) & (31 << 0)));
          switch (val)
          {
          case 0 : itype = RISCV32BF_RV32_INSN_C_EBREAK; goto extract_sfmt_c_ebreak;
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 : /* fall through */
          case 15 : /* fall through */
          case 16 : /* fall through */
          case 17 : /* fall through */
          case 18 : /* fall through */
          case 19 : /* fall through */
          case 20 : /* fall through */
          case 21 : /* fall through */
          case 22 : /* fall through */
          case 23 : /* fall through */
          case 24 : /* fall through */
          case 25 : /* fall through */
          case 26 : /* fall through */
          case 27 : /* fall through */
          case 28 : /* fall through */
          case 29 : /* fall through */
          case 30 : /* fall through */
          case 31 : itype = RISCV32BF_RV32_INSN_C_JALR; goto extract_sfmt_c_jalr;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1158 : /* fall through */
      case 1162 : /* fall through */
      case 1166 : /* fall through */
      case 1170 : /* fall through */
      case 1174 : /* fall through */
      case 1178 : /* fall through */
      case 1182 : /* fall through */
      case 1186 : /* fall through */
      case 1190 : /* fall through */
      case 1194 : /* fall through */
      case 1198 : /* fall through */
      case 1202 : /* fall through */
      case 1206 : /* fall through */
      case 1210 : /* fall through */
      case 1214 : /* fall through */
      case 1218 : /* fall through */
      case 1222 : /* fall through */
      case 1226 : /* fall through */
      case 1230 : /* fall through */
      case 1234 : /* fall through */
      case 1238 : /* fall through */
      case 1242 : /* fall through */
      case 1246 : /* fall through */
      case 1250 : /* fall through */
      case 1254 : /* fall through */
      case 1258 : /* fall through */
      case 1262 : /* fall through */
      case 1266 : /* fall through */
      case 1270 : /* fall through */
      case 1274 : /* fall through */
      case 1278 : itype = RISCV32BF_RV32_INSN_C_ADD; goto extract_sfmt_c_add;
      case 1280 : /* fall through */
      case 1284 : /* fall through */
      case 1288 : /* fall through */
      case 1292 : /* fall through */
      case 1296 : /* fall through */
      case 1300 : /* fall through */
      case 1304 : /* fall through */
      case 1308 : /* fall through */
      case 1312 : /* fall through */
      case 1316 : /* fall through */
      case 1320 : /* fall through */
      case 1324 : /* fall through */
      case 1328 : /* fall through */
      case 1332 : /* fall through */
      case 1336 : /* fall through */
      case 1340 : /* fall through */
      case 1344 : /* fall through */
      case 1348 : /* fall through */
      case 1352 : /* fall through */
      case 1356 : /* fall through */
      case 1360 : /* fall through */
      case 1364 : /* fall through */
      case 1368 : /* fall through */
      case 1372 : /* fall through */
      case 1376 : /* fall through */
      case 1380 : /* fall through */
      case 1384 : /* fall through */
      case 1388 : /* fall through */
      case 1392 : /* fall through */
      case 1396 : /* fall through */
      case 1400 : /* fall through */
      case 1404 : /* fall through */
      case 1408 : /* fall through */
      case 1412 : /* fall through */
      case 1416 : /* fall through */
      case 1420 : /* fall through */
      case 1424 : /* fall through */
      case 1428 : /* fall through */
      case 1432 : /* fall through */
      case 1436 : /* fall through */
      case 1440 : /* fall through */
      case 1444 : /* fall through */
      case 1448 : /* fall through */
      case 1452 : /* fall through */
      case 1456 : /* fall through */
      case 1460 : /* fall through */
      case 1464 : /* fall through */
      case 1468 : /* fall through */
      case 1472 : /* fall through */
      case 1476 : /* fall through */
      case 1480 : /* fall through */
      case 1484 : /* fall through */
      case 1488 : /* fall through */
      case 1492 : /* fall through */
      case 1496 : /* fall through */
      case 1500 : /* fall through */
      case 1504 : /* fall through */
      case 1508 : /* fall through */
      case 1512 : /* fall through */
      case 1516 : /* fall through */
      case 1520 : /* fall through */
      case 1524 : /* fall through */
      case 1528 : /* fall through */
      case 1532 : itype = RISCV32BF_RV32_INSN_C_FSD; goto extract_sfmt_c_fsd;
      case 1281 : /* fall through */
      case 1285 : /* fall through */
      case 1289 : /* fall through */
      case 1293 : /* fall through */
      case 1297 : /* fall through */
      case 1301 : /* fall through */
      case 1305 : /* fall through */
      case 1309 : /* fall through */
      case 1313 : /* fall through */
      case 1317 : /* fall through */
      case 1321 : /* fall through */
      case 1325 : /* fall through */
      case 1329 : /* fall through */
      case 1333 : /* fall through */
      case 1337 : /* fall through */
      case 1341 : /* fall through */
      case 1345 : /* fall through */
      case 1349 : /* fall through */
      case 1353 : /* fall through */
      case 1357 : /* fall through */
      case 1361 : /* fall through */
      case 1365 : /* fall through */
      case 1369 : /* fall through */
      case 1373 : /* fall through */
      case 1377 : /* fall through */
      case 1381 : /* fall through */
      case 1385 : /* fall through */
      case 1389 : /* fall through */
      case 1393 : /* fall through */
      case 1397 : /* fall through */
      case 1401 : /* fall through */
      case 1405 : /* fall through */
      case 1409 : /* fall through */
      case 1413 : /* fall through */
      case 1417 : /* fall through */
      case 1421 : /* fall through */
      case 1425 : /* fall through */
      case 1429 : /* fall through */
      case 1433 : /* fall through */
      case 1437 : /* fall through */
      case 1441 : /* fall through */
      case 1445 : /* fall through */
      case 1449 : /* fall through */
      case 1453 : /* fall through */
      case 1457 : /* fall through */
      case 1461 : /* fall through */
      case 1465 : /* fall through */
      case 1469 : /* fall through */
      case 1473 : /* fall through */
      case 1477 : /* fall through */
      case 1481 : /* fall through */
      case 1485 : /* fall through */
      case 1489 : /* fall through */
      case 1493 : /* fall through */
      case 1497 : /* fall through */
      case 1501 : /* fall through */
      case 1505 : /* fall through */
      case 1509 : /* fall through */
      case 1513 : /* fall through */
      case 1517 : /* fall through */
      case 1521 : /* fall through */
      case 1525 : /* fall through */
      case 1529 : /* fall through */
      case 1533 : itype = RISCV32BF_RV32_INSN_C_J; goto extract_sfmt_c_j;
      case 1282 : /* fall through */
      case 1286 : /* fall through */
      case 1290 : /* fall through */
      case 1294 : /* fall through */
      case 1298 : /* fall through */
      case 1302 : /* fall through */
      case 1306 : /* fall through */
      case 1310 : /* fall through */
      case 1314 : /* fall through */
      case 1318 : /* fall through */
      case 1322 : /* fall through */
      case 1326 : /* fall through */
      case 1330 : /* fall through */
      case 1334 : /* fall through */
      case 1338 : /* fall through */
      case 1342 : /* fall through */
      case 1346 : /* fall through */
      case 1350 : /* fall through */
      case 1354 : /* fall through */
      case 1358 : /* fall through */
      case 1362 : /* fall through */
      case 1366 : /* fall through */
      case 1370 : /* fall through */
      case 1374 : /* fall through */
      case 1378 : /* fall through */
      case 1382 : /* fall through */
      case 1386 : /* fall through */
      case 1390 : /* fall through */
      case 1394 : /* fall through */
      case 1398 : /* fall through */
      case 1402 : /* fall through */
      case 1406 : /* fall through */
      case 1410 : /* fall through */
      case 1414 : /* fall through */
      case 1418 : /* fall through */
      case 1422 : /* fall through */
      case 1426 : /* fall through */
      case 1430 : /* fall through */
      case 1434 : /* fall through */
      case 1438 : /* fall through */
      case 1442 : /* fall through */
      case 1446 : /* fall through */
      case 1450 : /* fall through */
      case 1454 : /* fall through */
      case 1458 : /* fall through */
      case 1462 : /* fall through */
      case 1466 : /* fall through */
      case 1470 : /* fall through */
      case 1474 : /* fall through */
      case 1478 : /* fall through */
      case 1482 : /* fall through */
      case 1486 : /* fall through */
      case 1490 : /* fall through */
      case 1494 : /* fall through */
      case 1498 : /* fall through */
      case 1502 : /* fall through */
      case 1506 : /* fall through */
      case 1510 : /* fall through */
      case 1514 : /* fall through */
      case 1518 : /* fall through */
      case 1522 : /* fall through */
      case 1526 : /* fall through */
      case 1530 : /* fall through */
      case 1534 : itype = RISCV32BF_RV32_INSN_C_FSDSP; goto extract_sfmt_c_fsdsp;
      case 1536 : /* fall through */
      case 1540 : /* fall through */
      case 1544 : /* fall through */
      case 1548 : /* fall through */
      case 1552 : /* fall through */
      case 1556 : /* fall through */
      case 1560 : /* fall through */
      case 1564 : /* fall through */
      case 1568 : /* fall through */
      case 1572 : /* fall through */
      case 1576 : /* fall through */
      case 1580 : /* fall through */
      case 1584 : /* fall through */
      case 1588 : /* fall through */
      case 1592 : /* fall through */
      case 1596 : /* fall through */
      case 1600 : /* fall through */
      case 1604 : /* fall through */
      case 1608 : /* fall through */
      case 1612 : /* fall through */
      case 1616 : /* fall through */
      case 1620 : /* fall through */
      case 1624 : /* fall through */
      case 1628 : /* fall through */
      case 1632 : /* fall through */
      case 1636 : /* fall through */
      case 1640 : /* fall through */
      case 1644 : /* fall through */
      case 1648 : /* fall through */
      case 1652 : /* fall through */
      case 1656 : /* fall through */
      case 1660 : /* fall through */
      case 1664 : /* fall through */
      case 1668 : /* fall through */
      case 1672 : /* fall through */
      case 1676 : /* fall through */
      case 1680 : /* fall through */
      case 1684 : /* fall through */
      case 1688 : /* fall through */
      case 1692 : /* fall through */
      case 1696 : /* fall through */
      case 1700 : /* fall through */
      case 1704 : /* fall through */
      case 1708 : /* fall through */
      case 1712 : /* fall through */
      case 1716 : /* fall through */
      case 1720 : /* fall through */
      case 1724 : /* fall through */
      case 1728 : /* fall through */
      case 1732 : /* fall through */
      case 1736 : /* fall through */
      case 1740 : /* fall through */
      case 1744 : /* fall through */
      case 1748 : /* fall through */
      case 1752 : /* fall through */
      case 1756 : /* fall through */
      case 1760 : /* fall through */
      case 1764 : /* fall through */
      case 1768 : /* fall through */
      case 1772 : /* fall through */
      case 1776 : /* fall through */
      case 1780 : /* fall through */
      case 1784 : /* fall through */
      case 1788 : itype = RISCV32BF_RV32_INSN_C_SW; goto extract_sfmt_c_sw;
      case 1537 : /* fall through */
      case 1541 : /* fall through */
      case 1545 : /* fall through */
      case 1549 : /* fall through */
      case 1553 : /* fall through */
      case 1557 : /* fall through */
      case 1561 : /* fall through */
      case 1565 : /* fall through */
      case 1569 : /* fall through */
      case 1573 : /* fall through */
      case 1577 : /* fall through */
      case 1581 : /* fall through */
      case 1585 : /* fall through */
      case 1589 : /* fall through */
      case 1593 : /* fall through */
      case 1597 : /* fall through */
      case 1601 : /* fall through */
      case 1605 : /* fall through */
      case 1609 : /* fall through */
      case 1613 : /* fall through */
      case 1617 : /* fall through */
      case 1621 : /* fall through */
      case 1625 : /* fall through */
      case 1629 : /* fall through */
      case 1633 : /* fall through */
      case 1637 : /* fall through */
      case 1641 : /* fall through */
      case 1645 : /* fall through */
      case 1649 : /* fall through */
      case 1653 : /* fall through */
      case 1657 : /* fall through */
      case 1661 : /* fall through */
      case 1665 : /* fall through */
      case 1669 : /* fall through */
      case 1673 : /* fall through */
      case 1677 : /* fall through */
      case 1681 : /* fall through */
      case 1685 : /* fall through */
      case 1689 : /* fall through */
      case 1693 : /* fall through */
      case 1697 : /* fall through */
      case 1701 : /* fall through */
      case 1705 : /* fall through */
      case 1709 : /* fall through */
      case 1713 : /* fall through */
      case 1717 : /* fall through */
      case 1721 : /* fall through */
      case 1725 : /* fall through */
      case 1729 : /* fall through */
      case 1733 : /* fall through */
      case 1737 : /* fall through */
      case 1741 : /* fall through */
      case 1745 : /* fall through */
      case 1749 : /* fall through */
      case 1753 : /* fall through */
      case 1757 : /* fall through */
      case 1761 : /* fall through */
      case 1765 : /* fall through */
      case 1769 : /* fall through */
      case 1773 : /* fall through */
      case 1777 : /* fall through */
      case 1781 : /* fall through */
      case 1785 : /* fall through */
      case 1789 : itype = RISCV32BF_RV32_INSN_C_BEQZ; goto extract_sfmt_c_beqz;
      case 1538 : /* fall through */
      case 1542 : /* fall through */
      case 1546 : /* fall through */
      case 1550 : /* fall through */
      case 1554 : /* fall through */
      case 1558 : /* fall through */
      case 1562 : /* fall through */
      case 1566 : /* fall through */
      case 1570 : /* fall through */
      case 1574 : /* fall through */
      case 1578 : /* fall through */
      case 1582 : /* fall through */
      case 1586 : /* fall through */
      case 1590 : /* fall through */
      case 1594 : /* fall through */
      case 1598 : /* fall through */
      case 1602 : /* fall through */
      case 1606 : /* fall through */
      case 1610 : /* fall through */
      case 1614 : /* fall through */
      case 1618 : /* fall through */
      case 1622 : /* fall through */
      case 1626 : /* fall through */
      case 1630 : /* fall through */
      case 1634 : /* fall through */
      case 1638 : /* fall through */
      case 1642 : /* fall through */
      case 1646 : /* fall through */
      case 1650 : /* fall through */
      case 1654 : /* fall through */
      case 1658 : /* fall through */
      case 1662 : /* fall through */
      case 1666 : /* fall through */
      case 1670 : /* fall through */
      case 1674 : /* fall through */
      case 1678 : /* fall through */
      case 1682 : /* fall through */
      case 1686 : /* fall through */
      case 1690 : /* fall through */
      case 1694 : /* fall through */
      case 1698 : /* fall through */
      case 1702 : /* fall through */
      case 1706 : /* fall through */
      case 1710 : /* fall through */
      case 1714 : /* fall through */
      case 1718 : /* fall through */
      case 1722 : /* fall through */
      case 1726 : /* fall through */
      case 1730 : /* fall through */
      case 1734 : /* fall through */
      case 1738 : /* fall through */
      case 1742 : /* fall through */
      case 1746 : /* fall through */
      case 1750 : /* fall through */
      case 1754 : /* fall through */
      case 1758 : /* fall through */
      case 1762 : /* fall through */
      case 1766 : /* fall through */
      case 1770 : /* fall through */
      case 1774 : /* fall through */
      case 1778 : /* fall through */
      case 1782 : /* fall through */
      case 1786 : /* fall through */
      case 1790 : itype = RISCV32BF_RV32_INSN_C_SWSP; goto extract_sfmt_c_swsp;
      case 1792 : /* fall through */
      case 1796 : /* fall through */
      case 1800 : /* fall through */
      case 1804 : /* fall through */
      case 1808 : /* fall through */
      case 1812 : /* fall through */
      case 1816 : /* fall through */
      case 1820 : /* fall through */
      case 1824 : /* fall through */
      case 1828 : /* fall through */
      case 1832 : /* fall through */
      case 1836 : /* fall through */
      case 1840 : /* fall through */
      case 1844 : /* fall through */
      case 1848 : /* fall through */
      case 1852 : /* fall through */
      case 1856 : /* fall through */
      case 1860 : /* fall through */
      case 1864 : /* fall through */
      case 1868 : /* fall through */
      case 1872 : /* fall through */
      case 1876 : /* fall through */
      case 1880 : /* fall through */
      case 1884 : /* fall through */
      case 1888 : /* fall through */
      case 1892 : /* fall through */
      case 1896 : /* fall through */
      case 1900 : /* fall through */
      case 1904 : /* fall through */
      case 1908 : /* fall through */
      case 1912 : /* fall through */
      case 1916 : /* fall through */
      case 1920 : /* fall through */
      case 1924 : /* fall through */
      case 1928 : /* fall through */
      case 1932 : /* fall through */
      case 1936 : /* fall through */
      case 1940 : /* fall through */
      case 1944 : /* fall through */
      case 1948 : /* fall through */
      case 1952 : /* fall through */
      case 1956 : /* fall through */
      case 1960 : /* fall through */
      case 1964 : /* fall through */
      case 1968 : /* fall through */
      case 1972 : /* fall through */
      case 1976 : /* fall through */
      case 1980 : /* fall through */
      case 1984 : /* fall through */
      case 1988 : /* fall through */
      case 1992 : /* fall through */
      case 1996 : /* fall through */
      case 2000 : /* fall through */
      case 2004 : /* fall through */
      case 2008 : /* fall through */
      case 2012 : /* fall through */
      case 2016 : /* fall through */
      case 2020 : /* fall through */
      case 2024 : /* fall through */
      case 2028 : /* fall through */
      case 2032 : /* fall through */
      case 2036 : /* fall through */
      case 2040 : /* fall through */
      case 2044 : itype = RISCV32BF_RV32_INSN_C_FSW; goto extract_sfmt_c_fsw;
      case 1793 : /* fall through */
      case 1797 : /* fall through */
      case 1801 : /* fall through */
      case 1805 : /* fall through */
      case 1809 : /* fall through */
      case 1813 : /* fall through */
      case 1817 : /* fall through */
      case 1821 : /* fall through */
      case 1825 : /* fall through */
      case 1829 : /* fall through */
      case 1833 : /* fall through */
      case 1837 : /* fall through */
      case 1841 : /* fall through */
      case 1845 : /* fall through */
      case 1849 : /* fall through */
      case 1853 : /* fall through */
      case 1857 : /* fall through */
      case 1861 : /* fall through */
      case 1865 : /* fall through */
      case 1869 : /* fall through */
      case 1873 : /* fall through */
      case 1877 : /* fall through */
      case 1881 : /* fall through */
      case 1885 : /* fall through */
      case 1889 : /* fall through */
      case 1893 : /* fall through */
      case 1897 : /* fall through */
      case 1901 : /* fall through */
      case 1905 : /* fall through */
      case 1909 : /* fall through */
      case 1913 : /* fall through */
      case 1917 : /* fall through */
      case 1921 : /* fall through */
      case 1925 : /* fall through */
      case 1929 : /* fall through */
      case 1933 : /* fall through */
      case 1937 : /* fall through */
      case 1941 : /* fall through */
      case 1945 : /* fall through */
      case 1949 : /* fall through */
      case 1953 : /* fall through */
      case 1957 : /* fall through */
      case 1961 : /* fall through */
      case 1965 : /* fall through */
      case 1969 : /* fall through */
      case 1973 : /* fall through */
      case 1977 : /* fall through */
      case 1981 : /* fall through */
      case 1985 : /* fall through */
      case 1989 : /* fall through */
      case 1993 : /* fall through */
      case 1997 : /* fall through */
      case 2001 : /* fall through */
      case 2005 : /* fall through */
      case 2009 : /* fall through */
      case 2013 : /* fall through */
      case 2017 : /* fall through */
      case 2021 : /* fall through */
      case 2025 : /* fall through */
      case 2029 : /* fall through */
      case 2033 : /* fall through */
      case 2037 : /* fall through */
      case 2041 : /* fall through */
      case 2045 : itype = RISCV32BF_RV32_INSN_C_BNEZ; goto extract_sfmt_c_beqz;
      case 1794 : /* fall through */
      case 1798 : /* fall through */
      case 1802 : /* fall through */
      case 1806 : /* fall through */
      case 1810 : /* fall through */
      case 1814 : /* fall through */
      case 1818 : /* fall through */
      case 1822 : /* fall through */
      case 1826 : /* fall through */
      case 1830 : /* fall through */
      case 1834 : /* fall through */
      case 1838 : /* fall through */
      case 1842 : /* fall through */
      case 1846 : /* fall through */
      case 1850 : /* fall through */
      case 1854 : /* fall through */
      case 1858 : /* fall through */
      case 1862 : /* fall through */
      case 1866 : /* fall through */
      case 1870 : /* fall through */
      case 1874 : /* fall through */
      case 1878 : /* fall through */
      case 1882 : /* fall through */
      case 1886 : /* fall through */
      case 1890 : /* fall through */
      case 1894 : /* fall through */
      case 1898 : /* fall through */
      case 1902 : /* fall through */
      case 1906 : /* fall through */
      case 1910 : /* fall through */
      case 1914 : /* fall through */
      case 1918 : /* fall through */
      case 1922 : /* fall through */
      case 1926 : /* fall through */
      case 1930 : /* fall through */
      case 1934 : /* fall through */
      case 1938 : /* fall through */
      case 1942 : /* fall through */
      case 1946 : /* fall through */
      case 1950 : /* fall through */
      case 1954 : /* fall through */
      case 1958 : /* fall through */
      case 1962 : /* fall through */
      case 1966 : /* fall through */
      case 1970 : /* fall through */
      case 1974 : /* fall through */
      case 1978 : /* fall through */
      case 1982 : /* fall through */
      case 1986 : /* fall through */
      case 1990 : /* fall through */
      case 1994 : /* fall through */
      case 1998 : /* fall through */
      case 2002 : /* fall through */
      case 2006 : /* fall through */
      case 2010 : /* fall through */
      case 2014 : /* fall through */
      case 2018 : /* fall through */
      case 2022 : /* fall through */
      case 2026 : /* fall through */
      case 2030 : /* fall through */
      case 2034 : /* fall through */
      case 2038 : /* fall through */
      case 2042 : /* fall through */
      case 2046 : itype = RISCV32BF_RV32_INSN_C_FSWSP; goto extract_sfmt_c_fswsp;
      default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_empty", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_addi16sp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
    DI f_imm1_121;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm2_42;
    UDI f_uimm1_21;
    DI f_imm10_121_42_51_21_61_0000;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm2_42 = EXTRACT_LSB0_UINT (insn, 16, 4, 2);
    f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1);
{
  f_imm10_121_42_51_21_61_0000 = ((((((((f_imm1_121) << (5))) | (((f_uimm2_42) << (3))))) | (((((f_uimm1_51) << (2))) | (((f_uimm1_21) << (1))))))) | (f_uimm1_61));
}
  f_imm10_121_42_51_21_61_0000 = ((f_imm10_121_42_51_21_61_0000) << (4));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm10_121_42_51_21_61_0000) = f_imm10_121_42_51_21_61_0000;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_addi16sp", "f_imm10_121_42_51_21_61_0000 0x%x", 'x', f_imm10_121_42_51_21_61_0000, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_addi4spn:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
    UDI f_uimm2_122;
    UDI f_uimm4_104;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm3_43;
    DI f_uimm10_104_122_51_61_00;

    f_uimm2_122 = EXTRACT_LSB0_UINT (insn, 16, 12, 2);
    f_uimm4_104 = EXTRACT_LSB0_UINT (insn, 16, 10, 4);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm10_104_122_51_61_00 = ((((((f_uimm4_104) << (4))) | (((f_uimm2_122) << (2))))) | (((((f_uimm1_51) << (1))) | (f_uimm1_61))));
}
  f_uimm10_104_122_51_61_00 = ((f_uimm10_104_122_51_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm10_104_122_51_61_00) = f_uimm10_104_122_51_61_00;
  FLD (f_uimm3_43) = f_uimm3_43;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_addi4spn", "f_uimm10_104_122_51_61_00 0x%x", 'x', f_uimm10_104_122_51_61_00, "f_uimm3_43 0x%x", 'x', f_uimm3_43, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_nop:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_nop", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_ebreak:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_ebreak", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_jr:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
    UDI f_uimm5_115;

    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_115) = f_uimm5_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_jr", "f_uimm5_115 0x%x", 'x', f_uimm5_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_jalr:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jal.f
    UINT f_rd;

    f_rd = EXTRACT_LSB0_UINT (insn, 16, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_jalr", "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_mv:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_mv.f
    UDI f_uimm5_115;
    UDI f_uimm5_65;

    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_65) = f_uimm5_65;
  FLD (f_uimm5_115) = f_uimm5_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_mv", "f_uimm5_65 0x%x", 'x', f_uimm5_65, "f_uimm5_115 0x%x", 'x', f_uimm5_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_add:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_mv.f
    UDI f_uimm5_115;
    UDI f_uimm5_65;

    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_115) = f_uimm5_115;
  FLD (f_uimm5_65) = f_uimm5_65;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_add", "f_uimm5_115 0x%x", 'x', f_uimm5_115, "f_uimm5_65 0x%x", 'x', f_uimm5_65, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_and:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_fsd.f
    UDI f_uimm3_93;
    UDI f_uimm3_43;

    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_43) = f_uimm3_43;
  FLD (f_uimm3_93) = f_uimm3_93;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_and", "f_uimm3_43 0x%x", 'x', f_uimm3_43, "f_uimm3_93 0x%x", 'x', f_uimm3_93, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_li:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_li.f
    DI f_imm1_121;
    UDI f_uimm5_115;
    UDI f_uimm5_65;
    DI f_imm6_121_65;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_imm6_121_65) = f_imm6_121_65;
  FLD (f_uimm5_115) = f_uimm5_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_li", "f_imm6_121_65 0x%x", 'x', f_imm6_121_65, "f_uimm5_115 0x%x", 'x', f_uimm5_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_lui:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lui.f
    UDI f_uimm1_121;
    UDI f_uimm5_115;
    UDI f_uimm5_65;
    DI f_uimm18_121_65_000000000000;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_uimm18_121_65_000000000000 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));
}
  f_uimm18_121_65_000000000000 = ((f_uimm18_121_65_000000000000) << (12));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm18_121_65_000000000000) = f_uimm18_121_65_000000000000;
  FLD (f_uimm5_115) = f_uimm5_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_lui", "f_uimm18_121_65_000000000000 0x%x", 'x', f_uimm18_121_65_000000000000, "f_uimm5_115 0x%x", 'x', f_uimm5_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_addi:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_li.f
    DI f_imm1_121;
    UDI f_uimm5_115;
    UDI f_uimm5_65;
    DI f_imm6_121_65;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_115) = f_uimm5_115;
  FLD (f_imm6_121_65) = f_imm6_121_65;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_addi", "f_uimm5_115 0x%x", 'x', f_uimm5_115, "f_imm6_121_65 0x%x", 'x', f_imm6_121_65, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_slli:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_slli.f
    UDI f_uimm1_121;
    UDI f_uimm5_115;
    UDI f_uimm5_65;
    UDI f_uimm6_121_65;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_uimm6_121_65 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_115) = f_uimm5_115;
  FLD (f_uimm6_121_65) = f_uimm6_121_65;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_slli", "f_uimm5_115 0x%x", 'x', f_uimm5_115, "f_uimm6_121_65 0x%x", 'x', f_uimm6_121_65, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_lwsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
    UDI f_uimm1_121;
    UDI f_uimm5_115;
    UDI f_uimm3_63;
    UDI f_uimm2_32;
    DI f_uimm8_32_121_63_00;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm3_63 = EXTRACT_LSB0_UINT (insn, 16, 6, 3);
    f_uimm2_32 = EXTRACT_LSB0_UINT (insn, 16, 3, 2);
{
  f_uimm8_32_121_63_00 = ((((((f_uimm2_32) << (4))) | (((f_uimm1_121) << (3))))) | (f_uimm3_63));
}
  f_uimm8_32_121_63_00 = ((f_uimm8_32_121_63_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm8_32_121_63_00) = f_uimm8_32_121_63_00;
  FLD (f_uimm5_115) = f_uimm5_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_lwsp", "f_uimm8_32_121_63_00 0x%x", 'x', f_uimm8_32_121_63_00, "f_uimm5_115 0x%x", 'x', f_uimm5_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_swsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_swsp.f
    UDI f_uimm4_124;
    UDI f_uimm2_82;
    UDI f_uimm5_65;
    DI f_uimm8_82_124_00;

    f_uimm4_124 = EXTRACT_LSB0_UINT (insn, 16, 12, 4);
    f_uimm2_82 = EXTRACT_LSB0_UINT (insn, 16, 8, 2);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_uimm8_82_124_00 = ((((f_uimm2_82) << (4))) | (f_uimm4_124));
}
  f_uimm8_82_124_00 = ((f_uimm8_82_124_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_65) = f_uimm5_65;
  FLD (f_uimm8_82_124_00) = f_uimm8_82_124_00;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_swsp", "f_uimm5_65 0x%x", 'x', f_uimm5_65, "f_uimm8_82_124_00 0x%x", 'x', f_uimm8_82_124_00, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_lw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lw.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm3_43;
    DI f_uimm7_51_123_61_00;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));
}
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm7_51_123_61_00) = f_uimm7_51_123_61_00;
  FLD (f_uimm3_43) = f_uimm3_43;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_lw", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm7_51_123_61_00 0x%x", 'x', f_uimm7_51_123_61_00, "f_uimm3_43 0x%x", 'x', f_uimm3_43, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_sw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lw.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm3_43;
    DI f_uimm7_51_123_61_00;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));
}
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_43) = f_uimm3_43;
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm7_51_123_61_00) = f_uimm7_51_123_61_00;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_sw", "f_uimm3_43 0x%x", 'x', f_uimm3_43, "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm7_51_123_61_00 0x%x", 'x', f_uimm7_51_123_61_00, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_srli:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_srli.f
    UDI f_uimm1_121;
    UDI f_uimm3_93;
    UDI f_uimm5_65;
    UDI f_uimm6_121_65;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_uimm6_121_65 = ((((f_uimm1_121) << (5))) | (f_uimm5_65));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm6_121_65) = f_uimm6_121_65;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_srli", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm6_121_65 0x%x", 'x', f_uimm6_121_65, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_andi:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_andi.f
    DI f_imm1_121;
    UDI f_uimm3_93;
    UDI f_uimm5_65;
    DI f_imm6_121_65;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_imm6_121_65 = ((((f_imm1_121) << (5))) | (f_uimm5_65));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_imm6_121_65) = f_imm6_121_65;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_andi", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_imm6_121_65 0x%x", 'x', f_imm6_121_65, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_beqz:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_beqz.f
    DI f_imm1_121;
    UDI f_uimm2_112;
    UDI f_uimm3_93;
    UDI f_uimm2_62;
    UDI f_uimm2_42;
    UDI f_uimm1_21;
    DI f_imm9_121_62_21_112_42_0;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm2_112 = EXTRACT_LSB0_UINT (insn, 16, 11, 2);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2);
    f_uimm2_42 = EXTRACT_LSB0_UINT (insn, 16, 4, 2);
    f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1);
{
  f_imm9_121_62_21_112_42_0 = ((((((((f_imm1_121) << (7))) | (((f_uimm2_62) << (5))))) | (((((f_uimm1_21) << (4))) | (((f_uimm2_112) << (2))))))) | (f_uimm2_42));
}
  f_imm9_121_62_21_112_42_0 = ((f_imm9_121_62_21_112_42_0) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_imm9_121_62_21_112_42_0) = f_imm9_121_62_21_112_42_0;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_beqz", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_imm9_121_62_21_112_42_0 0x%x", 'x', f_imm9_121_62_21_112_42_0, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_j:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_j.f
    DI f_imm1_121;
    UDI f_uimm1_111;
    UDI f_uimm2_102;
    UDI f_uimm1_81;
    UDI f_uimm1_71;
    UDI f_uimm1_61;
    UDI f_uimm3_53;
    UDI f_uimm1_21;
    DI f_imm12_121_81_102_61_71_21_111_53_0;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm1_111 = EXTRACT_LSB0_UINT (insn, 16, 11, 1);
    f_uimm2_102 = EXTRACT_LSB0_UINT (insn, 16, 10, 2);
    f_uimm1_81 = EXTRACT_LSB0_UINT (insn, 16, 8, 1);
    f_uimm1_71 = EXTRACT_LSB0_UINT (insn, 16, 7, 1);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm3_53 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1);
{
  f_imm12_121_81_102_61_71_21_111_53_0 = ((((((((f_imm1_121) << (10))) | (((f_uimm1_81) << (9))))) | (((((f_uimm2_102) << (7))) | (((f_uimm1_61) << (6))))))) | (((((((f_uimm1_71) << (5))) | (((f_uimm1_21) << (4))))) | (((((f_uimm1_111) << (3))) | (f_uimm3_53))))));
}
  f_imm12_121_81_102_61_71_21_111_53_0 = ((f_imm12_121_81_102_61_71_21_111_53_0) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_121_81_102_61_71_21_111_53_0) = f_imm12_121_81_102_61_71_21_111_53_0;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_j", "f_imm12_121_81_102_61_71_21_111_53_0 0x%x", 'x', f_imm12_121_81_102_61_71_21_111_53_0, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_jal:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_j.f
    DI f_imm1_121;
    UDI f_uimm1_111;
    UDI f_uimm2_102;
    UDI f_uimm1_81;
    UDI f_uimm1_71;
    UDI f_uimm1_61;
    UDI f_uimm3_53;
    UDI f_uimm1_21;
    DI f_imm12_121_81_102_61_71_21_111_53_0;

    f_imm1_121 = EXTRACT_LSB0_SINT (insn, 16, 12, 1);
    f_uimm1_111 = EXTRACT_LSB0_UINT (insn, 16, 11, 1);
    f_uimm2_102 = EXTRACT_LSB0_UINT (insn, 16, 10, 2);
    f_uimm1_81 = EXTRACT_LSB0_UINT (insn, 16, 8, 1);
    f_uimm1_71 = EXTRACT_LSB0_UINT (insn, 16, 7, 1);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm3_53 = EXTRACT_LSB0_UINT (insn, 16, 5, 3);
    f_uimm1_21 = EXTRACT_LSB0_UINT (insn, 16, 2, 1);
{
  f_imm12_121_81_102_61_71_21_111_53_0 = ((((((((f_imm1_121) << (10))) | (((f_uimm1_81) << (9))))) | (((((f_uimm2_102) << (7))) | (((f_uimm1_61) << (6))))))) | (((((((f_uimm1_71) << (5))) | (((f_uimm1_21) << (4))))) | (((((f_uimm1_111) << (3))) | (f_uimm3_53))))));
}
  f_imm12_121_81_102_61_71_21_111_53_0 = ((f_imm12_121_81_102_61_71_21_111_53_0) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_121_81_102_61_71_21_111_53_0) = f_imm12_121_81_102_61_71_21_111_53_0;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_jal", "f_imm12_121_81_102_61_71_21_111_53_0 0x%x", 'x', f_imm12_121_81_102_61_71_21_111_53_0, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_flwsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
    UDI f_uimm1_121;
    UINT f_rd;
    UDI f_uimm3_63;
    UDI f_uimm2_32;
    DI f_uimm8_32_121_63_00;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_rd = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm3_63 = EXTRACT_LSB0_UINT (insn, 16, 6, 3);
    f_uimm2_32 = EXTRACT_LSB0_UINT (insn, 16, 3, 2);
{
  f_uimm8_32_121_63_00 = ((((((f_uimm2_32) << (4))) | (((f_uimm1_121) << (3))))) | (f_uimm3_63));
}
  f_uimm8_32_121_63_00 = ((f_uimm8_32_121_63_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm8_32_121_63_00) = f_uimm8_32_121_63_00;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_flwsp", "f_uimm8_32_121_63_00 0x%x", 'x', f_uimm8_32_121_63_00, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fswsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
    UDI f_uimm3_123;
    UDI f_uimm1_61;
    UDI f_uimm5_65;
    UDI f_uimm1_51;
    DI f_uimm7_51_123_61_00;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
{
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));
}
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_65) = f_uimm5_65;
  FLD (f_uimm7_51_123_61_00) = f_uimm7_51_123_61_00;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fswsp", "f_uimm5_65 0x%x", 'x', f_uimm5_65, "f_uimm7_51_123_61_00 0x%x", 'x', f_uimm7_51_123_61_00, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fsw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lw.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm3_43;
    DI f_uimm7_51_123_61_00;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));
}
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm3_43) = f_uimm3_43;
  FLD (f_uimm7_51_123_61_00) = f_uimm7_51_123_61_00;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fsw", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm3_43 0x%x", 'x', f_uimm3_43, "f_uimm7_51_123_61_00 0x%x", 'x', f_uimm7_51_123_61_00, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_flw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_lw.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm1_61;
    UDI f_uimm1_51;
    UDI f_uimm3_43;
    DI f_uimm7_51_123_61_00;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm1_61 = EXTRACT_LSB0_UINT (insn, 16, 6, 1);
    f_uimm1_51 = EXTRACT_LSB0_UINT (insn, 16, 5, 1);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm7_51_123_61_00 = ((((((f_uimm1_51) << (4))) | (((f_uimm3_123) << (1))))) | (f_uimm1_61));
}
  f_uimm7_51_123_61_00 = ((f_uimm7_51_123_61_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm7_51_123_61_00) = f_uimm7_51_123_61_00;
  FLD (f_uimm3_43) = f_uimm3_43;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_flw", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm7_51_123_61_00 0x%x", 'x', f_uimm7_51_123_61_00, "f_uimm3_43 0x%x", 'x', f_uimm3_43, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fldsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
    UDI f_uimm1_121;
    UINT f_rd;
    UDI f_uimm2_62;
    UDI f_uimm3_43;
    DI f_uimm9_43_121_62_000;

    f_uimm1_121 = EXTRACT_LSB0_UINT (insn, 16, 12, 1);
    f_rd = EXTRACT_LSB0_UINT (insn, 16, 11, 5);
    f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm9_43_121_62_000 = ((((((f_uimm3_43) << (3))) | (((f_uimm1_121) << (2))))) | (f_uimm2_62));
}
  f_uimm9_43_121_62_000 = ((f_uimm9_43_121_62_000) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm9_43_121_62_000) = f_uimm9_43_121_62_000;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fldsp", "f_uimm9_43_121_62_000 0x%x", 'x', f_uimm9_43_121_62_000, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fsdsp:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_swsp.f
    UDI f_uimm4_124;
    UDI f_uimm2_82;
    UDI f_uimm5_65;
    DI f_uimm8_82_124_00;

    f_uimm4_124 = EXTRACT_LSB0_UINT (insn, 16, 12, 4);
    f_uimm2_82 = EXTRACT_LSB0_UINT (insn, 16, 8, 2);
    f_uimm5_65 = EXTRACT_LSB0_UINT (insn, 16, 6, 5);
{
  f_uimm8_82_124_00 = ((((f_uimm2_82) << (4))) | (f_uimm4_124));
}
  f_uimm8_82_124_00 = ((f_uimm8_82_124_00) << (2));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm5_65) = f_uimm5_65;
  FLD (f_uimm8_82_124_00) = f_uimm8_82_124_00;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fsdsp", "f_uimm5_65 0x%x", 'x', f_uimm5_65, "f_uimm8_82_124_00 0x%x", 'x', f_uimm8_82_124_00, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fsd:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_fsd.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm2_62;
    UDI f_uimm3_43;
    DI f_uimm8_62_123_000;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm8_62_123_000 = ((((f_uimm2_62) << (3))) | (f_uimm3_123));
}
  f_uimm8_62_123_000 = ((f_uimm8_62_123_000) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm3_43) = f_uimm3_43;
  FLD (f_uimm8_62_123_000) = f_uimm8_62_123_000;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fsd", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm3_43 0x%x", 'x', f_uimm3_43, "f_uimm8_62_123_000 0x%x", 'x', f_uimm8_62_123_000, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_c_fld:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_c_fsd.f
    UDI f_uimm3_123;
    UDI f_uimm3_93;
    UDI f_uimm2_62;
    UDI f_uimm3_43;
    DI f_uimm8_62_123_000;

    f_uimm3_123 = EXTRACT_LSB0_UINT (insn, 16, 12, 3);
    f_uimm3_93 = EXTRACT_LSB0_UINT (insn, 16, 9, 3);
    f_uimm2_62 = EXTRACT_LSB0_UINT (insn, 16, 6, 2);
    f_uimm3_43 = EXTRACT_LSB0_UINT (insn, 16, 4, 3);
{
  f_uimm8_62_123_000 = ((((f_uimm2_62) << (3))) | (f_uimm3_123));
}
  f_uimm8_62_123_000 = ((f_uimm8_62_123_000) << (3));

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm3_93) = f_uimm3_93;
  FLD (f_uimm8_62_123_000) = f_uimm8_62_123_000;
  FLD (f_uimm3_43) = f_uimm3_43;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_fld", "f_uimm3_93 0x%x", 'x', f_uimm3_93, "f_uimm8_62_123_000 0x%x", 'x', f_uimm8_62_123_000, "f_uimm3_43 0x%x", 'x', f_uimm3_43, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lui:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lui.f
    DI f_uimm32_3120_000000000000;
    UINT f_rd;

    f_uimm32_3120_000000000000 = ((EXTRACT_LSB0_UINT (insn, 32, 31, 20)) << (12));
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm32_3120_000000000000) = f_uimm32_3120_000000000000;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lui", "f_uimm32_3120_000000000000 0x%x", 'x', f_uimm32_3120_000000000000, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_auipc:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_lui.f
    DI f_uimm32_3120_000000000000;
    UINT f_rd;

    f_uimm32_3120_000000000000 = ((EXTRACT_LSB0_UINT (insn, 32, 31, 20)) << (12));
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_uimm32_3120_000000000000) = f_uimm32_3120_000000000000;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_auipc", "f_uimm32_3120_000000000000 0x%x", 'x', f_uimm32_3120_000000000000, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jal:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jal.f
    DI f_imm1_311;
    UDI f_uimm10_3010;
    UDI f_uimm1_201;
    UDI f_uimm8_198;
    UINT f_rd;
    DI f_imm21_311_198_201_3010_0;

    f_imm1_311 = EXTRACT_LSB0_SINT (insn, 32, 31, 1);
    f_uimm10_3010 = EXTRACT_LSB0_UINT (insn, 32, 30, 10);
    f_uimm1_201 = EXTRACT_LSB0_UINT (insn, 32, 20, 1);
    f_uimm8_198 = EXTRACT_LSB0_UINT (insn, 32, 19, 8);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
  f_imm21_311_198_201_3010_0 = ((((((f_imm1_311) << (19))) | (((f_uimm8_198) << (11))))) | (((((f_uimm1_201) << (10))) | (f_uimm10_3010))));
  f_imm21_311_198_201_3010_0 = ((f_imm21_311_198_201_3010_0) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm21_311_198_201_3010_0) = f_imm21_311_198_201_3010_0;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jal", "f_imm21_311_198_201_3010_0 0x%x", 'x', f_imm21_311_198_201_3010_0, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_jalr:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_jalr", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_beq:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_beq.f
    DI f_imm1_311;
    UDI f_uimm6_306;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm4_114;
    UDI f_uimm1_71;
    DI f_imm13_311_71_306_114_0;

    f_imm1_311 = EXTRACT_LSB0_SINT (insn, 32, 31, 1);
    f_uimm6_306 = EXTRACT_LSB0_UINT (insn, 32, 30, 6);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm4_114 = EXTRACT_LSB0_UINT (insn, 32, 11, 4);
    f_uimm1_71 = EXTRACT_LSB0_UINT (insn, 32, 7, 1);
  f_imm13_311_71_306_114_0 = ((((((f_imm1_311) << (11))) | (((f_uimm1_71) << (10))))) | (((((f_uimm6_306) << (4))) | (f_uimm4_114))));
  f_imm13_311_71_306_114_0 = ((f_imm13_311_71_306_114_0) << (1));

  /* Record the fields for the semantic handler.  */
  FLD (f_imm13_311_71_306_114_0) = f_imm13_311_71_306_114_0;
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_beq", "f_imm13_311_71_306_114_0 0x%x", 'x', f_imm13_311_71_306_114_0, "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lb:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lb", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lh:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lh", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lw", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lbu:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lbu", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lhu:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lhu", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_sb:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    DI f_imm7_317;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm5_115;
    DI f_imm12_317_115;

    f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
{
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_imm12_317_115) = f_imm12_317_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_sb", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_imm12_317_115 0x%x", 'x', f_imm12_317_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_sh:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    DI f_imm7_317;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm5_115;
    DI f_imm12_317_115;

    f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
{
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_imm12_317_115) = f_imm12_317_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_sh", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_imm12_317_115 0x%x", 'x', f_imm12_317_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_sw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    DI f_imm7_317;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm5_115;
    DI f_imm12_317_115;

    f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
{
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_imm12_317_115) = f_imm12_317_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_sw", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_imm12_317_115 0x%x", 'x', f_imm12_317_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_addi:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_addi", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_slli_shift5:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UDI f_uimm5_245;
    UINT f_rs1;
    UINT f_rd;

    f_uimm5_245 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_uimm5_245) = f_uimm5_245;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_slli_shift5", "f_rs1 0x%x", 'x', f_rs1, "f_uimm5_245 0x%x", 'x', f_uimm5_245, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_add:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_add", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_mulh:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_mulh", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lr_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lr_w", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_sc_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    UINT f_rs2;
    UINT f_rs1;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_sc_w", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_amoswap_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_amoswap_w", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_amomin_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_amomin_w", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_flw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_flw", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fsw:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    DI f_imm7_317;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm5_115;
    DI f_imm12_317_115;

    f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
{
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_rs2) = f_rs2;
  FLD (f_rs1) = f_rs1;
  FLD (f_imm12_317_115) = f_imm12_317_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fsw", "f_rs2 0x%x", 'x', f_rs2, "f_rs1 0x%x", 'x', f_rs1, "f_imm12_317_115 0x%x", 'x', f_imm12_317_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fmadd_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs3;
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs3 = EXTRACT_LSB0_UINT (insn, 32, 31, 5);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rs3) = f_rs3;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fmadd_s", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rs3 0x%x", 'x', f_rs3, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fadd_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fadd_s", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fsgnj_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fsgnj_s", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fmin_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fmin_s", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_feq_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
    UINT f_rs2;
    UINT f_rs1;
    UINT f_rd;

    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rs2) = f_rs2;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_feq_s", "f_rs1 0x%x", 'x', f_rs1, "f_rs2 0x%x", 'x', f_rs2, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fsqrt_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fsqrt_s", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fcvt_w_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fcvt_w_s", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fmv_x_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fmv_x_w", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fcvt_s_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fcvt_s_w", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fmv_w_x:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fmv_w_x", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fld:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_jalr.f
    DI f_imm12_3112;
    UINT f_rs1;
    UINT f_rd;

    f_imm12_3112 = EXTRACT_LSB0_SINT (insn, 32, 31, 12);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_imm12_3112) = f_imm12_3112;
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fld", "f_imm12_3112 0x%x", 'x', f_imm12_3112, "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fsd:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_sb.f
    DI f_imm7_317;
    UINT f_rs2;
    UINT f_rs1;
    UDI f_uimm5_115;
    DI f_imm12_317_115;

    f_imm7_317 = EXTRACT_LSB0_SINT (insn, 32, 31, 7);
    f_rs2 = EXTRACT_LSB0_UINT (insn, 32, 24, 5);
    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_uimm5_115 = EXTRACT_LSB0_UINT (insn, 32, 11, 5);
{
  f_imm12_317_115 = ((((f_imm7_317) << (5))) | (f_uimm5_115));
}

  /* Record the fields for the semantic handler.  */
  FLD (f_rs2) = f_rs2;
  FLD (f_rs1) = f_rs1;
  FLD (f_imm12_317_115) = f_imm12_317_115;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fsd", "f_rs2 0x%x", 'x', f_rs2, "f_rs1 0x%x", 'x', f_rs1, "f_imm12_317_115 0x%x", 'x', f_imm12_317_115, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fcvt_d_w:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fcvt_d_w", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_fcvt_d_s:
  {
    const IDESC *idesc = &riscv32bf_rv32_insn_data[itype];
    CGEN_INSN_WORD insn = entire_insn;
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
    UINT f_rs1;
    UINT f_rd;

    f_rs1 = EXTRACT_LSB0_UINT (insn, 32, 19, 5);
    f_rd = EXTRACT_LSB0_UINT (insn, 32, 11, 5);

  /* Record the fields for the semantic handler.  */
  FLD (f_rs1) = f_rs1;
  FLD (f_rd) = f_rd;
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_fcvt_d_s", "f_rs1 0x%x", 'x', f_rs1, "f_rd 0x%x", 'x', f_rd, (char *) 0));

#undef FLD
    return idesc;
  }

}
