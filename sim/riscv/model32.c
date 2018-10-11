/* Simulator model support for riscv32bf.

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

/* The profiling data is recorded here, but is accessed via the profiling
   mechanism.  After all, this is information for profiling.  */

#if WITH_PROFILE_MODEL_P

/* Model handlers for each insn.  */

static int
model_riscv32_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_riscv32_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_riscv32_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `riscv32'.  */

static const INSN_TIMING riscv32_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_riscv32_lui, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_riscv32_auipc, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_riscv32_jal, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_riscv32_jalr, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_riscv32_beq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_riscv32_bne, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_riscv32_blt, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_riscv32_bge, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_riscv32_bltu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_riscv32_bgeu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_riscv32_lb, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_riscv32_lh, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_riscv32_lw, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_riscv32_lbu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_riscv32_lhu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_riscv32_sb, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_riscv32_sh, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_riscv32_sw, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_riscv32_addi, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_riscv32_slti, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_riscv32_sltiu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_riscv32_xori, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_riscv32_ori, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_riscv32_andi, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_riscv32_slli_shift5, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_riscv32_srli_shift5, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_riscv32_srai_shift5, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_riscv32_add, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_riscv32_sub, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_riscv32_sll, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_riscv32_slt, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_riscv32_sltu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_riscv32_xor, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_riscv32_srl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_riscv32_sra, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_riscv32_or, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_riscv32_and, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_riscv32_fence, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_riscv32_sfence_vm, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_riscv32_sfence_vma, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_riscv32_fence_i, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_riscv32_ecall, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_riscv32_ebreak, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_riscv32_csrrw, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_riscv32_csrrs, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_riscv32_csrrc, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_riscv32_csrrwi, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_riscv32_csrrsi, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_riscv32_csrrci, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_riscv32_uret, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_riscv32_sret, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_riscv32_hret, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_riscv32_mret, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_riscv32_dret, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_riscv32_wfi, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_riscv32_mul, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_riscv32_mulh, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_riscv32_mulhsu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_riscv32_mulhu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_riscv32_div, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_riscv32_divu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_riscv32_rem, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_riscv32_remu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_riscv32_lr_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_riscv32_lr_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_riscv32_lr_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_riscv32_lr_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_riscv32_sc_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_riscv32_sc_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_riscv32_sc_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_riscv32_sc_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_riscv32_amoswap_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_riscv32_amoswap_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_riscv32_amoswap_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_riscv32_amoswap_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_riscv32_amoadd_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_riscv32_amoadd_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_riscv32_amoadd_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_riscv32_amoadd_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_riscv32_amoxor_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_riscv32_amoxor_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_riscv32_amoxor_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_riscv32_amoxor_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_riscv32_amoand_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_riscv32_amoand_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_riscv32_amoand_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_riscv32_amoand_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_riscv32_amoor_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_riscv32_amoor_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_riscv32_amoor_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_riscv32_amoor_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_riscv32_amomin_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_riscv32_amomin_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_riscv32_amomin_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_riscv32_amomin_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_riscv32_amomax_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_riscv32_amomax_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_riscv32_amomax_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_riscv32_amomax_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_riscv32_amominu_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_riscv32_amominu_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_riscv32_amominu_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_riscv32_amominu_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_riscv32_amomaxu_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_riscv32_amomaxu_w_aq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_riscv32_amomaxu_w_rl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_riscv32_amomaxu_w_aqrl, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_riscv32_flw, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_riscv32_fsw, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_riscv32_fmadd_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_riscv32_fmsub_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_riscv32_fnmsub_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_riscv32_fnmadd_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_riscv32_fadd_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_riscv32_fsub_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_riscv32_fmul_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_riscv32_fdiv_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_riscv32_fsgnj_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_riscv32_fsgnjn_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_riscv32_fsgnjx_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_riscv32_fmin_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_riscv32_fmax_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_riscv32_feq_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_riscv32_flt_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_riscv32_fle_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_riscv32_fsqrt_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_riscv32_fcvt_w_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_riscv32_fcvt_wu_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_riscv32_fmv_x_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_riscv32_fclass_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_riscv32_fcvt_s_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_riscv32_fcvt_s_wu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_riscv32_fmv_w_x, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_riscv32_fld, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_riscv32_fsd, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_riscv32_fmadd_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_riscv32_fmsub_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_riscv32_fnmsub_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_riscv32_fnmadd_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_riscv32_fadd_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_riscv32_fsub_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_riscv32_fmul_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_riscv32_fdiv_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_riscv32_fsgnj_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_riscv32_fsgnjn_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_riscv32_fsgnjx_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_riscv32_fmin_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_riscv32_fmax_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_riscv32_feq_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_riscv32_flt_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_riscv32_fle_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_riscv32_fsqrt_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_riscv32_fcvt_w_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_riscv32_fcvt_wu_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_riscv32_fclass_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_riscv32_fcvt_d_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_riscv32_fcvt_d_wu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_riscv32_fcvt_s_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_riscv32_fcvt_d_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_riscv32_flq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_riscv32_fsq, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_riscv32_fmadd_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_riscv32_fmsub_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_riscv32_fnmsub_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_riscv32_fnmadd_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_riscv32_fadd_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_riscv32_fsub_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_riscv32_fmul_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_riscv32_fdiv_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_riscv32_fsgnj_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_riscv32_fsgnjn_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_riscv32_fsgnjx_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_riscv32_fmin_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_riscv32_fmax_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_riscv32_feq_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_riscv32_flt_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_riscv32_fle_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_riscv32_fsqrt_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_riscv32_fcvt_w_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_riscv32_fcvt_wu_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_riscv32_fclass_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_riscv32_fcvt_q_w, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_riscv32_fcvt_q_wu, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_riscv32_fcvt_s_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_riscv32_fcvt_d_q, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_riscv32_fcvt_q_s, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_riscv32_fcvt_q_d, { { (int) UNIT_RISCV32_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
riscv32_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RISCV32_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const SIM_MODEL riscv_rv32_models[] =
{
  { "riscv32", & riscv_rv32_mach, MODEL_RISCV32, TIMING_DATA (& riscv32_timing[0]), riscv32_model_init },
  { 0 }
};

/* The properties of this cpu's implementation.  */

static const SIM_MACH_IMP_PROPERTIES riscv32bf_imp_properties =
{
  sizeof (SIM_CPU),
#if WITH_SCACHE
  sizeof (SCACHE)
#else
  0
#endif
};


static void
riscv32bf_prepare_run (SIM_CPU *cpu)
{
  if (CPU_IDESC (cpu) == NULL)
    riscv32bf_rv32_init_idesc_table (cpu);
}

static const CGEN_INSN *
riscv32bf_get_idata (SIM_CPU *cpu, int inum)
{
  return CPU_IDESC (cpu) [inum].idata;
}

static void
riscv_rv32_init_cpu (SIM_CPU *cpu)
{
  CPU_REG_FETCH (cpu) = riscv32bf_fetch_register;
  CPU_REG_STORE (cpu) = riscv32bf_store_register;
  CPU_PC_FETCH (cpu) = riscv32bf_h_pc_get;
  CPU_PC_STORE (cpu) = riscv32bf_h_pc_set;
  CPU_GET_IDATA (cpu) = riscv32bf_get_idata;
  CPU_MAX_INSNS (cpu) = RISCV32BF_RV32_INSN__MAX;
  CPU_INSN_NAME (cpu) = cgen_insn_name;
  CPU_FULL_ENGINE_FN (cpu) = riscv32bf_rv32_engine_run_full;
#if WITH_FAST
  CPU_FAST_ENGINE_FN (cpu) = riscv32bf_rv32_engine_run_fast;
#else
  CPU_FAST_ENGINE_FN (cpu) = riscv32bf_rv32_engine_run_full;
#endif
}

const SIM_MACH riscv_rv32_mach =
{
  "riscv:rv32", "riscv:rv32", MACH_RISCV_RV32,
  32, 32, & riscv_rv32_models[0], & riscv32bf_imp_properties,
  riscv_rv32_init_cpu,
  riscv32bf_prepare_run
};

