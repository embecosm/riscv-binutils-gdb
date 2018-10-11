/* Misc. support for CPU family riscv64bf.

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
#include "cgen-ops.h"

/* Get the value of h-pc.  */

USI
riscv64bf_h_pc_get (SIM_CPU *current_cpu)
{
  return GET_H_PC ();
}

/* Set a value for h-pc.  */

void
riscv64bf_h_pc_set (SIM_CPU *current_cpu, USI newval)
{
  SET_H_PC (newval);
}

/* Get the value of h-gpr.  */

DI
riscv64bf_h_gpr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_GPR (regno);
}

/* Set a value for h-gpr.  */

void
riscv64bf_h_gpr_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_GPR (regno, newval);
}

/* Get the value of h-gpr-not-zero.  */

DI
riscv64bf_h_gpr_not_zero_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_GPR_NOT_ZERO (regno);
}

/* Set a value for h-gpr-not-zero.  */

void
riscv64bf_h_gpr_not_zero_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_GPR_NOT_ZERO (regno, newval);
}

/* Get the value of h-gpr-not-zero-or-sp.  */

DI
riscv64bf_h_gpr_not_zero_or_sp_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_GPR_NOT_ZERO_OR_SP (regno);
}

/* Set a value for h-gpr-not-zero-or-sp.  */

void
riscv64bf_h_gpr_not_zero_or_sp_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_GPR_NOT_ZERO_OR_SP (regno, newval);
}

/* Get the value of h-zero.  */

DI
riscv64bf_h_zero_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_ZERO (regno);
}

/* Set a value for h-zero.  */

void
riscv64bf_h_zero_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_ZERO (regno, newval);
}

/* Get the value of h-sp.  */

DI
riscv64bf_h_sp_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_SP (regno);
}

/* Set a value for h-sp.  */

void
riscv64bf_h_sp_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_SP (regno, newval);
}

/* Get the value of h-c-gpr.  */

DI
riscv64bf_h_c_gpr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_C_GPR (regno);
}

/* Set a value for h-c-gpr.  */

void
riscv64bf_h_c_gpr_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_C_GPR (regno, newval);
}

/* Get the value of h-csr.  */

UDI
riscv64bf_h_csr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_CSR (regno);
}

/* Set a value for h-csr.  */

void
riscv64bf_h_csr_set (SIM_CPU *current_cpu, UINT regno, UDI newval)
{
  SET_H_CSR (regno, newval);
}

/* Get the value of h-fpr.  */

DI
riscv64bf_h_fpr_get (SIM_CPU *current_cpu, UINT regno)
{
  return CPU (h_fpr[regno]);
}

/* Set a value for h-fpr.  */

void
riscv64bf_h_fpr_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  CPU (h_fpr[regno]) = newval;
}

/* Get the value of h-c-fpr.  */

DI
riscv64bf_h_c_fpr_get (SIM_CPU *current_cpu, UINT regno)
{
  return GET_H_C_FPR (regno);
}

/* Set a value for h-c-fpr.  */

void
riscv64bf_h_c_fpr_set (SIM_CPU *current_cpu, UINT regno, DI newval)
{
  SET_H_C_FPR (regno, newval);
}

/* Get the value of h-opcode7.  */

DI
riscv64bf_h_opcode7_get (SIM_CPU *current_cpu)
{
  return GET_H_OPCODE7 ();
}

/* Set a value for h-opcode7.  */

void
riscv64bf_h_opcode7_set (SIM_CPU *current_cpu, DI newval)
{
  SET_H_OPCODE7 (newval);
}

/* Get the value of h-copcode2.  */

DI
riscv64bf_h_copcode2_get (SIM_CPU *current_cpu)
{
  return GET_H_COPCODE2 ();
}

/* Set a value for h-copcode2.  */

void
riscv64bf_h_copcode2_set (SIM_CPU *current_cpu, DI newval)
{
  SET_H_COPCODE2 (newval);
}

/* Record trace results for INSN.  */

void
riscv64bf_record_trace_results (SIM_CPU *current_cpu, CGEN_INSN *insn,
			    int *indices, TRACE_RECORD *tr)
{
}
