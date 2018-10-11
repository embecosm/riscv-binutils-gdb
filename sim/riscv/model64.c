/* Simulator model support for riscv64bf.

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

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

static int
model_riscv64_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv64_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_riscv64_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `riscv64'.  */

static const INSN_TIMING riscv64_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_riscv64_lui, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_riscv64_auipc, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_riscv64_jal, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_riscv64_jalr, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_riscv64_beq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_riscv64_bne, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_riscv64_blt, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_riscv64_bge, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_riscv64_bltu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_riscv64_bgeu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_riscv64_lb, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_riscv64_lh, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_riscv64_lw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_riscv64_lbu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_riscv64_lhu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_riscv64_sb, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_riscv64_sh, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_riscv64_sw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_riscv64_addi, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_riscv64_slti, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_riscv64_sltiu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_riscv64_xori, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_riscv64_ori, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_riscv64_andi, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_riscv64_slli_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_riscv64_srli_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_riscv64_srai_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_riscv64_add, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_riscv64_sub, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_riscv64_sll, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_riscv64_slt, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_riscv64_sltu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_riscv64_xor, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_riscv64_srl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_riscv64_sra, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_riscv64_or, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_riscv64_and, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_riscv64_fence, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_riscv64_sfence_vm, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_riscv64_sfence_vma, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_riscv64_fence_i, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_riscv64_ecall, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_riscv64_ebreak, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_riscv64_csrrw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_riscv64_csrrs, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_riscv64_csrrc, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_riscv64_csrrwi, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_riscv64_csrrsi, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_riscv64_csrrci, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_riscv64_uret, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_riscv64_sret, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_riscv64_hret, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_riscv64_mret, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_riscv64_dret, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_riscv64_wfi, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_riscv64_lwu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_riscv64_ld, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_riscv64_sd, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_riscv64_slli_shift6, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_riscv64_srli_shift6, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_riscv64_srai_shift6, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_riscv64_addiw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_riscv64_slliw_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_riscv64_srliw_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_riscv64_sraiw_shift5, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_riscv64_addw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_riscv64_subw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_riscv64_sllw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_riscv64_srlw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_riscv64_sraw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_riscv64_mul, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_riscv64_mulh, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_riscv64_mulhsu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_riscv64_mulhu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_riscv64_div, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_riscv64_divu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_riscv64_rem, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_riscv64_remu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_riscv64_mulw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_riscv64_divw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_riscv64_divuw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_riscv64_remw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_riscv64_remuw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_riscv64_lr_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_riscv64_lr_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_riscv64_lr_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_riscv64_lr_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_riscv64_sc_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_riscv64_sc_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_riscv64_sc_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_riscv64_sc_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_riscv64_amoswap_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_riscv64_amoswap_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_riscv64_amoswap_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_riscv64_amoswap_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_riscv64_amoadd_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_riscv64_amoadd_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_riscv64_amoadd_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_riscv64_amoadd_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_riscv64_amoxor_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_riscv64_amoxor_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_riscv64_amoxor_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_riscv64_amoxor_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_riscv64_amoand_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_riscv64_amoand_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_riscv64_amoand_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_riscv64_amoand_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_riscv64_amoor_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_riscv64_amoor_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_riscv64_amoor_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_riscv64_amoor_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_riscv64_amomin_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_riscv64_amomin_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_riscv64_amomin_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_riscv64_amomin_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_riscv64_amomax_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_riscv64_amomax_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_riscv64_amomax_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_riscv64_amomax_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_riscv64_amominu_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_riscv64_amominu_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_riscv64_amominu_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_riscv64_amominu_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_riscv64_amomaxu_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_riscv64_amomaxu_w_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_riscv64_amomaxu_w_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_riscv64_amomaxu_w_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_riscv64_lr_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_riscv64_lr_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_riscv64_lr_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_riscv64_lr_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_riscv64_sc_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_riscv64_sc_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_riscv64_sc_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_riscv64_sc_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_riscv64_amoswap_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_riscv64_amoswap_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_riscv64_amoswap_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_riscv64_amoswap_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_riscv64_amoadd_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_riscv64_amoadd_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_riscv64_amoadd_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_riscv64_amoadd_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_riscv64_amoxor_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_riscv64_amoxor_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_riscv64_amoxor_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_riscv64_amoxor_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_riscv64_amoand_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_riscv64_amoand_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_riscv64_amoand_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_riscv64_amoand_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_riscv64_amoor_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_riscv64_amoor_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_riscv64_amoor_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_riscv64_amoor_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_riscv64_amomin_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_riscv64_amomin_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_riscv64_amomin_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_riscv64_amomin_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_riscv64_amomax_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_riscv64_amomax_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_riscv64_amomax_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_riscv64_amomax_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_riscv64_amominu_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_riscv64_amominu_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_riscv64_amominu_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_riscv64_amominu_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_riscv64_amomaxu_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_riscv64_amomaxu_d_aq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_riscv64_amomaxu_d_rl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_riscv64_amomaxu_d_aqrl, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_riscv64_flw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_riscv64_fsw, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_riscv64_fmadd_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_riscv64_fmsub_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_riscv64_fnmsub_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_riscv64_fnmadd_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_riscv64_fadd_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_riscv64_fsub_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_riscv64_fmul_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_riscv64_fdiv_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_riscv64_fsgnj_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_riscv64_fsgnjn_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_riscv64_fsgnjx_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_riscv64_fmin_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_riscv64_fmax_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_riscv64_feq_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_riscv64_flt_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_riscv64_fle_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_riscv64_fsqrt_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_riscv64_fcvt_w_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_riscv64_fcvt_wu_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_riscv64_fmv_x_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_riscv64_fclass_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_riscv64_fcvt_s_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_riscv64_fcvt_s_wu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_riscv64_fmv_w_x, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_riscv64_fcvt_l_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_riscv64_fcvt_lu_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_riscv64_fcvt_s_l, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_riscv64_fcvt_s_lu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_riscv64_fld, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_riscv64_fsd, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_riscv64_fmadd_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_riscv64_fmsub_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_riscv64_fnmsub_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_riscv64_fnmadd_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_riscv64_fadd_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_riscv64_fsub_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_riscv64_fmul_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_riscv64_fdiv_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_riscv64_fsgnj_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_riscv64_fsgnjn_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_riscv64_fsgnjx_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_riscv64_fmin_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_riscv64_fmax_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_riscv64_feq_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_riscv64_flt_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_riscv64_fle_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_riscv64_fsqrt_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_riscv64_fcvt_w_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_riscv64_fcvt_wu_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_riscv64_fclass_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_riscv64_fcvt_d_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_riscv64_fcvt_d_wu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_riscv64_fcvt_s_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_riscv64_fcvt_d_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_riscv64_fcvt_l_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_riscv64_fcvt_lu_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_riscv64_fmv_x_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_riscv64_fcvt_d_l, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_riscv64_fcvt_d_lu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_riscv64_fmv_d_x, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_riscv64_flq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_riscv64_fsq, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_riscv64_fmadd_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_riscv64_fmsub_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_riscv64_fnmsub_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_riscv64_fnmadd_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_riscv64_fadd_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_riscv64_fsub_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_riscv64_fmul_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_riscv64_fdiv_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_riscv64_fsgnj_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_riscv64_fsgnjn_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_riscv64_fsgnjx_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_riscv64_fmin_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_riscv64_fmax_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_riscv64_feq_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_riscv64_flt_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_riscv64_fle_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_riscv64_fsqrt_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_riscv64_fcvt_w_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_riscv64_fcvt_wu_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_riscv64_fclass_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_riscv64_fcvt_q_w, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_riscv64_fcvt_q_wu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_riscv64_fcvt_s_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_riscv64_fcvt_d_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_riscv64_fcvt_q_s, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_riscv64_fcvt_q_d, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_riscv64_fcvt_l_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_riscv64_fcvt_lu_q, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_riscv64_fcvt_q_l, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_riscv64_fcvt_q_lu, { { (int) UNIT_RISCV64_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
riscv64_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RISCV64_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const SIM_MODEL riscv_rv64_models[] =
{
  { "riscv64", & riscv_rv64_mach, MODEL_RISCV64, TIMING_DATA (& riscv64_timing[0]), riscv64_model_init },
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const SIM_MACH_IMP_PROPERTIES riscv64bf_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


static void
riscv64bf_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    riscv64bf_rv64_init_idesc_table (cpu);
}

static const CGEN_INSN *
riscv64bf_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
riscv_rv64_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = riscv64bf_fetch_register;
  CPU_REG_STORE (cpu) = riscv64bf_store_register;
  CPU_PC_FETCH (cpu) = riscv64bf_h_pc_get;
  CPU_PC_STORE (cpu) = riscv64bf_h_pc_set;
  CPU_GET_IDATA (cpu) = riscv64bf_get_idata;
  CPU_MAX_INSNS (cpu) = RISCV64BF_RV64_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = riscv64bf_rv64_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = riscv64bf_rv64_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = riscv64bf_rv64_engine_run_full;
#endif
}

const SIM_MACH riscv_rv64_mach =
{
  "riscv:rv64", "riscv:rv64", MACH_RISCV_RV64,
  64, 64, & riscv_rv64_models[0], & riscv64bf_imp_properties,
  riscv_rv64_init_cpu,
  riscv64bf_prepare_run
};

