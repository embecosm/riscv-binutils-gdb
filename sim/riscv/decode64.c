/* Simulator instruction decoder for riscv64bf_rv64.

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

#define WANT_CPU riscv64bf
#define WANT_CPU_RISCV64BF

#include "sim-main.h"
#include "sim-assert.h"

/* The instruction descriptor array.
   This is computed at runtime.  Space for it is not malloc'd to save a
   teensy bit of cpu in the decoder.  Moving it to malloc space is trivial
   but won't be done until necessary (we don't currently support the runtime
   addition of instructions nor an SMP machine with different cpus).  */
static IDESC riscv64bf_rv64_insn_data[RISCV64BF_RV64_INSN__MAX];

/* Commas between elements are contained in the macros.
   Some of these are conditionally compiled out.  */

static const struct insn_sem riscv64bf_rv64_insn_sem[] =
{
  { VIRTUAL_INSN_X_INVALID, RISCV64BF_RV64_INSN_X_INVALID, RISCV64BF_RV64_SFMT_EMPTY },
  { VIRTUAL_INSN_X_AFTER, RISCV64BF_RV64_INSN_X_AFTER, RISCV64BF_RV64_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEFORE, RISCV64BF_RV64_INSN_X_BEFORE, RISCV64BF_RV64_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CTI_CHAIN, RISCV64BF_RV64_INSN_X_CTI_CHAIN, RISCV64BF_RV64_SFMT_EMPTY },
  { VIRTUAL_INSN_X_CHAIN, RISCV64BF_RV64_INSN_X_CHAIN, RISCV64BF_RV64_SFMT_EMPTY },
  { VIRTUAL_INSN_X_BEGIN, RISCV64BF_RV64_INSN_X_BEGIN, RISCV64BF_RV64_SFMT_EMPTY },
  { RISCV_INSN_LUI, RISCV64BF_RV64_INSN_LUI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AUIPC, RISCV64BF_RV64_INSN_AUIPC, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_JAL, RISCV64BF_RV64_INSN_JAL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_JALR, RISCV64BF_RV64_INSN_JALR, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BEQ, RISCV64BF_RV64_INSN_BEQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BNE, RISCV64BF_RV64_INSN_BNE, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BLT, RISCV64BF_RV64_INSN_BLT, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BGE, RISCV64BF_RV64_INSN_BGE, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BLTU, RISCV64BF_RV64_INSN_BLTU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_BGEU, RISCV64BF_RV64_INSN_BGEU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LB, RISCV64BF_RV64_INSN_LB, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LH, RISCV64BF_RV64_INSN_LH, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LW, RISCV64BF_RV64_INSN_LW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LBU, RISCV64BF_RV64_INSN_LBU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LHU, RISCV64BF_RV64_INSN_LHU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SB, RISCV64BF_RV64_INSN_SB, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SH, RISCV64BF_RV64_INSN_SH, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SW, RISCV64BF_RV64_INSN_SW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ADDI, RISCV64BF_RV64_INSN_ADDI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLTI, RISCV64BF_RV64_INSN_SLTI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLTIU, RISCV64BF_RV64_INSN_SLTIU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_XORI, RISCV64BF_RV64_INSN_XORI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ORI, RISCV64BF_RV64_INSN_ORI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ANDI, RISCV64BF_RV64_INSN_ANDI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLLI_SHIFT5, RISCV64BF_RV64_INSN_SLLI_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRLI_SHIFT5, RISCV64BF_RV64_INSN_SRLI_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRAI_SHIFT5, RISCV64BF_RV64_INSN_SRAI_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ADD, RISCV64BF_RV64_INSN_ADD, RISCV64BF_RV64_SFMT_ADD },
  { RISCV_INSN_SUB, RISCV64BF_RV64_INSN_SUB, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLL, RISCV64BF_RV64_INSN_SLL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLT, RISCV64BF_RV64_INSN_SLT, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLTU, RISCV64BF_RV64_INSN_SLTU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_XOR, RISCV64BF_RV64_INSN_XOR, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRL, RISCV64BF_RV64_INSN_SRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRA, RISCV64BF_RV64_INSN_SRA, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_OR, RISCV64BF_RV64_INSN_OR, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AND, RISCV64BF_RV64_INSN_AND, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FENCE, RISCV64BF_RV64_INSN_FENCE, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SFENCE_VM, RISCV64BF_RV64_INSN_SFENCE_VM, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SFENCE_VMA, RISCV64BF_RV64_INSN_SFENCE_VMA, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FENCE_I, RISCV64BF_RV64_INSN_FENCE_I, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ECALL, RISCV64BF_RV64_INSN_ECALL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_EBREAK, RISCV64BF_RV64_INSN_EBREAK, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRW, RISCV64BF_RV64_INSN_CSRRW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRS, RISCV64BF_RV64_INSN_CSRRS, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRC, RISCV64BF_RV64_INSN_CSRRC, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRWI, RISCV64BF_RV64_INSN_CSRRWI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRSI, RISCV64BF_RV64_INSN_CSRRSI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_CSRRCI, RISCV64BF_RV64_INSN_CSRRCI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_URET, RISCV64BF_RV64_INSN_URET, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRET, RISCV64BF_RV64_INSN_SRET, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_HRET, RISCV64BF_RV64_INSN_HRET, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MRET, RISCV64BF_RV64_INSN_MRET, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_DRET, RISCV64BF_RV64_INSN_DRET, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_WFI, RISCV64BF_RV64_INSN_WFI, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LWU, RISCV64BF_RV64_INSN_LWU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LD, RISCV64BF_RV64_INSN_LD, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SD, RISCV64BF_RV64_INSN_SD, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLLI_SHIFT6, RISCV64BF_RV64_INSN_SLLI_SHIFT6, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRLI_SHIFT6, RISCV64BF_RV64_INSN_SRLI_SHIFT6, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRAI_SHIFT6, RISCV64BF_RV64_INSN_SRAI_SHIFT6, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ADDIW, RISCV64BF_RV64_INSN_ADDIW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLLIW_SHIFT5, RISCV64BF_RV64_INSN_SLLIW_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRLIW_SHIFT5, RISCV64BF_RV64_INSN_SRLIW_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRAIW_SHIFT5, RISCV64BF_RV64_INSN_SRAIW_SHIFT5, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_ADDW, RISCV64BF_RV64_INSN_ADDW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SUBW, RISCV64BF_RV64_INSN_SUBW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SLLW, RISCV64BF_RV64_INSN_SLLW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRLW, RISCV64BF_RV64_INSN_SRLW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SRAW, RISCV64BF_RV64_INSN_SRAW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MUL, RISCV64BF_RV64_INSN_MUL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MULH, RISCV64BF_RV64_INSN_MULH, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MULHSU, RISCV64BF_RV64_INSN_MULHSU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MULHU, RISCV64BF_RV64_INSN_MULHU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_DIV, RISCV64BF_RV64_INSN_DIV, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_DIVU, RISCV64BF_RV64_INSN_DIVU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_REM, RISCV64BF_RV64_INSN_REM, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_REMU, RISCV64BF_RV64_INSN_REMU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_MULW, RISCV64BF_RV64_INSN_MULW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_DIVW, RISCV64BF_RV64_INSN_DIVW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_DIVUW, RISCV64BF_RV64_INSN_DIVUW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_REMW, RISCV64BF_RV64_INSN_REMW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_REMUW, RISCV64BF_RV64_INSN_REMUW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_W, RISCV64BF_RV64_INSN_LR_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_W_AQ, RISCV64BF_RV64_INSN_LR_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_W_RL, RISCV64BF_RV64_INSN_LR_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_W_AQRL, RISCV64BF_RV64_INSN_LR_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_W, RISCV64BF_RV64_INSN_SC_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_W_AQ, RISCV64BF_RV64_INSN_SC_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_W_RL, RISCV64BF_RV64_INSN_SC_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_W_AQRL, RISCV64BF_RV64_INSN_SC_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_W, RISCV64BF_RV64_INSN_AMOSWAP_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_W_AQ, RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_W_RL, RISCV64BF_RV64_INSN_AMOSWAP_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_W_AQRL, RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_W, RISCV64BF_RV64_INSN_AMOADD_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_W_AQ, RISCV64BF_RV64_INSN_AMOADD_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_W_RL, RISCV64BF_RV64_INSN_AMOADD_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_W_AQRL, RISCV64BF_RV64_INSN_AMOADD_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_W, RISCV64BF_RV64_INSN_AMOXOR_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_W_AQ, RISCV64BF_RV64_INSN_AMOXOR_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_W_RL, RISCV64BF_RV64_INSN_AMOXOR_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_W_AQRL, RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_W, RISCV64BF_RV64_INSN_AMOAND_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_W_AQ, RISCV64BF_RV64_INSN_AMOAND_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_W_RL, RISCV64BF_RV64_INSN_AMOAND_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_W_AQRL, RISCV64BF_RV64_INSN_AMOAND_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_W, RISCV64BF_RV64_INSN_AMOOR_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_W_AQ, RISCV64BF_RV64_INSN_AMOOR_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_W_RL, RISCV64BF_RV64_INSN_AMOOR_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_W_AQRL, RISCV64BF_RV64_INSN_AMOOR_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_W, RISCV64BF_RV64_INSN_AMOMIN_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_W_AQ, RISCV64BF_RV64_INSN_AMOMIN_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_W_RL, RISCV64BF_RV64_INSN_AMOMIN_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_W_AQRL, RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_W, RISCV64BF_RV64_INSN_AMOMAX_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_W_AQ, RISCV64BF_RV64_INSN_AMOMAX_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_W_RL, RISCV64BF_RV64_INSN_AMOMAX_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_W_AQRL, RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_W, RISCV64BF_RV64_INSN_AMOMINU_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_W_AQ, RISCV64BF_RV64_INSN_AMOMINU_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_W_RL, RISCV64BF_RV64_INSN_AMOMINU_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_W_AQRL, RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_W, RISCV64BF_RV64_INSN_AMOMAXU_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_W_AQ, RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_W_RL, RISCV64BF_RV64_INSN_AMOMAXU_W_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_W_AQRL, RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_D, RISCV64BF_RV64_INSN_LR_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_D_AQ, RISCV64BF_RV64_INSN_LR_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_D_RL, RISCV64BF_RV64_INSN_LR_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_LR_D_AQRL, RISCV64BF_RV64_INSN_LR_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_D, RISCV64BF_RV64_INSN_SC_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_D_AQ, RISCV64BF_RV64_INSN_SC_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_D_RL, RISCV64BF_RV64_INSN_SC_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_SC_D_AQRL, RISCV64BF_RV64_INSN_SC_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_D, RISCV64BF_RV64_INSN_AMOSWAP_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_D_AQ, RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_D_RL, RISCV64BF_RV64_INSN_AMOSWAP_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOSWAP_D_AQRL, RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_D, RISCV64BF_RV64_INSN_AMOADD_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_D_AQ, RISCV64BF_RV64_INSN_AMOADD_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_D_RL, RISCV64BF_RV64_INSN_AMOADD_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOADD_D_AQRL, RISCV64BF_RV64_INSN_AMOADD_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_D, RISCV64BF_RV64_INSN_AMOXOR_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_D_AQ, RISCV64BF_RV64_INSN_AMOXOR_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_D_RL, RISCV64BF_RV64_INSN_AMOXOR_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOXOR_D_AQRL, RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_D, RISCV64BF_RV64_INSN_AMOAND_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_D_AQ, RISCV64BF_RV64_INSN_AMOAND_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_D_RL, RISCV64BF_RV64_INSN_AMOAND_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOAND_D_AQRL, RISCV64BF_RV64_INSN_AMOAND_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_D, RISCV64BF_RV64_INSN_AMOOR_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_D_AQ, RISCV64BF_RV64_INSN_AMOOR_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_D_RL, RISCV64BF_RV64_INSN_AMOOR_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOOR_D_AQRL, RISCV64BF_RV64_INSN_AMOOR_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_D, RISCV64BF_RV64_INSN_AMOMIN_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_D_AQ, RISCV64BF_RV64_INSN_AMOMIN_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_D_RL, RISCV64BF_RV64_INSN_AMOMIN_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMIN_D_AQRL, RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_D, RISCV64BF_RV64_INSN_AMOMAX_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_D_AQ, RISCV64BF_RV64_INSN_AMOMAX_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_D_RL, RISCV64BF_RV64_INSN_AMOMAX_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAX_D_AQRL, RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_D, RISCV64BF_RV64_INSN_AMOMINU_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_D_AQ, RISCV64BF_RV64_INSN_AMOMINU_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_D_RL, RISCV64BF_RV64_INSN_AMOMINU_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMINU_D_AQRL, RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_D, RISCV64BF_RV64_INSN_AMOMAXU_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_D_AQ, RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_D_RL, RISCV64BF_RV64_INSN_AMOMAXU_D_RL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_AMOMAXU_D_AQRL, RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLW, RISCV64BF_RV64_INSN_FLW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSW, RISCV64BF_RV64_INSN_FSW, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMADD_S, RISCV64BF_RV64_INSN_FMADD_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMSUB_S, RISCV64BF_RV64_INSN_FMSUB_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMSUB_S, RISCV64BF_RV64_INSN_FNMSUB_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMADD_S, RISCV64BF_RV64_INSN_FNMADD_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FADD_S, RISCV64BF_RV64_INSN_FADD_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSUB_S, RISCV64BF_RV64_INSN_FSUB_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMUL_S, RISCV64BF_RV64_INSN_FMUL_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FDIV_S, RISCV64BF_RV64_INSN_FDIV_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJ_S, RISCV64BF_RV64_INSN_FSGNJ_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJN_S, RISCV64BF_RV64_INSN_FSGNJN_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJX_S, RISCV64BF_RV64_INSN_FSGNJX_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMIN_S, RISCV64BF_RV64_INSN_FMIN_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMAX_S, RISCV64BF_RV64_INSN_FMAX_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FEQ_S, RISCV64BF_RV64_INSN_FEQ_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLT_S, RISCV64BF_RV64_INSN_FLT_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLE_S, RISCV64BF_RV64_INSN_FLE_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSQRT_S, RISCV64BF_RV64_INSN_FSQRT_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_W_S, RISCV64BF_RV64_INSN_FCVT_W_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_WU_S, RISCV64BF_RV64_INSN_FCVT_WU_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMV_X_W, RISCV64BF_RV64_INSN_FMV_X_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCLASS_S, RISCV64BF_RV64_INSN_FCLASS_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_W, RISCV64BF_RV64_INSN_FCVT_S_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_WU, RISCV64BF_RV64_INSN_FCVT_S_WU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMV_W_X, RISCV64BF_RV64_INSN_FMV_W_X, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_L_S, RISCV64BF_RV64_INSN_FCVT_L_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_LU_S, RISCV64BF_RV64_INSN_FCVT_LU_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_L, RISCV64BF_RV64_INSN_FCVT_S_L, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_LU, RISCV64BF_RV64_INSN_FCVT_S_LU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLD, RISCV64BF_RV64_INSN_FLD, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSD, RISCV64BF_RV64_INSN_FSD, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMADD_D, RISCV64BF_RV64_INSN_FMADD_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMSUB_D, RISCV64BF_RV64_INSN_FMSUB_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMSUB_D, RISCV64BF_RV64_INSN_FNMSUB_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMADD_D, RISCV64BF_RV64_INSN_FNMADD_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FADD_D, RISCV64BF_RV64_INSN_FADD_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSUB_D, RISCV64BF_RV64_INSN_FSUB_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMUL_D, RISCV64BF_RV64_INSN_FMUL_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FDIV_D, RISCV64BF_RV64_INSN_FDIV_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJ_D, RISCV64BF_RV64_INSN_FSGNJ_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJN_D, RISCV64BF_RV64_INSN_FSGNJN_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJX_D, RISCV64BF_RV64_INSN_FSGNJX_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMIN_D, RISCV64BF_RV64_INSN_FMIN_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMAX_D, RISCV64BF_RV64_INSN_FMAX_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FEQ_D, RISCV64BF_RV64_INSN_FEQ_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLT_D, RISCV64BF_RV64_INSN_FLT_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLE_D, RISCV64BF_RV64_INSN_FLE_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSQRT_D, RISCV64BF_RV64_INSN_FSQRT_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_W_D, RISCV64BF_RV64_INSN_FCVT_W_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_WU_D, RISCV64BF_RV64_INSN_FCVT_WU_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCLASS_D, RISCV64BF_RV64_INSN_FCLASS_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_W, RISCV64BF_RV64_INSN_FCVT_D_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_WU, RISCV64BF_RV64_INSN_FCVT_D_WU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_D, RISCV64BF_RV64_INSN_FCVT_S_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_S, RISCV64BF_RV64_INSN_FCVT_D_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_L_D, RISCV64BF_RV64_INSN_FCVT_L_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_LU_D, RISCV64BF_RV64_INSN_FCVT_LU_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMV_X_D, RISCV64BF_RV64_INSN_FMV_X_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_L, RISCV64BF_RV64_INSN_FCVT_D_L, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_LU, RISCV64BF_RV64_INSN_FCVT_D_LU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMV_D_X, RISCV64BF_RV64_INSN_FMV_D_X, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLQ, RISCV64BF_RV64_INSN_FLQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSQ, RISCV64BF_RV64_INSN_FSQ, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMADD_Q, RISCV64BF_RV64_INSN_FMADD_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMSUB_Q, RISCV64BF_RV64_INSN_FMSUB_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMSUB_Q, RISCV64BF_RV64_INSN_FNMSUB_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FNMADD_Q, RISCV64BF_RV64_INSN_FNMADD_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FADD_Q, RISCV64BF_RV64_INSN_FADD_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSUB_Q, RISCV64BF_RV64_INSN_FSUB_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMUL_Q, RISCV64BF_RV64_INSN_FMUL_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FDIV_Q, RISCV64BF_RV64_INSN_FDIV_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJ_Q, RISCV64BF_RV64_INSN_FSGNJ_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJN_Q, RISCV64BF_RV64_INSN_FSGNJN_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSGNJX_Q, RISCV64BF_RV64_INSN_FSGNJX_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMIN_Q, RISCV64BF_RV64_INSN_FMIN_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FMAX_Q, RISCV64BF_RV64_INSN_FMAX_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FEQ_Q, RISCV64BF_RV64_INSN_FEQ_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLT_Q, RISCV64BF_RV64_INSN_FLT_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FLE_Q, RISCV64BF_RV64_INSN_FLE_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FSQRT_Q, RISCV64BF_RV64_INSN_FSQRT_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_W_Q, RISCV64BF_RV64_INSN_FCVT_W_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_WU_Q, RISCV64BF_RV64_INSN_FCVT_WU_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCLASS_Q, RISCV64BF_RV64_INSN_FCLASS_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_W, RISCV64BF_RV64_INSN_FCVT_Q_W, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_WU, RISCV64BF_RV64_INSN_FCVT_Q_WU, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_S_Q, RISCV64BF_RV64_INSN_FCVT_S_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_D_Q, RISCV64BF_RV64_INSN_FCVT_D_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_S, RISCV64BF_RV64_INSN_FCVT_Q_S, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_D, RISCV64BF_RV64_INSN_FCVT_Q_D, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_L_Q, RISCV64BF_RV64_INSN_FCVT_L_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_LU_Q, RISCV64BF_RV64_INSN_FCVT_LU_Q, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_L, RISCV64BF_RV64_INSN_FCVT_Q_L, RISCV64BF_RV64_SFMT_LUI },
  { RISCV_INSN_FCVT_Q_LU, RISCV64BF_RV64_INSN_FCVT_Q_LU, RISCV64BF_RV64_SFMT_LUI },
};

static const struct insn_sem riscv64bf_rv64_insn_sem_invalid =
{
  VIRTUAL_INSN_X_INVALID, RISCV64BF_RV64_INSN_X_INVALID, RISCV64BF_RV64_SFMT_EMPTY
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
riscv64bf_rv64_init_idesc_table (SIM_CPU *cpu)
{
  IDESC *id,*tabend;
  const struct insn_sem *t,*tend;
  int tabsize = RISCV64BF_RV64_INSN__MAX;
  IDESC *table = riscv64bf_rv64_insn_data;

  memset (table, 0, tabsize * sizeof (IDESC));

  /* First set all entries to the `invalid insn'.  */
  t = & riscv64bf_rv64_insn_sem_invalid;
  for (id = table, tabend = table + tabsize; id < tabend; ++id)
    init_idesc (cpu, id, t);

  /* Now fill in the values for the chosen cpu.  */
  for (t = riscv64bf_rv64_insn_sem, tend = t + sizeof (riscv64bf_rv64_insn_sem) / sizeof (*t);
       t != tend; ++t)
    {
      init_idesc (cpu, & table[t->index], t);
    }

  /* Link the IDESC table into the cpu.  */
  CPU_IDESC (cpu) = table;
}

/* Given an instruction, return a pointer to its IDESC entry.  */

const IDESC *
riscv64bf_rv64_decode (SIM_CPU *current_cpu, IADDR pc,
              CGEN_INSN_WORD base_insn, CGEN_INSN_WORD entire_insn,
              ARGBUF *abuf)
{
  /* Result of decoder.  */
  RISCV64BF_RV64_INSN_TYPE itype;

  {
    CGEN_INSN_WORD insn = base_insn;

    {
      unsigned int val = (((insn >> 21) & (3 << 9)) | ((insn >> 18) & (3 << 7)) | ((insn >> 7) & (3 << 5)) | ((insn >> 2) & (31 << 0)));
      switch (val)
      {
      case 0 : /* fall through */
      case 128 : /* fall through */
      case 256 : /* fall through */
      case 384 : /* fall through */
      case 512 : /* fall through */
      case 640 : /* fall through */
      case 768 : /* fall through */
      case 896 : /* fall through */
      case 1024 : /* fall through */
      case 1152 : /* fall through */
      case 1280 : /* fall through */
      case 1408 : /* fall through */
      case 1536 : /* fall through */
      case 1664 : /* fall through */
      case 1792 : /* fall through */
      case 1920 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x3)
              { itype = RISCV64BF_RV64_INSN_LB; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x4003)
              { itype = RISCV64BF_RV64_INSN_LBU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1 : /* fall through */
      case 129 : /* fall through */
      case 257 : /* fall through */
      case 385 : /* fall through */
      case 513 : /* fall through */
      case 641 : /* fall through */
      case 769 : /* fall through */
      case 897 : /* fall through */
      case 1025 : /* fall through */
      case 1153 : /* fall through */
      case 1281 : /* fall through */
      case 1409 : /* fall through */
      case 1537 : /* fall through */
      case 1665 : /* fall through */
      case 1793 : /* fall through */
      case 1921 :
        if ((entire_insn & 0x707f) == 0x4007)
          { itype = RISCV64BF_RV64_INSN_FLQ; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 3 : /* fall through */
      case 131 : /* fall through */
      case 259 : /* fall through */
      case 387 :
        if ((entire_insn & 0xf00fffff) == 0xf)
          { itype = RISCV64BF_RV64_INSN_FENCE; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 4 : /* fall through */
      case 132 : /* fall through */
      case 260 : /* fall through */
      case 388 : /* fall through */
      case 516 : /* fall through */
      case 644 : /* fall through */
      case 772 : /* fall through */
      case 900 : /* fall through */
      case 1028 : /* fall through */
      case 1156 : /* fall through */
      case 1284 : /* fall through */
      case 1412 : /* fall through */
      case 1540 : /* fall through */
      case 1668 : /* fall through */
      case 1796 : /* fall through */
      case 1924 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x13)
              { itype = RISCV64BF_RV64_INSN_ADDI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x4013)
              { itype = RISCV64BF_RV64_INSN_XORI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 5 : /* fall through */
      case 37 : /* fall through */
      case 69 : /* fall through */
      case 101 : /* fall through */
      case 133 : /* fall through */
      case 165 : /* fall through */
      case 197 : /* fall through */
      case 229 : /* fall through */
      case 261 : /* fall through */
      case 293 : /* fall through */
      case 325 : /* fall through */
      case 357 : /* fall through */
      case 389 : /* fall through */
      case 421 : /* fall through */
      case 453 : /* fall through */
      case 485 : /* fall through */
      case 517 : /* fall through */
      case 549 : /* fall through */
      case 581 : /* fall through */
      case 613 : /* fall through */
      case 645 : /* fall through */
      case 677 : /* fall through */
      case 709 : /* fall through */
      case 741 : /* fall through */
      case 773 : /* fall through */
      case 805 : /* fall through */
      case 837 : /* fall through */
      case 869 : /* fall through */
      case 901 : /* fall through */
      case 933 : /* fall through */
      case 965 : /* fall through */
      case 997 : /* fall through */
      case 1029 : /* fall through */
      case 1061 : /* fall through */
      case 1093 : /* fall through */
      case 1125 : /* fall through */
      case 1157 : /* fall through */
      case 1189 : /* fall through */
      case 1221 : /* fall through */
      case 1253 : /* fall through */
      case 1285 : /* fall through */
      case 1317 : /* fall through */
      case 1349 : /* fall through */
      case 1381 : /* fall through */
      case 1413 : /* fall through */
      case 1445 : /* fall through */
      case 1477 : /* fall through */
      case 1509 : /* fall through */
      case 1541 : /* fall through */
      case 1573 : /* fall through */
      case 1605 : /* fall through */
      case 1637 : /* fall through */
      case 1669 : /* fall through */
      case 1701 : /* fall through */
      case 1733 : /* fall through */
      case 1765 : /* fall through */
      case 1797 : /* fall through */
      case 1829 : /* fall through */
      case 1861 : /* fall through */
      case 1893 : /* fall through */
      case 1925 : /* fall through */
      case 1957 : /* fall through */
      case 1989 : /* fall through */
      case 2021 :
        if ((entire_insn & 0x7f) == 0x17)
          { itype = RISCV64BF_RV64_INSN_AUIPC; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 6 : /* fall through */
      case 134 : /* fall through */
      case 262 : /* fall through */
      case 390 : /* fall through */
      case 518 : /* fall through */
      case 646 : /* fall through */
      case 774 : /* fall through */
      case 902 : /* fall through */
      case 1030 : /* fall through */
      case 1158 : /* fall through */
      case 1286 : /* fall through */
      case 1414 : /* fall through */
      case 1542 : /* fall through */
      case 1670 : /* fall through */
      case 1798 : /* fall through */
      case 1926 :
        if ((entire_insn & 0x707f) == 0x1b)
          { itype = RISCV64BF_RV64_INSN_ADDIW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 8 : /* fall through */
      case 136 : /* fall through */
      case 264 : /* fall through */
      case 392 : /* fall through */
      case 520 : /* fall through */
      case 648 : /* fall through */
      case 776 : /* fall through */
      case 904 : /* fall through */
      case 1032 : /* fall through */
      case 1160 : /* fall through */
      case 1288 : /* fall through */
      case 1416 : /* fall through */
      case 1544 : /* fall through */
      case 1672 : /* fall through */
      case 1800 : /* fall through */
      case 1928 :
        if ((entire_insn & 0x707f) == 0x23)
          { itype = RISCV64BF_RV64_INSN_SB; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 9 : /* fall through */
      case 137 : /* fall through */
      case 265 : /* fall through */
      case 393 : /* fall through */
      case 521 : /* fall through */
      case 649 : /* fall through */
      case 777 : /* fall through */
      case 905 : /* fall through */
      case 1033 : /* fall through */
      case 1161 : /* fall through */
      case 1289 : /* fall through */
      case 1417 : /* fall through */
      case 1545 : /* fall through */
      case 1673 : /* fall through */
      case 1801 : /* fall through */
      case 1929 :
        if ((entire_insn & 0x707f) == 0x4027)
          { itype = RISCV64BF_RV64_INSN_FSQ; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 12 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x33)
              { itype = RISCV64BF_RV64_INSN_ADD; goto extract_sfmt_add; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x4033)
              { itype = RISCV64BF_RV64_INSN_XOR; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 13 : /* fall through */
      case 45 : /* fall through */
      case 77 : /* fall through */
      case 109 : /* fall through */
      case 141 : /* fall through */
      case 173 : /* fall through */
      case 205 : /* fall through */
      case 237 : /* fall through */
      case 269 : /* fall through */
      case 301 : /* fall through */
      case 333 : /* fall through */
      case 365 : /* fall through */
      case 397 : /* fall through */
      case 429 : /* fall through */
      case 461 : /* fall through */
      case 493 : /* fall through */
      case 525 : /* fall through */
      case 557 : /* fall through */
      case 589 : /* fall through */
      case 621 : /* fall through */
      case 653 : /* fall through */
      case 685 : /* fall through */
      case 717 : /* fall through */
      case 749 : /* fall through */
      case 781 : /* fall through */
      case 813 : /* fall through */
      case 845 : /* fall through */
      case 877 : /* fall through */
      case 909 : /* fall through */
      case 941 : /* fall through */
      case 973 : /* fall through */
      case 1005 : /* fall through */
      case 1037 : /* fall through */
      case 1069 : /* fall through */
      case 1101 : /* fall through */
      case 1133 : /* fall through */
      case 1165 : /* fall through */
      case 1197 : /* fall through */
      case 1229 : /* fall through */
      case 1261 : /* fall through */
      case 1293 : /* fall through */
      case 1325 : /* fall through */
      case 1357 : /* fall through */
      case 1389 : /* fall through */
      case 1421 : /* fall through */
      case 1453 : /* fall through */
      case 1485 : /* fall through */
      case 1517 : /* fall through */
      case 1549 : /* fall through */
      case 1581 : /* fall through */
      case 1613 : /* fall through */
      case 1645 : /* fall through */
      case 1677 : /* fall through */
      case 1709 : /* fall through */
      case 1741 : /* fall through */
      case 1773 : /* fall through */
      case 1805 : /* fall through */
      case 1837 : /* fall through */
      case 1869 : /* fall through */
      case 1901 : /* fall through */
      case 1933 : /* fall through */
      case 1965 : /* fall through */
      case 1997 : /* fall through */
      case 2029 :
        if ((entire_insn & 0x7f) == 0x37)
          { itype = RISCV64BF_RV64_INSN_LUI; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 14 :
        if ((entire_insn & 0xfe00707f) == 0x3b)
          { itype = RISCV64BF_RV64_INSN_ADDW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 16 : /* fall through */
      case 48 : /* fall through */
      case 80 : /* fall through */
      case 112 : /* fall through */
      case 528 : /* fall through */
      case 560 : /* fall through */
      case 592 : /* fall through */
      case 624 : /* fall through */
      case 1040 : /* fall through */
      case 1072 : /* fall through */
      case 1104 : /* fall through */
      case 1136 : /* fall through */
      case 1552 : /* fall through */
      case 1584 : /* fall through */
      case 1616 : /* fall through */
      case 1648 :
        if ((entire_insn & 0x600007f) == 0x43)
          { itype = RISCV64BF_RV64_INSN_FMADD_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 17 : /* fall through */
      case 49 : /* fall through */
      case 81 : /* fall through */
      case 113 : /* fall through */
      case 529 : /* fall through */
      case 561 : /* fall through */
      case 593 : /* fall through */
      case 625 : /* fall through */
      case 1041 : /* fall through */
      case 1073 : /* fall through */
      case 1105 : /* fall through */
      case 1137 : /* fall through */
      case 1553 : /* fall through */
      case 1585 : /* fall through */
      case 1617 : /* fall through */
      case 1649 :
        if ((entire_insn & 0x600007f) == 0x47)
          { itype = RISCV64BF_RV64_INSN_FMSUB_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 18 : /* fall through */
      case 50 : /* fall through */
      case 82 : /* fall through */
      case 114 : /* fall through */
      case 530 : /* fall through */
      case 562 : /* fall through */
      case 594 : /* fall through */
      case 626 : /* fall through */
      case 1042 : /* fall through */
      case 1074 : /* fall through */
      case 1106 : /* fall through */
      case 1138 : /* fall through */
      case 1554 : /* fall through */
      case 1586 : /* fall through */
      case 1618 : /* fall through */
      case 1650 :
        if ((entire_insn & 0x600007f) == 0x4b)
          { itype = RISCV64BF_RV64_INSN_FNMSUB_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 19 : /* fall through */
      case 51 : /* fall through */
      case 83 : /* fall through */
      case 115 : /* fall through */
      case 531 : /* fall through */
      case 563 : /* fall through */
      case 595 : /* fall through */
      case 627 : /* fall through */
      case 1043 : /* fall through */
      case 1075 : /* fall through */
      case 1107 : /* fall through */
      case 1139 : /* fall through */
      case 1555 : /* fall through */
      case 1587 : /* fall through */
      case 1619 : /* fall through */
      case 1651 :
        if ((entire_insn & 0x600007f) == 0x4f)
          { itype = RISCV64BF_RV64_INSN_FNMADD_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 20 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV64BF_RV64_INSN_FADD_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x20000053)
              { itype = RISCV64BF_RV64_INSN_FSGNJ_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x28000053)
              { itype = RISCV64BF_RV64_INSN_FMIN_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 24 : /* fall through */
      case 152 : /* fall through */
      case 280 : /* fall through */
      case 408 : /* fall through */
      case 536 : /* fall through */
      case 664 : /* fall through */
      case 792 : /* fall through */
      case 920 : /* fall through */
      case 1048 : /* fall through */
      case 1176 : /* fall through */
      case 1304 : /* fall through */
      case 1432 : /* fall through */
      case 1560 : /* fall through */
      case 1688 : /* fall through */
      case 1816 : /* fall through */
      case 1944 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x63)
              { itype = RISCV64BF_RV64_INSN_BEQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x4063)
              { itype = RISCV64BF_RV64_INSN_BLT; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 25 : /* fall through */
      case 153 : /* fall through */
      case 281 : /* fall through */
      case 409 : /* fall through */
      case 537 : /* fall through */
      case 665 : /* fall through */
      case 793 : /* fall through */
      case 921 : /* fall through */
      case 1049 : /* fall through */
      case 1177 : /* fall through */
      case 1305 : /* fall through */
      case 1433 : /* fall through */
      case 1561 : /* fall through */
      case 1689 : /* fall through */
      case 1817 : /* fall through */
      case 1945 :
        if ((entire_insn & 0x707f) == 0x67)
          { itype = RISCV64BF_RV64_INSN_JALR; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 27 : /* fall through */
      case 59 : /* fall through */
      case 91 : /* fall through */
      case 123 : /* fall through */
      case 155 : /* fall through */
      case 187 : /* fall through */
      case 219 : /* fall through */
      case 251 : /* fall through */
      case 283 : /* fall through */
      case 315 : /* fall through */
      case 347 : /* fall through */
      case 379 : /* fall through */
      case 411 : /* fall through */
      case 443 : /* fall through */
      case 475 : /* fall through */
      case 507 : /* fall through */
      case 539 : /* fall through */
      case 571 : /* fall through */
      case 603 : /* fall through */
      case 635 : /* fall through */
      case 667 : /* fall through */
      case 699 : /* fall through */
      case 731 : /* fall through */
      case 763 : /* fall through */
      case 795 : /* fall through */
      case 827 : /* fall through */
      case 859 : /* fall through */
      case 891 : /* fall through */
      case 923 : /* fall through */
      case 955 : /* fall through */
      case 987 : /* fall through */
      case 1019 : /* fall through */
      case 1051 : /* fall through */
      case 1083 : /* fall through */
      case 1115 : /* fall through */
      case 1147 : /* fall through */
      case 1179 : /* fall through */
      case 1211 : /* fall through */
      case 1243 : /* fall through */
      case 1275 : /* fall through */
      case 1307 : /* fall through */
      case 1339 : /* fall through */
      case 1371 : /* fall through */
      case 1403 : /* fall through */
      case 1435 : /* fall through */
      case 1467 : /* fall through */
      case 1499 : /* fall through */
      case 1531 : /* fall through */
      case 1563 : /* fall through */
      case 1595 : /* fall through */
      case 1627 : /* fall through */
      case 1659 : /* fall through */
      case 1691 : /* fall through */
      case 1723 : /* fall through */
      case 1755 : /* fall through */
      case 1787 : /* fall through */
      case 1819 : /* fall through */
      case 1851 : /* fall through */
      case 1883 : /* fall through */
      case 1915 : /* fall through */
      case 1947 : /* fall through */
      case 1979 : /* fall through */
      case 2011 : /* fall through */
      case 2043 :
        if ((entire_insn & 0x7f) == 0x6f)
          { itype = RISCV64BF_RV64_INSN_JAL; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 28 :
        {
          unsigned int val = (((insn >> 25) & (3 << 3)) | ((insn >> 20) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xffffffff) == 0x73)
              { itype = RISCV64BF_RV64_INSN_ECALL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xffffffff) == 0x100073)
              { itype = RISCV64BF_RV64_INSN_EBREAK; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xffffffff) == 0x200073)
              { itype = RISCV64BF_RV64_INSN_URET; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 10 :
            if ((entire_insn & 0xffffffff) == 0x10200073)
              { itype = RISCV64BF_RV64_INSN_SRET; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff07fff) == 0x10400073)
              { itype = RISCV64BF_RV64_INSN_SFENCE_VM; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 13 :
            if ((entire_insn & 0xffffffff) == 0x10500073)
              { itype = RISCV64BF_RV64_INSN_WFI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 18 :
            if ((entire_insn & 0xffffffff) == 0x20200073)
              { itype = RISCV64BF_RV64_INSN_HRET; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 26 :
            if ((entire_insn & 0xffffffff) == 0x30200073)
              { itype = RISCV64BF_RV64_INSN_MRET; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 32 : /* fall through */
      case 160 : /* fall through */
      case 288 : /* fall through */
      case 416 : /* fall through */
      case 544 : /* fall through */
      case 672 : /* fall through */
      case 800 : /* fall through */
      case 928 : /* fall through */
      case 1056 : /* fall through */
      case 1184 : /* fall through */
      case 1312 : /* fall through */
      case 1440 : /* fall through */
      case 1568 : /* fall through */
      case 1696 : /* fall through */
      case 1824 : /* fall through */
      case 1952 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x1003)
              { itype = RISCV64BF_RV64_INSN_LH; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x5003)
              { itype = RISCV64BF_RV64_INSN_LHU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 35 :
        if ((entire_insn & 0xffffffff) == 0x100f)
          { itype = RISCV64BF_RV64_INSN_FENCE_I; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 36 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x1013)
              { itype = RISCV64BF_RV64_INSN_SLLI_SHIFT5; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x5013)
              { itype = RISCV64BF_RV64_INSN_SRLI_SHIFT5; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 38 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x101b)
              { itype = RISCV64BF_RV64_INSN_SLLIW_SHIFT5; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x501b)
              { itype = RISCV64BF_RV64_INSN_SRLIW_SHIFT5; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 40 : /* fall through */
      case 168 : /* fall through */
      case 296 : /* fall through */
      case 424 : /* fall through */
      case 552 : /* fall through */
      case 680 : /* fall through */
      case 808 : /* fall through */
      case 936 : /* fall through */
      case 1064 : /* fall through */
      case 1192 : /* fall through */
      case 1320 : /* fall through */
      case 1448 : /* fall through */
      case 1576 : /* fall through */
      case 1704 : /* fall through */
      case 1832 : /* fall through */
      case 1960 :
        if ((entire_insn & 0x707f) == 0x1023)
          { itype = RISCV64BF_RV64_INSN_SH; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 44 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x1033)
              { itype = RISCV64BF_RV64_INSN_SLL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x5033)
              { itype = RISCV64BF_RV64_INSN_SRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 46 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x103b)
              { itype = RISCV64BF_RV64_INSN_SLLW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x503b)
              { itype = RISCV64BF_RV64_INSN_SRLW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 52 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV64BF_RV64_INSN_FADD_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x20001053)
              { itype = RISCV64BF_RV64_INSN_FSGNJN_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x28001053)
              { itype = RISCV64BF_RV64_INSN_FMAX_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 56 : /* fall through */
      case 184 : /* fall through */
      case 312 : /* fall through */
      case 440 : /* fall through */
      case 568 : /* fall through */
      case 696 : /* fall through */
      case 824 : /* fall through */
      case 952 : /* fall through */
      case 1080 : /* fall through */
      case 1208 : /* fall through */
      case 1336 : /* fall through */
      case 1464 : /* fall through */
      case 1592 : /* fall through */
      case 1720 : /* fall through */
      case 1848 : /* fall through */
      case 1976 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x1063)
              { itype = RISCV64BF_RV64_INSN_BNE; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x5063)
              { itype = RISCV64BF_RV64_INSN_BGE; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 60 : /* fall through */
      case 188 : /* fall through */
      case 316 : /* fall through */
      case 444 : /* fall through */
      case 572 : /* fall through */
      case 700 : /* fall through */
      case 828 : /* fall through */
      case 956 : /* fall through */
      case 1084 : /* fall through */
      case 1212 : /* fall through */
      case 1340 : /* fall through */
      case 1468 : /* fall through */
      case 1596 : /* fall through */
      case 1724 : /* fall through */
      case 1852 : /* fall through */
      case 1980 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x1073)
              { itype = RISCV64BF_RV64_INSN_CSRRW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x5073)
              { itype = RISCV64BF_RV64_INSN_CSRRWI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 64 : /* fall through */
      case 192 : /* fall through */
      case 320 : /* fall through */
      case 448 : /* fall through */
      case 576 : /* fall through */
      case 704 : /* fall through */
      case 832 : /* fall through */
      case 960 : /* fall through */
      case 1088 : /* fall through */
      case 1216 : /* fall through */
      case 1344 : /* fall through */
      case 1472 : /* fall through */
      case 1600 : /* fall through */
      case 1728 : /* fall through */
      case 1856 : /* fall through */
      case 1984 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x2003)
              { itype = RISCV64BF_RV64_INSN_LW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6003)
              { itype = RISCV64BF_RV64_INSN_LWU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 65 : /* fall through */
      case 193 : /* fall through */
      case 321 : /* fall through */
      case 449 : /* fall through */
      case 577 : /* fall through */
      case 705 : /* fall through */
      case 833 : /* fall through */
      case 961 : /* fall through */
      case 1089 : /* fall through */
      case 1217 : /* fall through */
      case 1345 : /* fall through */
      case 1473 : /* fall through */
      case 1601 : /* fall through */
      case 1729 : /* fall through */
      case 1857 : /* fall through */
      case 1985 :
        if ((entire_insn & 0x707f) == 0x2007)
          { itype = RISCV64BF_RV64_INSN_FLW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 68 : /* fall through */
      case 196 : /* fall through */
      case 324 : /* fall through */
      case 452 : /* fall through */
      case 580 : /* fall through */
      case 708 : /* fall through */
      case 836 : /* fall through */
      case 964 : /* fall through */
      case 1092 : /* fall through */
      case 1220 : /* fall through */
      case 1348 : /* fall through */
      case 1476 : /* fall through */
      case 1604 : /* fall through */
      case 1732 : /* fall through */
      case 1860 : /* fall through */
      case 1988 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x2013)
              { itype = RISCV64BF_RV64_INSN_SLTI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6013)
              { itype = RISCV64BF_RV64_INSN_ORI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 72 : /* fall through */
      case 200 : /* fall through */
      case 328 : /* fall through */
      case 456 : /* fall through */
      case 584 : /* fall through */
      case 712 : /* fall through */
      case 840 : /* fall through */
      case 968 : /* fall through */
      case 1096 : /* fall through */
      case 1224 : /* fall through */
      case 1352 : /* fall through */
      case 1480 : /* fall through */
      case 1608 : /* fall through */
      case 1736 : /* fall through */
      case 1864 : /* fall through */
      case 1992 :
        if ((entire_insn & 0x707f) == 0x2023)
          { itype = RISCV64BF_RV64_INSN_SW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 73 : /* fall through */
      case 201 : /* fall through */
      case 329 : /* fall through */
      case 457 : /* fall through */
      case 585 : /* fall through */
      case 713 : /* fall through */
      case 841 : /* fall through */
      case 969 : /* fall through */
      case 1097 : /* fall through */
      case 1225 : /* fall through */
      case 1353 : /* fall through */
      case 1481 : /* fall through */
      case 1609 : /* fall through */
      case 1737 : /* fall through */
      case 1865 : /* fall through */
      case 1993 :
        if ((entire_insn & 0x707f) == 0x2027)
          { itype = RISCV64BF_RV64_INSN_FSW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 75 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x202f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x800202f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1000202f)
              { itype = RISCV64BF_RV64_INSN_LR_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1800202f)
              { itype = RISCV64BF_RV64_INSN_SC_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2000202f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 76 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2033)
              { itype = RISCV64BF_RV64_INSN_SLT; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6033)
              { itype = RISCV64BF_RV64_INSN_OR; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 84 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV64BF_RV64_INSN_FADD_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x20002053)
              { itype = RISCV64BF_RV64_INSN_FSGNJX_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 88 : /* fall through */
      case 216 : /* fall through */
      case 344 : /* fall through */
      case 472 : /* fall through */
      case 600 : /* fall through */
      case 728 : /* fall through */
      case 856 : /* fall through */
      case 984 : /* fall through */
      case 1112 : /* fall through */
      case 1240 : /* fall through */
      case 1368 : /* fall through */
      case 1496 : /* fall through */
      case 1624 : /* fall through */
      case 1752 : /* fall through */
      case 1880 : /* fall through */
      case 2008 :
        if ((entire_insn & 0x707f) == 0x6063)
          { itype = RISCV64BF_RV64_INSN_BLTU; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 92 : /* fall through */
      case 220 : /* fall through */
      case 348 : /* fall through */
      case 476 : /* fall through */
      case 604 : /* fall through */
      case 732 : /* fall through */
      case 860 : /* fall through */
      case 988 : /* fall through */
      case 1116 : /* fall through */
      case 1244 : /* fall through */
      case 1372 : /* fall through */
      case 1500 : /* fall through */
      case 1628 : /* fall through */
      case 1756 : /* fall through */
      case 1884 : /* fall through */
      case 2012 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x2073)
              { itype = RISCV64BF_RV64_INSN_CSRRS; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x6073)
              { itype = RISCV64BF_RV64_INSN_CSRRSI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 96 : /* fall through */
      case 224 : /* fall through */
      case 352 : /* fall through */
      case 480 : /* fall through */
      case 608 : /* fall through */
      case 736 : /* fall through */
      case 864 : /* fall through */
      case 992 : /* fall through */
      case 1120 : /* fall through */
      case 1248 : /* fall through */
      case 1376 : /* fall through */
      case 1504 : /* fall through */
      case 1632 : /* fall through */
      case 1760 : /* fall through */
      case 1888 : /* fall through */
      case 2016 :
        if ((entire_insn & 0x707f) == 0x3003)
          { itype = RISCV64BF_RV64_INSN_LD; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 97 : /* fall through */
      case 225 : /* fall through */
      case 353 : /* fall through */
      case 481 : /* fall through */
      case 609 : /* fall through */
      case 737 : /* fall through */
      case 865 : /* fall through */
      case 993 : /* fall through */
      case 1121 : /* fall through */
      case 1249 : /* fall through */
      case 1377 : /* fall through */
      case 1505 : /* fall through */
      case 1633 : /* fall through */
      case 1761 : /* fall through */
      case 1889 : /* fall through */
      case 2017 :
        if ((entire_insn & 0x707f) == 0x3007)
          { itype = RISCV64BF_RV64_INSN_FLD; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 100 : /* fall through */
      case 228 : /* fall through */
      case 356 : /* fall through */
      case 484 : /* fall through */
      case 612 : /* fall through */
      case 740 : /* fall through */
      case 868 : /* fall through */
      case 996 : /* fall through */
      case 1124 : /* fall through */
      case 1252 : /* fall through */
      case 1380 : /* fall through */
      case 1508 : /* fall through */
      case 1636 : /* fall through */
      case 1764 : /* fall through */
      case 1892 : /* fall through */
      case 2020 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x3013)
              { itype = RISCV64BF_RV64_INSN_SLTIU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x7013)
              { itype = RISCV64BF_RV64_INSN_ANDI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 104 : /* fall through */
      case 232 : /* fall through */
      case 360 : /* fall through */
      case 488 : /* fall through */
      case 616 : /* fall through */
      case 744 : /* fall through */
      case 872 : /* fall through */
      case 1000 : /* fall through */
      case 1128 : /* fall through */
      case 1256 : /* fall through */
      case 1384 : /* fall through */
      case 1512 : /* fall through */
      case 1640 : /* fall through */
      case 1768 : /* fall through */
      case 1896 : /* fall through */
      case 2024 :
        if ((entire_insn & 0x707f) == 0x3023)
          { itype = RISCV64BF_RV64_INSN_SD; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 105 : /* fall through */
      case 233 : /* fall through */
      case 361 : /* fall through */
      case 489 : /* fall through */
      case 617 : /* fall through */
      case 745 : /* fall through */
      case 873 : /* fall through */
      case 1001 : /* fall through */
      case 1129 : /* fall through */
      case 1257 : /* fall through */
      case 1385 : /* fall through */
      case 1513 : /* fall through */
      case 1641 : /* fall through */
      case 1769 : /* fall through */
      case 1897 : /* fall through */
      case 2025 :
        if ((entire_insn & 0x707f) == 0x3027)
          { itype = RISCV64BF_RV64_INSN_FSD; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 107 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x302f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x800302f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1000302f)
              { itype = RISCV64BF_RV64_INSN_LR_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1800302f)
              { itype = RISCV64BF_RV64_INSN_SC_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2000302f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 108 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x3033)
              { itype = RISCV64BF_RV64_INSN_SLTU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x7033)
              { itype = RISCV64BF_RV64_INSN_AND; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 116 :
        {
          unsigned int val = (((insn >> 27) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x53)
              { itype = RISCV64BF_RV64_INSN_FADD_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0x8000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x10000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x18000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 120 : /* fall through */
      case 248 : /* fall through */
      case 376 : /* fall through */
      case 504 : /* fall through */
      case 632 : /* fall through */
      case 760 : /* fall through */
      case 888 : /* fall through */
      case 1016 : /* fall through */
      case 1144 : /* fall through */
      case 1272 : /* fall through */
      case 1400 : /* fall through */
      case 1528 : /* fall through */
      case 1656 : /* fall through */
      case 1784 : /* fall through */
      case 1912 : /* fall through */
      case 2040 :
        if ((entire_insn & 0x707f) == 0x7063)
          { itype = RISCV64BF_RV64_INSN_BGEU; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 124 : /* fall through */
      case 252 : /* fall through */
      case 380 : /* fall through */
      case 508 : /* fall through */
      case 636 : /* fall through */
      case 764 : /* fall through */
      case 892 : /* fall through */
      case 1020 : /* fall through */
      case 1148 : /* fall through */
      case 1276 : /* fall through */
      case 1404 : /* fall through */
      case 1532 : /* fall through */
      case 1660 : /* fall through */
      case 1788 : /* fall through */
      case 1916 : /* fall through */
      case 2044 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0x707f) == 0x3073)
              { itype = RISCV64BF_RV64_INSN_CSRRC; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0x707f) == 0x7073)
              { itype = RISCV64BF_RV64_INSN_CSRRCI; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 140 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2000033)
              { itype = RISCV64BF_RV64_INSN_MUL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2004033)
              { itype = RISCV64BF_RV64_INSN_DIV; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 142 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x200003b)
              { itype = RISCV64BF_RV64_INSN_MULW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x200403b)
              { itype = RISCV64BF_RV64_INSN_DIVW; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 144 : /* fall through */
      case 176 : /* fall through */
      case 208 : /* fall through */
      case 240 : /* fall through */
      case 656 : /* fall through */
      case 688 : /* fall through */
      case 720 : /* fall through */
      case 752 : /* fall through */
      case 1168 : /* fall through */
      case 1200 : /* fall through */
      case 1232 : /* fall through */
      case 1264 : /* fall through */
      case 1680 : /* fall through */
      case 1712 : /* fall through */
      case 1744 : /* fall through */
      case 1776 :
        if ((entire_insn & 0x600007f) == 0x2000043)
          { itype = RISCV64BF_RV64_INSN_FMADD_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 145 : /* fall through */
      case 177 : /* fall through */
      case 209 : /* fall through */
      case 241 : /* fall through */
      case 657 : /* fall through */
      case 689 : /* fall through */
      case 721 : /* fall through */
      case 753 : /* fall through */
      case 1169 : /* fall through */
      case 1201 : /* fall through */
      case 1233 : /* fall through */
      case 1265 : /* fall through */
      case 1681 : /* fall through */
      case 1713 : /* fall through */
      case 1745 : /* fall through */
      case 1777 :
        if ((entire_insn & 0x600007f) == 0x2000047)
          { itype = RISCV64BF_RV64_INSN_FMSUB_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 146 : /* fall through */
      case 178 : /* fall through */
      case 210 : /* fall through */
      case 242 : /* fall through */
      case 658 : /* fall through */
      case 690 : /* fall through */
      case 722 : /* fall through */
      case 754 : /* fall through */
      case 1170 : /* fall through */
      case 1202 : /* fall through */
      case 1234 : /* fall through */
      case 1266 : /* fall through */
      case 1682 : /* fall through */
      case 1714 : /* fall through */
      case 1746 : /* fall through */
      case 1778 :
        if ((entire_insn & 0x600007f) == 0x200004b)
          { itype = RISCV64BF_RV64_INSN_FNMSUB_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 147 : /* fall through */
      case 179 : /* fall through */
      case 211 : /* fall through */
      case 243 : /* fall through */
      case 659 : /* fall through */
      case 691 : /* fall through */
      case 723 : /* fall through */
      case 755 : /* fall through */
      case 1171 : /* fall through */
      case 1203 : /* fall through */
      case 1235 : /* fall through */
      case 1267 : /* fall through */
      case 1683 : /* fall through */
      case 1715 : /* fall through */
      case 1747 : /* fall through */
      case 1779 :
        if ((entire_insn & 0x600007f) == 0x200004f)
          { itype = RISCV64BF_RV64_INSN_FNMADD_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 148 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV64BF_RV64_INSN_FADD_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x22000053)
              { itype = RISCV64BF_RV64_INSN_FSGNJ_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x2a000053)
              { itype = RISCV64BF_RV64_INSN_FMIN_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 156 :
        if ((entire_insn & 0xfe007fff) == 0x12000073)
          { itype = RISCV64BF_RV64_INSN_SFENCE_VMA; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 164 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfc00707f) == 0x1013)
              { itype = RISCV64BF_RV64_INSN_SLLI_SHIFT6; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfc00707f) == 0x5013)
              { itype = RISCV64BF_RV64_INSN_SRLI_SHIFT6; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 172 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2001033)
              { itype = RISCV64BF_RV64_INSN_MULH; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2005033)
              { itype = RISCV64BF_RV64_INSN_DIVU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 174 :
        if ((entire_insn & 0xfe00707f) == 0x200503b)
          { itype = RISCV64BF_RV64_INSN_DIVUW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 180 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV64BF_RV64_INSN_FADD_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x22001053)
              { itype = RISCV64BF_RV64_INSN_FSGNJN_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x2a001053)
              { itype = RISCV64BF_RV64_INSN_FMAX_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 203 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x200202f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa00202f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1200202f)
              { itype = RISCV64BF_RV64_INSN_LR_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1a00202f)
              { itype = RISCV64BF_RV64_INSN_SC_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2200202f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 204 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2002033)
              { itype = RISCV64BF_RV64_INSN_MULHSU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2006033)
              { itype = RISCV64BF_RV64_INSN_REM; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 206 :
        if ((entire_insn & 0xfe00707f) == 0x200603b)
          { itype = RISCV64BF_RV64_INSN_REMW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 212 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV64BF_RV64_INSN_FADD_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x22002053)
              { itype = RISCV64BF_RV64_INSN_FSGNJX_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 235 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x200302f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa00302f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1200302f)
              { itype = RISCV64BF_RV64_INSN_LR_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1a00302f)
              { itype = RISCV64BF_RV64_INSN_SC_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2200302f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 236 :
        {
          unsigned int val = (((insn >> 14) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x2003033)
              { itype = RISCV64BF_RV64_INSN_MULHU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x2007033)
              { itype = RISCV64BF_RV64_INSN_REMU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 238 :
        if ((entire_insn & 0xfe00707f) == 0x200703b)
          { itype = RISCV64BF_RV64_INSN_REMUW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 244 :
        {
          unsigned int val = (((insn >> 27) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x2000053)
              { itype = RISCV64BF_RV64_INSN_FADD_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xa000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x12000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1a000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 331 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x400202f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xc00202f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1400202f)
              { itype = RISCV64BF_RV64_INSN_LR_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1c00202f)
              { itype = RISCV64BF_RV64_INSN_SC_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2400202f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 363 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x400302f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xc00302f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1400302f)
              { itype = RISCV64BF_RV64_INSN_LR_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1c00302f)
              { itype = RISCV64BF_RV64_INSN_SC_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2400302f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 400 : /* fall through */
      case 432 : /* fall through */
      case 464 : /* fall through */
      case 496 : /* fall through */
      case 912 : /* fall through */
      case 944 : /* fall through */
      case 976 : /* fall through */
      case 1008 : /* fall through */
      case 1424 : /* fall through */
      case 1456 : /* fall through */
      case 1488 : /* fall through */
      case 1520 : /* fall through */
      case 1936 : /* fall through */
      case 1968 : /* fall through */
      case 2000 : /* fall through */
      case 2032 :
        if ((entire_insn & 0x600007f) == 0x6000043)
          { itype = RISCV64BF_RV64_INSN_FMADD_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 401 : /* fall through */
      case 433 : /* fall through */
      case 465 : /* fall through */
      case 497 : /* fall through */
      case 913 : /* fall through */
      case 945 : /* fall through */
      case 977 : /* fall through */
      case 1009 : /* fall through */
      case 1425 : /* fall through */
      case 1457 : /* fall through */
      case 1489 : /* fall through */
      case 1521 : /* fall through */
      case 1937 : /* fall through */
      case 1969 : /* fall through */
      case 2001 : /* fall through */
      case 2033 :
        if ((entire_insn & 0x600007f) == 0x6000047)
          { itype = RISCV64BF_RV64_INSN_FMSUB_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 402 : /* fall through */
      case 434 : /* fall through */
      case 466 : /* fall through */
      case 498 : /* fall through */
      case 914 : /* fall through */
      case 946 : /* fall through */
      case 978 : /* fall through */
      case 1010 : /* fall through */
      case 1426 : /* fall through */
      case 1458 : /* fall through */
      case 1490 : /* fall through */
      case 1522 : /* fall through */
      case 1938 : /* fall through */
      case 1970 : /* fall through */
      case 2002 : /* fall through */
      case 2034 :
        if ((entire_insn & 0x600007f) == 0x600004b)
          { itype = RISCV64BF_RV64_INSN_FNMSUB_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 403 : /* fall through */
      case 435 : /* fall through */
      case 467 : /* fall through */
      case 499 : /* fall through */
      case 915 : /* fall through */
      case 947 : /* fall through */
      case 979 : /* fall through */
      case 1011 : /* fall through */
      case 1427 : /* fall through */
      case 1459 : /* fall through */
      case 1491 : /* fall through */
      case 1523 : /* fall through */
      case 1939 : /* fall through */
      case 1971 : /* fall through */
      case 2003 : /* fall through */
      case 2035 :
        if ((entire_insn & 0x600007f) == 0x600004f)
          { itype = RISCV64BF_RV64_INSN_FNMADD_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 404 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV64BF_RV64_INSN_FADD_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x26000053)
              { itype = RISCV64BF_RV64_INSN_FSGNJ_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x2e000053)
              { itype = RISCV64BF_RV64_INSN_FMIN_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 436 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV64BF_RV64_INSN_FADD_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x26001053)
              { itype = RISCV64BF_RV64_INSN_FSGNJN_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfe00707f) == 0x2e001053)
              { itype = RISCV64BF_RV64_INSN_FMAX_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 459 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x600202f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe00202f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1600202f)
              { itype = RISCV64BF_RV64_INSN_LR_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1e00202f)
              { itype = RISCV64BF_RV64_INSN_SC_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2600202f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 468 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV64BF_RV64_INSN_FADD_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x26002053)
              { itype = RISCV64BF_RV64_INSN_FSGNJX_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 491 :
        {
          unsigned int val = (((insn >> 27) & (7 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x600302f)
              { itype = RISCV64BF_RV64_INSN_AMOADD_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe00302f)
              { itype = RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0707f) == 0x1600302f)
              { itype = RISCV64BF_RV64_INSN_LR_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00707f) == 0x1e00302f)
              { itype = RISCV64BF_RV64_INSN_SC_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfe00707f) == 0x2600302f)
              { itype = RISCV64BF_RV64_INSN_AMOXOR_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 500 :
        {
          unsigned int val = (((insn >> 27) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00007f) == 0x6000053)
              { itype = RISCV64BF_RV64_INSN_FADD_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00007f) == 0xe000053)
              { itype = RISCV64BF_RV64_INSN_FSUB_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfe00007f) == 0x16000053)
              { itype = RISCV64BF_RV64_INSN_FMUL_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfe00007f) == 0x1e000053)
              { itype = RISCV64BF_RV64_INSN_FDIV_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 524 :
        if ((entire_insn & 0xfe00707f) == 0x40000033)
          { itype = RISCV64BF_RV64_INSN_SUB; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 526 :
        if ((entire_insn & 0xfe00707f) == 0x4000003b)
          { itype = RISCV64BF_RV64_INSN_SUBW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 532 : /* fall through */
      case 564 : /* fall through */
      case 596 : /* fall through */
      case 628 :
        {
          unsigned int val = (((insn >> 25) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0x40100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0x40300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff0007f) == 0x58000053)
              { itype = RISCV64BF_RV64_INSN_FSQRT_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 548 :
        if ((entire_insn & 0xfe00707f) == 0x40005013)
          { itype = RISCV64BF_RV64_INSN_SRAI_SHIFT5; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 550 :
        if ((entire_insn & 0xfe00707f) == 0x4000501b)
          { itype = RISCV64BF_RV64_INSN_SRAIW_SHIFT5; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 556 :
        if ((entire_insn & 0xfe00707f) == 0x40005033)
          { itype = RISCV64BF_RV64_INSN_SRA; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 558 :
        if ((entire_insn & 0xfe00707f) == 0x4000503b)
          { itype = RISCV64BF_RV64_INSN_SRAW; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 587 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4000202f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6000202f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 619 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4000302f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6000302f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 660 :
        {
          unsigned int val = (((insn >> 25) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0707f) == 0x42000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV64BF_RV64_INSN_FSQRT_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 668 :
        if ((entire_insn & 0xffffffff) == 0x7b200073)
          { itype = RISCV64BF_RV64_INSN_DRET; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 676 :
        if ((entire_insn & 0xfc00707f) == 0x40005013)
          { itype = RISCV64BF_RV64_INSN_SRAI_SHIFT6; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 692 : /* fall through */
      case 724 : /* fall through */
      case 756 :
        {
          unsigned int val = (((insn >> 25) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0x42300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff0007f) == 0x5a000053)
              { itype = RISCV64BF_RV64_INSN_FSQRT_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 715 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4200202f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6200202f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 747 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4200302f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6200302f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 843 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4400202f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6400202f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 875 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4400302f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6400302f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 916 :
        {
          unsigned int val = (((insn >> 26) & (3 << 1)) | ((insn >> 20) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0707f) == 0x46000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0707f) == 0x46100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0x5e000053)
              { itype = RISCV64BF_RV64_INSN_FSQRT_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 948 : /* fall through */
      case 980 : /* fall through */
      case 1012 :
        if ((entire_insn & 0xfff0007f) == 0x5e000053)
          { itype = RISCV64BF_RV64_INSN_FSQRT_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 971 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4600202f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6600202f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1003 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x4600302f)
              { itype = RISCV64BF_RV64_INSN_AMOOR_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0x6600302f)
              { itype = RISCV64BF_RV64_INSN_AMOAND_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1044 :
        if ((entire_insn & 0xfe00707f) == 0xa0000053)
          { itype = RISCV64BF_RV64_INSN_FLE_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1076 :
        if ((entire_insn & 0xfe00707f) == 0xa0001053)
          { itype = RISCV64BF_RV64_INSN_FLT_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1099 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8000202f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa000202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1108 :
        if ((entire_insn & 0xfe00707f) == 0xa0002053)
          { itype = RISCV64BF_RV64_INSN_FEQ_S; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1131 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8000302f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa000302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1172 :
        if ((entire_insn & 0xfe00707f) == 0xa2000053)
          { itype = RISCV64BF_RV64_INSN_FLE_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1204 :
        if ((entire_insn & 0xfe00707f) == 0xa2001053)
          { itype = RISCV64BF_RV64_INSN_FLT_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1227 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8200202f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa200202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1236 :
        if ((entire_insn & 0xfe00707f) == 0xa2002053)
          { itype = RISCV64BF_RV64_INSN_FEQ_D; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1259 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8200302f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa200302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1355 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8400202f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa400202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1387 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8400302f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa400302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1428 :
        if ((entire_insn & 0xfe00707f) == 0xa6000053)
          { itype = RISCV64BF_RV64_INSN_FLE_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1460 :
        if ((entire_insn & 0xfe00707f) == 0xa6001053)
          { itype = RISCV64BF_RV64_INSN_FLT_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1483 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8600202f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa600202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1492 :
        if ((entire_insn & 0xfe00707f) == 0xa6002053)
          { itype = RISCV64BF_RV64_INSN_FEQ_Q; goto extract_sfmt_lui; }
        itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      case 1515 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0x8600302f)
              { itype = RISCV64BF_RV64_INSN_AMOMIN_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xa600302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAX_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1556 :
        {
          unsigned int val = (((insn >> 26) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfff0007f) == 0xd0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfff0007f) == 0xd0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_WU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0xe0000053)
              { itype = RISCV64BF_RV64_INSN_FMV_X_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff0707f) == 0xf0000053)
              { itype = RISCV64BF_RV64_INSN_FMV_W_X; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1588 :
        {
          unsigned int val = (((insn >> 26) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfff0007f) == 0xd0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfff0007f) == 0xd0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_WU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0xe0001053)
              { itype = RISCV64BF_RV64_INSN_FCLASS_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1611 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc000202f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe000202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1620 : /* fall through */
      case 1652 :
        {
          unsigned int val = (((insn >> 26) & (1 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_S; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfff0007f) == 0xd0000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfff0007f) == 0xd0100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_WU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd0200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd0300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_S_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1643 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc000302f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe000302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1684 :
        {
          unsigned int val = (((insn >> 26) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc2000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc2100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfff0707f) == 0xd2000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfff0707f) == 0xd2100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_WU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0xe2000053)
              { itype = RISCV64BF_RV64_INSN_FMV_X_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 12 :
            if ((entire_insn & 0xfff0707f) == 0xf2000053)
              { itype = RISCV64BF_RV64_INSN_FMV_D_X; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1716 :
        {
          unsigned int val = (((insn >> 26) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc2000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc2100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0xe2001053)
              { itype = RISCV64BF_RV64_INSN_FCLASS_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1739 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc200202f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe200202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_W_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1748 : /* fall through */
      case 1780 :
        {
          unsigned int val = (((insn >> 26) & (1 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc2000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc2100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_D; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd2200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd2300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_D_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1771 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc200302f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe200302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_D_RL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1867 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc400202f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe400202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_W_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1899 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc400302f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe400302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_D_AQ; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1940 :
        {
          unsigned int val = (((insn >> 26) & (1 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc6000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc6100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 4 :
            if ((entire_insn & 0xfff0707f) == 0xd6000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_W; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 5 :
            if ((entire_insn & 0xfff0707f) == 0xd6100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_WU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1972 :
        {
          unsigned int val = (((insn >> 26) & (3 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc6000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc6100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 8 :
            if ((entire_insn & 0xfff0707f) == 0xe6001053)
              { itype = RISCV64BF_RV64_INSN_FCLASS_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 1995 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc600202f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe600202f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 2004 : /* fall through */
      case 2036 :
        {
          unsigned int val = (((insn >> 26) & (1 << 2)) | ((insn >> 20) & (3 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfff0007f) == 0xc6000053)
              { itype = RISCV64BF_RV64_INSN_FCVT_W_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfff0007f) == 0xc6100053)
              { itype = RISCV64BF_RV64_INSN_FCVT_WU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 2 :
            if ((entire_insn & 0xfff0007f) == 0xc6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_L_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 3 :
            if ((entire_insn & 0xfff0007f) == 0xc6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_LU_Q; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 6 :
            if ((entire_insn & 0xfff0007f) == 0xd6200053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_L; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 7 :
            if ((entire_insn & 0xfff0007f) == 0xd6300053)
              { itype = RISCV64BF_RV64_INSN_FCVT_Q_LU; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      case 2027 :
        {
          unsigned int val = (((insn >> 29) & (1 << 0)));
          switch (val)
          {
          case 0 :
            if ((entire_insn & 0xfe00707f) == 0xc600302f)
              { itype = RISCV64BF_RV64_INSN_AMOMINU_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          case 1 :
            if ((entire_insn & 0xfe00707f) == 0xe600302f)
              { itype = RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL; goto extract_sfmt_lui; }
            itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
          }
        }
      default : itype = RISCV64BF_RV64_INSN_X_INVALID; goto extract_sfmt_empty;
      }
    }
  }

  /* The instruction has been decoded, now extract the fields.  */

 extract_sfmt_empty:
  {
    const IDESC *idesc = &riscv64bf_rv64_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_empty", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_lui:
  {
    const IDESC *idesc = &riscv64bf_rv64_insn_data[itype];
#define FLD(f) abuf->fields.sfmt_empty.f


  /* Record the fields for the semantic handler.  */
  TRACE_EXTRACT (current_cpu, abuf, (current_cpu, pc, "sfmt_lui", (char *) 0));

#undef FLD
    return idesc;
  }

 extract_sfmt_add:
  {
    const IDESC *idesc = &riscv64bf_rv64_insn_data[itype];
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
