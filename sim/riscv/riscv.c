/* RISC-V simulator support code.
   Contributed by Edward Jones  <ed.jones@embecosm.com>

   Copyright (C) 2009-2018 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#define WANT_CPU riscvbf32
#define WANT_CPU_RISCVBF32

#include "sim-main.h"
#include "cgen-mem.h"
#include "gdb/sim-riscv.h"

/* The contents of BUF are in target byte order.  */

int
riscvbf32_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SETTDI (buf, GET_H_GPR (gprn));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SETTUDI (buf, GET_H_PC ());
    }
  else
    {
      SETTUDI (buf, 0xabad1deaabad1dea);
      return 0;
    }
  return len;
}

/* The contents of BUF are in target byte order.  */

int
riscvbf32_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SET_H_GPR (gprn, GETTDI (buf));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SET_H_PC (GETTUDI (buf));
    }
  else
    {
      return 0;
    }
  return len;
}

DI
riscvbf32_h_gpr_get_handler (SIM_CPU * current_cpu, UINT gpr)
{
  return CPU (h_gpr[gpr]);
}

void
riscvbf32_h_gpr_set_handler (SIM_CPU * current_cpu, UINT gpr, DI newval)
{
  if (gpr == 0)
    return; /* x0 is the 'zero' registers. Stores have no effect.  */

  CPU (h_gpr[gpr]) = newval;
}

UDI
riscvbf32_h_csr_get_handler (SIM_CPU * current_cpu, UINT csr)
{
  return CPU (h_csr[csr]);
}

void
riscvbf32_h_csr_set_handler (SIM_CPU * current_cpu, UINT csr, UDI newval)
{
  CPU (h_csr[csr]) = newval;
}


int riscvbf32_model_riscv_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                  int unit_num, int referenced)
{
  return -1;
}

#if 0

void
riscvbf32_base_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_base_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}
void
riscvbf32_multiply_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_multiply_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}
void
riscvbf32_pegasus_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_pegasus_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}
void
riscvbf32_compress_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_compress_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}
void
riscvbf32_atomic_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_atomic_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}
void
riscvbf32_float_model_insn_before (SIM_CPU *cpu, int first_p)
{
  /* Do nothing.  */
}
void
riscvbf32_float_model_insn_after (SIM_CPU *cpu, int last_p, int cycles)
{
  /* Do nothing.  */
}

static void
riscvbf32_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    riscvbf32_rv32_init_idesc_table (cpu);
}

static const CGEN_INSN *
riscvbf32_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
riscvbf32_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = riscvbf32_fetch_register;
  CPU_REG_STORE (cpu) = riscvbf32_store_register;
  CPU_PC_FETCH (cpu) = riscvbf32_h_pc_get;
  CPU_PC_STORE (cpu) = riscvbf32_h_pc_set;
  CPU_GET_IDATA (cpu) = riscvbf32_get_idata;
  /* Only used by profiling.  0 disables it. */
  CPU_MAX_INSNS (cpu) = 0;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_full;
#endif
}

static void
riscv_model_init (SIM_CPU *cpu)
{
  /* Do nothing.  */
}

/* The properties of this cpu's implementation.  */

static const SIM_MACH_IMP_PROPERTIES riscvbf32_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  /* SCACHE is defined in defs-*.h and depends on the size of ARGBUF. However
     the size of ARGBUF depends on the semantics of the specific ISA targetted.
     For now, we just use a big enough number that it should be larger
     than the size of the SCACHE for all of the ISAs.  */
  /* TODO: Fix this!  */
  /*sizeof (SCACHE)*/
  128,
#else
  0
#endif
};

static const SIM_MODEL riscv_models [] =                                          {
  { "riscv", & riscv_rv32_mach, MODEL_RISCV, NULL, riscv_model_init },
  { 0 }
};

const SIM_MACH riscv_rv32_mach =
{
  "riscv:rv32", "riscv:rv32", MACH_RISCV_RV32,
  32, 32, & riscv_models[0], & riscvbf32_imp_properties,
  &riscvbf32_init_cpu,
  &riscvbf32_prepare_run
};
#endif

