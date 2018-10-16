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
  { RISCV_INSN_FENCE, RISCV32BF_RV32_INSN_FENCE, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SFENCE_VM, RISCV32BF_RV32_INSN_SFENCE_VM, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SFENCE_VMA, RISCV32BF_RV32_INSN_SFENCE_VMA, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FENCE_I, RISCV32BF_RV32_INSN_FENCE_I, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_ECALL, RISCV32BF_RV32_INSN_ECALL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_EBREAK, RISCV32BF_RV32_INSN_EBREAK, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRW, RISCV32BF_RV32_INSN_CSRRW, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRS, RISCV32BF_RV32_INSN_CSRRS, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRC, RISCV32BF_RV32_INSN_CSRRC, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRWI, RISCV32BF_RV32_INSN_CSRRWI, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRSI, RISCV32BF_RV32_INSN_CSRRSI, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_CSRRCI, RISCV32BF_RV32_INSN_CSRRCI, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_URET, RISCV32BF_RV32_INSN_URET, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SRET, RISCV32BF_RV32_INSN_SRET, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_HRET, RISCV32BF_RV32_INSN_HRET, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_MRET, RISCV32BF_RV32_INSN_MRET, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_DRET, RISCV32BF_RV32_INSN_DRET, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_WFI, RISCV32BF_RV32_INSN_WFI, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_MUL, RISCV32BF_RV32_INSN_MUL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_MULH, RISCV32BF_RV32_INSN_MULH, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_MULHSU, RISCV32BF_RV32_INSN_MULHSU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_MULHU, RISCV32BF_RV32_INSN_MULHU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_DIV, RISCV32BF_RV32_INSN_DIV, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_DIVU, RISCV32BF_RV32_INSN_DIVU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_REM, RISCV32BF_RV32_INSN_REM, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_REMU, RISCV32BF_RV32_INSN_REMU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_LR_W, RISCV32BF_RV32_INSN_LR_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_LR_W_AQ, RISCV32BF_RV32_INSN_LR_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_LR_W_RL, RISCV32BF_RV32_INSN_LR_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_LR_W_AQRL, RISCV32BF_RV32_INSN_LR_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SC_W, RISCV32BF_RV32_INSN_SC_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SC_W_AQ, RISCV32BF_RV32_INSN_SC_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SC_W_RL, RISCV32BF_RV32_INSN_SC_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_SC_W_AQRL, RISCV32BF_RV32_INSN_SC_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOSWAP_W, RISCV32BF_RV32_INSN_AMOSWAP_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOSWAP_W_AQ, RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOSWAP_W_RL, RISCV32BF_RV32_INSN_AMOSWAP_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOSWAP_W_AQRL, RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOADD_W, RISCV32BF_RV32_INSN_AMOADD_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOADD_W_AQ, RISCV32BF_RV32_INSN_AMOADD_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOADD_W_RL, RISCV32BF_RV32_INSN_AMOADD_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOADD_W_AQRL, RISCV32BF_RV32_INSN_AMOADD_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOXOR_W, RISCV32BF_RV32_INSN_AMOXOR_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOXOR_W_AQ, RISCV32BF_RV32_INSN_AMOXOR_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOXOR_W_RL, RISCV32BF_RV32_INSN_AMOXOR_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOXOR_W_AQRL, RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOAND_W, RISCV32BF_RV32_INSN_AMOAND_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOAND_W_AQ, RISCV32BF_RV32_INSN_AMOAND_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOAND_W_RL, RISCV32BF_RV32_INSN_AMOAND_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOAND_W_AQRL, RISCV32BF_RV32_INSN_AMOAND_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOOR_W, RISCV32BF_RV32_INSN_AMOOR_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOOR_W_AQ, RISCV32BF_RV32_INSN_AMOOR_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOOR_W_RL, RISCV32BF_RV32_INSN_AMOOR_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOOR_W_AQRL, RISCV32BF_RV32_INSN_AMOOR_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMIN_W, RISCV32BF_RV32_INSN_AMOMIN_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMIN_W_AQ, RISCV32BF_RV32_INSN_AMOMIN_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMIN_W_RL, RISCV32BF_RV32_INSN_AMOMIN_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMIN_W_AQRL, RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAX_W, RISCV32BF_RV32_INSN_AMOMAX_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAX_W_AQ, RISCV32BF_RV32_INSN_AMOMAX_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAX_W_RL, RISCV32BF_RV32_INSN_AMOMAX_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAX_W_AQRL, RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMINU_W, RISCV32BF_RV32_INSN_AMOMINU_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMINU_W_AQ, RISCV32BF_RV32_INSN_AMOMINU_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMINU_W_RL, RISCV32BF_RV32_INSN_AMOMINU_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMINU_W_AQRL, RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAXU_W, RISCV32BF_RV32_INSN_AMOMAXU_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAXU_W_AQ, RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAXU_W_RL, RISCV32BF_RV32_INSN_AMOMAXU_W_RL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_AMOMAXU_W_AQRL, RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLW, RISCV32BF_RV32_INSN_FLW, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSW, RISCV32BF_RV32_INSN_FSW, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMADD_S, RISCV32BF_RV32_INSN_FMADD_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMSUB_S, RISCV32BF_RV32_INSN_FMSUB_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMSUB_S, RISCV32BF_RV32_INSN_FNMSUB_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMADD_S, RISCV32BF_RV32_INSN_FNMADD_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FADD_S, RISCV32BF_RV32_INSN_FADD_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSUB_S, RISCV32BF_RV32_INSN_FSUB_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMUL_S, RISCV32BF_RV32_INSN_FMUL_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FDIV_S, RISCV32BF_RV32_INSN_FDIV_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJ_S, RISCV32BF_RV32_INSN_FSGNJ_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJN_S, RISCV32BF_RV32_INSN_FSGNJN_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJX_S, RISCV32BF_RV32_INSN_FSGNJX_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMIN_S, RISCV32BF_RV32_INSN_FMIN_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMAX_S, RISCV32BF_RV32_INSN_FMAX_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FEQ_S, RISCV32BF_RV32_INSN_FEQ_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLT_S, RISCV32BF_RV32_INSN_FLT_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLE_S, RISCV32BF_RV32_INSN_FLE_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSQRT_S, RISCV32BF_RV32_INSN_FSQRT_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_W_S, RISCV32BF_RV32_INSN_FCVT_W_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_WU_S, RISCV32BF_RV32_INSN_FCVT_WU_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMV_X_W, RISCV32BF_RV32_INSN_FMV_X_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCLASS_S, RISCV32BF_RV32_INSN_FCLASS_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_S_W, RISCV32BF_RV32_INSN_FCVT_S_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_S_WU, RISCV32BF_RV32_INSN_FCVT_S_WU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMV_W_X, RISCV32BF_RV32_INSN_FMV_W_X, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLD, RISCV32BF_RV32_INSN_FLD, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSD, RISCV32BF_RV32_INSN_FSD, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMADD_D, RISCV32BF_RV32_INSN_FMADD_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMSUB_D, RISCV32BF_RV32_INSN_FMSUB_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMSUB_D, RISCV32BF_RV32_INSN_FNMSUB_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMADD_D, RISCV32BF_RV32_INSN_FNMADD_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FADD_D, RISCV32BF_RV32_INSN_FADD_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSUB_D, RISCV32BF_RV32_INSN_FSUB_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMUL_D, RISCV32BF_RV32_INSN_FMUL_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FDIV_D, RISCV32BF_RV32_INSN_FDIV_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJ_D, RISCV32BF_RV32_INSN_FSGNJ_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJN_D, RISCV32BF_RV32_INSN_FSGNJN_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJX_D, RISCV32BF_RV32_INSN_FSGNJX_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMIN_D, RISCV32BF_RV32_INSN_FMIN_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMAX_D, RISCV32BF_RV32_INSN_FMAX_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FEQ_D, RISCV32BF_RV32_INSN_FEQ_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLT_D, RISCV32BF_RV32_INSN_FLT_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLE_D, RISCV32BF_RV32_INSN_FLE_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSQRT_D, RISCV32BF_RV32_INSN_FSQRT_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_W_D, RISCV32BF_RV32_INSN_FCVT_W_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_WU_D, RISCV32BF_RV32_INSN_FCVT_WU_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCLASS_D, RISCV32BF_RV32_INSN_FCLASS_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_D_W, RISCV32BF_RV32_INSN_FCVT_D_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_D_WU, RISCV32BF_RV32_INSN_FCVT_D_WU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_S_D, RISCV32BF_RV32_INSN_FCVT_S_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_D_S, RISCV32BF_RV32_INSN_FCVT_D_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLQ, RISCV32BF_RV32_INSN_FLQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSQ, RISCV32BF_RV32_INSN_FSQ, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMADD_Q, RISCV32BF_RV32_INSN_FMADD_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMSUB_Q, RISCV32BF_RV32_INSN_FMSUB_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMSUB_Q, RISCV32BF_RV32_INSN_FNMSUB_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FNMADD_Q, RISCV32BF_RV32_INSN_FNMADD_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FADD_Q, RISCV32BF_RV32_INSN_FADD_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSUB_Q, RISCV32BF_RV32_INSN_FSUB_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMUL_Q, RISCV32BF_RV32_INSN_FMUL_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FDIV_Q, RISCV32BF_RV32_INSN_FDIV_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJ_Q, RISCV32BF_RV32_INSN_FSGNJ_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJN_Q, RISCV32BF_RV32_INSN_FSGNJN_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSGNJX_Q, RISCV32BF_RV32_INSN_FSGNJX_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMIN_Q, RISCV32BF_RV32_INSN_FMIN_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FMAX_Q, RISCV32BF_RV32_INSN_FMAX_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FEQ_Q, RISCV32BF_RV32_INSN_FEQ_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLT_Q, RISCV32BF_RV32_INSN_FLT_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FLE_Q, RISCV32BF_RV32_INSN_FLE_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FSQRT_Q, RISCV32BF_RV32_INSN_FSQRT_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_W_Q, RISCV32BF_RV32_INSN_FCVT_W_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_WU_Q, RISCV32BF_RV32_INSN_FCVT_WU_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCLASS_Q, RISCV32BF_RV32_INSN_FCLASS_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_Q_W, RISCV32BF_RV32_INSN_FCVT_Q_W, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_Q_WU, RISCV32BF_RV32_INSN_FCVT_Q_WU, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_S_Q, RISCV32BF_RV32_INSN_FCVT_S_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_D_Q, RISCV32BF_RV32_INSN_FCVT_D_Q, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_Q_S, RISCV32BF_RV32_INSN_FCVT_Q_S, RISCV32BF_RV32_SFMT_C_ADDI16SP },
  { RISCV_INSN_FCVT_Q_D, RISCV32BF_RV32_INSN_FCVT_Q_D, RISCV32BF_RV32_SFMT_C_ADDI16SP },
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
      unsigned int val = (((insn >> 7) & (7 << 5)) | ((insn >> 2) & (31 << 0)));
      switch (val)
      {
      case 0 :
        if ((entire_insn & 0x707f) == 0x3)
          { itype = RISCV32BF_RV32_INSN_LB; goto extract_sfmt_lb; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 3 :
        if ((entire_insn & 0xf00fffff) == 0xf)
          { itype = RISCV32BF_RV32_INSN_FENCE; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 4 :
        if ((entire_insn & 0x707f) == 0x13)
          { itype = RISCV32BF_RV32_INSN_ADDI; goto extract_sfmt_addi; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 5 : /* fall through */
      case 37 : /* fall through */
      case 69 : /* fall through */
      case 101 : /* fall through */
      case 133 : /* fall through */
      case 165 :
        if ((entire_insn & 0x7f) == 0x17)
          { itype = RISCV32BF_RV32_INSN_AUIPC; goto extract_sfmt_auipc; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 8 :
        if ((entire_insn & 0x707f) == 0x23)
          { itype = RISCV32BF_RV32_INSN_SB; goto extract_sfmt_sb; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 12 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 29) & (1 << 1)) | ((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x33)
              { itype = RISCV32BF_RV32_INSN_ADD; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2000033)
              { itype = RISCV32BF_RV32_INSN_MUL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00707f) == 0x40000033)
              { itype = RISCV32BF_RV32_INSN_SUB; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 13 : /* fall through */
      case 45 : /* fall through */
      case 77 : /* fall through */
      case 109 : /* fall through */
      case 141 : /* fall through */
      case 173 :
        if ((entire_insn & 0x7f) == 0x37)
          { itype = RISCV32BF_RV32_INSN_LUI; goto extract_sfmt_lui; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 16 : /* fall through */
      case 48 : /* fall through */
      case 80 : /* fall through */
      case 112 : /* fall through */
      case 144 : /* fall through */
      case 176 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x600007f) == 0x43)
              { itype = RISCV32BF_RV32_INSN_FMADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x600007f) == 0x2000043)
              { itype = RISCV32BF_RV32_INSN_FMADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0x600007f) == 0x6000043)
              { itype = RISCV32BF_RV32_INSN_FMADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 17 : /* fall through */
      case 49 : /* fall through */
      case 81 : /* fall through */
      case 113 : /* fall through */
      case 145 : /* fall through */
      case 177 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x600007f) == 0x47)
              { itype = RISCV32BF_RV32_INSN_FMSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x600007f) == 0x2000047)
              { itype = RISCV32BF_RV32_INSN_FMSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0x600007f) == 0x6000047)
              { itype = RISCV32BF_RV32_INSN_FMSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 18 : /* fall through */
      case 50 : /* fall through */
      case 82 : /* fall through */
      case 114 : /* fall through */
      case 146 : /* fall through */
      case 178 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x600007f) == 0x4b)
              { itype = RISCV32BF_RV32_INSN_FNMSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x600007f) == 0x200004b)
              { itype = RISCV32BF_RV32_INSN_FNMSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0x600007f) == 0x600004b)
              { itype = RISCV32BF_RV32_INSN_FNMSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 19 : /* fall through */
      case 51 : /* fall through */
      case 83 : /* fall through */
      case 115 : /* fall through */
      case 147 : /* fall through */
      case 179 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x600007f) == 0x4f)
              { itype = RISCV32BF_RV32_INSN_FNMADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x600007f) == 0x200004f)
              { itype = RISCV32BF_RV32_INSN_FNMADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0x600007f) == 0x600004f)
              { itype = RISCV32BF_RV32_INSN_FNMADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 20 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 11 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 13 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 15 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 :
            if ((entire_insn & 0xfe00707f) == 0x20000053)
              { itype = RISCV32BF_RV32_INSN_FSGNJ_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 17 :
            if ((entire_insn & 0xfe00707f) == 0x22000053)
              { itype = RISCV32BF_RV32_INSN_FSGNJ_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 19 :
            if ((entire_insn & 0xfe00707f) == 0x26000053)
              { itype = RISCV32BF_RV32_INSN_FSGNJ_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 20 :
            if ((entire_insn & 0xfe00707f) == 0x28000053)
              { itype = RISCV32BF_RV32_INSN_FMIN_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 21 :
            if ((entire_insn & 0xfe00707f) == 0x2a000053)
              { itype = RISCV32BF_RV32_INSN_FMIN_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 23 :
            if ((entire_insn & 0xfe00707f) == 0x2e000053)
              { itype = RISCV32BF_RV32_INSN_FMIN_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0xfff0007f) == 0x42300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0x46100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 :
            if ((entire_insn & 0xfe00707f) == 0xa0000053)
              { itype = RISCV32BF_RV32_INSN_FLE_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 81 :
            if ((entire_insn & 0xfe00707f) == 0xa2000053)
              { itype = RISCV32BF_RV32_INSN_FLE_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 83 :
            if ((entire_insn & 0xfe00707f) == 0xa6000053)
              { itype = RISCV32BF_RV32_INSN_FLE_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0xd2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_WU; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0707f) == 0xd6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_Q_WU; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 112 :
            if ((entire_insn & 0xfff0707f) == 0xe0000053)
              { itype = RISCV32BF_RV32_INSN_FMV_X_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 120 :
            if ((entire_insn & 0xfff0707f) == 0xf0000053)
              { itype = RISCV32BF_RV32_INSN_FMV_W_X; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 24 :
        if ((entire_insn & 0x707f) == 0x63)
          { itype = RISCV32BF_RV32_INSN_BEQ; goto extract_sfmt_beq; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 25 :
        if ((entire_insn & 0x707f) == 0x67)
          { itype = RISCV32BF_RV32_INSN_JALR; goto extract_sfmt_jalr; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 27 : /* fall through */
      case 59 : /* fall through */
      case 91 : /* fall through */
      case 123 : /* fall through */
      case 155 : /* fall through */
      case 187 :
        if ((entire_insn & 0x7f) == 0x6f)
          { itype = RISCV32BF_RV32_INSN_JAL; goto extract_sfmt_jal; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 28 :
        {
          unsigned int val = (((insn >> 15) & (1 << 0)));
          switch (val)
          {
          case 0 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 23) & (7 << 4)) | ((insn >> 22) & (1 << 3)) | ((insn >> 20) & (7 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xffffffff) == 0x73)
                  { itype = RISCV32BF_RV32_INSN_ECALL; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xffffffff) == 0x100073)
                  { itype = RISCV32BF_RV32_INSN_EBREAK; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 2 :
                if ((entire_insn & 0xffffffff) == 0x200073)
                  { itype = RISCV32BF_RV32_INSN_URET; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 34 :
                if ((entire_insn & 0xffffffff) == 0x10200073)
                  { itype = RISCV32BF_RV32_INSN_SRET; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 36 :
                if ((entire_insn & 0xfff07fff) == 0x10400073)
                  { itype = RISCV32BF_RV32_INSN_SFENCE_VM; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 37 :
                if ((entire_insn & 0xffffffff) == 0x10500073)
                  { itype = RISCV32BF_RV32_INSN_WFI; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_SFENCE_VMA; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 66 :
                if ((entire_insn & 0xffffffff) == 0x20200073)
                  { itype = RISCV32BF_RV32_INSN_HRET; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 98 :
                if ((entire_insn & 0xffffffff) == 0x30200073)
                  { itype = RISCV32BF_RV32_INSN_MRET; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 122 :
                if ((entire_insn & 0xffffffff) == 0x7b200073)
                  { itype = RISCV32BF_RV32_INSN_DRET; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff07fff) == 0x10400073)
                  { itype = RISCV32BF_RV32_INSN_SFENCE_VM; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfe007fff) == 0x12000073)
                  { itype = RISCV32BF_RV32_INSN_SFENCE_VMA; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 32 :
        if ((entire_insn & 0x707f) == 0x1003)
          { itype = RISCV32BF_RV32_INSN_LH; goto extract_sfmt_lh; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 35 :
        if ((entire_insn & 0xffffffff) == 0x100f)
          { itype = RISCV32BF_RV32_INSN_FENCE_I; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 36 :
        if ((entire_insn & 0xfe00707f) == 0x1013)
          { itype = RISCV32BF_RV32_INSN_SLLI_SHIFT5; goto extract_sfmt_slli_shift5; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 40 :
        if ((entire_insn & 0x707f) == 0x1023)
          { itype = RISCV32BF_RV32_INSN_SH; goto extract_sfmt_sh; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 44 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x1033)
              { itype = RISCV32BF_RV32_INSN_SLL; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2001033)
              { itype = RISCV32BF_RV32_INSN_MULH; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 52 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 11 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 13 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 15 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 :
            if ((entire_insn & 0xfe00707f) == 0x20001053)
              { itype = RISCV32BF_RV32_INSN_FSGNJN_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 17 :
            if ((entire_insn & 0xfe00707f) == 0x22001053)
              { itype = RISCV32BF_RV32_INSN_FSGNJN_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 19 :
            if ((entire_insn & 0xfe00707f) == 0x26001053)
              { itype = RISCV32BF_RV32_INSN_FSGNJN_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 20 :
            if ((entire_insn & 0xfe00707f) == 0x28001053)
              { itype = RISCV32BF_RV32_INSN_FMAX_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 21 :
            if ((entire_insn & 0xfe00707f) == 0x2a001053)
              { itype = RISCV32BF_RV32_INSN_FMAX_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 23 :
            if ((entire_insn & 0xfe00707f) == 0x2e001053)
              { itype = RISCV32BF_RV32_INSN_FMAX_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 33 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 :
            if ((entire_insn & 0xfe00707f) == 0xa0001053)
              { itype = RISCV32BF_RV32_INSN_FLT_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 81 :
            if ((entire_insn & 0xfe00707f) == 0xa2001053)
              { itype = RISCV32BF_RV32_INSN_FLT_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 83 :
            if ((entire_insn & 0xfe00707f) == 0xa6001053)
              { itype = RISCV32BF_RV32_INSN_FLT_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 112 :
            if ((entire_insn & 0xfff0707f) == 0xe0001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 113 :
            if ((entire_insn & 0xfff0707f) == 0xe2001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 115 :
            if ((entire_insn & 0xfff0707f) == 0xe6001053)
              { itype = RISCV32BF_RV32_INSN_FCLASS_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 56 :
        if ((entire_insn & 0x707f) == 0x1063)
          { itype = RISCV32BF_RV32_INSN_BNE; goto extract_sfmt_beq; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 60 :
        if ((entire_insn & 0x707f) == 0x1073)
          { itype = RISCV32BF_RV32_INSN_CSRRW; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 64 :
        if ((entire_insn & 0x707f) == 0x2003)
          { itype = RISCV32BF_RV32_INSN_LW; goto extract_sfmt_lw; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 65 :
        if ((entire_insn & 0x707f) == 0x2007)
          { itype = RISCV32BF_RV32_INSN_FLW; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 68 :
        if ((entire_insn & 0x707f) == 0x2013)
          { itype = RISCV32BF_RV32_INSN_SLTI; goto extract_sfmt_addi; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 72 :
        if ((entire_insn & 0x707f) == 0x2023)
          { itype = RISCV32BF_RV32_INSN_SW; goto extract_sfmt_sw; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 73 :
        if ((entire_insn & 0x707f) == 0x2027)
          { itype = RISCV32BF_RV32_INSN_FSW; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 75 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x202f)
              { itype = RISCV32BF_RV32_INSN_AMOADD_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x200202f)
              { itype = RISCV32BF_RV32_INSN_AMOADD_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00707f) == 0x400202f)
              { itype = RISCV32BF_RV32_INSN_AMOADD_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x600202f)
              { itype = RISCV32BF_RV32_INSN_AMOADD_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x800202f)
              { itype = RISCV32BF_RV32_INSN_AMOSWAP_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0xa00202f)
              { itype = RISCV32BF_RV32_INSN_AMOSWAP_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfe00707f) == 0xc00202f)
              { itype = RISCV32BF_RV32_INSN_AMOSWAP_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfe00707f) == 0xe00202f)
              { itype = RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0x1000202f)
              { itype = RISCV32BF_RV32_INSN_LR_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((entire_insn & 0xfff0707f) == 0x1200202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 :
            if ((entire_insn & 0xfff0707f) == 0x1400202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 11 :
            if ((entire_insn & 0xfff0707f) == 0x1600202f)
              { itype = RISCV32BF_RV32_INSN_LR_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfe00707f) == 0x1800202f)
              { itype = RISCV32BF_RV32_INSN_SC_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 13 :
            if ((entire_insn & 0xfe00707f) == 0x1a00202f)
              { itype = RISCV32BF_RV32_INSN_SC_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 14 :
            if ((entire_insn & 0xfe00707f) == 0x1c00202f)
              { itype = RISCV32BF_RV32_INSN_SC_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 15 :
            if ((entire_insn & 0xfe00707f) == 0x1e00202f)
              { itype = RISCV32BF_RV32_INSN_SC_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 :
            if ((entire_insn & 0xfe00707f) == 0x2000202f)
              { itype = RISCV32BF_RV32_INSN_AMOXOR_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 17 :
            if ((entire_insn & 0xfe00707f) == 0x2200202f)
              { itype = RISCV32BF_RV32_INSN_AMOXOR_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 18 :
            if ((entire_insn & 0xfe00707f) == 0x2400202f)
              { itype = RISCV32BF_RV32_INSN_AMOXOR_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 19 :
            if ((entire_insn & 0xfe00707f) == 0x2600202f)
              { itype = RISCV32BF_RV32_INSN_AMOXOR_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 32 :
            if ((entire_insn & 0xfe00707f) == 0x4000202f)
              { itype = RISCV32BF_RV32_INSN_AMOOR_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 33 :
            if ((entire_insn & 0xfe00707f) == 0x4200202f)
              { itype = RISCV32BF_RV32_INSN_AMOOR_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 34 :
            if ((entire_insn & 0xfe00707f) == 0x4400202f)
              { itype = RISCV32BF_RV32_INSN_AMOOR_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 35 :
            if ((entire_insn & 0xfe00707f) == 0x4600202f)
              { itype = RISCV32BF_RV32_INSN_AMOOR_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 48 :
            if ((entire_insn & 0xfe00707f) == 0x6000202f)
              { itype = RISCV32BF_RV32_INSN_AMOAND_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 49 :
            if ((entire_insn & 0xfe00707f) == 0x6200202f)
              { itype = RISCV32BF_RV32_INSN_AMOAND_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 50 :
            if ((entire_insn & 0xfe00707f) == 0x6400202f)
              { itype = RISCV32BF_RV32_INSN_AMOAND_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 51 :
            if ((entire_insn & 0xfe00707f) == 0x6600202f)
              { itype = RISCV32BF_RV32_INSN_AMOAND_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 64 :
            if ((entire_insn & 0xfe00707f) == 0x8000202f)
              { itype = RISCV32BF_RV32_INSN_AMOMIN_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 65 :
            if ((entire_insn & 0xfe00707f) == 0x8200202f)
              { itype = RISCV32BF_RV32_INSN_AMOMIN_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 66 :
            if ((entire_insn & 0xfe00707f) == 0x8400202f)
              { itype = RISCV32BF_RV32_INSN_AMOMIN_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 67 :
            if ((entire_insn & 0xfe00707f) == 0x8600202f)
              { itype = RISCV32BF_RV32_INSN_AMOMIN_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 :
            if ((entire_insn & 0xfe00707f) == 0xa000202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAX_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 81 :
            if ((entire_insn & 0xfe00707f) == 0xa200202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAX_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 82 :
            if ((entire_insn & 0xfe00707f) == 0xa400202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAX_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 83 :
            if ((entire_insn & 0xfe00707f) == 0xa600202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAX_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            if ((entire_insn & 0xfe00707f) == 0xc000202f)
              { itype = RISCV32BF_RV32_INSN_AMOMINU_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 97 :
            if ((entire_insn & 0xfe00707f) == 0xc200202f)
              { itype = RISCV32BF_RV32_INSN_AMOMINU_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 98 :
            if ((entire_insn & 0xfe00707f) == 0xc400202f)
              { itype = RISCV32BF_RV32_INSN_AMOMINU_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 99 :
            if ((entire_insn & 0xfe00707f) == 0xc600202f)
              { itype = RISCV32BF_RV32_INSN_AMOMINU_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 112 :
            if ((entire_insn & 0xfe00707f) == 0xe000202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAXU_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 113 :
            if ((entire_insn & 0xfe00707f) == 0xe200202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAXU_W_RL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 114 :
            if ((entire_insn & 0xfe00707f) == 0xe400202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAXU_W_AQ; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 115 :
            if ((entire_insn & 0xfe00707f) == 0xe600202f)
              { itype = RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 76 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2033)
              { itype = RISCV32BF_RV32_INSN_SLT; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2002033)
              { itype = RISCV32BF_RV32_INSN_MULHSU; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 84 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (127 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 9 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 11 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 13 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 15 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 :
            if ((entire_insn & 0xfe00707f) == 0x20002053)
              { itype = RISCV32BF_RV32_INSN_FSGNJX_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 17 :
            if ((entire_insn & 0xfe00707f) == 0x22002053)
              { itype = RISCV32BF_RV32_INSN_FSGNJX_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 19 :
            if ((entire_insn & 0xfe00707f) == 0x26002053)
              { itype = RISCV32BF_RV32_INSN_FSGNJX_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 32 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 33 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 44 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 45 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 47 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 80 :
            if ((entire_insn & 0xfe00707f) == 0xa0002053)
              { itype = RISCV32BF_RV32_INSN_FEQ_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 81 :
            if ((entire_insn & 0xfe00707f) == 0xa2002053)
              { itype = RISCV32BF_RV32_INSN_FEQ_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 83 :
            if ((entire_insn & 0xfe00707f) == 0xa6002053)
              { itype = RISCV32BF_RV32_INSN_FEQ_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            {
              unsigned int val = (((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_addi16sp; }
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
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 92 :
        if ((entire_insn & 0x707f) == 0x2073)
          { itype = RISCV32BF_RV32_INSN_CSRRS; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 97 :
        if ((entire_insn & 0x707f) == 0x3007)
          { itype = RISCV32BF_RV32_INSN_FLD; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 100 :
        if ((entire_insn & 0x707f) == 0x3013)
          { itype = RISCV32BF_RV32_INSN_SLTIU; goto extract_sfmt_addi; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 105 :
        if ((entire_insn & 0x707f) == 0x3027)
          { itype = RISCV32BF_RV32_INSN_FSD; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 108 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x3033)
              { itype = RISCV32BF_RV32_INSN_SLTU; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2003033)
              { itype = RISCV32BF_RV32_INSN_MULHU; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 116 : /* fall through */
      case 148 : /* fall through */
      case 180 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (3 << 5)) | ((insn >> 24) & (15 << 1)) | ((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 : /* fall through */
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 : /* fall through */
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 : /* fall through */
          case 7 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 : /* fall through */
          case 9 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 : /* fall through */
          case 11 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 14 : /* fall through */
          case 15 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 16 : /* fall through */
          case 17 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 18 : /* fall through */
          case 19 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 22 : /* fall through */
          case 23 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 24 : /* fall through */
          case 25 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 26 : /* fall through */
          case 27 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 30 : /* fall through */
          case 31 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 33 :
            {
              unsigned int val = (((insn >> 21) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfff0007f) == 0x40100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfff0007f) == 0x40300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 35 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 56 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 58 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 62 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 96 :
            if ((entire_insn & 0xfff0007f) == 0xc0000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 97 :
            if ((entire_insn & 0xfff0007f) == 0xc0100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 98 :
            if ((entire_insn & 0xfff0007f) == 0xc2000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 99 :
            if ((entire_insn & 0xfff0007f) == 0xc2100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 102 :
            if ((entire_insn & 0xfff0007f) == 0xc6000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 103 :
            if ((entire_insn & 0xfff0007f) == 0xc6100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 112 :
            if ((entire_insn & 0xfff0007f) == 0xd0000053)
              { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 113 :
            if ((entire_insn & 0xfff0007f) == 0xd0100053)
              { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 124 :
        if ((entire_insn & 0x707f) == 0x3073)
          { itype = RISCV32BF_RV32_INSN_CSRRC; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 128 :
        if ((entire_insn & 0x707f) == 0x4003)
          { itype = RISCV32BF_RV32_INSN_LBU; goto extract_sfmt_lbu; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 129 :
        if ((entire_insn & 0x707f) == 0x4007)
          { itype = RISCV32BF_RV32_INSN_FLQ; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 132 :
        if ((entire_insn & 0x707f) == 0x4013)
          { itype = RISCV32BF_RV32_INSN_XORI; goto extract_sfmt_addi; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 137 :
        if ((entire_insn & 0x707f) == 0x4027)
          { itype = RISCV32BF_RV32_INSN_FSQ; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 140 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4033)
              { itype = RISCV32BF_RV32_INSN_XOR; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2004033)
              { itype = RISCV32BF_RV32_INSN_DIV; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 152 :
        if ((entire_insn & 0x707f) == 0x4063)
          { itype = RISCV32BF_RV32_INSN_BLT; goto extract_sfmt_beq; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 160 :
        if ((entire_insn & 0x707f) == 0x5003)
          { itype = RISCV32BF_RV32_INSN_LHU; goto extract_sfmt_lhu; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 164 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
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
      case 172 :
        {
          unsigned int val;
          /* Must fetch more bits.  */
          insn = GETIMEMUHI (current_cpu, pc + 2);
          val = (((insn >> 29) & (1 << 1)) | ((insn >> 25) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x5033)
              { itype = RISCV32BF_RV32_INSN_SRL; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2005033)
              { itype = RISCV32BF_RV32_INSN_DIVU; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00707f) == 0x40005033)
              { itype = RISCV32BF_RV32_INSN_SRA; goto extract_sfmt_add; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 184 :
        if ((entire_insn & 0x707f) == 0x5063)
          { itype = RISCV32BF_RV32_INSN_BGE; goto extract_sfmt_beq; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 188 :
        if ((entire_insn & 0x707f) == 0x5073)
          { itype = RISCV32BF_RV32_INSN_CSRRWI; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 192 : /* fall through */
      case 193 : /* fall through */
      case 194 : /* fall through */
      case 195 : /* fall through */
      case 198 : /* fall through */
      case 199 : /* fall through */
      case 200 : /* fall through */
      case 201 : /* fall through */
      case 202 : /* fall through */
      case 203 : /* fall through */
      case 206 : /* fall through */
      case 207 : /* fall through */
      case 213 : /* fall through */
      case 214 : /* fall through */
      case 215 : /* fall through */
      case 217 : /* fall through */
      case 218 : /* fall through */
      case 221 : /* fall through */
      case 222 : /* fall through */
      case 223 : /* fall through */
      case 224 : /* fall through */
      case 225 : /* fall through */
      case 226 : /* fall through */
      case 227 : /* fall through */
      case 230 : /* fall through */
      case 231 : /* fall through */
      case 232 : /* fall through */
      case 233 : /* fall through */
      case 234 : /* fall through */
      case 235 : /* fall through */
      case 238 : /* fall through */
      case 239 : /* fall through */
      case 245 : /* fall through */
      case 246 : /* fall through */
      case 247 : /* fall through */
      case 249 : /* fall through */
      case 250 : /* fall through */
      case 253 : /* fall through */
      case 254 : /* fall through */
      case 255 :
        if ((entire_insn & 0xef83) == 0x6101)
          { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
        itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
      case 196 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6013)
              { itype = RISCV32BF_RV32_INSN_ORI; goto extract_sfmt_addi; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 197 : /* fall through */
      case 229 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x7f) == 0x17)
              { itype = RISCV32BF_RV32_INSN_AUIPC; goto extract_sfmt_auipc; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 204 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfe00707f) == 0x6033)
                  { itype = RISCV32BF_RV32_INSN_OR; goto extract_sfmt_add; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfe00707f) == 0x2006033)
                  { itype = RISCV32BF_RV32_INSN_REM; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 205 : /* fall through */
      case 237 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x7f) == 0x37)
              { itype = RISCV32BF_RV32_INSN_LUI; goto extract_sfmt_lui; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 208 : /* fall through */
      case 240 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (3 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0x600007f) == 0x43)
                  { itype = RISCV32BF_RV32_INSN_FMADD_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0x600007f) == 0x2000043)
                  { itype = RISCV32BF_RV32_INSN_FMADD_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0x600007f) == 0x6000043)
                  { itype = RISCV32BF_RV32_INSN_FMADD_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 209 : /* fall through */
      case 241 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (3 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0x600007f) == 0x47)
                  { itype = RISCV32BF_RV32_INSN_FMSUB_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0x600007f) == 0x2000047)
                  { itype = RISCV32BF_RV32_INSN_FMSUB_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0x600007f) == 0x6000047)
                  { itype = RISCV32BF_RV32_INSN_FMSUB_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 210 : /* fall through */
      case 242 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (3 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0x600007f) == 0x4b)
                  { itype = RISCV32BF_RV32_INSN_FNMSUB_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0x600007f) == 0x200004b)
                  { itype = RISCV32BF_RV32_INSN_FNMSUB_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0x600007f) == 0x600004b)
                  { itype = RISCV32BF_RV32_INSN_FNMSUB_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 211 : /* fall through */
      case 243 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (3 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0x600007f) == 0x4f)
                  { itype = RISCV32BF_RV32_INSN_FNMADD_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0x600007f) == 0x200004f)
                  { itype = RISCV32BF_RV32_INSN_FNMADD_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 3 :
                if ((entire_insn & 0x600007f) == 0x600004f)
                  { itype = RISCV32BF_RV32_INSN_FNMADD_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 212 : /* fall through */
      case 244 :
        {
          unsigned int val = (((insn >> 9) & (1 << 6)) | ((insn >> 6) & (31 << 1)) | ((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 1 : /* fall through */
          case 3 : /* fall through */
          case 5 : /* fall through */
          case 7 : /* fall through */
          case 9 : /* fall through */
          case 11 : /* fall through */
          case 13 : /* fall through */
          case 15 : /* fall through */
          case 17 : /* fall through */
          case 19 : /* fall through */
          case 21 : /* fall through */
          case 23 : /* fall through */
          case 25 : /* fall through */
          case 27 : /* fall through */
          case 29 : /* fall through */
          case 31 : /* fall through */
          case 33 : /* fall through */
          case 35 : /* fall through */
          case 37 : /* fall through */
          case 39 : /* fall through */
          case 41 : /* fall through */
          case 43 : /* fall through */
          case 45 : /* fall through */
          case 47 : /* fall through */
          case 49 : /* fall through */
          case 51 : /* fall through */
          case 53 : /* fall through */
          case 55 : /* fall through */
          case 57 : /* fall through */
          case 59 : /* fall through */
          case 61 : /* fall through */
          case 63 : /* fall through */
          case 65 : /* fall through */
          case 67 : /* fall through */
          case 69 : /* fall through */
          case 71 : /* fall through */
          case 73 : /* fall through */
          case 75 : /* fall through */
          case 77 : /* fall through */
          case 79 : /* fall through */
          case 81 : /* fall through */
          case 83 : /* fall through */
          case 85 : /* fall through */
          case 87 : /* fall through */
          case 89 : /* fall through */
          case 91 : /* fall through */
          case 93 : /* fall through */
          case 95 : /* fall through */
          case 97 : /* fall through */
          case 99 : /* fall through */
          case 101 : /* fall through */
          case 103 : /* fall through */
          case 105 : /* fall through */
          case 107 : /* fall through */
          case 109 : /* fall through */
          case 111 : /* fall through */
          case 113 : /* fall through */
          case 115 : /* fall through */
          case 117 : /* fall through */
          case 119 : /* fall through */
          case 121 : /* fall through */
          case 123 : /* fall through */
          case 125 : /* fall through */
          case 127 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (3 << 5)) | ((insn >> 24) & (15 << 1)) | ((insn >> 20) & (1 << 0)));
              switch (val)
              {
              case 0 : /* fall through */
              case 1 :
                if ((entire_insn & 0xfe00007f) == 0x53)
                  { itype = RISCV32BF_RV32_INSN_FADD_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 2 : /* fall through */
              case 3 :
                if ((entire_insn & 0xfe00007f) == 0x2000053)
                  { itype = RISCV32BF_RV32_INSN_FADD_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 6 : /* fall through */
              case 7 :
                if ((entire_insn & 0xfe00007f) == 0x6000053)
                  { itype = RISCV32BF_RV32_INSN_FADD_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 8 : /* fall through */
              case 9 :
                if ((entire_insn & 0xfe00007f) == 0x8000053)
                  { itype = RISCV32BF_RV32_INSN_FSUB_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 10 : /* fall through */
              case 11 :
                if ((entire_insn & 0xfe00007f) == 0xa000053)
                  { itype = RISCV32BF_RV32_INSN_FSUB_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 14 : /* fall through */
              case 15 :
                if ((entire_insn & 0xfe00007f) == 0xe000053)
                  { itype = RISCV32BF_RV32_INSN_FSUB_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 16 : /* fall through */
              case 17 :
                if ((entire_insn & 0xfe00007f) == 0x10000053)
                  { itype = RISCV32BF_RV32_INSN_FMUL_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 18 : /* fall through */
              case 19 :
                if ((entire_insn & 0xfe00007f) == 0x12000053)
                  { itype = RISCV32BF_RV32_INSN_FMUL_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 22 : /* fall through */
              case 23 :
                if ((entire_insn & 0xfe00007f) == 0x16000053)
                  { itype = RISCV32BF_RV32_INSN_FMUL_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 24 : /* fall through */
              case 25 :
                if ((entire_insn & 0xfe00007f) == 0x18000053)
                  { itype = RISCV32BF_RV32_INSN_FDIV_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 26 : /* fall through */
              case 27 :
                if ((entire_insn & 0xfe00007f) == 0x1a000053)
                  { itype = RISCV32BF_RV32_INSN_FDIV_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 30 : /* fall through */
              case 31 :
                if ((entire_insn & 0xfe00007f) == 0x1e000053)
                  { itype = RISCV32BF_RV32_INSN_FDIV_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 33 :
                {
                  unsigned int val = (((insn >> 21) & (1 << 0)));
                  switch (val)
                  {
                  case 0 :
                    if ((entire_insn & 0xfff0007f) == 0x40100053)
                      { itype = RISCV32BF_RV32_INSN_FCVT_S_D; goto extract_sfmt_c_addi16sp; }
                    itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
                  case 1 :
                    if ((entire_insn & 0xfff0007f) == 0x40300053)
                      { itype = RISCV32BF_RV32_INSN_FCVT_S_Q; goto extract_sfmt_c_addi16sp; }
                    itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
                  default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
                  }
                }
              case 35 :
                if ((entire_insn & 0xfff0007f) == 0x42300053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_D_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 56 :
                if ((entire_insn & 0xfff0007f) == 0x58000053)
                  { itype = RISCV32BF_RV32_INSN_FSQRT_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 58 :
                if ((entire_insn & 0xfff0007f) == 0x5a000053)
                  { itype = RISCV32BF_RV32_INSN_FSQRT_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 62 :
                if ((entire_insn & 0xfff0007f) == 0x5e000053)
                  { itype = RISCV32BF_RV32_INSN_FSQRT_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 96 :
                if ((entire_insn & 0xfff0007f) == 0xc0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 97 :
                if ((entire_insn & 0xfff0007f) == 0xc0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_S; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 98 :
                if ((entire_insn & 0xfff0007f) == 0xc2000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 99 :
                if ((entire_insn & 0xfff0007f) == 0xc2100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_D; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 102 :
                if ((entire_insn & 0xfff0007f) == 0xc6000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_W_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 103 :
                if ((entire_insn & 0xfff0007f) == 0xc6100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_WU_Q; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 112 :
                if ((entire_insn & 0xfff0007f) == 0xd0000053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_W; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 113 :
                if ((entire_insn & 0xfff0007f) == 0xd0100053)
                  { itype = RISCV32BF_RV32_INSN_FCVT_S_WU; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          case 4 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 216 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6063)
              { itype = RISCV32BF_RV32_INSN_BLTU; goto extract_sfmt_beq; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 219 : /* fall through */
      case 251 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x7f) == 0x6f)
              { itype = RISCV32BF_RV32_INSN_JAL; goto extract_sfmt_jal; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 220 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6073)
              { itype = RISCV32BF_RV32_INSN_CSRRSI; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 228 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x7013)
              { itype = RISCV32BF_RV32_INSN_ANDI; goto extract_sfmt_addi; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 236 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            {
              unsigned int val;
              /* Must fetch more bits.  */
              insn = GETIMEMUHI (current_cpu, pc + 2);
              val = (((insn >> 25) & (1 << 0)));
              switch (val)
              {
              case 0 :
                if ((entire_insn & 0xfe00707f) == 0x7033)
                  { itype = RISCV32BF_RV32_INSN_AND; goto extract_sfmt_add; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              case 1 :
                if ((entire_insn & 0xfe00707f) == 0x2007033)
                  { itype = RISCV32BF_RV32_INSN_REMU; goto extract_sfmt_c_addi16sp; }
                itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
              }
            }
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 248 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x7063)
              { itype = RISCV32BF_RV32_INSN_BGEU; goto extract_sfmt_beq; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 252 :
        {
          unsigned int val = (((insn >> 1) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xef83) == 0x6101)
              { itype = RISCV32BF_RV32_INSN_C_ADDI16SP; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x7073)
              { itype = RISCV32BF_RV32_INSN_CSRRCI; goto extract_sfmt_c_addi16sp; }
            itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV32BF_RV32_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
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
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_c_addi16sp", (char *) 0));

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
#define FLD(f) abuf->fields.sfmt_add.f
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

}
