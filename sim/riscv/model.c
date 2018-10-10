/* Simulator model support for riscvbf32.

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

#define WANT_CPU riscvbf32
#define WANT_CPU_RISCVBF32

#include "sim-main.h"

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

static int
model_riscv_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscvbf32_model_riscv_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `riscv'.  */

static const INSN_TIMING riscv_timing[] = {
  { RISCVBF32_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LUI, model_riscv_lui, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AUIPC, model_riscv_auipc, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_JAL, model_riscv_jal, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_JALR, model_riscv_jalr, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BEQ, model_riscv_beq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BNE, model_riscv_bne, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BLT, model_riscv_blt, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BGE, model_riscv_bge, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BLTU, model_riscv_bltu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_BGEU, model_riscv_bgeu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LB, model_riscv_lb, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LH, model_riscv_lh, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LW, model_riscv_lw, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LBU, model_riscv_lbu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LHU, model_riscv_lhu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SB, model_riscv_sb, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SH, model_riscv_sh, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SW, model_riscv_sw, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_ADDI, model_riscv_addi, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLTI, model_riscv_slti, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLTIU, model_riscv_sltiu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_XORI, model_riscv_xori, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_ORI, model_riscv_ori, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_ANDI, model_riscv_andi, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLLI_SHIFT5, model_riscv_slli_shift5, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SRLI_SHIFT5, model_riscv_srli_shift5, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SRAI_SHIFT5, model_riscv_srai_shift5, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_ADD, model_riscv_add, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SUB, model_riscv_sub, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLL, model_riscv_sll, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLT, model_riscv_slt, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SLTU, model_riscv_sltu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_XOR, model_riscv_xor, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SRL, model_riscv_srl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SRA, model_riscv_sra, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_OR, model_riscv_or, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AND, model_riscv_and, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FENCE, model_riscv_fence, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SFENCE_VM, model_riscv_sfence_vm, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SFENCE_VMA, model_riscv_sfence_vma, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FENCE_I, model_riscv_fence_i, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_ECALL, model_riscv_ecall, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_EBREAK, model_riscv_ebreak, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRW, model_riscv_csrrw, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRS, model_riscv_csrrs, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRC, model_riscv_csrrc, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRWI, model_riscv_csrrwi, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRSI, model_riscv_csrrsi, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_CSRRCI, model_riscv_csrrci, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_URET, model_riscv_uret, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SRET, model_riscv_sret, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_HRET, model_riscv_hret, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_MRET, model_riscv_mret, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_DRET, model_riscv_dret, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_WFI, model_riscv_wfi, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_MUL, model_riscv_mul, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_MULH, model_riscv_mulh, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_MULHSU, model_riscv_mulhsu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_MULHU, model_riscv_mulhu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_DIV, model_riscv_div, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_DIVU, model_riscv_divu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_REM, model_riscv_rem, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_REMU, model_riscv_remu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LR_W, model_riscv_lr_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LR_W_AQ, model_riscv_lr_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LR_W_RL, model_riscv_lr_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_LR_W_AQRL, model_riscv_lr_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SC_W, model_riscv_sc_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SC_W_AQ, model_riscv_sc_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SC_W_RL, model_riscv_sc_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_SC_W_AQRL, model_riscv_sc_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOSWAP_W, model_riscv_amoswap_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOSWAP_W_AQ, model_riscv_amoswap_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOSWAP_W_RL, model_riscv_amoswap_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOSWAP_W_AQRL, model_riscv_amoswap_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOADD_W, model_riscv_amoadd_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOADD_W_AQ, model_riscv_amoadd_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOADD_W_RL, model_riscv_amoadd_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOADD_W_AQRL, model_riscv_amoadd_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOXOR_W, model_riscv_amoxor_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOXOR_W_AQ, model_riscv_amoxor_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOXOR_W_RL, model_riscv_amoxor_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOXOR_W_AQRL, model_riscv_amoxor_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOAND_W, model_riscv_amoand_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOAND_W_AQ, model_riscv_amoand_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOAND_W_RL, model_riscv_amoand_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOAND_W_AQRL, model_riscv_amoand_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOOR_W, model_riscv_amoor_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOOR_W_AQ, model_riscv_amoor_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOOR_W_RL, model_riscv_amoor_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOOR_W_AQRL, model_riscv_amoor_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMIN_W, model_riscv_amomin_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMIN_W_AQ, model_riscv_amomin_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMIN_W_RL, model_riscv_amomin_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMIN_W_AQRL, model_riscv_amomin_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAX_W, model_riscv_amomax_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAX_W_AQ, model_riscv_amomax_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAX_W_RL, model_riscv_amomax_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAX_W_AQRL, model_riscv_amomax_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMINU_W, model_riscv_amominu_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMINU_W_AQ, model_riscv_amominu_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMINU_W_RL, model_riscv_amominu_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMINU_W_AQRL, model_riscv_amominu_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAXU_W, model_riscv_amomaxu_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAXU_W_AQ, model_riscv_amomaxu_w_aq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAXU_W_RL, model_riscv_amomaxu_w_rl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_AMOMAXU_W_AQRL, model_riscv_amomaxu_w_aqrl, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLW, model_riscv_flw, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSW, model_riscv_fsw, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMADD_S, model_riscv_fmadd_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMSUB_S, model_riscv_fmsub_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMSUB_S, model_riscv_fnmsub_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMADD_S, model_riscv_fnmadd_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FADD_S, model_riscv_fadd_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSUB_S, model_riscv_fsub_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMUL_S, model_riscv_fmul_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FDIV_S, model_riscv_fdiv_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJ_S, model_riscv_fsgnj_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJN_S, model_riscv_fsgnjn_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJX_S, model_riscv_fsgnjx_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMIN_S, model_riscv_fmin_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMAX_S, model_riscv_fmax_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FEQ_S, model_riscv_feq_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLT_S, model_riscv_flt_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLE_S, model_riscv_fle_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSQRT_S, model_riscv_fsqrt_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_W_S, model_riscv_fcvt_w_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_WU_S, model_riscv_fcvt_wu_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMV_X_W, model_riscv_fmv_x_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCLASS_S, model_riscv_fclass_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_S_W, model_riscv_fcvt_s_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_S_WU, model_riscv_fcvt_s_wu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMV_W_X, model_riscv_fmv_w_x, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLD, model_riscv_fld, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSD, model_riscv_fsd, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMADD_D, model_riscv_fmadd_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMSUB_D, model_riscv_fmsub_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMSUB_D, model_riscv_fnmsub_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMADD_D, model_riscv_fnmadd_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FADD_D, model_riscv_fadd_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSUB_D, model_riscv_fsub_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMUL_D, model_riscv_fmul_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FDIV_D, model_riscv_fdiv_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJ_D, model_riscv_fsgnj_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJN_D, model_riscv_fsgnjn_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJX_D, model_riscv_fsgnjx_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMIN_D, model_riscv_fmin_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMAX_D, model_riscv_fmax_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FEQ_D, model_riscv_feq_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLT_D, model_riscv_flt_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLE_D, model_riscv_fle_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSQRT_D, model_riscv_fsqrt_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_W_D, model_riscv_fcvt_w_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_WU_D, model_riscv_fcvt_wu_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCLASS_D, model_riscv_fclass_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_D_W, model_riscv_fcvt_d_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_D_WU, model_riscv_fcvt_d_wu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_S_D, model_riscv_fcvt_s_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_D_S, model_riscv_fcvt_d_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLQ, model_riscv_flq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSQ, model_riscv_fsq, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMADD_Q, model_riscv_fmadd_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMSUB_Q, model_riscv_fmsub_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMSUB_Q, model_riscv_fnmsub_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FNMADD_Q, model_riscv_fnmadd_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FADD_Q, model_riscv_fadd_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSUB_Q, model_riscv_fsub_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMUL_Q, model_riscv_fmul_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FDIV_Q, model_riscv_fdiv_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJ_Q, model_riscv_fsgnj_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJN_Q, model_riscv_fsgnjn_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSGNJX_Q, model_riscv_fsgnjx_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMIN_Q, model_riscv_fmin_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FMAX_Q, model_riscv_fmax_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FEQ_Q, model_riscv_feq_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLT_Q, model_riscv_flt_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FLE_Q, model_riscv_fle_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FSQRT_Q, model_riscv_fsqrt_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_W_Q, model_riscv_fcvt_w_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_WU_Q, model_riscv_fcvt_wu_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCLASS_Q, model_riscv_fclass_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_Q_W, model_riscv_fcvt_q_w, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_Q_WU, model_riscv_fcvt_q_wu, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_S_Q, model_riscv_fcvt_s_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_D_Q, model_riscv_fcvt_d_q, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_Q_S, model_riscv_fcvt_q_s, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
  { RISCVBF32_RV32_INSN_FCVT_Q_D, model_riscv_fcvt_q_d, { { (int) UNIT_RISCV_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
riscv_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RISCV_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const SIM_MODEL riscv_rv32_models[] =
{
  { "riscv", & riscv_rv32_mach, MODEL_RISCV, TIMING_DATA (& riscv_timing[0]), riscv_model_init },
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const SIM_MACH_IMP_PROPERTIES riscvbf32_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


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
riscv_rv32_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = riscvbf32_fetch_register;
  CPU_REG_STORE (cpu) = riscvbf32_store_register;
  CPU_PC_FETCH (cpu) = riscvbf32_h_pc_get;
  CPU_PC_STORE (cpu) = riscvbf32_h_pc_set;
  CPU_GET_IDATA (cpu) = riscvbf32_get_idata;
  CPU_MAX_INSNS (cpu) = RISCVBF32_RV32_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = riscvbf32_rv32_engine_run_full;
#endif
}

const SIM_MACH riscv_rv32_mach =
{
  "riscv:rv32", "riscv:rv32", MACH_RISCV_RV32,
  64, 64, & riscv_rv32_models[0], & riscvbf32_imp_properties,
  riscv_rv32_init_cpu,
  riscvbf32_prepare_run
};

