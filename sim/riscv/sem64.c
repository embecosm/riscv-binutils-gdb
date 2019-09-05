/* Simulator instruction semantics for riscv64bf.

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
#include "cgen-mem.h"
#include "cgen-ops.h"

#undef GET_ATTR
#define GET_ATTR(cpu, num, attr) CGEN_ATTR_VALUE (NULL, abuf->idesc->attrs, CGEN_INSN_##attr)

/* This is used so that we can compile two copies of the semantic code,
   one with full feature support and one without that runs fast(er).
   FAST_P, when desired, is defined on the command line, -DFAST_P=1.  */
#if FAST_P
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_semf_,fn)
#undef CGEN_TRACE_RESULT
#define CGEN_TRACE_RESULT(cpu, abuf, name, type, val)
#else
#define SEM_FN_NAME(cpu,fn) XCONCAT3 (cpu,_sem_,fn)
#endif

/* x-invalid: --invalid-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_invalid) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
    /* Update the recorded pc in the cpu state struct.
       Only necessary for WITH_SCACHE case, but to avoid the
       conditional compilation ....  */
    SET_H_PC (pc);
    /* Virtual insns have zero size.  Overwrite vpc with address of next insn
       using the default-insn-bitsize spec.  When executing insns in parallel
       we may want to queue the fault and continue execution.  */
    vpc = SEM_NEXT_VPC (sem_arg, pc, 4);
    vpc = sim_engine_invalid_insn (current_cpu, pc, vpc);
  }

  return vpc;
#undef FLD
}

/* x-after: --after-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_after) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_RISCV64BF_RV64
    riscv64bf_rv64_pbb_after (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-before: --before-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_before) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_RISCV64BF_RV64
    riscv64bf_rv64_pbb_before (current_cpu, sem_arg);
#endif
  }

  return vpc;
#undef FLD
}

/* x-cti-chain: --cti-chain-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_cti_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_RISCV64BF_RV64
#ifdef DEFINE_SWITCH
    vpc = riscv64bf_rv64_pbb_cti_chain (current_cpu, sem_arg,
			       pbb_br_type, pbb_br_npc);
    BREAK (sem);
#else
    /* FIXME: Allow provision of explicit ifmt spec in insn spec.  */
    vpc = riscv64bf_rv64_pbb_cti_chain (current_cpu, sem_arg,
			       CPU_PBB_BR_TYPE (current_cpu),
			       CPU_PBB_BR_NPC (current_cpu));
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* x-chain: --chain-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_chain) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_RISCV64BF_RV64
    vpc = riscv64bf_rv64_pbb_chain (current_cpu, sem_arg);
#ifdef DEFINE_SWITCH
    BREAK (sem);
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* x-begin: --begin-- */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,x_begin) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 0);

  {
#if WITH_SCACHE_PBB_RISCV64BF_RV64
#if defined DEFINE_SWITCH || defined FAST_P
    /* In the switch case FAST_P is a constant, allowing several optimizations
       in any called inline functions.  */
    vpc = riscv64bf_rv64_pbb_begin (current_cpu, FAST_P);
#else
#if 0 /* cgen engine can't handle dynamic fast/full switching yet.  */
    vpc = riscv64bf_rv64_pbb_begin (current_cpu, STATE_RUN_FAST_P (CPU_STATE (current_cpu)));
#else
    vpc = riscv64bf_rv64_pbb_begin (current_cpu, 0);
#endif
#endif
#endif
  }

  return vpc;
#undef FLD
}

/* c.addi16sp: c.addi16sp ${sp-reg},${nzimm10-121-42-51-21-61-0000-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_addi16sp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_imm10_121_42_51_21_61_0000));
    SET_H_GPR (((UINT) 2), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.addi4spn: c.addi4spn ${c-reg42},${sp-reg},${nzuimm10-104-122-51-61-00-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_addi4spn) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm10_104_122_51_61_00));
    SET_H_C_GPR (FLD (f_uimm3_43), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.nop: c.nop */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_nop) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* c.ebreak: c.ebreak */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_ebreak) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

riscv64bf_exception (current_cpu, pc, EXCEPT_EBREAK);

  return vpc;
#undef FLD
}

/* c.unimp: c.unimp */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_unimp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* c.jr: c.jr ${c-reg117-ne0} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_jr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ldsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GET_H_GPR_NOT_ZERO (FLD (f_uimm5_115));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* c.jalr: c.jalr ${c-reg117-ne0} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_jalr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

{
  DI tmp_dst_reg;
  tmp_dst_reg = GET_H_GPR (FLD (f_rd));
  {
    DI opval = ADDSI (pc, 2);
    SET_H_GPR (((UINT) 1), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    USI opval = tmp_dst_reg;
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* c.mv: c.mv ${c-reg117-ne0},${c-reg62-ne0} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_mv) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = GET_H_GPR_NOT_ZERO (FLD (f_uimm5_65));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.add: c.add ${c-reg117-ne0},${c-reg62-ne0} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDDI (GET_H_GPR_NOT_ZERO (FLD (f_uimm5_115)), GET_H_GPR_NOT_ZERO (FLD (f_uimm5_65)));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.and: c.and ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ANDDI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.or: c.or ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ORDI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.xor: c.xor ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = XORDI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.sub: c.sub ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SUBDI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.li: c.li ${c-reg117},${imm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_li) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = FLD (f_imm6_121_65);
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.lui: c.lui ${c-reg117-ne0-ne2},${nzuimm18-121-65-000000000000-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_lui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SRASI (SLLSI (FLD (f_uimm18_121_65_000000000000), 14), 14);
    SET_H_GPR_NOT_ZERO_OR_SP (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero-or-sp", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.addi: c.addi ${c-reg117},${imm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_uimm5_115)), FLD (f_imm6_121_65));
    SET_H_GPR (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.slli: c.slli ${c-reg117-ne0},${nzuimm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_slli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SLLDI (GET_H_GPR_NOT_ZERO (FLD (f_uimm5_115)), FLD (f_uimm6_121_65));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.lwsp: c.lwsp ${c-reg117-ne0},${uimm8-32-121-63-00-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_lwsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = GETMEMSI (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm8_32_121_63_00)));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.swsp: c.swsp ${c-reg62},${uimm8-82-124-00-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_swsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GET_H_GPR (FLD (f_uimm5_65));
    SETMEMUSI (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm8_82_124_00)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* c.lw: c.lw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_lw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = GETMEMSI (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm7_51_123_61_00)));
    SET_H_C_GPR (FLD (f_uimm3_43), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.sw: c.sw ${c-reg42},${uimm7-51-123-61-00-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_sw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = GET_H_C_GPR (FLD (f_uimm3_43));
    SETMEMUSI (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm7_51_123_61_00)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* c.srli: c.srli ${c-reg97},${nzuimm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_srli) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SRLDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm6_121_65));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.srai: c.srai ${c-reg97},${nzuimm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_srai) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SRADI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm6_121_65));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.andi: c.andi ${c-reg97},${imm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_andi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ANDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_imm6_121_65));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.beqz: c.beqz ${c-reg97},${cbranch9} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_beqz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (EQDI (GET_H_C_GPR (FLD (f_uimm3_93)), 0)) {
  {
    USI opval = ADDSI (pc, FLD (f_imm9_121_62_21_112_42_0));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* c.bnez: c.bnez ${c-reg97},${cbranch9} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_bnez) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

if (NEDI (GET_H_C_GPR (FLD (f_uimm3_93)), 0)) {
  {
    USI opval = ADDSI (pc, FLD (f_imm9_121_62_21_112_42_0));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* c.j: c.j ${cjmp12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_j) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    USI opval = ADDSI (pc, FLD (f_imm12_121_81_102_61_71_21_111_53_0));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* c.slli64: c.slli64 ${c-reg117} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_slli64) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* c.srli64: c.srli64 ${c-reg97} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_srli64) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* c.srai64: c.srai64 ${c-reg97} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_srai64) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* c.addw: c.addw ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_addw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDSI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.subw: c.subw ${c-reg97},${c-reg42} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_subw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = SUBSI (GET_H_C_GPR (FLD (f_uimm3_93)), GET_H_C_GPR (FLD (f_uimm3_43)));
    SET_H_C_GPR (FLD (f_uimm3_93), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.addiw: c.addiw ${c-reg117-ne0},${imm6-121-65-abs} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_addiw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = ADDSI (GET_H_GPR_NOT_ZERO (FLD (f_uimm5_115)), FLD (f_imm6_121_65));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.ldsp: c.ldsp ${c-reg117-ne0},${uimm9-43-121-62-000-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_ldsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ldsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = GETMEMDI (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm9_43_121_62_000)));
    SET_H_GPR_NOT_ZERO (FLD (f_uimm5_115), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr-not-zero", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.sdsp: c.sdsp ${c-reg62},${uimm9-93-123-000-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_sdsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_sdsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    UDI opval = GET_H_GPR (FLD (f_uimm5_65));
    SETMEMUDI (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm9_93_123_000)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.ld: c.ld ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_ld) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DI opval = GETMEMDI (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm8_62_123_000)));
    SET_H_C_GPR (FLD (f_uimm3_43), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.sd: c.sd ${c-reg42},${uimm8-62-123-000-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_sd) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    UDI opval = GET_H_C_GPR (FLD (f_uimm3_43));
    SETMEMUDI (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm8_62_123_000)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* c.fldsp: c.fldsp ${fl-rd},${uimm9-43-121-62-000-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_fldsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DF opval = GETMEMDF (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm9_43_121_62_000)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* c.fsdsp: c.fsdsp ${fc-rs3},${uimm9-93-123-000-abs}(${sp-reg}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_fsdsp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_sdsp.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DF opval = CPU (h_fpr[FLD (f_uimm5_65)]);
    SETMEMDF (current_cpu, pc, ADDDI (GET_H_GPR (((UINT) 2)), FLD (f_uimm9_93_123_000)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* c.fsd: c.fsd ${fc-rs2},${uimm8-62-123-000-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_fsd) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DF opval = GET_H_C_FPR (FLD (f_uimm3_43));
    SETMEMDF (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm8_62_123_000)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* c.fld: c.fld ${fc-rs2},${uimm8-62-123-000-abs}(${c-reg97}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,c_fld) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_ld.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 2);

  {
    DF opval = GETMEMDF (current_cpu, pc, ADDDI (GET_H_C_GPR (FLD (f_uimm3_93)), FLD (f_uimm8_62_123_000)));
    SET_H_C_FPR (FLD (f_uimm3_43), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "c-fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* lui: lui ${rd},${uimm32-3120-000000000000} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lui) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (TRUNCDISI (FLD (f_uimm32_3120_000000000000)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* auipc: auipc ${rd},${uimm32-3120-000000000000} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,auipc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDSI (pc, EXTSISI (TRUNCDISI (FLD (f_uimm32_3120_000000000000))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* jal: jal ${rd},${jmp21} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,jal) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  {
    DI opval = ADDSI (pc, 4);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm21_311_198_201_3010_0), 43), 43));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* jalr: jalr ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,jalr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_src_reg;
  tmp_src_reg = GET_H_GPR (FLD (f_rs1));
  {
    DI opval = ADDSI (pc, 4);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    USI opval = ADDDI (tmp_src_reg, FLD (f_imm12_3112));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* beq: beq ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,beq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bne: bne ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bne) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (NEDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* blt: blt ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,blt) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bge: bge ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bge) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (GEDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bltu: bltu ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (LTUDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* bgeu: bgeu ${rs1},${rs2},${branch13} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bgeu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_BRANCH_INIT
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (GEUDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = ADDSI (pc, SRADI (SLLDI (FLD (f_imm13_311_71_306_114_0), 51), 51));
    SEM_BRANCH_VIA_ADDR (current_cpu, sem_arg, opval, vpc);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "pc", 'x', opval);
  }
}

  abuf->written = written;
  SEM_BRANCH_FINI (vpc);
  return vpc;
#undef FLD
}

/* lb: lb ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lb) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lh: lh ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lh) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMHI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lw: lw ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMSI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lbu: lbu ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lbu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lhu: lhu ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lhu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUHI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sb: sb ${rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sb) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UQI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUQI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sh: sh ${rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sh) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UHI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUHI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sw: sw ${rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* addi: addi ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slti: slti ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slti) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = LTDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sltiu: sltiu ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sltiu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = LTUDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* xori: xori ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,xori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ori: ori ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ori) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* andi: andi ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,andi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slli-shift5: slli ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slli_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SLLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srli-shift5: srli ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srli_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srai-shift5: srai ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srai_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRADI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* add: add ${rd},${rs1},${rs2},${tprel_add} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,add) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ADDDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sub: sub ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sub) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sll: sll ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sll) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SLLDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slt: slt ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slt) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = LTDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sltu: sltu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sltu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = LTUDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* xor: xor ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,xor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srl: srl ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sra: sra ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sra) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRADI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* or: or ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,or) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* and: and ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,and) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fence: fence ${succ},${pred} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fence) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* sfence.vm: s.fence.vm ${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sfence_vm) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* sfence.vma: sfence.vma ${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sfence_vma) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fence.tso: fence.tso ${succ},${pred} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fence_tso) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fence.i: fence.i */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fence_i) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* ecall: ecall */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ecall) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

riscv64bf_exception (current_cpu, pc, EXCEPT_ECALL);

  return vpc;
#undef FLD
}

/* ebreak: ebreak */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ebreak) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

riscv64bf_exception (current_cpu, pc, EXCEPT_EBREAK);

  return vpc;
#undef FLD
}

/* csrrw: csrrw ${rd},${csr},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GET_H_GPR (FLD (f_rs1));
if (NESI (FLD (f_rd), 0)) {
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
  {
    UDI opval = tmp_tmp;
    SET_H_CSR (FLD (f_csr), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* csrrs: csrrs ${rd},${csr},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrs) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GET_H_GPR (FLD (f_rs1));
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
if (NESI (FLD (f_rs1), 0)) {
  {
    UDI opval = ORDI (tmp_tmp, GET_H_CSR (FLD (f_csr)));
    SET_H_CSR (FLD (f_csr), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* csrrc: csrrc ${rd},${csr},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GET_H_GPR (FLD (f_rs1));
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
if (NESI (FLD (f_rs1), 0)) {
  {
    UDI opval = ANDDI (INVDI (tmp_tmp), GET_H_CSR (FLD (f_csr)));
    SET_H_CSR (FLD (f_csr), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* csrrwi: csrrwi ${rd},${csr},${uimm5} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrwi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrwi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    UDI opval = FLD (f_uimm5_195);
    SET_H_CSR (FLD (f_csr), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* csrrsi: csrrsi ${rd},${csr},${uimm5} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrsi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrwi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    UDI opval = ORDI (FLD (f_uimm5_195), GET_H_CSR (FLD (f_csr)));
    SET_H_CSR (FLD (f_csr), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* csrrci: csrrci ${rd},${csr},${uimm5} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,csrrci) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrwi.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  {
    DI opval = GET_H_CSR (FLD (f_csr));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
  {
    UDI opval = ANDDI (INVDI (FLD (f_uimm5_195)), GET_H_CSR (FLD (f_csr)));
    SET_H_CSR (FLD (f_csr), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "csr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* uret: uret */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,uret) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* sret: sret */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sret) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* hret: hret */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,hret) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* mret: mret */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mret) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* dret: dret */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,dret) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* wfi: wfi */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,wfi) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* lwu: lwu ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lwu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUSI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ld: ld ${rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ld) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUDI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sd: sd ${rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sd) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slli-shift6: slli ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slli_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SLLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm6_256));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srli-shift6: srli ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srli_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm6_256));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srai-shift6: srai ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srai_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SRADI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm6_256));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* addiw: addiw ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addiw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (ADDSI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slliw-shift5: slliw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slliw_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SLLSI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srliw-shift5: srliw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srliw_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SRLSI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sraiw-shift5: sraiw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sraiw_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SRASI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* addw: addw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (ADDSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* subw: subw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,subw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SUBSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sllw: sllw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sllw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SLLSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* srlw: srlw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srlw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SRLSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sraw: sraw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sraw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (SRASI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* mul: mul ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = MULDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* mulh: mulh ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mulh) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
  {
    DI opval = SRLDI (MULDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))), 32);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
{
  DI tmp_rs1_lo;
  DI tmp_rs1_hi;
  DI tmp_rs2_lo;
  DI tmp_rs2_hi;
  DI tmp_lo;
  DI tmp_mid1;
  DI tmp_mid2;
  DI tmp_hi;
  DI tmp_res_lo;
  DI tmp_res_hi;
  DI tmp_tmp;
  tmp_rs1_lo = ANDDI (GET_H_GPR (FLD (f_rs1)), 0xffffffff);
  tmp_rs1_hi = SRLDI (GET_H_GPR (FLD (f_rs1)), 32);
  tmp_rs2_lo = ANDDI (GET_H_GPR (FLD (f_rs2)), 0xffffffff);
  tmp_rs2_hi = SRLDI (GET_H_GPR (FLD (f_rs2)), 32);
  tmp_lo = MULDI (tmp_rs1_lo, tmp_rs2_lo);
  tmp_mid1 = MULDI (tmp_rs1_lo, tmp_rs2_hi);
  tmp_mid2 = MULDI (tmp_rs1_hi, tmp_rs2_lo);
  tmp_hi = MULDI (tmp_rs1_hi, tmp_rs2_hi);
  tmp_res_lo = ANDDI (tmp_lo, 0xffffffff);
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_lo, 32), ANDDI (tmp_mid1, 0xffffffff)), ANDDI (tmp_mid2, 0xffffffff));
  tmp_res_lo = ADDDI (tmp_res_lo, SLLDI (tmp_tmp, 32));
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_mid1, 32)), ADDDI (SRLDI (tmp_mid2, 32), ANDDI (tmp_hi, 0xffffffff)));
  tmp_res_hi = ANDDI (tmp_tmp, 0xffffffff);
  tmp_tmp = ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_hi, 32));
  tmp_res_hi = ADDDI (tmp_res_hi, SLLDI (tmp_tmp, 32));
  tmp_res_hi = ADDDI (tmp_res_hi, MULDI (SRADI (GET_H_GPR (FLD (f_rs1)), 63), GET_H_GPR (FLD (f_rs2))));
  tmp_res_hi = ADDDI (tmp_res_hi, MULDI (GET_H_GPR (FLD (f_rs1)), SRADI (GET_H_GPR (FLD (f_rs2)), 63)));
  {
    DI opval = tmp_res_hi;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* mulhsu: mulhsu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mulhsu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
  {
    DI opval = SRLDI (MULDI (GET_H_GPR (FLD (f_rs1)), ZEXTSIDI (TRUNCDISI (GET_H_GPR (FLD (f_rs2))))), 32);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
{
  DI tmp_rs1_lo;
  DI tmp_rs1_hi;
  DI tmp_rs2_lo;
  DI tmp_rs2_hi;
  DI tmp_lo;
  DI tmp_mid1;
  DI tmp_mid2;
  DI tmp_hi;
  DI tmp_res_lo;
  DI tmp_res_hi;
  DI tmp_tmp;
  tmp_rs1_lo = ANDDI (GET_H_GPR (FLD (f_rs1)), 0xffffffff);
  tmp_rs1_hi = SRLDI (GET_H_GPR (FLD (f_rs1)), 32);
  tmp_rs2_lo = ANDDI (GET_H_GPR (FLD (f_rs2)), 0xffffffff);
  tmp_rs2_hi = SRLDI (GET_H_GPR (FLD (f_rs2)), 32);
  tmp_lo = MULDI (tmp_rs1_lo, tmp_rs2_lo);
  tmp_mid1 = MULDI (tmp_rs1_lo, tmp_rs2_hi);
  tmp_mid2 = MULDI (tmp_rs1_hi, tmp_rs2_lo);
  tmp_hi = MULDI (tmp_rs1_hi, tmp_rs2_hi);
  tmp_res_lo = ANDDI (tmp_lo, 0xffffffff);
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_lo, 32), ANDDI (tmp_mid1, 0xffffffff)), ANDDI (tmp_mid2, 0xffffffff));
  tmp_res_lo = ADDDI (tmp_res_lo, SLLDI (tmp_tmp, 32));
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_mid1, 32)), ADDDI (SRLDI (tmp_mid2, 32), ANDDI (tmp_hi, 0xffffffff)));
  tmp_res_hi = ANDDI (tmp_tmp, 0xffffffff);
  tmp_tmp = ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_hi, 32));
  tmp_res_hi = ADDDI (tmp_res_hi, SLLDI (tmp_tmp, 32));
  tmp_res_hi = ADDDI (tmp_res_hi, MULDI (SRADI (GET_H_GPR (FLD (f_rs1)), 63), GET_H_GPR (FLD (f_rs2))));
  {
    DI opval = tmp_res_hi;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* mulhu: mulhu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mulhu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
  {
    DI opval = SRLDI (MULDI (ZEXTSIDI (TRUNCDISI (GET_H_GPR (FLD (f_rs1)))), ZEXTSIDI (TRUNCDISI (GET_H_GPR (FLD (f_rs2))))), 32);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
{
  DI tmp_rs1_lo;
  DI tmp_rs1_hi;
  DI tmp_rs2_lo;
  DI tmp_rs2_hi;
  DI tmp_lo;
  DI tmp_mid1;
  DI tmp_mid2;
  DI tmp_hi;
  DI tmp_res_lo;
  DI tmp_res_hi;
  DI tmp_tmp;
  tmp_rs1_lo = ANDDI (GET_H_GPR (FLD (f_rs1)), 0xffffffff);
  tmp_rs1_hi = SRLDI (GET_H_GPR (FLD (f_rs1)), 32);
  tmp_rs2_lo = ANDDI (GET_H_GPR (FLD (f_rs2)), 0xffffffff);
  tmp_rs2_hi = SRLDI (GET_H_GPR (FLD (f_rs2)), 32);
  tmp_lo = MULDI (tmp_rs1_lo, tmp_rs2_lo);
  tmp_mid1 = MULDI (tmp_rs1_lo, tmp_rs2_hi);
  tmp_mid2 = MULDI (tmp_rs1_hi, tmp_rs2_lo);
  tmp_hi = MULDI (tmp_rs1_hi, tmp_rs2_hi);
  tmp_res_lo = ANDDI (tmp_lo, 0xffffffff);
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_lo, 32), ANDDI (tmp_mid1, 0xffffffff)), ANDDI (tmp_mid2, 0xffffffff));
  tmp_res_lo = ADDDI (tmp_res_lo, SLLDI (tmp_tmp, 32));
  tmp_tmp = ADDDI (ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_mid1, 32)), ADDDI (SRLDI (tmp_mid2, 32), ANDDI (tmp_hi, 0xffffffff)));
  tmp_res_hi = ANDDI (tmp_tmp, 0xffffffff);
  tmp_tmp = ADDDI (SRLDI (tmp_tmp, 32), SRLDI (tmp_hi, 32));
  tmp_res_hi = ADDDI (tmp_res_hi, SLLDI (tmp_tmp, 32));
  {
    DI opval = tmp_res_hi;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* div: div ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,div) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = DIVDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* divu: divu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,divu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = UDIVDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* rem: rem ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rem) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = MODDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* remu: remu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,remu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = UMODDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* mulw: mulw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,mulw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = MULSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* divw: divw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,divw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = DIVSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* divuw: divuw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,divuw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = UDIVSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* remw: remw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,remw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = MODSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* remuw: remuw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,remuw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = UMODSI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.w: lr.w ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.w.aq: lr.w.aq ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.w.rl: lr.w.rl ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.w.aqrl: lr.w.aqrl ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sc.w: sc.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sc.w.aq: sc.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sc.w.rl: sc.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* sc.w.aqrl: sc.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* amoswap.w: amoswap.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.w.aq: amoswap.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.w.rl: amoswap.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.w.aqrl: amoswap.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.w: amoadd.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ADDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.w.aq: amoadd.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ADDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.w.rl: amoadd.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ADDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.w.aqrl: amoadd.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ADDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.w: amoxor.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = XORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.w.aq: amoxor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = XORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.w.rl: amoxor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = XORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.w.aqrl: amoxor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = XORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.w: amoand.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ANDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.w.aq: amoand.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ANDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.w.rl: amoand.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ANDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.w.aqrl: amoand.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ANDSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.w: amoor.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.w.aq: amoor.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.w.rl: amoor.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.w.aqrl: amoor.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    USI opval = ORSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amomin.w: amomin.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.w.aq: amomin.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.w.rl: amomin.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.w.aqrl: amomin.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.w: amomax.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.w.aq: amomax.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.w.rl: amomax.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.w.aqrl: amomax.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.w: amominu.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.w.aq: amominu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.w.rl: amominu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.w.aqrl: amominu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.w: amomaxu.w ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.w.aq: amomaxu.w.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.w.rl: amomaxu.w.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.w.aqrl: amomaxu.w.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_tmp;
  tmp_tmp = GETMEMSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUSI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    USI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
} else {
  {
    USI opval = tmp_tmp;
    SETMEMUSI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* lr.d: lr.d ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.d.aq: lr.d.aq ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.d.rl: lr.d.rl ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* lr.d.aqrl: lr.d.aqrl ${rd},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,lr_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = GETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sc.d: sc.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sc.d.aq: sc.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sc.d.rl: sc.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sc.d.aqrl: sc.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sc_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* amoswap.d: amoswap.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.d.aq: amoswap.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.d.rl: amoswap.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoswap.d.aqrl: amoswap.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoswap_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.d: amoadd.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.d.aq: amoadd.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.d.rl: amoadd.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoadd.d.aqrl: amoadd.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoadd_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.d: amoxor.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = XORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.d.aq: amoxor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = XORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.d.rl: amoxor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = XORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoxor.d.aqrl: amoxor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoxor_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = XORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.d: amoand.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.d.aq: amoand.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.d.rl: amoand.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoand.d.aqrl: amoand.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoand_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ADDDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.d: amoor.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.d.aq: amoor.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.d.rl: amoor.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amoor.d.aqrl: amoor.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amoor_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
  {
    UDI opval = ORDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* amomin.d: amomin.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.d.aq: amomin.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.d.rl: amomin.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomin.d.aqrl: amomin.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomin_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.d: amomax.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.d.aq: amomax.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.d.rl: amomax.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomax.d.aqrl: amomax.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomax_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.d: amominu.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.d.aq: amominu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.d.rl: amominu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amominu.d.aqrl: amominu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amominu_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.d: amomaxu.d ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.d.aq: amomaxu.d.aq ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_aq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.d.rl: amomaxu.d.rl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_rl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* amomaxu.d.aqrl: amomaxu.d.aqrl ${rd},${rs2},${imm-zero}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_aqrl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_tmp;
  tmp_tmp = GETMEMDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)));
if (LTUDI (tmp_tmp, GET_H_GPR (FLD (f_rs2)))) {
  {
    UDI opval = GET_H_GPR (FLD (f_rs2));
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
} else {
  {
    UDI opval = tmp_tmp;
    SETMEMUDI (current_cpu, pc, GET_H_GPR (FLD (f_rs1)), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'D', opval);
  }
}
  {
    DI opval = tmp_tmp;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* clz: clz ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_count;
  DI tmp_found;
  tmp_count = 0;
  tmp_found = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), SUBDI (SUBDI (GET_H_XLEN (), 1), tmp_i)), 1)) {
  tmp_found = 1;
} else {
if (NOTDI (tmp_found)) {
  tmp_count = ADDDI (tmp_count, 1);
}
}
  }
}
  {
    DI opval = tmp_count;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* ctz: ctz ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ctz) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_count;
  DI tmp_found;
  tmp_count = 0;
  tmp_found = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), tmp_i), 1)) {
  tmp_found = 1;
} else {
if (NOTDI (tmp_found)) {
  tmp_count = ADDDI (tmp_count, 1);
}
}
  }
}
  {
    DI opval = tmp_count;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clzw: clzw ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clzw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_count;
  DI tmp_found;
  SI tmp_rs1_narrow;
  tmp_count = 0;
  tmp_found = 0;
  tmp_rs1_narrow = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDSI (SRLSI (tmp_rs1_narrow, SUBDI (SUBDI (GET_H_XLEN (), 1), tmp_i)), 1)) {
  tmp_found = 1;
} else {
if (NOTDI (tmp_found)) {
  tmp_count = ADDDI (tmp_count, 1);
}
}
  }
}
  {
    DI opval = tmp_count;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* ctzw: ctzw ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ctzw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_count;
  DI tmp_found;
  SI tmp_rs1_narrow;
  tmp_count = 0;
  tmp_found = 0;
  tmp_rs1_narrow = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDSI (SRLSI (tmp_rs1_narrow, tmp_i), 1)) {
  tmp_found = 1;
} else {
if (NOTDI (tmp_found)) {
  tmp_count = ADDDI (tmp_count, 1);
}
}
  }
}
  {
    DI opval = tmp_count;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* pcnt: pcnt ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,pcnt) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_high;
  tmp_high = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), tmp_i), 1)) {
  tmp_high = ADDDI (tmp_high, 1);
}
  }
}
  {
    DI opval = tmp_high;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* pcntw: pcntw ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,pcntw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_high;
  DI tmp_rs1_narrow;
  tmp_high = 0;
  tmp_rs1_narrow = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (tmp_rs1_narrow, tmp_i), 1)) {
  tmp_high = ADDDI (tmp_high, 1);
}
  }
}
  {
    DI opval = tmp_high;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* andn: andn ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,andn) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), INVDI (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* orn: orn ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,orn) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), INVDI (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* xnor: xnor ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,xnor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), INVDI (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* pack: pack ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,pack) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (ANDDI (GET_H_GPR (FLD (f_rs1)), ((EQDI (GET_H_XLEN (), 32)) ? (65535) : (0xffffffff))), SLLDI (GET_H_GPR (FLD (f_rs2)), DIVDI (GET_H_XLEN (), 2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* packw: packw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,packw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_n;
  SI tmp_rs2_n;
  tmp_rs1_n = ANDSI (TRUNCDISI (GET_H_GPR (FLD (f_rs1))), 65535);
  tmp_rs2_n = SLLSI (ANDSI (TRUNCDISI (GET_H_GPR (FLD (f_rs2))), 65535), 16);
  {
    DI opval = ZEXTSIDI (ORSI (tmp_rs1_n, tmp_rs2_n));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* min: min ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,min) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ((LTDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) ? (GET_H_GPR (FLD (f_rs1))) : (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* max: max ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,max) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ((GTDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) ? (GET_H_GPR (FLD (f_rs1))) : (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* minu: minu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,minu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ((LTUDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) ? (GET_H_GPR (FLD (f_rs1))) : (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* maxu: maxu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,maxu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ((GTUDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)))) ? (GET_H_GPR (FLD (f_rs1))) : (GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbset: sbset ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbset) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbclr: sbclr ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbclr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), INVSI (SLLSI (1, GET_H_GPR (FLD (f_rs2)))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbinv: sbinv ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbinv) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbext: sbext ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbext) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))), 1);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbseti-shift5: sbseti ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbseti_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, FLD (f_uimm5_245)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbseti-shift6: sbseti ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbseti_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, FLD (f_uimm6_256)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbclri-shift5: sbclri ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbclri_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), INVSI (SLLSI (1, FLD (f_uimm5_245))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbclri-shift6: sbclri ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbclri_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (GET_H_GPR (FLD (f_rs1)), INVSI (SLLSI (1, FLD (f_uimm6_256))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbinvi-shift5: sbinvi ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbinvi_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, FLD (f_uimm5_245)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbinvi-shift6: sbinvi ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbinvi_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = XORDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, FLD (f_uimm6_256)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbexti-shift5: sbexti ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbexti_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm5_245)), 1);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbexti-shift6: sbexti ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbexti_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ANDDI (SRLDI (GET_H_GPR (FLD (f_rs1)), FLD (f_uimm6_256)), 1);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sbsetw: sbsetw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbsetw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
  {
    DI opval = ZEXTSIDI (ORSI (tmp_rs1_t, SLLSI (1, ANDSI (tmp_rs2_t, 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbclrw: sbclrw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbclrw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
  {
    DI opval = ZEXTSIDI (ANDSI (tmp_rs1_t, INVSI (SLLSI (1, ANDSI (tmp_rs2_t, 31)))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbinvw: sbinvw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbinvw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
  {
    DI opval = ZEXTSIDI (XORSI (tmp_rs1_t, SLLSI (1, ANDSI (tmp_rs2_t, 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbextw: sbextw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbextw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
  {
    DI opval = ZEXTSIDI (ANDSI (SRLSI (tmp_rs1_t, ANDSI (tmp_rs2_t, 31)), 1));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbsetiw: sbsetiw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbsetiw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (ORSI (tmp_rs1_t, SLLSI (1, ANDDI (FLD (f_uimm6_256), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbclriw: sbclriw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbclriw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (ANDSI (tmp_rs1_t, INVSI (SLLSI (1, ANDDI (FLD (f_uimm6_256), 31)))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sbinviw: sbinviw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sbinviw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (XORSI (tmp_rs1_t, SLLSI (1, ANDDI (FLD (f_uimm6_256), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* slo: slo ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slo) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SLLDI (INVDI (GET_H_GPR (FLD (f_rs1))), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sro: sro ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sro) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SRLDI (INVDI (GET_H_GPR (FLD (f_rs1))), GET_H_GPR (FLD (f_rs2))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sloi-shift5: sloi ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sloi_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SLLDI (INVDI (GET_H_GPR (FLD (f_rs1))), ANDDI (FLD (f_uimm5_245), 31)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sloi-shift6: sloi ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sloi_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SLLDI (INVDI (GET_H_GPR (FLD (f_rs1))), ANDDI (FLD (f_uimm6_256), 63)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sroi-shift5: sroi ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sroi_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SRLDI (INVDI (GET_H_GPR (FLD (f_rs1))), ANDDI (FLD (f_uimm5_245), 31)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* sroi-shift6: sroi ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sroi_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = INVDI (SRLDI (INVDI (GET_H_GPR (FLD (f_rs1))), ANDDI (FLD (f_uimm6_256), 63)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* slow: slow ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slow) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (INVSI (SLLSI (INVSI (tmp_rs1_t), ANDDI (GET_H_GPR (FLD (f_rs2)), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* srow: srow ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,srow) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (INVSI (SRLSI (INVSI (tmp_rs1_t), ANDDI (GET_H_GPR (FLD (f_rs2)), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sloiw: sloiw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sloiw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (INVSI (SLLSI (INVSI (tmp_rs1_t), ANDDI (FLD (f_uimm5_245), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* sroiw: sroiw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,sroiw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (INVSI (SRLSI (INVSI (tmp_rs1_t), ANDDI (FLD (f_uimm5_245), 31))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* rol: rol ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rol) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ROLDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* ror: ror ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,ror) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = RORDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* rori-shift5: rori ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rori_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = RORDI (GET_H_GPR (FLD (f_rs1)), ANDDI (FLD (f_uimm5_245), 31));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* rori-shift6: rori ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rori_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = RORDI (GET_H_GPR (FLD (f_rs1)), ANDDI (FLD (f_uimm5_245), 31));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* rolw: rolw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rolw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (ROLSI (tmp_rs1_t, ANDDI (GET_H_GPR (FLD (f_rs2)), 31)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* rorw: rorw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,rorw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (RORSI (tmp_rs1_t, ANDDI (GET_H_GPR (FLD (f_rs2)), 31)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* roriw: roriw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,roriw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  {
    DI opval = ZEXTSIDI (RORSI (tmp_rs1_t, ANDDI (FLD (f_uimm5_245), 31)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* grev: grev ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,grev) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 1431655765), 1), SRLDI (ANDDI (tmp_result, 0xaaaaaaaa), 1));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 858993459), 2), SRLDI (ANDDI (tmp_result, 0xcccccccc), 2));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 252645135), 4), SRLDI (ANDDI (tmp_result, 0xf0f0f0f0), 4));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 16711935), 8), SRLDI (ANDDI (tmp_result, 0xff00ff00), 8));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 16), 16)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 65535), 16), SRLDI (ANDDI (tmp_result, 0xffff0000), 16));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
} else {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (1431655765, 1431655765)), 1), SRLDI (ANDDI (tmp_result, MAKEDI (0xaaaaaaaa, 0xaaaaaaaa)), 1));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (858993459, 858993459)), 2), SRLDI (ANDDI (tmp_result, MAKEDI (0xcccccccc, 0xcccccccc)), 2));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (252645135, 252645135)), 4), SRLDI (ANDDI (tmp_result, MAKEDI (0xf0f0f0f0, 0xf0f0f0f0)), 4));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (16711935, 16711935)), 8), SRLDI (ANDDI (tmp_result, MAKEDI (0xff00ff00, 0xff00ff00)), 8));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 16), 16)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (65535, 65535)), 16), SRLDI (ANDDI (tmp_result, MAKEDI (0xffff0000, 0xffff0000)), 16));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 32), 32)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 0xffffffff), 32), SRLDI (ANDDI (tmp_result, MAKEDI (0xffffffff, 0)), 32));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* grevi-shift5: grevi ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,grevi_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm5_245), 1), 1)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 1431655765), 1), SRLDI (ANDDI (tmp_result, 0xaaaaaaaa), 1));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 2), 2)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 858993459), 2), SRLDI (ANDDI (tmp_result, 0xcccccccc), 2));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 4), 4)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 252645135), 4), SRLDI (ANDDI (tmp_result, 0xf0f0f0f0), 4));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 8), 8)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 16711935), 8), SRLDI (ANDDI (tmp_result, 0xff00ff00), 8));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 16), 16)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 65535), 16), SRLDI (ANDDI (tmp_result, 0xffff0000), 16));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* grevi-shift6: grevi ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,grevi_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm6_256), 1), 1)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (1431655765, 1431655765)), 1), SRLDI (ANDDI (tmp_result, MAKEDI (0xaaaaaaaa, 0xaaaaaaaa)), 1));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 2), 2)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (858993459, 858993459)), 2), SRLDI (ANDDI (tmp_result, MAKEDI (0xcccccccc, 0xcccccccc)), 2));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 4), 4)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (252645135, 252645135)), 4), SRLDI (ANDDI (tmp_result, MAKEDI (0xf0f0f0f0, 0xf0f0f0f0)), 4));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 8), 8)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (16711935, 16711935)), 8), SRLDI (ANDDI (tmp_result, MAKEDI (0xff00ff00, 0xff00ff00)), 8));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 16), 16)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (65535, 65535)), 16), SRLDI (ANDDI (tmp_result, MAKEDI (0xffff0000, 0xffff0000)), 16));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 32), 32)) {
  tmp_result = ORDI (SLLDI (ANDDI (tmp_result, 0xffffffff), 32), SRLDI (ANDDI (tmp_result, MAKEDI (0xffffffff, 0)), 32));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* grevw: grevw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,grevw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  SI tmp_rs2_t;
  tmp_result = GET_H_GPR (FLD (f_rs1));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
if (EQSI (ANDSI (tmp_rs2_t, 1), 1)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 1431655765), 1), SRLSI (ANDSI (tmp_result, 0xaaaaaaaa), 1));
}
if (EQSI (ANDSI (tmp_rs2_t, 2), 2)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 858993459), 2), SRLSI (ANDSI (tmp_result, 0xcccccccc), 2));
}
if (EQSI (ANDSI (tmp_rs2_t, 4), 4)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 252645135), 4), SRLSI (ANDSI (tmp_result, 0xf0f0f0f0), 4));
}
if (EQSI (ANDSI (tmp_rs2_t, 8), 8)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 16711935), 8), SRLSI (ANDSI (tmp_result, 0xff00ff00), 8));
}
if (EQSI (ANDSI (tmp_rs2_t, 16), 16)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 65535), 16), SRLSI (ANDSI (tmp_result, 0xffff0000), 16));
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* greviw: greviw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,greviw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm5_245), 1), 1)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 1431655765), 1), SRLSI (ANDSI (tmp_result, 0xaaaaaaaa), 1));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 2), 2)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 858993459), 2), SRLSI (ANDSI (tmp_result, 0xcccccccc), 2));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 4), 4)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 252645135), 4), SRLSI (ANDSI (tmp_result, 0xf0f0f0f0), 4));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 8), 8)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 16711935), 8), SRLSI (ANDSI (tmp_result, 0xff00ff00), 8));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 16), 16)) {
  tmp_result = ORSI (SLLSI (ANDSI (tmp_result, 65535), 16), SRLSI (ANDSI (tmp_result, 0xffff0000), 16));
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* shfl: shfl ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,shfl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 16711680), 8), SLLDI (ANDDI (tmp_result, 65280), 8)), ANDDI (tmp_result, 0xff0000ff));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 251662080), 4), SLLDI (ANDDI (tmp_result, 15728880), 4)), ANDDI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 808464432), 2), SLLDI (ANDDI (tmp_result, 202116108), 2)), ANDDI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 1145324612), 1), SLLDI (ANDDI (tmp_result, 572662306), 1)), ANDDI (tmp_result, 0x99999999));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
} else {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 16), 16)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (65535, 0)), 16), SLLDI (ANDDI (tmp_result, 0xffff0000), 16)), ANDDI (tmp_result, MAKEDI (0xffff0000, 65535)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (16711680, 16711680)), 8), SLLDI (ANDDI (tmp_result, MAKEDI (65280, 65280)), 8)), ANDDI (tmp_result, MAKEDI (0xff000000, 255)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (251662080, 251662080)), 4), SLLDI (ANDDI (tmp_result, MAKEDI (15728880, 15728880)), 4)), ANDDI (tmp_result, MAKEDI (0xf00ff00f, 0xf00ff00f)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (808464432, 808464432)), 2), SLLDI (ANDDI (tmp_result, MAKEDI (202116108, 202116108)), 2)), ANDDI (tmp_result, MAKEDI (0xc3c3c3c3, 0xc3c3c3c3)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (1145324612, 1145324612)), 1), SLLDI (ANDDI (tmp_result, MAKEDI (572662306, 572662306)), 1)), ANDDI (tmp_result, MAKEDI (0x99999999, 0x99999999)));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* unshfl: unshfl ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,unshfl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 1145324612), 1), SLLDI (ANDDI (tmp_result, 572662306), 1)), ANDDI (tmp_result, 0x99999999));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 808464432), 2), SLLDI (ANDDI (tmp_result, 202116108), 2)), ANDDI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 251662080), 4), SLLDI (ANDDI (tmp_result, 15728880), 4)), ANDDI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 16711680), 8), SLLDI (ANDDI (tmp_result, 65280), 8)), ANDDI (tmp_result, 0xff0000ff));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
} else {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (1145324612, 1145324612)), 1), SLLDI (ANDDI (tmp_result, MAKEDI (572662306, 572662306)), 1)), ANDDI (tmp_result, MAKEDI (0x99999999, 0x99999999)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (808464432, 808464432)), 2), SLLDI (ANDDI (tmp_result, MAKEDI (202116108, 202116108)), 2)), ANDDI (tmp_result, MAKEDI (0xc3c3c3c3, 0xc3c3c3c3)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (251662080, 251662080)), 4), SLLDI (ANDDI (tmp_result, MAKEDI (15728880, 15728880)), 4)), ANDDI (tmp_result, MAKEDI (0xf00ff00f, 0xf00ff00f)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (16711680, 16711680)), 8), SLLDI (ANDDI (tmp_result, MAKEDI (65280, 65280)), 8)), ANDDI (tmp_result, MAKEDI (0xff000000, 255)));
}
if (EQDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 16), 16)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (65535, 0)), 16), SLLDI (ANDDI (tmp_result, 0xffff0000), 16)), ANDDI (tmp_result, MAKEDI (0xffff0000, 65535)));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* shfli-shift5: shfli ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,shfli_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm5_245), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 16711680), 8), SLLDI (ANDDI (tmp_result, 65280), 8)), ANDDI (tmp_result, 0xff0000ff));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 251662080), 4), SLLDI (ANDDI (tmp_result, 15728880), 4)), ANDDI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 808464432), 2), SLLDI (ANDDI (tmp_result, 202116108), 2)), ANDDI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 1145324612), 1), SLLDI (ANDDI (tmp_result, 572662306), 1)), ANDDI (tmp_result, 0x99999999));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* shfli-shift6: shfli ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,shfli_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm6_256), 16), 16)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (65535, 0)), 16), SLLDI (ANDDI (tmp_result, 0xffff0000), 16)), ANDDI (tmp_result, MAKEDI (0xffff0000, 65535)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (16711680, 16711680)), 8), SLLDI (ANDDI (tmp_result, MAKEDI (65280, 65280)), 8)), ANDDI (tmp_result, MAKEDI (0xff000000, 255)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (251662080, 251662080)), 4), SLLDI (ANDDI (tmp_result, MAKEDI (15728880, 15728880)), 4)), ANDDI (tmp_result, MAKEDI (0xf00ff00f, 0xf00ff00f)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (808464432, 808464432)), 2), SLLDI (ANDDI (tmp_result, MAKEDI (202116108, 202116108)), 2)), ANDDI (tmp_result, MAKEDI (0xc3c3c3c3, 0xc3c3c3c3)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (1145324612, 1145324612)), 1), SLLDI (ANDDI (tmp_result, MAKEDI (572662306, 572662306)), 1)), ANDDI (tmp_result, MAKEDI (0x99999999, 0x99999999)));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* unshfli-shift5: unshfli ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,unshfli_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm5_245), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 1145324612), 1), SLLDI (ANDDI (tmp_result, 572662306), 1)), ANDDI (tmp_result, 0x99999999));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 808464432), 2), SLLDI (ANDDI (tmp_result, 202116108), 2)), ANDDI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 251662080), 4), SLLDI (ANDDI (tmp_result, 15728880), 4)), ANDDI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (FLD (f_uimm5_245), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, 16711680), 8), SLLDI (ANDDI (tmp_result, 65280), 8)), ANDDI (tmp_result, 0xff0000ff));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* unshfli-shift6: unshfli ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,unshfli_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (EQDI (ANDDI (FLD (f_uimm6_256), 1), 1)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (1145324612, 1145324612)), 1), SLLDI (ANDDI (tmp_result, MAKEDI (572662306, 572662306)), 1)), ANDDI (tmp_result, MAKEDI (0x99999999, 0x99999999)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 2), 2)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (808464432, 808464432)), 2), SLLDI (ANDDI (tmp_result, MAKEDI (202116108, 202116108)), 2)), ANDDI (tmp_result, MAKEDI (0xc3c3c3c3, 0xc3c3c3c3)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 4), 4)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (251662080, 251662080)), 4), SLLDI (ANDDI (tmp_result, MAKEDI (15728880, 15728880)), 4)), ANDDI (tmp_result, MAKEDI (0xf00ff00f, 0xf00ff00f)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 8), 8)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (16711680, 16711680)), 8), SLLDI (ANDDI (tmp_result, MAKEDI (65280, 65280)), 8)), ANDDI (tmp_result, MAKEDI (0xff000000, 255)));
}
if (EQDI (ANDDI (FLD (f_uimm6_256), 16), 16)) {
  tmp_result = ORDI (ORDI (SRLDI (ANDDI (tmp_result, MAKEDI (65535, 0)), 16), SLLDI (ANDDI (tmp_result, 0xffff0000), 16)), ANDDI (tmp_result, MAKEDI (0xffff0000, 65535)));
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* shflw: shflw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,shflw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  tmp_result = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 8), 8)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 16711680), 8), SLLSI (ANDSI (tmp_result, 65280), 8)), ANDSI (tmp_result, 0xff0000ff));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 4), 4)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 251662080), 4), SLLSI (ANDSI (tmp_result, 15728880), 4)), ANDSI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 2), 2)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 808464432), 2), SLLSI (ANDSI (tmp_result, 202116108), 2)), ANDSI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 1), 1)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 1145324612), 1), SLLSI (ANDSI (tmp_result, 572662306), 1)), ANDSI (tmp_result, 0x99999999));
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* unshflw: unshflw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,unshflw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  tmp_result = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 1), 1)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 1145324612), 1), SLLSI (ANDSI (tmp_result, 572662306), 1)), ANDSI (tmp_result, 0x99999999));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 2), 2)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 808464432), 2), SLLSI (ANDSI (tmp_result, 202116108), 2)), ANDSI (tmp_result, 0xc3c3c3c3));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 4), 4)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 251662080), 4), SLLSI (ANDSI (tmp_result, 15728880), 4)), ANDSI (tmp_result, 0xf00ff00f));
}
if (EQDI (ANDDI (ANDDI (GET_H_GPR (FLD (f_rs2)), 31), 8), 8)) {
  tmp_result = ORSI (ORSI (SRLSI (ANDSI (tmp_result, 16711680), 8), SLLSI (ANDSI (tmp_result, 65280), 8)), ANDSI (tmp_result, 0xff0000ff));
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* gorc: gorc ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,gorc) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (EQDI (GET_H_XLEN (), 32)) {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 1)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 1431655765), 1), SRLDI (ANDDI (tmp_result, 0xaaaaaaaa), 1)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 2)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 858993459), 2), SRLDI (ANDDI (tmp_result, 0xcccccccc), 2)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 4)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 252645135), 4), SRLDI (ANDDI (tmp_result, 0xf0f0f0f0), 4)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 8)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 16711935), 8), SRLDI (ANDDI (tmp_result, 0xff00ff00), 8)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 16)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 65535), 16), SRLDI (ANDDI (tmp_result, 0xffff0000), 16)), tmp_result);
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
} else {
{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 1)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (1431655765, 1431655765)), 1), SRLDI (ANDDI (tmp_result, MAKEDI (0xaaaaaaaa, 0xaaaaaaaa)), 1)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 2)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (858993459, 858993459)), 2), SRLDI (ANDDI (tmp_result, MAKEDI (0xcccccccc, 0xcccccccc)), 2)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 4)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (252645135, 252645135)), 4), SRLDI (ANDDI (tmp_result, MAKEDI (0xf0f0f0f0, 0xf0f0f0f0)), 4)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 8)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (16711935, 16711935)), 8), SRLDI (ANDDI (tmp_result, MAKEDI (0xff00ff00, 0xff00ff00)), 8)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 16)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (65535, 65535)), 16), SRLDI (ANDDI (tmp_result, MAKEDI (0xffff0000, 0xffff0000)), 16)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 32)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 0xffffffff), 32), SRLDI (ANDDI (tmp_result, MAKEDI (0xffffffff, 0)), 32)), tmp_result);
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* gorci-shift5: gorci ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,gorci_shift5) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (ANDDI (FLD (f_uimm5_245), 1)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 1431655765), 1), SRLDI (ANDDI (tmp_result, 0xaaaaaaaa), 1)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 2)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 858993459), 2), SRLDI (ANDDI (tmp_result, 0xcccccccc), 2)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 4)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 252645135), 4), SRLDI (ANDDI (tmp_result, 0xf0f0f0f0), 4)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 8)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 16711935), 8), SRLDI (ANDDI (tmp_result, 0xff00ff00), 8)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 16)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 65535), 16), SRLDI (ANDDI (tmp_result, 0xffff0000), 16)), tmp_result);
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* gorci-shift6: gorci ${rd},${rs1},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,gorci_shift6) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_result;
  tmp_result = GET_H_GPR (FLD (f_rs1));
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 1)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (1431655765, 1431655765)), 1), SRLDI (ANDDI (tmp_result, MAKEDI (0xaaaaaaaa, 0xaaaaaaaa)), 1)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 2)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (858993459, 858993459)), 2), SRLDI (ANDDI (tmp_result, MAKEDI (0xcccccccc, 0xcccccccc)), 2)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 4)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (252645135, 252645135)), 4), SRLDI (ANDDI (tmp_result, MAKEDI (0xf0f0f0f0, 0xf0f0f0f0)), 4)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 8)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (16711935, 16711935)), 8), SRLDI (ANDDI (tmp_result, MAKEDI (0xff00ff00, 0xff00ff00)), 8)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 16)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, MAKEDI (65535, 65535)), 16), SRLDI (ANDDI (tmp_result, MAKEDI (0xffff0000, 0xffff0000)), 16)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 32)) {
  tmp_result = ORDI (ORDI (SLLDI (ANDDI (tmp_result, 0xffffffff), 32), SRLDI (ANDDI (tmp_result, MAKEDI (0xffffffff, 0)), 32)), tmp_result);
}
  {
    DI opval = tmp_result;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* gorcw: gorcw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,gorcw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  tmp_result = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 1)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 1431655765), 1), SRLSI (ANDSI (tmp_result, 0xaaaaaaaa), 1)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 2)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 858993459), 2), SRLSI (ANDSI (tmp_result, 0xcccccccc), 2)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 4)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 252645135), 4), SRLSI (ANDSI (tmp_result, 0xf0f0f0f0), 4)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 8)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 16711935), 8), SRLSI (ANDSI (tmp_result, 0xff00ff00), 8)), tmp_result);
}
if (ANDDI (GET_H_GPR (FLD (f_rs2)), 16)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 65535), 16), SRLSI (ANDSI (tmp_result, 0xffff0000), 16)), tmp_result);
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* gorciw: gorciw ${rd},${rs1},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,gorciw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_result;
  tmp_result = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
if (ANDDI (FLD (f_uimm5_245), 1)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 1431655765), 1), SRLSI (ANDSI (tmp_result, 0xaaaaaaaa), 1)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 2)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 858993459), 2), SRLSI (ANDSI (tmp_result, 0xcccccccc), 2)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 4)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 252645135), 4), SRLSI (ANDSI (tmp_result, 0xf0f0f0f0), 4)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 8)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 16711935), 8), SRLSI (ANDSI (tmp_result, 0xff00ff00), 8)), tmp_result);
}
if (ANDDI (FLD (f_uimm5_245), 16)) {
  tmp_result = ORSI (ORSI (SLLSI (ANDSI (tmp_result, 65535), 16), SRLSI (ANDSI (tmp_result, 0xffff0000), 16)), tmp_result);
}
  {
    DI opval = ZEXTSIDI (tmp_result);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bfp: bfp ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bfp) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_len;
  DI tmp_off;
  DI tmp_mask;
  DI tmp_data;
  tmp_len = ANDDI (SRLDI (GET_H_GPR (FLD (f_rs2)), 24), 31);
  tmp_off = ANDDI (SRLDI (GET_H_GPR (FLD (f_rs2)), 24), SUBDI (GET_H_XLEN (), 1));
  tmp_mask = 0;
  tmp_len = ((tmp_len) ? (tmp_len) : (16));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = tmp_len;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_mask = ORDI (tmp_mask, SLLSI (1, tmp_i));
  }
}
  tmp_mask = ROLDI (tmp_mask, tmp_off);
  tmp_data = ROLDI (GET_H_GPR (FLD (f_rs2)), tmp_off);
  {
    DI opval = ORDI (ANDDI (tmp_data, tmp_mask), ANDDI (GET_H_GPR (FLD (f_rs1)), INVDI (tmp_mask)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bfpw: bfpw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bfpw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  SI tmp_len;
  SI tmp_off;
  SI tmp_mask;
  SI tmp_data;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
  tmp_len = ANDSI (SRLSI (tmp_rs2_t, 24), 31);
  tmp_off = ANDSI (SRLSI (tmp_rs2_t, 24), SUBSI (32, 1));
  tmp_mask = 0;
  tmp_len = ((tmp_len) ? (tmp_len) : (16));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = tmp_len;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_mask = ORSI (tmp_mask, SLLSI (1, tmp_i));
  }
}
  tmp_mask = ROLSI (tmp_mask, tmp_off);
  tmp_data = ROLSI (tmp_rs2_t, tmp_off);
  {
    DI opval = ZEXTSIDI (ORSI (ANDSI (tmp_data, tmp_mask), ANDSI (tmp_rs1_t, INVSI (tmp_mask))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bext: bext ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bext) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_res;
  INT tmp_j;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (GET_H_GPR (FLD (f_rs2)), SLLSI (1, tmp_i))) {
{
if (ANDDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, tmp_i))) {
  tmp_res = ORDI (tmp_res, SLLSI (1, tmp_j));
}
  tmp_j = ADDSI (tmp_j, 1);
}
}
  }
}
  {
    DI opval = tmp_res;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bdep: bdep ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bdep) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_res;
  INT tmp_j;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (GET_H_GPR (FLD (f_rs2)), SLLSI (1, tmp_i))) {
{
if (ANDDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, tmp_j))) {
  tmp_res = ORDI (tmp_res, SLLSI (1, tmp_i));
}
  tmp_j = ADDSI (tmp_j, 1);
}
}
  }
}
  {
    DI opval = tmp_res;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bextw: bextw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bextw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_res;
  INT tmp_j;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 32;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (GET_H_GPR (FLD (f_rs2)), SLLSI (1, tmp_i))) {
{
if (ANDDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, tmp_j))) {
  tmp_res = ORSI (tmp_res, SLLSI (1, tmp_i));
}
  tmp_j = ADDSI (tmp_j, 1);
}
}
  }
}
  {
    DI opval = ZEXTSIDI (tmp_res);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bdepw: bdepw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bdepw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_res;
  INT tmp_j;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 32;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (GET_H_GPR (FLD (f_rs2)), SLLSI (1, tmp_i))) {
{
if (ANDDI (GET_H_GPR (FLD (f_rs1)), SLLSI (1, tmp_j))) {
  tmp_res = ORSI (tmp_res, SLLSI (1, tmp_i));
}
  tmp_j = ADDSI (tmp_j, 1);
}
}
  }
}
  {
    DI opval = ZEXTSIDI (tmp_res);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmul: clmul ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmul) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_res;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = GET_H_XLEN ();
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs2)), tmp_i), 1)) {
  tmp_res = XORDI (tmp_res, SLLDI (GET_H_GPR (FLD (f_rs1)), tmp_i));
}
  }
}
  {
    DI opval = tmp_res;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmulh: clmulh ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmulh) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_res;
  DI tmp_j;
  tmp_res = 0;
  tmp_j = 1;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = SUBDI (GET_H_XLEN (), 1);
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs2)), tmp_j), 1)) {
  tmp_res = XORDI (tmp_res, SRLDI (GET_H_GPR (FLD (f_rs1)), SUBDI (GET_H_XLEN (), tmp_j)));
}
  tmp_j = ADDDI (tmp_j, 1);
  }
}
  {
    DI opval = tmp_res;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmulr: clmulr ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmulr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_res;
  tmp_res = 0;
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = SUBDI (GET_H_XLEN (), 1);
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDDI (SRLDI (GET_H_GPR (FLD (f_rs2)), tmp_i), 1)) {
  tmp_res = XORDI (tmp_res, SRLDI (GET_H_GPR (FLD (f_rs1)), SUBDI (SUBDI (GET_H_XLEN (), tmp_i), 1)));
}
  }
}
  {
    DI opval = tmp_res;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmulw: clmulw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmulw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_res;
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_res = 0;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 32;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDSI (SRLSI (ANDSI (tmp_rs2_t, 31), tmp_i), 1)) {
  tmp_res = XORSI (tmp_res, SLLSI (tmp_rs1_t, tmp_i));
}
  }
}
  {
    DI opval = ZEXTSIDI (tmp_res);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmulhw: clmulhw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmulhw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_res;
  SI tmp_j;
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_res = 0;
  tmp_j = 1;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = SUBSI (32, 1);
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDSI (SRLSI (ANDSI (tmp_rs2_t, 31), tmp_j), 1)) {
  tmp_res = XORSI (tmp_res, SRLSI (tmp_rs1_t, SUBSI (32, tmp_j)));
}
  tmp_j = ADDSI (tmp_j, 1);
  }
}
  {
    DI opval = ZEXTSIDI (tmp_res);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* clmulrw: clmulrw ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,clmulrw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_res;
  SI tmp_rs1_t;
  SI tmp_rs2_t;
  tmp_res = 0;
  tmp_rs1_t = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_rs2_t = TRUNCDISI (GET_H_GPR (FLD (f_rs2)));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = SUBDI (GET_H_XLEN (), 1);
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
if (ANDSI (SRLSI (ANDSI (tmp_rs2_t, 31), tmp_i), 1)) {
  tmp_res = XORSI (tmp_res, SRLSI (tmp_rs1_t, SUBSI (SUBSI (32, tmp_i), 1)));
}
  }
}
  {
    DI opval = ZEXTSIDI (tmp_res);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32.b: crc32.b ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32_b) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 8;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0xedb88320, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32.h: crc32.h ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32_h) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 16;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0xedb88320, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32.w: crc32.w ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 32;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0xedb88320, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32c.b: crc32c.b ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32c_b) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 8;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0x82f63b78, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32c.h: crc32c.h ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32c_h) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 16;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0x82f63b78, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32c.w: crc32c.w ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32c_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 32;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0x82f63b78, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32.d: crc32.d ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 64;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0xedb88320, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* crc32c.d: crc32c.d ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,crc32c_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_x;
  tmp_x = GET_H_GPR (FLD (f_rs1));
{
  INT tmp_i;
  INT tmp_i_limit;
  tmp_i_limit = 64;
  for (tmp_i = 0;
       tmp_i < tmp_i_limit;
       ++tmp_i)
  {
  tmp_x = XORDI (SRLDI (tmp_x, 1), ANDSI (0x82f63b78, INVDI (SUBDI (ANDDI (tmp_x, 1), 1))));
  }
}
  {
    DI opval = tmp_x;
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* bmator: bmator ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bmator) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = riscv64_bmator (current_cpu, GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* bmatxor: bmatxor ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bmatxor) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = riscv64_bmatxor (current_cpu, GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* bmatflip: bmatflip ${rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,bmatflip) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = riscv64_bmatflip (current_cpu, GET_H_GPR (FLD (f_rs1)));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* cmix: cmix ${rd},${rs2},${rs1},${rs3} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,cmix) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ORDI (ANDDI (GET_H_GPR (FLD (f_rs1)), GET_H_GPR (FLD (f_rs2))), ANDDI (GET_H_GPR (FLD (f_rs3)), INVDI (GET_H_GPR (FLD (f_rs2)))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* cmov: cmov ${rd},${rs2},${rs1},${rs3} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,cmov) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ((GET_H_GPR (FLD (f_rs2))) ? (GET_H_GPR (FLD (f_rs1))) : (GET_H_GPR (FLD (f_rs3))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fsl: fsl ${rd},${rs1},${rs3},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsl) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_shamt;
  DI tmp_a;
  DI tmp_b;
  tmp_shamt = GET_H_GPR (FLD (f_rs2));
  tmp_a = GET_H_GPR (FLD (f_rs1));
  tmp_b = GET_H_GPR (FLD (f_rs3));
if (GTDI (tmp_shamt, GET_H_XLEN ())) {
{
  tmp_shamt = SUBDI (tmp_shamt, GET_H_XLEN ());
  tmp_a = GET_H_GPR (FLD (f_rs3));
  tmp_b = GET_H_GPR (FLD (f_rs1));
}
}
if (tmp_shamt) {
  {
    DI opval = ORDI (SLLDI (tmp_a, tmp_shamt), SRLDI (tmp_b, SUBDI (GET_H_XLEN (), tmp_shamt)));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = tmp_a;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fsr: fsr ${rd},${rs1},${rs3},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsr) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_shamt;
  DI tmp_a;
  DI tmp_b;
  tmp_shamt = GET_H_GPR (FLD (f_rs2));
  tmp_a = GET_H_GPR (FLD (f_rs1));
  tmp_b = GET_H_GPR (FLD (f_rs3));
if (GTDI (tmp_shamt, GET_H_XLEN ())) {
{
  tmp_shamt = SUBDI (tmp_shamt, GET_H_XLEN ());
  tmp_a = GET_H_GPR (FLD (f_rs3));
  tmp_b = GET_H_GPR (FLD (f_rs1));
}
}
if (tmp_shamt) {
  {
    DI opval = ORDI (SRLDI (tmp_a, tmp_shamt), SLLDI (tmp_b, SUBDI (GET_H_XLEN (), tmp_shamt)));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = tmp_a;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fsri: fsri ${rd},${rs1},${rs3},${uimm6-256} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsri) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsri.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_shamt;
  DI tmp_a;
  DI tmp_b;
  tmp_shamt = FLD (f_uimm6_256);
  tmp_a = GET_H_GPR (FLD (f_rs1));
  tmp_b = GET_H_GPR (FLD (f_rs3));
if (GTDI (tmp_shamt, GET_H_XLEN ())) {
{
  tmp_shamt = SUBDI (tmp_shamt, GET_H_XLEN ());
  tmp_a = GET_H_GPR (FLD (f_rs3));
  tmp_b = GET_H_GPR (FLD (f_rs1));
}
}
if (tmp_shamt) {
  {
    DI opval = ORDI (SRLDI (tmp_a, tmp_shamt), SLLDI (tmp_b, SUBDI (GET_H_XLEN (), tmp_shamt)));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = tmp_a;
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 4);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fslw: fslw ${rd},${rs1},${rs3},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fslw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_shamt;
  SI tmp_a;
  SI tmp_b;
  tmp_shamt = ANDDI (GET_H_GPR (FLD (f_rs2)), 31);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
if (GTSI (tmp_shamt, 32)) {
{
  tmp_shamt = SUBSI (tmp_shamt, 32);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
}
}
if (tmp_shamt) {
  {
    DI opval = ZEXTSIDI (ORSI (SLLSI (tmp_a, tmp_shamt), SRLSI (tmp_b, SUBSI (32, tmp_shamt))));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = ZEXTSIDI (tmp_a);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fsrw: fsrw ${rd},${rs1},${rs3},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsrw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_shamt;
  SI tmp_a;
  SI tmp_b;
  tmp_shamt = ANDDI (GET_H_GPR (FLD (f_rs2)), 31);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
if (GTSI (tmp_shamt, 32)) {
{
  tmp_shamt = SUBSI (tmp_shamt, 32);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
}
}
if (tmp_shamt) {
  {
    DI opval = ZEXTSIDI (ORSI (SRLSI (tmp_a, tmp_shamt), SLLSI (tmp_b, SUBSI (32, tmp_shamt))));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = ZEXTSIDI (tmp_a);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fsriw: fsriw ${rd},${rs1},${rs3},${uimm5-245} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsriw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fsriw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_shamt;
  SI tmp_a;
  SI tmp_b;
  tmp_shamt = ANDDI (FLD (f_uimm5_245), 31);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
if (GTSI (tmp_shamt, 32)) {
{
  tmp_shamt = SUBSI (tmp_shamt, 32);
  tmp_a = TRUNCDISI (GET_H_GPR (FLD (f_rs3)));
  tmp_b = TRUNCDISI (GET_H_GPR (FLD (f_rs1)));
}
}
if (tmp_shamt) {
  {
    DI opval = ZEXTSIDI (ORSI (SRLSI (tmp_a, tmp_shamt), SLLSI (tmp_b, SUBSI (32, tmp_shamt))));
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
} else {
  {
    DI opval = ZEXTSIDI (tmp_a);
    SET_H_GPR (FLD (f_rd), opval);
    written |= (1 << 3);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* addwu: addwu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addwu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ZEXTSIDI (ADDSI (TRUNCDISI (GET_H_GPR (FLD (f_rs1))), TRUNCDISI (GET_H_GPR (FLD (f_rs2)))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* subwu: subwu ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,subwu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* addiwu: addiwu ${rd},${rs1},${imm-lo12} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addiwu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* addu.w: addu.w ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,addu_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* subu.w: subu.w ${rd},${rs1},${rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,subu_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* slliu.w: slliu.w ${rd},${rs1},${uimm7-267} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,slliu_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* flw: flw ${fl-rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,flw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (GETMEMSI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)))), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fsw: fsw ${fl-rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsw) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    SI opval = TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)])));
    SETMEMSI (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'x', opval);
  }

  return vpc;
#undef FLD
}

/* fmadd.s: fmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmadd_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_addend;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_addend = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs3)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->addsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->mulsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs), tmp_addend);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fmsub.s: fmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmsub_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_addend;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_addend = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs3)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->subsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->mulsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs), tmp_addend);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fnmsub.s: fnmsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmsub_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_addend;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_addend = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs3)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->addsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->mulsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->negsf (CGEN_CPU_FPU (current_cpu), tmp_lhs), tmp_rhs), tmp_addend);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fnmadd.s: fnmadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmadd_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_addend;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_addend = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs3)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->subsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->mulsf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->negsf (CGEN_CPU_FPU (current_cpu), tmp_lhs), tmp_rhs), tmp_addend);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fadd.s: fadd.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fadd_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->addsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsub.s: fsub.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsub_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->subsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fmul.s: fmul.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmul_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->mulsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fdiv.s: fdiv.s ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fdiv_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->divsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsgnj.s: fsgnj.s ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnj_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_lhs;
  DI tmp_rhs;
  DI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORDI (ANDDI (tmp_rhs, 0x80000000), ANDDI (tmp_lhs, MAKEDI (0xffffffff, 2147483647)));
  {
    DF opval = SUBWORDDIDF (ORDI (tmp_res, MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsgnjn.s: fsgnjn.s ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjn_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_lhs;
  SI tmp_rhs;
  SI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORSI (ANDSI (INVSI (tmp_rhs), 0x80000000), ANDSI (tmp_lhs, MAKEDI (0xffffffff, 2147483647)));
  {
    DF opval = SUBWORDDIDF (ORDI (tmp_res, MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsgnjx.s: fsgnjx.s ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjx_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SI tmp_lhs;
  SI tmp_rhs;
  SI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORSI (ANDSI (XORSI (tmp_lhs, tmp_rhs), 0x80000000), ANDSI (tmp_lhs, MAKEDI (0xffffffff, 2147483647)));
  {
    DF opval = SUBWORDDIDF (ORDI (tmp_res, MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fmin.s: fmin.s ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmin_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
if (CGEN_CPU_FPU (current_cpu)->ops->ltsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs)) {
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_lhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
} else {
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_rhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fmax.s: fmax.s ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmax_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
if (CGEN_CPU_FPU (current_cpu)->ops->gtsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs)) {
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_lhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
} else {
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_rhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* feq.s: feq.s ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,feq_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->eqsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* flt.s: flt.s ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,flt_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->ltsf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* fle.s: fle.s ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fle_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_rhs;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_rhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]))));
  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->lesf (CGEN_CPU_FPU (current_cpu), tmp_lhs, tmp_rhs);
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsqrt.s: fsqrt.s ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsqrt_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  SF tmp_res;
  tmp_lhs = SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
  tmp_res = CGEN_CPU_FPU (current_cpu)->ops->sqrtsf (CGEN_CPU_FPU (current_cpu), tmp_lhs);
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_res)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fcvt.w.s: fcvt.w.s ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_w_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (CGEN_CPU_FPU (current_cpu)->ops->fixsfsi (CGEN_CPU_FPU (current_cpu), 0, SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.wu.s: fcvt.wu.s ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = ZEXTSIDI (CGEN_CPU_FPU (current_cpu)->ops->ufixsfsi (CGEN_CPU_FPU (current_cpu), 0, SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fmv.x.w: fmv.x.w ${rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmv_x_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fclass.s: fclass.s ${rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fclass_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.s.w: fcvt.s.w ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  tmp_lhs = CGEN_CPU_FPU (current_cpu)->ops->floatsisf (CGEN_CPU_FPU (current_cpu), 0, TRUNCDISI (GET_H_GPR (FLD (f_rs1))));
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_lhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fcvt.s.wu: fcvt.s.wu ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_wu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  SF tmp_lhs;
  tmp_lhs = CGEN_CPU_FPU (current_cpu)->ops->ufloatsisf (CGEN_CPU_FPU (current_cpu), 0, TRUNCDISI (GET_H_GPR (FLD (f_rs1))));
  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (tmp_lhs)), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fmv.w.x: fmv.w.x ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmv_w_x) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (TRUNCDISI (GET_H_GPR (FLD (f_rs1)))), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.s.l: fcvt.s.l ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_l) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (CGEN_CPU_FPU (current_cpu)->ops->floatdisf (CGEN_CPU_FPU (current_cpu), 0, GET_H_GPR (FLD (f_rs1))))), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.s.lu: fcvt.s.lu ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_lu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = SUBWORDDIDF (ORDI (ZEXTSIDI (SUBWORDSFSI (CGEN_CPU_FPU (current_cpu)->ops->ufloatdisf (CGEN_CPU_FPU (current_cpu), 0, GET_H_GPR (FLD (f_rs1))))), MAKEDI (0xffffffff, 0)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.l.s: fcvt.l.s ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_l_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->fixsfdi (CGEN_CPU_FPU (current_cpu), 0, SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)])))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.lu.s: fcvt.lu.s ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->ufixsfdi (CGEN_CPU_FPU (current_cpu), 0, SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)])))));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fld: fld ${fl-rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fld) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = GETMEMDF (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_3112)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fsd: fsd ${fl-rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsd) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CPU (h_fpr[FLD (f_rs2)]);
    SETMEMDF (current_cpu, pc, ADDDI (GET_H_GPR (FLD (f_rs1)), FLD (f_imm12_317_115)), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "memory", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fmadd.d: fmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmadd_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->adddf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->muldf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)])), CPU (h_fpr[FLD (f_rs3)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fmsub.d: fmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmsub_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->subdf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->muldf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)])), CPU (h_fpr[FLD (f_rs3)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fnmsub.d: fnmsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmsub_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->adddf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->muldf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->negdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)])), CPU (h_fpr[FLD (f_rs2)])), CPU (h_fpr[FLD (f_rs3)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fnmadd.d: fnmadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmadd_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->subdf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->muldf (CGEN_CPU_FPU (current_cpu), CGEN_CPU_FPU (current_cpu)->ops->negdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)])), CPU (h_fpr[FLD (f_rs2)])), CPU (h_fpr[FLD (f_rs3)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fadd.d: fadd.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fadd_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->adddf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fsub.d: fsub.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsub_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->subdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fmul.d: fmul.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmul_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->muldf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fdiv.d: fdiv.d ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fdiv_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->divdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fsgnj.d: fsgnj.d ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnj_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_lhs;
  DI tmp_rhs;
  DI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORDI (ANDDI (tmp_rhs, MAKEDI (0x80000000, 0)), ANDDI (tmp_lhs, MAKEDI (2147483647, 0xffffffff)));
  {
    DF opval = SUBWORDDIDF (tmp_res);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsgnjn.d: fsgnjn.d ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjn_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_lhs;
  DI tmp_rhs;
  DI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORDI (ANDDI (INVDI (tmp_rhs), MAKEDI (0x80000000, 0)), ANDDI (tmp_lhs, MAKEDI (2147483647, 0xffffffff)));
  {
    DF opval = SUBWORDDIDF (tmp_res);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fsgnjx.d: fsgnjx.d ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjx_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

{
  DI tmp_lhs;
  DI tmp_rhs;
  DI tmp_res;
  tmp_lhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
  tmp_rhs = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs2)]));
  tmp_res = ORDI (ANDDI (XORDI (tmp_lhs, tmp_rhs), MAKEDI (0x80000000, 0)), ANDDI (tmp_lhs, MAKEDI (2147483647, 0xffffffff)));
  {
    DF opval = SUBWORDDIDF (tmp_res);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  return vpc;
#undef FLD
}

/* fmin.d: fmin.d ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmin_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (CGEN_CPU_FPU (current_cpu)->ops->ltdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]))) {
  {
    DF opval = CPU (h_fpr[FLD (f_rs1)]);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
} else {
  {
    DF opval = CPU (h_fpr[FLD (f_rs2)]);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* fmax.d: fmax.d ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmax_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

if (CGEN_CPU_FPU (current_cpu)->ops->gtdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]))) {
  {
    DF opval = CPU (h_fpr[FLD (f_rs1)]);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
} else {
  {
    DF opval = CPU (h_fpr[FLD (f_rs2)]);
    CPU (h_fpr[FLD (f_rd)]) = opval;
    written |= (1 << 2);
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }
}

  abuf->written = written;
  return vpc;
#undef FLD
}

/* feq.d: feq.d ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,feq_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->eqdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* flt.d: flt.d ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,flt_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->ltdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fle.d: fle.d ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fle_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_cmix.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->ledf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]), CPU (h_fpr[FLD (f_rs2)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fsqrt.d: fsqrt.d ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsqrt_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->sqrtdf (CGEN_CPU_FPU (current_cpu), CPU (h_fpr[FLD (f_rs1)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.w.d: fcvt.w.d ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_w_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (CGEN_CPU_FPU (current_cpu)->ops->fixdfsi (CGEN_CPU_FPU (current_cpu), 0, CPU (h_fpr[FLD (f_rs1)])));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.wu.d: fcvt.wu.d ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = EXTSIDI (CGEN_CPU_FPU (current_cpu)->ops->ufixdfsi (CGEN_CPU_FPU (current_cpu), 0, CPU (h_fpr[FLD (f_rs1)])));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fclass.d: fclass.d ${rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fclass_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.d.w: fcvt.d.w ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->floatsidf (CGEN_CPU_FPU (current_cpu), 0, TRUNCDISI (GET_H_GPR (FLD (f_rs1))));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.d.wu: fcvt.d.wu ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_wu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->ufloatsidf (CGEN_CPU_FPU (current_cpu), 0, TRUNCDISI (GET_H_GPR (FLD (f_rs1))));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.s.d: fcvt.s.d ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->ftruncdfsf (CGEN_CPU_FPU (current_cpu), 0, CPU (h_fpr[FLD (f_rs1)]));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.d.s: fcvt.d.s ${fl-rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->fextsfdf (CGEN_CPU_FPU (current_cpu), 0, SUBWORDSISF (TRUNCDISI (SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)])))));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.l.d: fcvt.l.d ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_l_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->fixdfdi (CGEN_CPU_FPU (current_cpu), 0, CPU (h_fpr[FLD (f_rs1)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.lu.d: fcvt.lu.d ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = CGEN_CPU_FPU (current_cpu)->ops->ufixdfdi (CGEN_CPU_FPU (current_cpu), 0, CPU (h_fpr[FLD (f_rs1)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fmv.x.d: fmv.x.d ${rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmv_x_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DI opval = SUBWORDDFDI (CPU (h_fpr[FLD (f_rs1)]));
    SET_H_GPR (FLD (f_rd), opval);
    CGEN_TRACE_RESULT (current_cpu, abuf, "gpr", 'D', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.d.l: fcvt.d.l ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_l) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->floatdidf (CGEN_CPU_FPU (current_cpu), 0, GET_H_GPR (FLD (f_rs1)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fcvt.d.lu: fcvt.d.lu ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_lu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = CGEN_CPU_FPU (current_cpu)->ops->ufloatdidf (CGEN_CPU_FPU (current_cpu), 0, GET_H_GPR (FLD (f_rs1)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* fmv.d.x: fmv.d.x ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmv_d_x) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_csrrw.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

  {
    DF opval = SUBWORDDIDF (GET_H_GPR (FLD (f_rs1)));
    CPU (h_fpr[FLD (f_rd)]) = opval;
    CGEN_TRACE_RESULT (current_cpu, abuf, "fpr", 'f', opval);
  }

  return vpc;
#undef FLD
}

/* flq: flq ${fl-rd},${imm-lo12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,flq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsq: fsq ${fl-rs2},${store12}(${rs1}) */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsq) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fmadd.q: fmadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmadd_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fmsub.q: fmsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmsub_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fnmsub.q: fnmsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmsub_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fnmadd.q: fnmadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rs3},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fnmadd_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fadd.q: fadd.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fadd_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsub.q: fsub.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsub_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fmul.q: fmul.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmul_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fdiv.q: fdiv.q ${fl-rd},${fl-rs1},${fl-rs2},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fdiv_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsgnj.q: fsgnj.q ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnj_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsgnjn.q: fsgnjn.q ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjn_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsgnjx.q: fsgnjx.q ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsgnjx_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fmin.q: fmin.q ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmin_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fmax.q: fmax.q ${fl-rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fmax_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* feq.q: feq.q ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,feq_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* flt.q: flt.q ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,flt_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fle.q: fle.q ${rd},${fl-rs1},${fl-rs2} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fle_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fsqrt.q: fsqrt.q ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fsqrt_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.w.q: fcvt.w.q ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_w_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.wu.q: fcvt.wu.q ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fclass.q: fclass.q ${rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fclass_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.w: fcvt.q.w ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_w) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.wu: fcvt.q.wu ${fl-rd},${rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_wu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.s.q: fcvt.s.q ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_s_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.d.q: fcvt.d.q ${fl-rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_d_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.s: fcvt.q.s ${fl-rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_s) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.d: fcvt.q.d ${fl-rd},${fl-rs1} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_d) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.l.q: fcvt.l.q ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_l_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.lu.q: fcvt.lu.q ${rd},${fl-rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_q) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.l: fcvt.q.l ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_l) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* fcvt.q.lu: fcvt.q.lu ${fl-rd},${rs1},${fl-rm} */

static SEM_PC
SEM_FN_NAME (riscv64bf_rv64,fcvt_q_lu) (SIM_CPU *current_cpu, SEM_ARG sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  ARGBUF *abuf = SEM_ARGBUF (sem_arg);
  int UNUSED written = 0;
  IADDR UNUSED pc = abuf->addr;
  SEM_PC vpc = SEM_NEXT_VPC (sem_arg, pc, 4);

((void) 0); /*nop*/

  return vpc;
#undef FLD
}

/* Table of all semantic fns.  */

static const struct sem_fn_desc sem_fns[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, SEM_FN_NAME (riscv64bf_rv64,x_invalid) },
  { RISCV64BF_RV64_INSN_X_AFTER, SEM_FN_NAME (riscv64bf_rv64,x_after) },
  { RISCV64BF_RV64_INSN_X_BEFORE, SEM_FN_NAME (riscv64bf_rv64,x_before) },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, SEM_FN_NAME (riscv64bf_rv64,x_cti_chain) },
  { RISCV64BF_RV64_INSN_X_CHAIN, SEM_FN_NAME (riscv64bf_rv64,x_chain) },
  { RISCV64BF_RV64_INSN_X_BEGIN, SEM_FN_NAME (riscv64bf_rv64,x_begin) },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, SEM_FN_NAME (riscv64bf_rv64,c_addi16sp) },
  { RISCV64BF_RV64_INSN_C_ADDI4SPN, SEM_FN_NAME (riscv64bf_rv64,c_addi4spn) },
  { RISCV64BF_RV64_INSN_C_NOP, SEM_FN_NAME (riscv64bf_rv64,c_nop) },
  { RISCV64BF_RV64_INSN_C_EBREAK, SEM_FN_NAME (riscv64bf_rv64,c_ebreak) },
  { RISCV64BF_RV64_INSN_C_UNIMP, SEM_FN_NAME (riscv64bf_rv64,c_unimp) },
  { RISCV64BF_RV64_INSN_C_JR, SEM_FN_NAME (riscv64bf_rv64,c_jr) },
  { RISCV64BF_RV64_INSN_C_JALR, SEM_FN_NAME (riscv64bf_rv64,c_jalr) },
  { RISCV64BF_RV64_INSN_C_MV, SEM_FN_NAME (riscv64bf_rv64,c_mv) },
  { RISCV64BF_RV64_INSN_C_ADD, SEM_FN_NAME (riscv64bf_rv64,c_add) },
  { RISCV64BF_RV64_INSN_C_AND, SEM_FN_NAME (riscv64bf_rv64,c_and) },
  { RISCV64BF_RV64_INSN_C_OR, SEM_FN_NAME (riscv64bf_rv64,c_or) },
  { RISCV64BF_RV64_INSN_C_XOR, SEM_FN_NAME (riscv64bf_rv64,c_xor) },
  { RISCV64BF_RV64_INSN_C_SUB, SEM_FN_NAME (riscv64bf_rv64,c_sub) },
  { RISCV64BF_RV64_INSN_C_LI, SEM_FN_NAME (riscv64bf_rv64,c_li) },
  { RISCV64BF_RV64_INSN_C_LUI, SEM_FN_NAME (riscv64bf_rv64,c_lui) },
  { RISCV64BF_RV64_INSN_C_ADDI, SEM_FN_NAME (riscv64bf_rv64,c_addi) },
  { RISCV64BF_RV64_INSN_C_SLLI, SEM_FN_NAME (riscv64bf_rv64,c_slli) },
  { RISCV64BF_RV64_INSN_C_LWSP, SEM_FN_NAME (riscv64bf_rv64,c_lwsp) },
  { RISCV64BF_RV64_INSN_C_SWSP, SEM_FN_NAME (riscv64bf_rv64,c_swsp) },
  { RISCV64BF_RV64_INSN_C_LW, SEM_FN_NAME (riscv64bf_rv64,c_lw) },
  { RISCV64BF_RV64_INSN_C_SW, SEM_FN_NAME (riscv64bf_rv64,c_sw) },
  { RISCV64BF_RV64_INSN_C_SRLI, SEM_FN_NAME (riscv64bf_rv64,c_srli) },
  { RISCV64BF_RV64_INSN_C_SRAI, SEM_FN_NAME (riscv64bf_rv64,c_srai) },
  { RISCV64BF_RV64_INSN_C_ANDI, SEM_FN_NAME (riscv64bf_rv64,c_andi) },
  { RISCV64BF_RV64_INSN_C_BEQZ, SEM_FN_NAME (riscv64bf_rv64,c_beqz) },
  { RISCV64BF_RV64_INSN_C_BNEZ, SEM_FN_NAME (riscv64bf_rv64,c_bnez) },
  { RISCV64BF_RV64_INSN_C_J, SEM_FN_NAME (riscv64bf_rv64,c_j) },
  { RISCV64BF_RV64_INSN_C_SLLI64, SEM_FN_NAME (riscv64bf_rv64,c_slli64) },
  { RISCV64BF_RV64_INSN_C_SRLI64, SEM_FN_NAME (riscv64bf_rv64,c_srli64) },
  { RISCV64BF_RV64_INSN_C_SRAI64, SEM_FN_NAME (riscv64bf_rv64,c_srai64) },
  { RISCV64BF_RV64_INSN_C_ADDW, SEM_FN_NAME (riscv64bf_rv64,c_addw) },
  { RISCV64BF_RV64_INSN_C_SUBW, SEM_FN_NAME (riscv64bf_rv64,c_subw) },
  { RISCV64BF_RV64_INSN_C_ADDIW, SEM_FN_NAME (riscv64bf_rv64,c_addiw) },
  { RISCV64BF_RV64_INSN_C_LDSP, SEM_FN_NAME (riscv64bf_rv64,c_ldsp) },
  { RISCV64BF_RV64_INSN_C_SDSP, SEM_FN_NAME (riscv64bf_rv64,c_sdsp) },
  { RISCV64BF_RV64_INSN_C_LD, SEM_FN_NAME (riscv64bf_rv64,c_ld) },
  { RISCV64BF_RV64_INSN_C_SD, SEM_FN_NAME (riscv64bf_rv64,c_sd) },
  { RISCV64BF_RV64_INSN_C_FLDSP, SEM_FN_NAME (riscv64bf_rv64,c_fldsp) },
  { RISCV64BF_RV64_INSN_C_FSDSP, SEM_FN_NAME (riscv64bf_rv64,c_fsdsp) },
  { RISCV64BF_RV64_INSN_C_FSD, SEM_FN_NAME (riscv64bf_rv64,c_fsd) },
  { RISCV64BF_RV64_INSN_C_FLD, SEM_FN_NAME (riscv64bf_rv64,c_fld) },
  { RISCV64BF_RV64_INSN_LUI, SEM_FN_NAME (riscv64bf_rv64,lui) },
  { RISCV64BF_RV64_INSN_AUIPC, SEM_FN_NAME (riscv64bf_rv64,auipc) },
  { RISCV64BF_RV64_INSN_JAL, SEM_FN_NAME (riscv64bf_rv64,jal) },
  { RISCV64BF_RV64_INSN_JALR, SEM_FN_NAME (riscv64bf_rv64,jalr) },
  { RISCV64BF_RV64_INSN_BEQ, SEM_FN_NAME (riscv64bf_rv64,beq) },
  { RISCV64BF_RV64_INSN_BNE, SEM_FN_NAME (riscv64bf_rv64,bne) },
  { RISCV64BF_RV64_INSN_BLT, SEM_FN_NAME (riscv64bf_rv64,blt) },
  { RISCV64BF_RV64_INSN_BGE, SEM_FN_NAME (riscv64bf_rv64,bge) },
  { RISCV64BF_RV64_INSN_BLTU, SEM_FN_NAME (riscv64bf_rv64,bltu) },
  { RISCV64BF_RV64_INSN_BGEU, SEM_FN_NAME (riscv64bf_rv64,bgeu) },
  { RISCV64BF_RV64_INSN_LB, SEM_FN_NAME (riscv64bf_rv64,lb) },
  { RISCV64BF_RV64_INSN_LH, SEM_FN_NAME (riscv64bf_rv64,lh) },
  { RISCV64BF_RV64_INSN_LW, SEM_FN_NAME (riscv64bf_rv64,lw) },
  { RISCV64BF_RV64_INSN_LBU, SEM_FN_NAME (riscv64bf_rv64,lbu) },
  { RISCV64BF_RV64_INSN_LHU, SEM_FN_NAME (riscv64bf_rv64,lhu) },
  { RISCV64BF_RV64_INSN_SB, SEM_FN_NAME (riscv64bf_rv64,sb) },
  { RISCV64BF_RV64_INSN_SH, SEM_FN_NAME (riscv64bf_rv64,sh) },
  { RISCV64BF_RV64_INSN_SW, SEM_FN_NAME (riscv64bf_rv64,sw) },
  { RISCV64BF_RV64_INSN_ADDI, SEM_FN_NAME (riscv64bf_rv64,addi) },
  { RISCV64BF_RV64_INSN_SLTI, SEM_FN_NAME (riscv64bf_rv64,slti) },
  { RISCV64BF_RV64_INSN_SLTIU, SEM_FN_NAME (riscv64bf_rv64,sltiu) },
  { RISCV64BF_RV64_INSN_XORI, SEM_FN_NAME (riscv64bf_rv64,xori) },
  { RISCV64BF_RV64_INSN_ORI, SEM_FN_NAME (riscv64bf_rv64,ori) },
  { RISCV64BF_RV64_INSN_ANDI, SEM_FN_NAME (riscv64bf_rv64,andi) },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,slli_shift5) },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,srli_shift5) },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,srai_shift5) },
  { RISCV64BF_RV64_INSN_ADD, SEM_FN_NAME (riscv64bf_rv64,add) },
  { RISCV64BF_RV64_INSN_SUB, SEM_FN_NAME (riscv64bf_rv64,sub) },
  { RISCV64BF_RV64_INSN_SLL, SEM_FN_NAME (riscv64bf_rv64,sll) },
  { RISCV64BF_RV64_INSN_SLT, SEM_FN_NAME (riscv64bf_rv64,slt) },
  { RISCV64BF_RV64_INSN_SLTU, SEM_FN_NAME (riscv64bf_rv64,sltu) },
  { RISCV64BF_RV64_INSN_XOR, SEM_FN_NAME (riscv64bf_rv64,xor) },
  { RISCV64BF_RV64_INSN_SRL, SEM_FN_NAME (riscv64bf_rv64,srl) },
  { RISCV64BF_RV64_INSN_SRA, SEM_FN_NAME (riscv64bf_rv64,sra) },
  { RISCV64BF_RV64_INSN_OR, SEM_FN_NAME (riscv64bf_rv64,or) },
  { RISCV64BF_RV64_INSN_AND, SEM_FN_NAME (riscv64bf_rv64,and) },
  { RISCV64BF_RV64_INSN_FENCE, SEM_FN_NAME (riscv64bf_rv64,fence) },
  { RISCV64BF_RV64_INSN_SFENCE_VM, SEM_FN_NAME (riscv64bf_rv64,sfence_vm) },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, SEM_FN_NAME (riscv64bf_rv64,sfence_vma) },
  { RISCV64BF_RV64_INSN_FENCE_TSO, SEM_FN_NAME (riscv64bf_rv64,fence_tso) },
  { RISCV64BF_RV64_INSN_FENCE_I, SEM_FN_NAME (riscv64bf_rv64,fence_i) },
  { RISCV64BF_RV64_INSN_ECALL, SEM_FN_NAME (riscv64bf_rv64,ecall) },
  { RISCV64BF_RV64_INSN_EBREAK, SEM_FN_NAME (riscv64bf_rv64,ebreak) },
  { RISCV64BF_RV64_INSN_CSRRW, SEM_FN_NAME (riscv64bf_rv64,csrrw) },
  { RISCV64BF_RV64_INSN_CSRRS, SEM_FN_NAME (riscv64bf_rv64,csrrs) },
  { RISCV64BF_RV64_INSN_CSRRC, SEM_FN_NAME (riscv64bf_rv64,csrrc) },
  { RISCV64BF_RV64_INSN_CSRRWI, SEM_FN_NAME (riscv64bf_rv64,csrrwi) },
  { RISCV64BF_RV64_INSN_CSRRSI, SEM_FN_NAME (riscv64bf_rv64,csrrsi) },
  { RISCV64BF_RV64_INSN_CSRRCI, SEM_FN_NAME (riscv64bf_rv64,csrrci) },
  { RISCV64BF_RV64_INSN_URET, SEM_FN_NAME (riscv64bf_rv64,uret) },
  { RISCV64BF_RV64_INSN_SRET, SEM_FN_NAME (riscv64bf_rv64,sret) },
  { RISCV64BF_RV64_INSN_HRET, SEM_FN_NAME (riscv64bf_rv64,hret) },
  { RISCV64BF_RV64_INSN_MRET, SEM_FN_NAME (riscv64bf_rv64,mret) },
  { RISCV64BF_RV64_INSN_DRET, SEM_FN_NAME (riscv64bf_rv64,dret) },
  { RISCV64BF_RV64_INSN_WFI, SEM_FN_NAME (riscv64bf_rv64,wfi) },
  { RISCV64BF_RV64_INSN_LWU, SEM_FN_NAME (riscv64bf_rv64,lwu) },
  { RISCV64BF_RV64_INSN_LD, SEM_FN_NAME (riscv64bf_rv64,ld) },
  { RISCV64BF_RV64_INSN_SD, SEM_FN_NAME (riscv64bf_rv64,sd) },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,slli_shift6) },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,srli_shift6) },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,srai_shift6) },
  { RISCV64BF_RV64_INSN_ADDIW, SEM_FN_NAME (riscv64bf_rv64,addiw) },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,slliw_shift5) },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,srliw_shift5) },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sraiw_shift5) },
  { RISCV64BF_RV64_INSN_ADDW, SEM_FN_NAME (riscv64bf_rv64,addw) },
  { RISCV64BF_RV64_INSN_SUBW, SEM_FN_NAME (riscv64bf_rv64,subw) },
  { RISCV64BF_RV64_INSN_SLLW, SEM_FN_NAME (riscv64bf_rv64,sllw) },
  { RISCV64BF_RV64_INSN_SRLW, SEM_FN_NAME (riscv64bf_rv64,srlw) },
  { RISCV64BF_RV64_INSN_SRAW, SEM_FN_NAME (riscv64bf_rv64,sraw) },
  { RISCV64BF_RV64_INSN_MUL, SEM_FN_NAME (riscv64bf_rv64,mul) },
  { RISCV64BF_RV64_INSN_MULH, SEM_FN_NAME (riscv64bf_rv64,mulh) },
  { RISCV64BF_RV64_INSN_MULHSU, SEM_FN_NAME (riscv64bf_rv64,mulhsu) },
  { RISCV64BF_RV64_INSN_MULHU, SEM_FN_NAME (riscv64bf_rv64,mulhu) },
  { RISCV64BF_RV64_INSN_DIV, SEM_FN_NAME (riscv64bf_rv64,div) },
  { RISCV64BF_RV64_INSN_DIVU, SEM_FN_NAME (riscv64bf_rv64,divu) },
  { RISCV64BF_RV64_INSN_REM, SEM_FN_NAME (riscv64bf_rv64,rem) },
  { RISCV64BF_RV64_INSN_REMU, SEM_FN_NAME (riscv64bf_rv64,remu) },
  { RISCV64BF_RV64_INSN_MULW, SEM_FN_NAME (riscv64bf_rv64,mulw) },
  { RISCV64BF_RV64_INSN_DIVW, SEM_FN_NAME (riscv64bf_rv64,divw) },
  { RISCV64BF_RV64_INSN_DIVUW, SEM_FN_NAME (riscv64bf_rv64,divuw) },
  { RISCV64BF_RV64_INSN_REMW, SEM_FN_NAME (riscv64bf_rv64,remw) },
  { RISCV64BF_RV64_INSN_REMUW, SEM_FN_NAME (riscv64bf_rv64,remuw) },
  { RISCV64BF_RV64_INSN_LR_W, SEM_FN_NAME (riscv64bf_rv64,lr_w) },
  { RISCV64BF_RV64_INSN_LR_W_AQ, SEM_FN_NAME (riscv64bf_rv64,lr_w_aq) },
  { RISCV64BF_RV64_INSN_LR_W_RL, SEM_FN_NAME (riscv64bf_rv64,lr_w_rl) },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,lr_w_aqrl) },
  { RISCV64BF_RV64_INSN_SC_W, SEM_FN_NAME (riscv64bf_rv64,sc_w) },
  { RISCV64BF_RV64_INSN_SC_W_AQ, SEM_FN_NAME (riscv64bf_rv64,sc_w_aq) },
  { RISCV64BF_RV64_INSN_SC_W_RL, SEM_FN_NAME (riscv64bf_rv64,sc_w_rl) },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,sc_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, SEM_FN_NAME (riscv64bf_rv64,amoswap_w) },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amoswap_w_aq) },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, SEM_FN_NAME (riscv64bf_rv64,amoswap_w_rl) },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoswap_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOADD_W, SEM_FN_NAME (riscv64bf_rv64,amoadd_w) },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amoadd_w_aq) },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, SEM_FN_NAME (riscv64bf_rv64,amoadd_w_rl) },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoadd_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOXOR_W, SEM_FN_NAME (riscv64bf_rv64,amoxor_w) },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amoxor_w_aq) },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, SEM_FN_NAME (riscv64bf_rv64,amoxor_w_rl) },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoxor_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOAND_W, SEM_FN_NAME (riscv64bf_rv64,amoand_w) },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amoand_w_aq) },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, SEM_FN_NAME (riscv64bf_rv64,amoand_w_rl) },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoand_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOOR_W, SEM_FN_NAME (riscv64bf_rv64,amoor_w) },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amoor_w_aq) },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, SEM_FN_NAME (riscv64bf_rv64,amoor_w_rl) },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoor_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMIN_W, SEM_FN_NAME (riscv64bf_rv64,amomin_w) },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amomin_w_aq) },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, SEM_FN_NAME (riscv64bf_rv64,amomin_w_rl) },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomin_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMAX_W, SEM_FN_NAME (riscv64bf_rv64,amomax_w) },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amomax_w_aq) },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, SEM_FN_NAME (riscv64bf_rv64,amomax_w_rl) },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomax_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMINU_W, SEM_FN_NAME (riscv64bf_rv64,amominu_w) },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amominu_w_aq) },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, SEM_FN_NAME (riscv64bf_rv64,amominu_w_rl) },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amominu_w_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, SEM_FN_NAME (riscv64bf_rv64,amomaxu_w) },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_aq) },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_rl) },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomaxu_w_aqrl) },
  { RISCV64BF_RV64_INSN_LR_D, SEM_FN_NAME (riscv64bf_rv64,lr_d) },
  { RISCV64BF_RV64_INSN_LR_D_AQ, SEM_FN_NAME (riscv64bf_rv64,lr_d_aq) },
  { RISCV64BF_RV64_INSN_LR_D_RL, SEM_FN_NAME (riscv64bf_rv64,lr_d_rl) },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,lr_d_aqrl) },
  { RISCV64BF_RV64_INSN_SC_D, SEM_FN_NAME (riscv64bf_rv64,sc_d) },
  { RISCV64BF_RV64_INSN_SC_D_AQ, SEM_FN_NAME (riscv64bf_rv64,sc_d_aq) },
  { RISCV64BF_RV64_INSN_SC_D_RL, SEM_FN_NAME (riscv64bf_rv64,sc_d_rl) },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,sc_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, SEM_FN_NAME (riscv64bf_rv64,amoswap_d) },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amoswap_d_aq) },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, SEM_FN_NAME (riscv64bf_rv64,amoswap_d_rl) },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoswap_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOADD_D, SEM_FN_NAME (riscv64bf_rv64,amoadd_d) },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amoadd_d_aq) },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, SEM_FN_NAME (riscv64bf_rv64,amoadd_d_rl) },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoadd_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOXOR_D, SEM_FN_NAME (riscv64bf_rv64,amoxor_d) },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amoxor_d_aq) },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, SEM_FN_NAME (riscv64bf_rv64,amoxor_d_rl) },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoxor_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOAND_D, SEM_FN_NAME (riscv64bf_rv64,amoand_d) },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amoand_d_aq) },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, SEM_FN_NAME (riscv64bf_rv64,amoand_d_rl) },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoand_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOOR_D, SEM_FN_NAME (riscv64bf_rv64,amoor_d) },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amoor_d_aq) },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, SEM_FN_NAME (riscv64bf_rv64,amoor_d_rl) },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amoor_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMIN_D, SEM_FN_NAME (riscv64bf_rv64,amomin_d) },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amomin_d_aq) },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, SEM_FN_NAME (riscv64bf_rv64,amomin_d_rl) },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomin_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMAX_D, SEM_FN_NAME (riscv64bf_rv64,amomax_d) },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amomax_d_aq) },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, SEM_FN_NAME (riscv64bf_rv64,amomax_d_rl) },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomax_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMINU_D, SEM_FN_NAME (riscv64bf_rv64,amominu_d) },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amominu_d_aq) },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, SEM_FN_NAME (riscv64bf_rv64,amominu_d_rl) },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amominu_d_aqrl) },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, SEM_FN_NAME (riscv64bf_rv64,amomaxu_d) },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_aq) },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_rl) },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, SEM_FN_NAME (riscv64bf_rv64,amomaxu_d_aqrl) },
  { RISCV64BF_RV64_INSN_CLZ, SEM_FN_NAME (riscv64bf_rv64,clz) },
  { RISCV64BF_RV64_INSN_CTZ, SEM_FN_NAME (riscv64bf_rv64,ctz) },
  { RISCV64BF_RV64_INSN_CLZW, SEM_FN_NAME (riscv64bf_rv64,clzw) },
  { RISCV64BF_RV64_INSN_CTZW, SEM_FN_NAME (riscv64bf_rv64,ctzw) },
  { RISCV64BF_RV64_INSN_PCNT, SEM_FN_NAME (riscv64bf_rv64,pcnt) },
  { RISCV64BF_RV64_INSN_PCNTW, SEM_FN_NAME (riscv64bf_rv64,pcntw) },
  { RISCV64BF_RV64_INSN_ANDN, SEM_FN_NAME (riscv64bf_rv64,andn) },
  { RISCV64BF_RV64_INSN_ORN, SEM_FN_NAME (riscv64bf_rv64,orn) },
  { RISCV64BF_RV64_INSN_XNOR, SEM_FN_NAME (riscv64bf_rv64,xnor) },
  { RISCV64BF_RV64_INSN_PACK, SEM_FN_NAME (riscv64bf_rv64,pack) },
  { RISCV64BF_RV64_INSN_PACKW, SEM_FN_NAME (riscv64bf_rv64,packw) },
  { RISCV64BF_RV64_INSN_MIN, SEM_FN_NAME (riscv64bf_rv64,min) },
  { RISCV64BF_RV64_INSN_MAX, SEM_FN_NAME (riscv64bf_rv64,max) },
  { RISCV64BF_RV64_INSN_MINU, SEM_FN_NAME (riscv64bf_rv64,minu) },
  { RISCV64BF_RV64_INSN_MAXU, SEM_FN_NAME (riscv64bf_rv64,maxu) },
  { RISCV64BF_RV64_INSN_SBSET, SEM_FN_NAME (riscv64bf_rv64,sbset) },
  { RISCV64BF_RV64_INSN_SBCLR, SEM_FN_NAME (riscv64bf_rv64,sbclr) },
  { RISCV64BF_RV64_INSN_SBINV, SEM_FN_NAME (riscv64bf_rv64,sbinv) },
  { RISCV64BF_RV64_INSN_SBEXT, SEM_FN_NAME (riscv64bf_rv64,sbext) },
  { RISCV64BF_RV64_INSN_SBSETI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sbseti_shift5) },
  { RISCV64BF_RV64_INSN_SBSETI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sbseti_shift6) },
  { RISCV64BF_RV64_INSN_SBCLRI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sbclri_shift5) },
  { RISCV64BF_RV64_INSN_SBCLRI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sbclri_shift6) },
  { RISCV64BF_RV64_INSN_SBINVI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sbinvi_shift5) },
  { RISCV64BF_RV64_INSN_SBINVI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sbinvi_shift6) },
  { RISCV64BF_RV64_INSN_SBEXTI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sbexti_shift5) },
  { RISCV64BF_RV64_INSN_SBEXTI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sbexti_shift6) },
  { RISCV64BF_RV64_INSN_SBSETW, SEM_FN_NAME (riscv64bf_rv64,sbsetw) },
  { RISCV64BF_RV64_INSN_SBCLRW, SEM_FN_NAME (riscv64bf_rv64,sbclrw) },
  { RISCV64BF_RV64_INSN_SBINVW, SEM_FN_NAME (riscv64bf_rv64,sbinvw) },
  { RISCV64BF_RV64_INSN_SBEXTW, SEM_FN_NAME (riscv64bf_rv64,sbextw) },
  { RISCV64BF_RV64_INSN_SBSETIW, SEM_FN_NAME (riscv64bf_rv64,sbsetiw) },
  { RISCV64BF_RV64_INSN_SBCLRIW, SEM_FN_NAME (riscv64bf_rv64,sbclriw) },
  { RISCV64BF_RV64_INSN_SBINVIW, SEM_FN_NAME (riscv64bf_rv64,sbinviw) },
  { RISCV64BF_RV64_INSN_SLO, SEM_FN_NAME (riscv64bf_rv64,slo) },
  { RISCV64BF_RV64_INSN_SRO, SEM_FN_NAME (riscv64bf_rv64,sro) },
  { RISCV64BF_RV64_INSN_SLOI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sloi_shift5) },
  { RISCV64BF_RV64_INSN_SLOI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sloi_shift6) },
  { RISCV64BF_RV64_INSN_SROI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,sroi_shift5) },
  { RISCV64BF_RV64_INSN_SROI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,sroi_shift6) },
  { RISCV64BF_RV64_INSN_SLOW, SEM_FN_NAME (riscv64bf_rv64,slow) },
  { RISCV64BF_RV64_INSN_SROW, SEM_FN_NAME (riscv64bf_rv64,srow) },
  { RISCV64BF_RV64_INSN_SLOIW, SEM_FN_NAME (riscv64bf_rv64,sloiw) },
  { RISCV64BF_RV64_INSN_SROIW, SEM_FN_NAME (riscv64bf_rv64,sroiw) },
  { RISCV64BF_RV64_INSN_ROL, SEM_FN_NAME (riscv64bf_rv64,rol) },
  { RISCV64BF_RV64_INSN_ROR, SEM_FN_NAME (riscv64bf_rv64,ror) },
  { RISCV64BF_RV64_INSN_RORI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,rori_shift5) },
  { RISCV64BF_RV64_INSN_RORI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,rori_shift6) },
  { RISCV64BF_RV64_INSN_ROLW, SEM_FN_NAME (riscv64bf_rv64,rolw) },
  { RISCV64BF_RV64_INSN_RORW, SEM_FN_NAME (riscv64bf_rv64,rorw) },
  { RISCV64BF_RV64_INSN_RORIW, SEM_FN_NAME (riscv64bf_rv64,roriw) },
  { RISCV64BF_RV64_INSN_GREV, SEM_FN_NAME (riscv64bf_rv64,grev) },
  { RISCV64BF_RV64_INSN_GREVI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,grevi_shift5) },
  { RISCV64BF_RV64_INSN_GREVI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,grevi_shift6) },
  { RISCV64BF_RV64_INSN_GREVW, SEM_FN_NAME (riscv64bf_rv64,grevw) },
  { RISCV64BF_RV64_INSN_GREVIW, SEM_FN_NAME (riscv64bf_rv64,greviw) },
  { RISCV64BF_RV64_INSN_SHFL, SEM_FN_NAME (riscv64bf_rv64,shfl) },
  { RISCV64BF_RV64_INSN_UNSHFL, SEM_FN_NAME (riscv64bf_rv64,unshfl) },
  { RISCV64BF_RV64_INSN_SHFLI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,shfli_shift5) },
  { RISCV64BF_RV64_INSN_SHFLI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,shfli_shift6) },
  { RISCV64BF_RV64_INSN_UNSHFLI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,unshfli_shift5) },
  { RISCV64BF_RV64_INSN_UNSHFLI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,unshfli_shift6) },
  { RISCV64BF_RV64_INSN_SHFLW, SEM_FN_NAME (riscv64bf_rv64,shflw) },
  { RISCV64BF_RV64_INSN_UNSHFLW, SEM_FN_NAME (riscv64bf_rv64,unshflw) },
  { RISCV64BF_RV64_INSN_GORC, SEM_FN_NAME (riscv64bf_rv64,gorc) },
  { RISCV64BF_RV64_INSN_GORCI_SHIFT5, SEM_FN_NAME (riscv64bf_rv64,gorci_shift5) },
  { RISCV64BF_RV64_INSN_GORCI_SHIFT6, SEM_FN_NAME (riscv64bf_rv64,gorci_shift6) },
  { RISCV64BF_RV64_INSN_GORCW, SEM_FN_NAME (riscv64bf_rv64,gorcw) },
  { RISCV64BF_RV64_INSN_GORCIW, SEM_FN_NAME (riscv64bf_rv64,gorciw) },
  { RISCV64BF_RV64_INSN_BFP, SEM_FN_NAME (riscv64bf_rv64,bfp) },
  { RISCV64BF_RV64_INSN_BFPW, SEM_FN_NAME (riscv64bf_rv64,bfpw) },
  { RISCV64BF_RV64_INSN_BEXT, SEM_FN_NAME (riscv64bf_rv64,bext) },
  { RISCV64BF_RV64_INSN_BDEP, SEM_FN_NAME (riscv64bf_rv64,bdep) },
  { RISCV64BF_RV64_INSN_BEXTW, SEM_FN_NAME (riscv64bf_rv64,bextw) },
  { RISCV64BF_RV64_INSN_BDEPW, SEM_FN_NAME (riscv64bf_rv64,bdepw) },
  { RISCV64BF_RV64_INSN_CLMUL, SEM_FN_NAME (riscv64bf_rv64,clmul) },
  { RISCV64BF_RV64_INSN_CLMULH, SEM_FN_NAME (riscv64bf_rv64,clmulh) },
  { RISCV64BF_RV64_INSN_CLMULR, SEM_FN_NAME (riscv64bf_rv64,clmulr) },
  { RISCV64BF_RV64_INSN_CLMULW, SEM_FN_NAME (riscv64bf_rv64,clmulw) },
  { RISCV64BF_RV64_INSN_CLMULHW, SEM_FN_NAME (riscv64bf_rv64,clmulhw) },
  { RISCV64BF_RV64_INSN_CLMULRW, SEM_FN_NAME (riscv64bf_rv64,clmulrw) },
  { RISCV64BF_RV64_INSN_CRC32_B, SEM_FN_NAME (riscv64bf_rv64,crc32_b) },
  { RISCV64BF_RV64_INSN_CRC32_H, SEM_FN_NAME (riscv64bf_rv64,crc32_h) },
  { RISCV64BF_RV64_INSN_CRC32_W, SEM_FN_NAME (riscv64bf_rv64,crc32_w) },
  { RISCV64BF_RV64_INSN_CRC32C_B, SEM_FN_NAME (riscv64bf_rv64,crc32c_b) },
  { RISCV64BF_RV64_INSN_CRC32C_H, SEM_FN_NAME (riscv64bf_rv64,crc32c_h) },
  { RISCV64BF_RV64_INSN_CRC32C_W, SEM_FN_NAME (riscv64bf_rv64,crc32c_w) },
  { RISCV64BF_RV64_INSN_CRC32_D, SEM_FN_NAME (riscv64bf_rv64,crc32_d) },
  { RISCV64BF_RV64_INSN_CRC32C_D, SEM_FN_NAME (riscv64bf_rv64,crc32c_d) },
  { RISCV64BF_RV64_INSN_BMATOR, SEM_FN_NAME (riscv64bf_rv64,bmator) },
  { RISCV64BF_RV64_INSN_BMATXOR, SEM_FN_NAME (riscv64bf_rv64,bmatxor) },
  { RISCV64BF_RV64_INSN_BMATFLIP, SEM_FN_NAME (riscv64bf_rv64,bmatflip) },
  { RISCV64BF_RV64_INSN_CMIX, SEM_FN_NAME (riscv64bf_rv64,cmix) },
  { RISCV64BF_RV64_INSN_CMOV, SEM_FN_NAME (riscv64bf_rv64,cmov) },
  { RISCV64BF_RV64_INSN_FSL, SEM_FN_NAME (riscv64bf_rv64,fsl) },
  { RISCV64BF_RV64_INSN_FSR, SEM_FN_NAME (riscv64bf_rv64,fsr) },
  { RISCV64BF_RV64_INSN_FSRI, SEM_FN_NAME (riscv64bf_rv64,fsri) },
  { RISCV64BF_RV64_INSN_FSLW, SEM_FN_NAME (riscv64bf_rv64,fslw) },
  { RISCV64BF_RV64_INSN_FSRW, SEM_FN_NAME (riscv64bf_rv64,fsrw) },
  { RISCV64BF_RV64_INSN_FSRIW, SEM_FN_NAME (riscv64bf_rv64,fsriw) },
  { RISCV64BF_RV64_INSN_ADDWU, SEM_FN_NAME (riscv64bf_rv64,addwu) },
  { RISCV64BF_RV64_INSN_SUBWU, SEM_FN_NAME (riscv64bf_rv64,subwu) },
  { RISCV64BF_RV64_INSN_ADDIWU, SEM_FN_NAME (riscv64bf_rv64,addiwu) },
  { RISCV64BF_RV64_INSN_ADDU_W, SEM_FN_NAME (riscv64bf_rv64,addu_w) },
  { RISCV64BF_RV64_INSN_SUBU_W, SEM_FN_NAME (riscv64bf_rv64,subu_w) },
  { RISCV64BF_RV64_INSN_SLLIU_W, SEM_FN_NAME (riscv64bf_rv64,slliu_w) },
  { RISCV64BF_RV64_INSN_FLW, SEM_FN_NAME (riscv64bf_rv64,flw) },
  { RISCV64BF_RV64_INSN_FSW, SEM_FN_NAME (riscv64bf_rv64,fsw) },
  { RISCV64BF_RV64_INSN_FMADD_S, SEM_FN_NAME (riscv64bf_rv64,fmadd_s) },
  { RISCV64BF_RV64_INSN_FMSUB_S, SEM_FN_NAME (riscv64bf_rv64,fmsub_s) },
  { RISCV64BF_RV64_INSN_FNMSUB_S, SEM_FN_NAME (riscv64bf_rv64,fnmsub_s) },
  { RISCV64BF_RV64_INSN_FNMADD_S, SEM_FN_NAME (riscv64bf_rv64,fnmadd_s) },
  { RISCV64BF_RV64_INSN_FADD_S, SEM_FN_NAME (riscv64bf_rv64,fadd_s) },
  { RISCV64BF_RV64_INSN_FSUB_S, SEM_FN_NAME (riscv64bf_rv64,fsub_s) },
  { RISCV64BF_RV64_INSN_FMUL_S, SEM_FN_NAME (riscv64bf_rv64,fmul_s) },
  { RISCV64BF_RV64_INSN_FDIV_S, SEM_FN_NAME (riscv64bf_rv64,fdiv_s) },
  { RISCV64BF_RV64_INSN_FSGNJ_S, SEM_FN_NAME (riscv64bf_rv64,fsgnj_s) },
  { RISCV64BF_RV64_INSN_FSGNJN_S, SEM_FN_NAME (riscv64bf_rv64,fsgnjn_s) },
  { RISCV64BF_RV64_INSN_FSGNJX_S, SEM_FN_NAME (riscv64bf_rv64,fsgnjx_s) },
  { RISCV64BF_RV64_INSN_FMIN_S, SEM_FN_NAME (riscv64bf_rv64,fmin_s) },
  { RISCV64BF_RV64_INSN_FMAX_S, SEM_FN_NAME (riscv64bf_rv64,fmax_s) },
  { RISCV64BF_RV64_INSN_FEQ_S, SEM_FN_NAME (riscv64bf_rv64,feq_s) },
  { RISCV64BF_RV64_INSN_FLT_S, SEM_FN_NAME (riscv64bf_rv64,flt_s) },
  { RISCV64BF_RV64_INSN_FLE_S, SEM_FN_NAME (riscv64bf_rv64,fle_s) },
  { RISCV64BF_RV64_INSN_FSQRT_S, SEM_FN_NAME (riscv64bf_rv64,fsqrt_s) },
  { RISCV64BF_RV64_INSN_FCVT_W_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_w_s) },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_s) },
  { RISCV64BF_RV64_INSN_FMV_X_W, SEM_FN_NAME (riscv64bf_rv64,fmv_x_w) },
  { RISCV64BF_RV64_INSN_FCLASS_S, SEM_FN_NAME (riscv64bf_rv64,fclass_s) },
  { RISCV64BF_RV64_INSN_FCVT_S_W, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_w) },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_wu) },
  { RISCV64BF_RV64_INSN_FMV_W_X, SEM_FN_NAME (riscv64bf_rv64,fmv_w_x) },
  { RISCV64BF_RV64_INSN_FCVT_S_L, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_l) },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_lu) },
  { RISCV64BF_RV64_INSN_FCVT_L_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_l_s) },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_s) },
  { RISCV64BF_RV64_INSN_FLD, SEM_FN_NAME (riscv64bf_rv64,fld) },
  { RISCV64BF_RV64_INSN_FSD, SEM_FN_NAME (riscv64bf_rv64,fsd) },
  { RISCV64BF_RV64_INSN_FMADD_D, SEM_FN_NAME (riscv64bf_rv64,fmadd_d) },
  { RISCV64BF_RV64_INSN_FMSUB_D, SEM_FN_NAME (riscv64bf_rv64,fmsub_d) },
  { RISCV64BF_RV64_INSN_FNMSUB_D, SEM_FN_NAME (riscv64bf_rv64,fnmsub_d) },
  { RISCV64BF_RV64_INSN_FNMADD_D, SEM_FN_NAME (riscv64bf_rv64,fnmadd_d) },
  { RISCV64BF_RV64_INSN_FADD_D, SEM_FN_NAME (riscv64bf_rv64,fadd_d) },
  { RISCV64BF_RV64_INSN_FSUB_D, SEM_FN_NAME (riscv64bf_rv64,fsub_d) },
  { RISCV64BF_RV64_INSN_FMUL_D, SEM_FN_NAME (riscv64bf_rv64,fmul_d) },
  { RISCV64BF_RV64_INSN_FDIV_D, SEM_FN_NAME (riscv64bf_rv64,fdiv_d) },
  { RISCV64BF_RV64_INSN_FSGNJ_D, SEM_FN_NAME (riscv64bf_rv64,fsgnj_d) },
  { RISCV64BF_RV64_INSN_FSGNJN_D, SEM_FN_NAME (riscv64bf_rv64,fsgnjn_d) },
  { RISCV64BF_RV64_INSN_FSGNJX_D, SEM_FN_NAME (riscv64bf_rv64,fsgnjx_d) },
  { RISCV64BF_RV64_INSN_FMIN_D, SEM_FN_NAME (riscv64bf_rv64,fmin_d) },
  { RISCV64BF_RV64_INSN_FMAX_D, SEM_FN_NAME (riscv64bf_rv64,fmax_d) },
  { RISCV64BF_RV64_INSN_FEQ_D, SEM_FN_NAME (riscv64bf_rv64,feq_d) },
  { RISCV64BF_RV64_INSN_FLT_D, SEM_FN_NAME (riscv64bf_rv64,flt_d) },
  { RISCV64BF_RV64_INSN_FLE_D, SEM_FN_NAME (riscv64bf_rv64,fle_d) },
  { RISCV64BF_RV64_INSN_FSQRT_D, SEM_FN_NAME (riscv64bf_rv64,fsqrt_d) },
  { RISCV64BF_RV64_INSN_FCVT_W_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_w_d) },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_d) },
  { RISCV64BF_RV64_INSN_FCLASS_D, SEM_FN_NAME (riscv64bf_rv64,fclass_d) },
  { RISCV64BF_RV64_INSN_FCVT_D_W, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_w) },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_wu) },
  { RISCV64BF_RV64_INSN_FCVT_S_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_d) },
  { RISCV64BF_RV64_INSN_FCVT_D_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_s) },
  { RISCV64BF_RV64_INSN_FCVT_L_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_l_d) },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_d) },
  { RISCV64BF_RV64_INSN_FMV_X_D, SEM_FN_NAME (riscv64bf_rv64,fmv_x_d) },
  { RISCV64BF_RV64_INSN_FCVT_D_L, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_l) },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_lu) },
  { RISCV64BF_RV64_INSN_FMV_D_X, SEM_FN_NAME (riscv64bf_rv64,fmv_d_x) },
  { RISCV64BF_RV64_INSN_FLQ, SEM_FN_NAME (riscv64bf_rv64,flq) },
  { RISCV64BF_RV64_INSN_FSQ, SEM_FN_NAME (riscv64bf_rv64,fsq) },
  { RISCV64BF_RV64_INSN_FMADD_Q, SEM_FN_NAME (riscv64bf_rv64,fmadd_q) },
  { RISCV64BF_RV64_INSN_FMSUB_Q, SEM_FN_NAME (riscv64bf_rv64,fmsub_q) },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, SEM_FN_NAME (riscv64bf_rv64,fnmsub_q) },
  { RISCV64BF_RV64_INSN_FNMADD_Q, SEM_FN_NAME (riscv64bf_rv64,fnmadd_q) },
  { RISCV64BF_RV64_INSN_FADD_Q, SEM_FN_NAME (riscv64bf_rv64,fadd_q) },
  { RISCV64BF_RV64_INSN_FSUB_Q, SEM_FN_NAME (riscv64bf_rv64,fsub_q) },
  { RISCV64BF_RV64_INSN_FMUL_Q, SEM_FN_NAME (riscv64bf_rv64,fmul_q) },
  { RISCV64BF_RV64_INSN_FDIV_Q, SEM_FN_NAME (riscv64bf_rv64,fdiv_q) },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, SEM_FN_NAME (riscv64bf_rv64,fsgnj_q) },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, SEM_FN_NAME (riscv64bf_rv64,fsgnjn_q) },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, SEM_FN_NAME (riscv64bf_rv64,fsgnjx_q) },
  { RISCV64BF_RV64_INSN_FMIN_Q, SEM_FN_NAME (riscv64bf_rv64,fmin_q) },
  { RISCV64BF_RV64_INSN_FMAX_Q, SEM_FN_NAME (riscv64bf_rv64,fmax_q) },
  { RISCV64BF_RV64_INSN_FEQ_Q, SEM_FN_NAME (riscv64bf_rv64,feq_q) },
  { RISCV64BF_RV64_INSN_FLT_Q, SEM_FN_NAME (riscv64bf_rv64,flt_q) },
  { RISCV64BF_RV64_INSN_FLE_Q, SEM_FN_NAME (riscv64bf_rv64,fle_q) },
  { RISCV64BF_RV64_INSN_FSQRT_Q, SEM_FN_NAME (riscv64bf_rv64,fsqrt_q) },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_w_q) },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_wu_q) },
  { RISCV64BF_RV64_INSN_FCLASS_Q, SEM_FN_NAME (riscv64bf_rv64,fclass_q) },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_w) },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_wu) },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_s_q) },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_d_q) },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_s) },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_d) },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_l_q) },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, SEM_FN_NAME (riscv64bf_rv64,fcvt_lu_q) },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_l) },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, SEM_FN_NAME (riscv64bf_rv64,fcvt_q_lu) },
  { 0, 0 }
};

/* Add the semantic fns to IDESC_TABLE.  */

void
SEM_FN_NAME (riscv64bf_rv64,init_idesc_table) (SIM_CPU *current_cpu)
{
  IDESC *idesc_table = CPU_IDESC (current_cpu);
  const struct sem_fn_desc *sf;
  int mach_num = MACH_NUM (CPU_MACH (current_cpu));

  for (sf = &sem_fns[0]; sf->fn != 0; ++sf)
    {
      const CGEN_INSN *insn = idesc_table[sf->index].idata;
      int valid_p = (CGEN_INSN_VIRTUAL_P (insn)
		     || CGEN_INSN_MACH_HAS_P (insn, mach_num));
#if FAST_P
      if (valid_p)
	idesc_table[sf->index].sem_fast = sf->fn;
      else
	idesc_table[sf->index].sem_fast = SEM_FN_NAME (riscv64bf_rv64,x_invalid);
#else
      if (valid_p)
	idesc_table[sf->index].sem_full = sf->fn;
      else
	idesc_table[sf->index].sem_full = SEM_FN_NAME (riscv64bf_rv64,x_invalid);
#endif
    }
}

