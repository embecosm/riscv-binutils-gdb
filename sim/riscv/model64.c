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
model_rv64i_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64i_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64ic_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64im_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64imc_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64g_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gc_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lwu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_ld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_slli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srli_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srai_shift6 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift6.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_addiw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_slliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srliw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sraiw_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_addw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_subw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sllw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_srlw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sraw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_add.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_mulw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_divw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_divuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_remw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_remuw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_lr_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_sc_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoswap_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoadd_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoxor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoand_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amoor_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomin_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomax_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amominu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_d_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_d_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_amomaxu_d_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_l_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_lu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_l_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_lu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmv_x_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmv_d_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_l_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_lu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_l (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv64gqc_fcvt_q_lu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv64bf_model_rv64gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `rv64i'.  */

static const INSN_TIMING rv64i_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64i_c_addi16sp, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64i_lui, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64i_auipc, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64i_jal, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64i_jalr, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64i_beq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64i_bne, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64i_blt, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64i_bge, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64i_bltu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64i_bgeu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64i_lb, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64i_lh, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64i_lw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64i_lbu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64i_lhu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64i_sb, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64i_sh, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64i_sw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64i_addi, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64i_slti, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64i_sltiu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64i_xori, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64i_ori, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64i_andi, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64i_slli_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64i_srli_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64i_srai_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64i_add, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64i_sub, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64i_sll, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64i_slt, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64i_sltu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64i_xor, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64i_srl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64i_sra, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64i_or, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64i_and, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64i_fence, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64i_sfence_vm, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64i_sfence_vma, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64i_fence_i, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64i_ecall, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64i_ebreak, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64i_csrrw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64i_csrrs, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64i_csrrc, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64i_csrrwi, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64i_csrrsi, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64i_csrrci, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64i_uret, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64i_sret, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64i_hret, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64i_mret, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64i_dret, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64i_wfi, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64i_lwu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64i_ld, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64i_sd, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64i_slli_shift6, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64i_srli_shift6, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64i_srai_shift6, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64i_addiw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64i_slliw_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64i_srliw_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64i_sraiw_shift5, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64i_addw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64i_subw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64i_sllw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64i_srlw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64i_sraw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64i_mul, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64i_mulh, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64i_mulhsu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64i_mulhu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64i_div, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64i_divu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64i_rem, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64i_remu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64i_mulw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64i_divw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64i_divuw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64i_remw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64i_remuw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64i_lr_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64i_lr_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64i_lr_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64i_lr_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64i_sc_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64i_sc_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64i_sc_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64i_sc_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64i_amoswap_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64i_amoswap_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64i_amoswap_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64i_amoswap_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64i_amoadd_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64i_amoadd_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64i_amoadd_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64i_amoadd_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64i_amoxor_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64i_amoxor_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64i_amoxor_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64i_amoxor_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64i_amoand_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64i_amoand_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64i_amoand_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64i_amoand_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64i_amoor_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64i_amoor_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64i_amoor_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64i_amoor_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64i_amomin_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64i_amomin_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64i_amomin_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64i_amomin_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64i_amomax_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64i_amomax_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64i_amomax_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64i_amomax_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64i_amominu_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64i_amominu_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64i_amominu_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64i_amominu_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64i_amomaxu_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64i_amomaxu_w_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64i_amomaxu_w_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64i_amomaxu_w_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64i_lr_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64i_lr_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64i_lr_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64i_lr_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64i_sc_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64i_sc_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64i_sc_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64i_sc_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64i_amoswap_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64i_amoswap_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64i_amoswap_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64i_amoswap_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64i_amoadd_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64i_amoadd_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64i_amoadd_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64i_amoadd_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64i_amoxor_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64i_amoxor_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64i_amoxor_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64i_amoxor_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64i_amoand_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64i_amoand_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64i_amoand_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64i_amoand_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64i_amoor_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64i_amoor_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64i_amoor_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64i_amoor_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64i_amomin_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64i_amomin_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64i_amomin_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64i_amomin_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64i_amomax_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64i_amomax_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64i_amomax_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64i_amomax_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64i_amominu_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64i_amominu_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64i_amominu_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64i_amominu_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64i_amomaxu_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64i_amomaxu_d_aq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64i_amomaxu_d_rl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64i_amomaxu_d_aqrl, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64i_flw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64i_fsw, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64i_fmadd_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64i_fmsub_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64i_fnmsub_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64i_fnmadd_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64i_fadd_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64i_fsub_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64i_fmul_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64i_fdiv_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64i_fsgnj_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64i_fsgnjn_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64i_fsgnjx_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64i_fmin_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64i_fmax_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64i_feq_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64i_flt_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64i_fle_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64i_fsqrt_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64i_fcvt_w_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64i_fcvt_wu_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64i_fmv_x_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64i_fclass_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64i_fcvt_s_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64i_fcvt_s_wu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64i_fmv_w_x, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64i_fcvt_l_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64i_fcvt_lu_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64i_fcvt_s_l, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64i_fcvt_s_lu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64i_fld, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64i_fsd, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64i_fmadd_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64i_fmsub_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64i_fnmsub_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64i_fnmadd_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64i_fadd_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64i_fsub_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64i_fmul_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64i_fdiv_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64i_fsgnj_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64i_fsgnjn_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64i_fsgnjx_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64i_fmin_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64i_fmax_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64i_feq_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64i_flt_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64i_fle_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64i_fsqrt_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64i_fcvt_w_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64i_fcvt_wu_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64i_fclass_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64i_fcvt_d_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64i_fcvt_d_wu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64i_fcvt_s_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64i_fcvt_d_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64i_fcvt_l_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64i_fcvt_lu_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64i_fmv_x_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64i_fcvt_d_l, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64i_fcvt_d_lu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64i_fmv_d_x, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64i_flq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64i_fsq, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64i_fmadd_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64i_fmsub_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64i_fnmsub_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64i_fnmadd_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64i_fadd_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64i_fsub_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64i_fmul_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64i_fdiv_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64i_fsgnj_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64i_fsgnjn_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64i_fsgnjx_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64i_fmin_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64i_fmax_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64i_feq_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64i_flt_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64i_fle_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64i_fsqrt_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64i_fcvt_w_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64i_fcvt_wu_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64i_fclass_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64i_fcvt_q_w, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64i_fcvt_q_wu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64i_fcvt_s_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64i_fcvt_d_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64i_fcvt_q_s, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64i_fcvt_q_d, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64i_fcvt_l_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64i_fcvt_lu_q, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64i_fcvt_q_l, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64i_fcvt_q_lu, { { (int) UNIT_RV64I_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64ic'.  */

static const INSN_TIMING rv64ic_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64ic_c_addi16sp, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64ic_lui, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64ic_auipc, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64ic_jal, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64ic_jalr, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64ic_beq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64ic_bne, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64ic_blt, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64ic_bge, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64ic_bltu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64ic_bgeu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64ic_lb, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64ic_lh, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64ic_lw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64ic_lbu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64ic_lhu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64ic_sb, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64ic_sh, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64ic_sw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64ic_addi, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64ic_slti, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64ic_sltiu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64ic_xori, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64ic_ori, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64ic_andi, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64ic_slli_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64ic_srli_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64ic_srai_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64ic_add, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64ic_sub, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64ic_sll, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64ic_slt, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64ic_sltu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64ic_xor, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64ic_srl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64ic_sra, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64ic_or, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64ic_and, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64ic_fence, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64ic_sfence_vm, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64ic_sfence_vma, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64ic_fence_i, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64ic_ecall, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64ic_ebreak, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64ic_csrrw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64ic_csrrs, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64ic_csrrc, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64ic_csrrwi, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64ic_csrrsi, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64ic_csrrci, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64ic_uret, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64ic_sret, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64ic_hret, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64ic_mret, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64ic_dret, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64ic_wfi, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64ic_lwu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64ic_ld, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64ic_sd, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64ic_slli_shift6, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64ic_srli_shift6, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64ic_srai_shift6, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64ic_addiw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64ic_slliw_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64ic_srliw_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64ic_sraiw_shift5, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64ic_addw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64ic_subw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64ic_sllw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64ic_srlw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64ic_sraw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64ic_mul, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64ic_mulh, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64ic_mulhsu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64ic_mulhu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64ic_div, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64ic_divu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64ic_rem, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64ic_remu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64ic_mulw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64ic_divw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64ic_divuw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64ic_remw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64ic_remuw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64ic_lr_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64ic_lr_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64ic_lr_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64ic_lr_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64ic_sc_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64ic_sc_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64ic_sc_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64ic_sc_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64ic_amoswap_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64ic_amoswap_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64ic_amoswap_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64ic_amoswap_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64ic_amoadd_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64ic_amoadd_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64ic_amoadd_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64ic_amoadd_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64ic_amoxor_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64ic_amoxor_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64ic_amoxor_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64ic_amoxor_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64ic_amoand_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64ic_amoand_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64ic_amoand_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64ic_amoand_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64ic_amoor_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64ic_amoor_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64ic_amoor_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64ic_amoor_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64ic_amomin_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64ic_amomin_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64ic_amomin_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64ic_amomin_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64ic_amomax_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64ic_amomax_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64ic_amomax_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64ic_amomax_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64ic_amominu_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64ic_amominu_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64ic_amominu_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64ic_amominu_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64ic_amomaxu_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64ic_amomaxu_w_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64ic_amomaxu_w_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64ic_amomaxu_w_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64ic_lr_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64ic_lr_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64ic_lr_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64ic_lr_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64ic_sc_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64ic_sc_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64ic_sc_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64ic_sc_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64ic_amoswap_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64ic_amoswap_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64ic_amoswap_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64ic_amoswap_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64ic_amoadd_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64ic_amoadd_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64ic_amoadd_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64ic_amoadd_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64ic_amoxor_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64ic_amoxor_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64ic_amoxor_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64ic_amoxor_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64ic_amoand_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64ic_amoand_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64ic_amoand_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64ic_amoand_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64ic_amoor_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64ic_amoor_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64ic_amoor_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64ic_amoor_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64ic_amomin_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64ic_amomin_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64ic_amomin_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64ic_amomin_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64ic_amomax_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64ic_amomax_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64ic_amomax_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64ic_amomax_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64ic_amominu_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64ic_amominu_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64ic_amominu_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64ic_amominu_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64ic_amomaxu_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64ic_amomaxu_d_aq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64ic_amomaxu_d_rl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64ic_amomaxu_d_aqrl, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64ic_flw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64ic_fsw, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64ic_fmadd_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64ic_fmsub_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64ic_fnmsub_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64ic_fnmadd_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64ic_fadd_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64ic_fsub_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64ic_fmul_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64ic_fdiv_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64ic_fsgnj_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64ic_fsgnjn_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64ic_fsgnjx_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64ic_fmin_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64ic_fmax_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64ic_feq_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64ic_flt_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64ic_fle_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64ic_fsqrt_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64ic_fcvt_w_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64ic_fcvt_wu_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64ic_fmv_x_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64ic_fclass_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64ic_fcvt_s_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64ic_fcvt_s_wu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64ic_fmv_w_x, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64ic_fcvt_l_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64ic_fcvt_lu_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64ic_fcvt_s_l, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64ic_fcvt_s_lu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64ic_fld, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64ic_fsd, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64ic_fmadd_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64ic_fmsub_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64ic_fnmsub_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64ic_fnmadd_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64ic_fadd_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64ic_fsub_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64ic_fmul_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64ic_fdiv_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64ic_fsgnj_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64ic_fsgnjn_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64ic_fsgnjx_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64ic_fmin_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64ic_fmax_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64ic_feq_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64ic_flt_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64ic_fle_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64ic_fsqrt_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64ic_fcvt_w_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64ic_fcvt_wu_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64ic_fclass_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64ic_fcvt_d_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64ic_fcvt_d_wu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64ic_fcvt_s_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64ic_fcvt_d_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64ic_fcvt_l_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64ic_fcvt_lu_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64ic_fmv_x_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64ic_fcvt_d_l, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64ic_fcvt_d_lu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64ic_fmv_d_x, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64ic_flq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64ic_fsq, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64ic_fmadd_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64ic_fmsub_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64ic_fnmsub_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64ic_fnmadd_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64ic_fadd_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64ic_fsub_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64ic_fmul_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64ic_fdiv_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64ic_fsgnj_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64ic_fsgnjn_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64ic_fsgnjx_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64ic_fmin_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64ic_fmax_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64ic_feq_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64ic_flt_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64ic_fle_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64ic_fsqrt_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64ic_fcvt_w_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64ic_fcvt_wu_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64ic_fclass_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64ic_fcvt_q_w, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64ic_fcvt_q_wu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64ic_fcvt_s_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64ic_fcvt_d_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64ic_fcvt_q_s, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64ic_fcvt_q_d, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64ic_fcvt_l_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64ic_fcvt_lu_q, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64ic_fcvt_q_l, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64ic_fcvt_q_lu, { { (int) UNIT_RV64IC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64im'.  */

static const INSN_TIMING rv64im_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64im_c_addi16sp, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64im_lui, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64im_auipc, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64im_jal, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64im_jalr, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64im_beq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64im_bne, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64im_blt, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64im_bge, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64im_bltu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64im_bgeu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64im_lb, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64im_lh, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64im_lw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64im_lbu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64im_lhu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64im_sb, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64im_sh, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64im_sw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64im_addi, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64im_slti, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64im_sltiu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64im_xori, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64im_ori, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64im_andi, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64im_slli_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64im_srli_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64im_srai_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64im_add, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64im_sub, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64im_sll, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64im_slt, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64im_sltu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64im_xor, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64im_srl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64im_sra, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64im_or, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64im_and, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64im_fence, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64im_sfence_vm, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64im_sfence_vma, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64im_fence_i, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64im_ecall, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64im_ebreak, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64im_csrrw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64im_csrrs, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64im_csrrc, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64im_csrrwi, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64im_csrrsi, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64im_csrrci, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64im_uret, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64im_sret, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64im_hret, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64im_mret, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64im_dret, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64im_wfi, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64im_lwu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64im_ld, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64im_sd, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64im_slli_shift6, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64im_srli_shift6, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64im_srai_shift6, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64im_addiw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64im_slliw_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64im_srliw_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64im_sraiw_shift5, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64im_addw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64im_subw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64im_sllw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64im_srlw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64im_sraw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64im_mul, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64im_mulh, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64im_mulhsu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64im_mulhu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64im_div, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64im_divu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64im_rem, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64im_remu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64im_mulw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64im_divw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64im_divuw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64im_remw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64im_remuw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64im_lr_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64im_lr_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64im_lr_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64im_lr_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64im_sc_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64im_sc_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64im_sc_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64im_sc_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64im_amoswap_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64im_amoswap_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64im_amoswap_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64im_amoswap_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64im_amoadd_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64im_amoadd_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64im_amoadd_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64im_amoadd_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64im_amoxor_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64im_amoxor_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64im_amoxor_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64im_amoxor_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64im_amoand_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64im_amoand_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64im_amoand_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64im_amoand_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64im_amoor_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64im_amoor_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64im_amoor_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64im_amoor_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64im_amomin_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64im_amomin_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64im_amomin_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64im_amomin_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64im_amomax_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64im_amomax_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64im_amomax_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64im_amomax_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64im_amominu_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64im_amominu_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64im_amominu_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64im_amominu_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64im_amomaxu_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64im_amomaxu_w_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64im_amomaxu_w_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64im_amomaxu_w_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64im_lr_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64im_lr_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64im_lr_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64im_lr_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64im_sc_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64im_sc_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64im_sc_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64im_sc_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64im_amoswap_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64im_amoswap_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64im_amoswap_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64im_amoswap_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64im_amoadd_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64im_amoadd_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64im_amoadd_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64im_amoadd_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64im_amoxor_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64im_amoxor_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64im_amoxor_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64im_amoxor_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64im_amoand_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64im_amoand_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64im_amoand_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64im_amoand_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64im_amoor_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64im_amoor_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64im_amoor_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64im_amoor_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64im_amomin_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64im_amomin_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64im_amomin_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64im_amomin_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64im_amomax_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64im_amomax_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64im_amomax_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64im_amomax_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64im_amominu_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64im_amominu_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64im_amominu_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64im_amominu_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64im_amomaxu_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64im_amomaxu_d_aq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64im_amomaxu_d_rl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64im_amomaxu_d_aqrl, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64im_flw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64im_fsw, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64im_fmadd_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64im_fmsub_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64im_fnmsub_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64im_fnmadd_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64im_fadd_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64im_fsub_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64im_fmul_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64im_fdiv_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64im_fsgnj_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64im_fsgnjn_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64im_fsgnjx_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64im_fmin_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64im_fmax_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64im_feq_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64im_flt_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64im_fle_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64im_fsqrt_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64im_fcvt_w_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64im_fcvt_wu_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64im_fmv_x_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64im_fclass_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64im_fcvt_s_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64im_fcvt_s_wu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64im_fmv_w_x, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64im_fcvt_l_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64im_fcvt_lu_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64im_fcvt_s_l, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64im_fcvt_s_lu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64im_fld, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64im_fsd, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64im_fmadd_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64im_fmsub_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64im_fnmsub_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64im_fnmadd_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64im_fadd_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64im_fsub_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64im_fmul_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64im_fdiv_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64im_fsgnj_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64im_fsgnjn_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64im_fsgnjx_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64im_fmin_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64im_fmax_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64im_feq_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64im_flt_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64im_fle_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64im_fsqrt_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64im_fcvt_w_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64im_fcvt_wu_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64im_fclass_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64im_fcvt_d_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64im_fcvt_d_wu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64im_fcvt_s_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64im_fcvt_d_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64im_fcvt_l_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64im_fcvt_lu_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64im_fmv_x_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64im_fcvt_d_l, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64im_fcvt_d_lu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64im_fmv_d_x, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64im_flq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64im_fsq, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64im_fmadd_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64im_fmsub_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64im_fnmsub_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64im_fnmadd_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64im_fadd_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64im_fsub_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64im_fmul_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64im_fdiv_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64im_fsgnj_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64im_fsgnjn_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64im_fsgnjx_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64im_fmin_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64im_fmax_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64im_feq_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64im_flt_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64im_fle_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64im_fsqrt_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64im_fcvt_w_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64im_fcvt_wu_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64im_fclass_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64im_fcvt_q_w, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64im_fcvt_q_wu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64im_fcvt_s_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64im_fcvt_d_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64im_fcvt_q_s, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64im_fcvt_q_d, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64im_fcvt_l_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64im_fcvt_lu_q, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64im_fcvt_q_l, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64im_fcvt_q_lu, { { (int) UNIT_RV64IM_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64imc'.  */

static const INSN_TIMING rv64imc_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64imc_c_addi16sp, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64imc_lui, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64imc_auipc, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64imc_jal, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64imc_jalr, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64imc_beq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64imc_bne, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64imc_blt, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64imc_bge, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64imc_bltu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64imc_bgeu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64imc_lb, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64imc_lh, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64imc_lw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64imc_lbu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64imc_lhu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64imc_sb, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64imc_sh, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64imc_sw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64imc_addi, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64imc_slti, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64imc_sltiu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64imc_xori, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64imc_ori, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64imc_andi, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64imc_slli_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64imc_srli_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64imc_srai_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64imc_add, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64imc_sub, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64imc_sll, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64imc_slt, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64imc_sltu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64imc_xor, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64imc_srl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64imc_sra, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64imc_or, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64imc_and, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64imc_fence, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64imc_sfence_vm, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64imc_sfence_vma, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64imc_fence_i, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64imc_ecall, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64imc_ebreak, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64imc_csrrw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64imc_csrrs, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64imc_csrrc, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64imc_csrrwi, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64imc_csrrsi, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64imc_csrrci, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64imc_uret, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64imc_sret, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64imc_hret, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64imc_mret, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64imc_dret, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64imc_wfi, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64imc_lwu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64imc_ld, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64imc_sd, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64imc_slli_shift6, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64imc_srli_shift6, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64imc_srai_shift6, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64imc_addiw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64imc_slliw_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64imc_srliw_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64imc_sraiw_shift5, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64imc_addw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64imc_subw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64imc_sllw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64imc_srlw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64imc_sraw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64imc_mul, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64imc_mulh, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64imc_mulhsu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64imc_mulhu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64imc_div, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64imc_divu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64imc_rem, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64imc_remu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64imc_mulw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64imc_divw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64imc_divuw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64imc_remw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64imc_remuw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64imc_lr_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64imc_lr_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64imc_lr_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64imc_lr_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64imc_sc_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64imc_sc_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64imc_sc_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64imc_sc_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64imc_amoswap_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64imc_amoswap_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64imc_amoswap_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64imc_amoswap_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64imc_amoadd_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64imc_amoadd_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64imc_amoadd_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64imc_amoadd_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64imc_amoxor_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64imc_amoxor_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64imc_amoxor_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64imc_amoxor_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64imc_amoand_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64imc_amoand_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64imc_amoand_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64imc_amoand_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64imc_amoor_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64imc_amoor_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64imc_amoor_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64imc_amoor_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64imc_amomin_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64imc_amomin_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64imc_amomin_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64imc_amomin_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64imc_amomax_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64imc_amomax_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64imc_amomax_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64imc_amomax_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64imc_amominu_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64imc_amominu_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64imc_amominu_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64imc_amominu_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64imc_amomaxu_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64imc_amomaxu_w_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64imc_amomaxu_w_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64imc_amomaxu_w_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64imc_lr_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64imc_lr_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64imc_lr_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64imc_lr_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64imc_sc_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64imc_sc_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64imc_sc_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64imc_sc_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64imc_amoswap_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64imc_amoswap_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64imc_amoswap_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64imc_amoswap_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64imc_amoadd_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64imc_amoadd_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64imc_amoadd_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64imc_amoadd_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64imc_amoxor_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64imc_amoxor_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64imc_amoxor_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64imc_amoxor_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64imc_amoand_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64imc_amoand_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64imc_amoand_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64imc_amoand_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64imc_amoor_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64imc_amoor_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64imc_amoor_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64imc_amoor_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64imc_amomin_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64imc_amomin_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64imc_amomin_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64imc_amomin_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64imc_amomax_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64imc_amomax_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64imc_amomax_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64imc_amomax_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64imc_amominu_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64imc_amominu_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64imc_amominu_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64imc_amominu_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64imc_amomaxu_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64imc_amomaxu_d_aq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64imc_amomaxu_d_rl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64imc_amomaxu_d_aqrl, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64imc_flw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64imc_fsw, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64imc_fmadd_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64imc_fmsub_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64imc_fnmsub_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64imc_fnmadd_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64imc_fadd_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64imc_fsub_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64imc_fmul_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64imc_fdiv_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64imc_fsgnj_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64imc_fsgnjn_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64imc_fsgnjx_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64imc_fmin_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64imc_fmax_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64imc_feq_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64imc_flt_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64imc_fle_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64imc_fsqrt_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64imc_fcvt_w_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64imc_fcvt_wu_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64imc_fmv_x_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64imc_fclass_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64imc_fcvt_s_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64imc_fcvt_s_wu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64imc_fmv_w_x, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64imc_fcvt_l_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64imc_fcvt_lu_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64imc_fcvt_s_l, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64imc_fcvt_s_lu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64imc_fld, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64imc_fsd, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64imc_fmadd_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64imc_fmsub_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64imc_fnmsub_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64imc_fnmadd_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64imc_fadd_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64imc_fsub_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64imc_fmul_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64imc_fdiv_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64imc_fsgnj_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64imc_fsgnjn_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64imc_fsgnjx_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64imc_fmin_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64imc_fmax_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64imc_feq_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64imc_flt_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64imc_fle_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64imc_fsqrt_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64imc_fcvt_w_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64imc_fcvt_wu_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64imc_fclass_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64imc_fcvt_d_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64imc_fcvt_d_wu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64imc_fcvt_s_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64imc_fcvt_d_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64imc_fcvt_l_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64imc_fcvt_lu_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64imc_fmv_x_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64imc_fcvt_d_l, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64imc_fcvt_d_lu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64imc_fmv_d_x, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64imc_flq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64imc_fsq, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64imc_fmadd_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64imc_fmsub_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64imc_fnmsub_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64imc_fnmadd_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64imc_fadd_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64imc_fsub_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64imc_fmul_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64imc_fdiv_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64imc_fsgnj_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64imc_fsgnjn_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64imc_fsgnjx_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64imc_fmin_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64imc_fmax_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64imc_feq_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64imc_flt_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64imc_fle_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64imc_fsqrt_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64imc_fcvt_w_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64imc_fcvt_wu_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64imc_fclass_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64imc_fcvt_q_w, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64imc_fcvt_q_wu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64imc_fcvt_s_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64imc_fcvt_d_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64imc_fcvt_q_s, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64imc_fcvt_q_d, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64imc_fcvt_l_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64imc_fcvt_lu_q, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64imc_fcvt_q_l, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64imc_fcvt_q_lu, { { (int) UNIT_RV64IMC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64g'.  */

static const INSN_TIMING rv64g_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64g_c_addi16sp, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64g_lui, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64g_auipc, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64g_jal, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64g_jalr, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64g_beq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64g_bne, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64g_blt, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64g_bge, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64g_bltu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64g_bgeu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64g_lb, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64g_lh, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64g_lw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64g_lbu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64g_lhu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64g_sb, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64g_sh, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64g_sw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64g_addi, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64g_slti, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64g_sltiu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64g_xori, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64g_ori, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64g_andi, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64g_slli_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64g_srli_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64g_srai_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64g_add, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64g_sub, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64g_sll, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64g_slt, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64g_sltu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64g_xor, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64g_srl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64g_sra, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64g_or, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64g_and, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64g_fence, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64g_sfence_vm, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64g_sfence_vma, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64g_fence_i, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64g_ecall, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64g_ebreak, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64g_csrrw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64g_csrrs, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64g_csrrc, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64g_csrrwi, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64g_csrrsi, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64g_csrrci, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64g_uret, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64g_sret, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64g_hret, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64g_mret, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64g_dret, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64g_wfi, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64g_lwu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64g_ld, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64g_sd, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64g_slli_shift6, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64g_srli_shift6, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64g_srai_shift6, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64g_addiw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64g_slliw_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64g_srliw_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64g_sraiw_shift5, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64g_addw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64g_subw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64g_sllw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64g_srlw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64g_sraw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64g_mul, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64g_mulh, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64g_mulhsu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64g_mulhu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64g_div, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64g_divu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64g_rem, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64g_remu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64g_mulw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64g_divw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64g_divuw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64g_remw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64g_remuw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64g_lr_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64g_lr_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64g_lr_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64g_lr_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64g_sc_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64g_sc_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64g_sc_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64g_sc_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64g_amoswap_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64g_amoswap_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64g_amoswap_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64g_amoswap_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64g_amoadd_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64g_amoadd_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64g_amoadd_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64g_amoadd_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64g_amoxor_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64g_amoxor_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64g_amoxor_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64g_amoxor_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64g_amoand_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64g_amoand_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64g_amoand_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64g_amoand_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64g_amoor_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64g_amoor_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64g_amoor_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64g_amoor_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64g_amomin_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64g_amomin_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64g_amomin_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64g_amomin_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64g_amomax_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64g_amomax_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64g_amomax_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64g_amomax_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64g_amominu_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64g_amominu_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64g_amominu_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64g_amominu_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64g_amomaxu_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64g_amomaxu_w_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64g_amomaxu_w_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64g_amomaxu_w_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64g_lr_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64g_lr_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64g_lr_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64g_lr_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64g_sc_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64g_sc_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64g_sc_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64g_sc_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64g_amoswap_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64g_amoswap_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64g_amoswap_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64g_amoswap_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64g_amoadd_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64g_amoadd_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64g_amoadd_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64g_amoadd_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64g_amoxor_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64g_amoxor_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64g_amoxor_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64g_amoxor_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64g_amoand_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64g_amoand_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64g_amoand_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64g_amoand_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64g_amoor_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64g_amoor_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64g_amoor_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64g_amoor_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64g_amomin_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64g_amomin_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64g_amomin_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64g_amomin_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64g_amomax_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64g_amomax_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64g_amomax_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64g_amomax_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64g_amominu_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64g_amominu_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64g_amominu_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64g_amominu_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64g_amomaxu_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64g_amomaxu_d_aq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64g_amomaxu_d_rl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64g_amomaxu_d_aqrl, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64g_flw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64g_fsw, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64g_fmadd_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64g_fmsub_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64g_fnmsub_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64g_fnmadd_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64g_fadd_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64g_fsub_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64g_fmul_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64g_fdiv_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64g_fsgnj_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64g_fsgnjn_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64g_fsgnjx_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64g_fmin_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64g_fmax_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64g_feq_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64g_flt_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64g_fle_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64g_fsqrt_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64g_fcvt_w_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64g_fcvt_wu_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64g_fmv_x_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64g_fclass_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64g_fcvt_s_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64g_fcvt_s_wu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64g_fmv_w_x, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64g_fcvt_l_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64g_fcvt_lu_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64g_fcvt_s_l, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64g_fcvt_s_lu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64g_fld, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64g_fsd, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64g_fmadd_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64g_fmsub_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64g_fnmsub_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64g_fnmadd_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64g_fadd_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64g_fsub_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64g_fmul_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64g_fdiv_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64g_fsgnj_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64g_fsgnjn_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64g_fsgnjx_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64g_fmin_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64g_fmax_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64g_feq_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64g_flt_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64g_fle_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64g_fsqrt_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64g_fcvt_w_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64g_fcvt_wu_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64g_fclass_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64g_fcvt_d_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64g_fcvt_d_wu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64g_fcvt_s_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64g_fcvt_d_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64g_fcvt_l_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64g_fcvt_lu_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64g_fmv_x_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64g_fcvt_d_l, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64g_fcvt_d_lu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64g_fmv_d_x, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64g_flq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64g_fsq, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64g_fmadd_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64g_fmsub_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64g_fnmsub_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64g_fnmadd_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64g_fadd_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64g_fsub_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64g_fmul_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64g_fdiv_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64g_fsgnj_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64g_fsgnjn_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64g_fsgnjx_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64g_fmin_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64g_fmax_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64g_feq_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64g_flt_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64g_fle_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64g_fsqrt_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64g_fcvt_w_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64g_fcvt_wu_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64g_fclass_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64g_fcvt_q_w, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64g_fcvt_q_wu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64g_fcvt_s_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64g_fcvt_d_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64g_fcvt_q_s, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64g_fcvt_q_d, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64g_fcvt_l_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64g_fcvt_lu_q, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64g_fcvt_q_l, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64g_fcvt_q_lu, { { (int) UNIT_RV64G_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64gc'.  */

static const INSN_TIMING rv64gc_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64gc_c_addi16sp, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64gc_lui, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64gc_auipc, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64gc_jal, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64gc_jalr, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64gc_beq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64gc_bne, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64gc_blt, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64gc_bge, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64gc_bltu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64gc_bgeu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64gc_lb, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64gc_lh, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64gc_lw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64gc_lbu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64gc_lhu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64gc_sb, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64gc_sh, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64gc_sw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64gc_addi, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64gc_slti, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64gc_sltiu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64gc_xori, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64gc_ori, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64gc_andi, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64gc_slli_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64gc_srli_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64gc_srai_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64gc_add, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64gc_sub, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64gc_sll, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64gc_slt, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64gc_sltu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64gc_xor, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64gc_srl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64gc_sra, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64gc_or, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64gc_and, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64gc_fence, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64gc_sfence_vm, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64gc_sfence_vma, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64gc_fence_i, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64gc_ecall, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64gc_ebreak, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64gc_csrrw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64gc_csrrs, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64gc_csrrc, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64gc_csrrwi, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64gc_csrrsi, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64gc_csrrci, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64gc_uret, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64gc_sret, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64gc_hret, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64gc_mret, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64gc_dret, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64gc_wfi, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64gc_lwu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64gc_ld, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64gc_sd, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64gc_slli_shift6, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64gc_srli_shift6, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64gc_srai_shift6, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64gc_addiw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64gc_slliw_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64gc_srliw_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64gc_sraiw_shift5, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64gc_addw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64gc_subw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64gc_sllw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64gc_srlw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64gc_sraw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64gc_mul, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64gc_mulh, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64gc_mulhsu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64gc_mulhu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64gc_div, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64gc_divu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64gc_rem, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64gc_remu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64gc_mulw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64gc_divw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64gc_divuw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64gc_remw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64gc_remuw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64gc_lr_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64gc_lr_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64gc_lr_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64gc_lr_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64gc_sc_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64gc_sc_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64gc_sc_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64gc_sc_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64gc_amoswap_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64gc_amoswap_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64gc_amoswap_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64gc_amoswap_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64gc_amoadd_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64gc_amoadd_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64gc_amoadd_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64gc_amoadd_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64gc_amoxor_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64gc_amoxor_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64gc_amoxor_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64gc_amoxor_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64gc_amoand_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64gc_amoand_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64gc_amoand_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64gc_amoand_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64gc_amoor_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64gc_amoor_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64gc_amoor_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64gc_amoor_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64gc_amomin_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64gc_amomin_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64gc_amomin_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64gc_amomin_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64gc_amomax_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64gc_amomax_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64gc_amomax_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64gc_amomax_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64gc_amominu_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64gc_amominu_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64gc_amominu_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64gc_amominu_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64gc_amomaxu_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64gc_amomaxu_w_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64gc_amomaxu_w_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64gc_amomaxu_w_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64gc_lr_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64gc_lr_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64gc_lr_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64gc_lr_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64gc_sc_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64gc_sc_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64gc_sc_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64gc_sc_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64gc_amoswap_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64gc_amoswap_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64gc_amoswap_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64gc_amoswap_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64gc_amoadd_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64gc_amoadd_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64gc_amoadd_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64gc_amoadd_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64gc_amoxor_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64gc_amoxor_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64gc_amoxor_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64gc_amoxor_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64gc_amoand_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64gc_amoand_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64gc_amoand_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64gc_amoand_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64gc_amoor_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64gc_amoor_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64gc_amoor_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64gc_amoor_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64gc_amomin_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64gc_amomin_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64gc_amomin_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64gc_amomin_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64gc_amomax_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64gc_amomax_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64gc_amomax_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64gc_amomax_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64gc_amominu_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64gc_amominu_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64gc_amominu_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64gc_amominu_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64gc_amomaxu_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64gc_amomaxu_d_aq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64gc_amomaxu_d_rl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64gc_amomaxu_d_aqrl, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64gc_flw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64gc_fsw, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64gc_fmadd_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64gc_fmsub_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64gc_fnmsub_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64gc_fnmadd_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64gc_fadd_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64gc_fsub_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64gc_fmul_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64gc_fdiv_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64gc_fsgnj_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64gc_fsgnjn_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64gc_fsgnjx_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64gc_fmin_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64gc_fmax_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64gc_feq_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64gc_flt_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64gc_fle_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64gc_fsqrt_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64gc_fcvt_w_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64gc_fcvt_wu_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64gc_fmv_x_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64gc_fclass_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64gc_fcvt_s_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64gc_fcvt_s_wu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64gc_fmv_w_x, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64gc_fcvt_l_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64gc_fcvt_lu_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64gc_fcvt_s_l, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64gc_fcvt_s_lu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64gc_fld, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64gc_fsd, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64gc_fmadd_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64gc_fmsub_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64gc_fnmsub_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64gc_fnmadd_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64gc_fadd_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64gc_fsub_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64gc_fmul_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64gc_fdiv_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64gc_fsgnj_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64gc_fsgnjn_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64gc_fsgnjx_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64gc_fmin_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64gc_fmax_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64gc_feq_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64gc_flt_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64gc_fle_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64gc_fsqrt_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64gc_fcvt_w_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64gc_fcvt_wu_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64gc_fclass_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64gc_fcvt_d_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64gc_fcvt_d_wu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64gc_fcvt_s_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64gc_fcvt_d_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64gc_fcvt_l_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64gc_fcvt_lu_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64gc_fmv_x_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64gc_fcvt_d_l, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64gc_fcvt_d_lu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64gc_fmv_d_x, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64gc_flq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64gc_fsq, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64gc_fmadd_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64gc_fmsub_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64gc_fnmsub_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64gc_fnmadd_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64gc_fadd_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64gc_fsub_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64gc_fmul_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64gc_fdiv_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64gc_fsgnj_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64gc_fsgnjn_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64gc_fsgnjx_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64gc_fmin_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64gc_fmax_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64gc_feq_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64gc_flt_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64gc_fle_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64gc_fsqrt_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64gc_fcvt_w_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64gc_fcvt_wu_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64gc_fclass_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64gc_fcvt_q_w, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64gc_fcvt_q_wu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64gc_fcvt_s_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64gc_fcvt_d_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64gc_fcvt_q_s, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64gc_fcvt_q_d, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64gc_fcvt_l_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64gc_fcvt_lu_q, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64gc_fcvt_q_l, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64gc_fcvt_q_lu, { { (int) UNIT_RV64GC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv64gqc'.  */

static const INSN_TIMING rv64gqc_timing[] = {
  { RISCV64BF_RV64_INSN_X_INVALID, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_AFTER, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEFORE, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_CHAIN, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_X_BEGIN, 0, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_C_ADDI16SP, model_rv64gqc_c_addi16sp, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LUI, model_rv64gqc_lui, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AUIPC, model_rv64gqc_auipc, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JAL, model_rv64gqc_jal, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_JALR, model_rv64gqc_jalr, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BEQ, model_rv64gqc_beq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BNE, model_rv64gqc_bne, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLT, model_rv64gqc_blt, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGE, model_rv64gqc_bge, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BLTU, model_rv64gqc_bltu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_BGEU, model_rv64gqc_bgeu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LB, model_rv64gqc_lb, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LH, model_rv64gqc_lh, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LW, model_rv64gqc_lw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LBU, model_rv64gqc_lbu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LHU, model_rv64gqc_lhu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SB, model_rv64gqc_sb, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SH, model_rv64gqc_sh, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SW, model_rv64gqc_sw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDI, model_rv64gqc_addi, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTI, model_rv64gqc_slti, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTIU, model_rv64gqc_sltiu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XORI, model_rv64gqc_xori, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ORI, model_rv64gqc_ori, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ANDI, model_rv64gqc_andi, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT5, model_rv64gqc_slli_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT5, model_rv64gqc_srli_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT5, model_rv64gqc_srai_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADD, model_rv64gqc_add, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUB, model_rv64gqc_sub, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLL, model_rv64gqc_sll, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLT, model_rv64gqc_slt, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLTU, model_rv64gqc_sltu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_XOR, model_rv64gqc_xor, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRL, model_rv64gqc_srl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRA, model_rv64gqc_sra, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_OR, model_rv64gqc_or, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AND, model_rv64gqc_and, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE, model_rv64gqc_fence, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VM, model_rv64gqc_sfence_vm, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SFENCE_VMA, model_rv64gqc_sfence_vma, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FENCE_I, model_rv64gqc_fence_i, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ECALL, model_rv64gqc_ecall, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_EBREAK, model_rv64gqc_ebreak, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRW, model_rv64gqc_csrrw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRS, model_rv64gqc_csrrs, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRC, model_rv64gqc_csrrc, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRWI, model_rv64gqc_csrrwi, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRSI, model_rv64gqc_csrrsi, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_CSRRCI, model_rv64gqc_csrrci, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_URET, model_rv64gqc_uret, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRET, model_rv64gqc_sret, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_HRET, model_rv64gqc_hret, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MRET, model_rv64gqc_mret, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DRET, model_rv64gqc_dret, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_WFI, model_rv64gqc_wfi, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LWU, model_rv64gqc_lwu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LD, model_rv64gqc_ld, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SD, model_rv64gqc_sd, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLI_SHIFT6, model_rv64gqc_slli_shift6, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLI_SHIFT6, model_rv64gqc_srli_shift6, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAI_SHIFT6, model_rv64gqc_srai_shift6, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDIW, model_rv64gqc_addiw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLIW_SHIFT5, model_rv64gqc_slliw_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLIW_SHIFT5, model_rv64gqc_srliw_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAIW_SHIFT5, model_rv64gqc_sraiw_shift5, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_ADDW, model_rv64gqc_addw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SUBW, model_rv64gqc_subw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SLLW, model_rv64gqc_sllw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRLW, model_rv64gqc_srlw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SRAW, model_rv64gqc_sraw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MUL, model_rv64gqc_mul, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULH, model_rv64gqc_mulh, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHSU, model_rv64gqc_mulhsu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULHU, model_rv64gqc_mulhu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIV, model_rv64gqc_div, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVU, model_rv64gqc_divu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REM, model_rv64gqc_rem, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMU, model_rv64gqc_remu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_MULW, model_rv64gqc_mulw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVW, model_rv64gqc_divw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_DIVUW, model_rv64gqc_divuw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMW, model_rv64gqc_remw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_REMUW, model_rv64gqc_remuw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W, model_rv64gqc_lr_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQ, model_rv64gqc_lr_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_RL, model_rv64gqc_lr_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_W_AQRL, model_rv64gqc_lr_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W, model_rv64gqc_sc_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQ, model_rv64gqc_sc_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_RL, model_rv64gqc_sc_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_W_AQRL, model_rv64gqc_sc_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W, model_rv64gqc_amoswap_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQ, model_rv64gqc_amoswap_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_RL, model_rv64gqc_amoswap_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_W_AQRL, model_rv64gqc_amoswap_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W, model_rv64gqc_amoadd_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQ, model_rv64gqc_amoadd_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_RL, model_rv64gqc_amoadd_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_W_AQRL, model_rv64gqc_amoadd_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W, model_rv64gqc_amoxor_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQ, model_rv64gqc_amoxor_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_RL, model_rv64gqc_amoxor_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_W_AQRL, model_rv64gqc_amoxor_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W, model_rv64gqc_amoand_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQ, model_rv64gqc_amoand_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_RL, model_rv64gqc_amoand_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_W_AQRL, model_rv64gqc_amoand_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W, model_rv64gqc_amoor_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQ, model_rv64gqc_amoor_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_RL, model_rv64gqc_amoor_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_W_AQRL, model_rv64gqc_amoor_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W, model_rv64gqc_amomin_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQ, model_rv64gqc_amomin_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_RL, model_rv64gqc_amomin_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_W_AQRL, model_rv64gqc_amomin_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W, model_rv64gqc_amomax_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQ, model_rv64gqc_amomax_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_RL, model_rv64gqc_amomax_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_W_AQRL, model_rv64gqc_amomax_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W, model_rv64gqc_amominu_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQ, model_rv64gqc_amominu_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_RL, model_rv64gqc_amominu_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_W_AQRL, model_rv64gqc_amominu_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W, model_rv64gqc_amomaxu_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQ, model_rv64gqc_amomaxu_w_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_RL, model_rv64gqc_amomaxu_w_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_W_AQRL, model_rv64gqc_amomaxu_w_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D, model_rv64gqc_lr_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQ, model_rv64gqc_lr_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_RL, model_rv64gqc_lr_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_LR_D_AQRL, model_rv64gqc_lr_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D, model_rv64gqc_sc_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQ, model_rv64gqc_sc_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_RL, model_rv64gqc_sc_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_SC_D_AQRL, model_rv64gqc_sc_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D, model_rv64gqc_amoswap_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQ, model_rv64gqc_amoswap_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_RL, model_rv64gqc_amoswap_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOSWAP_D_AQRL, model_rv64gqc_amoswap_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D, model_rv64gqc_amoadd_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQ, model_rv64gqc_amoadd_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_RL, model_rv64gqc_amoadd_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOADD_D_AQRL, model_rv64gqc_amoadd_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D, model_rv64gqc_amoxor_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQ, model_rv64gqc_amoxor_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_RL, model_rv64gqc_amoxor_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOXOR_D_AQRL, model_rv64gqc_amoxor_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D, model_rv64gqc_amoand_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQ, model_rv64gqc_amoand_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_RL, model_rv64gqc_amoand_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOAND_D_AQRL, model_rv64gqc_amoand_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D, model_rv64gqc_amoor_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQ, model_rv64gqc_amoor_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_RL, model_rv64gqc_amoor_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOOR_D_AQRL, model_rv64gqc_amoor_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D, model_rv64gqc_amomin_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQ, model_rv64gqc_amomin_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_RL, model_rv64gqc_amomin_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMIN_D_AQRL, model_rv64gqc_amomin_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D, model_rv64gqc_amomax_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQ, model_rv64gqc_amomax_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_RL, model_rv64gqc_amomax_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAX_D_AQRL, model_rv64gqc_amomax_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D, model_rv64gqc_amominu_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQ, model_rv64gqc_amominu_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_RL, model_rv64gqc_amominu_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMINU_D_AQRL, model_rv64gqc_amominu_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D, model_rv64gqc_amomaxu_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQ, model_rv64gqc_amomaxu_d_aq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_RL, model_rv64gqc_amomaxu_d_rl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_AMOMAXU_D_AQRL, model_rv64gqc_amomaxu_d_aqrl, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLW, model_rv64gqc_flw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSW, model_rv64gqc_fsw, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_S, model_rv64gqc_fmadd_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_S, model_rv64gqc_fmsub_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_S, model_rv64gqc_fnmsub_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_S, model_rv64gqc_fnmadd_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_S, model_rv64gqc_fadd_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_S, model_rv64gqc_fsub_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_S, model_rv64gqc_fmul_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_S, model_rv64gqc_fdiv_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_S, model_rv64gqc_fsgnj_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_S, model_rv64gqc_fsgnjn_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_S, model_rv64gqc_fsgnjx_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_S, model_rv64gqc_fmin_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_S, model_rv64gqc_fmax_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_S, model_rv64gqc_feq_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_S, model_rv64gqc_flt_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_S, model_rv64gqc_fle_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_S, model_rv64gqc_fsqrt_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_S, model_rv64gqc_fcvt_w_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_S, model_rv64gqc_fcvt_wu_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_W, model_rv64gqc_fmv_x_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_S, model_rv64gqc_fclass_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_W, model_rv64gqc_fcvt_s_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_WU, model_rv64gqc_fcvt_s_wu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_W_X, model_rv64gqc_fmv_w_x, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_S, model_rv64gqc_fcvt_l_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_S, model_rv64gqc_fcvt_lu_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_L, model_rv64gqc_fcvt_s_l, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_LU, model_rv64gqc_fcvt_s_lu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLD, model_rv64gqc_fld, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSD, model_rv64gqc_fsd, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_D, model_rv64gqc_fmadd_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_D, model_rv64gqc_fmsub_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_D, model_rv64gqc_fnmsub_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_D, model_rv64gqc_fnmadd_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_D, model_rv64gqc_fadd_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_D, model_rv64gqc_fsub_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_D, model_rv64gqc_fmul_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_D, model_rv64gqc_fdiv_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_D, model_rv64gqc_fsgnj_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_D, model_rv64gqc_fsgnjn_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_D, model_rv64gqc_fsgnjx_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_D, model_rv64gqc_fmin_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_D, model_rv64gqc_fmax_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_D, model_rv64gqc_feq_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_D, model_rv64gqc_flt_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_D, model_rv64gqc_fle_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_D, model_rv64gqc_fsqrt_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_D, model_rv64gqc_fcvt_w_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_D, model_rv64gqc_fcvt_wu_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_D, model_rv64gqc_fclass_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_W, model_rv64gqc_fcvt_d_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_WU, model_rv64gqc_fcvt_d_wu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_D, model_rv64gqc_fcvt_s_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_S, model_rv64gqc_fcvt_d_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_D, model_rv64gqc_fcvt_l_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_D, model_rv64gqc_fcvt_lu_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_X_D, model_rv64gqc_fmv_x_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_L, model_rv64gqc_fcvt_d_l, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_LU, model_rv64gqc_fcvt_d_lu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMV_D_X, model_rv64gqc_fmv_d_x, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLQ, model_rv64gqc_flq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQ, model_rv64gqc_fsq, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMADD_Q, model_rv64gqc_fmadd_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMSUB_Q, model_rv64gqc_fmsub_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMSUB_Q, model_rv64gqc_fnmsub_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FNMADD_Q, model_rv64gqc_fnmadd_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FADD_Q, model_rv64gqc_fadd_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSUB_Q, model_rv64gqc_fsub_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMUL_Q, model_rv64gqc_fmul_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FDIV_Q, model_rv64gqc_fdiv_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJ_Q, model_rv64gqc_fsgnj_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJN_Q, model_rv64gqc_fsgnjn_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSGNJX_Q, model_rv64gqc_fsgnjx_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMIN_Q, model_rv64gqc_fmin_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FMAX_Q, model_rv64gqc_fmax_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FEQ_Q, model_rv64gqc_feq_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLT_Q, model_rv64gqc_flt_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FLE_Q, model_rv64gqc_fle_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FSQRT_Q, model_rv64gqc_fsqrt_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_W_Q, model_rv64gqc_fcvt_w_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_WU_Q, model_rv64gqc_fcvt_wu_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCLASS_Q, model_rv64gqc_fclass_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_W, model_rv64gqc_fcvt_q_w, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_WU, model_rv64gqc_fcvt_q_wu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_S_Q, model_rv64gqc_fcvt_s_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_D_Q, model_rv64gqc_fcvt_d_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_S, model_rv64gqc_fcvt_q_s, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_D, model_rv64gqc_fcvt_q_d, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_L_Q, model_rv64gqc_fcvt_l_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_LU_Q, model_rv64gqc_fcvt_lu_q, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_L, model_rv64gqc_fcvt_q_l, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
  { RISCV64BF_RV64_INSN_FCVT_Q_LU, model_rv64gqc_fcvt_q_lu, { { (int) UNIT_RV64GQC_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
rv64i_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64I_DATA));
}

static void
rv64ic_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64IC_DATA));
}

static void
rv64im_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64IM_DATA));
}

static void
rv64imc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64IMC_DATA));
}

static void
rv64g_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64G_DATA));
}

static void
rv64gc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64GC_DATA));
}

static void
rv64gqc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV64GQC_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const SIM_MODEL rv64i_models[] =
{
  { "rv64i", & rv64i_mach, MODEL_RV64I, TIMING_DATA (& rv64i_timing[0]), rv64i_model_init },
  { 0 }
};

static const SIM_MODEL rv64ic_models[] =
{
  { "rv64ic", & rv64ic_mach, MODEL_RV64IC, TIMING_DATA (& rv64ic_timing[0]), rv64ic_model_init },
  { 0 }
};

static const SIM_MODEL rv64im_models[] =
{
  { "rv64im", & rv64im_mach, MODEL_RV64IM, TIMING_DATA (& rv64im_timing[0]), rv64im_model_init },
  { 0 }
};

static const SIM_MODEL rv64imc_models[] =
{
  { "rv64imc", & rv64imc_mach, MODEL_RV64IMC, TIMING_DATA (& rv64imc_timing[0]), rv64imc_model_init },
  { 0 }
};

static const SIM_MODEL rv64g_models[] =
{
  { "rv64g", & rv64g_mach, MODEL_RV64G, TIMING_DATA (& rv64g_timing[0]), rv64g_model_init },
  { 0 }
};

static const SIM_MODEL rv64gc_models[] =
{
  { "rv64gc", & rv64gc_mach, MODEL_RV64GC, TIMING_DATA (& rv64gc_timing[0]), rv64gc_model_init },
  { 0 }
};

static const SIM_MODEL rv64gqc_models[] =
{
  { "rv64gqc", & rv64gqc_mach, MODEL_RV64GQC, TIMING_DATA (& rv64gqc_timing[0]), rv64gqc_model_init },
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
rv64i_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64i_mach =
{
  "rv64i", "rv64i", MACH_RV64I,
  64, 64, & rv64i_models[0], & riscv64bf_imp_properties,
  rv64i_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64ic_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64ic_mach =
{
  "rv64ic", "rv64ic", MACH_RV64IC,
  64, 64, & rv64ic_models[0], & riscv64bf_imp_properties,
  rv64ic_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64im_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64im_mach =
{
  "rv64im", "rv64im", MACH_RV64IM,
  64, 64, & rv64im_models[0], & riscv64bf_imp_properties,
  rv64im_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64imc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64imc_mach =
{
  "rv64imc", "rv64imc", MACH_RV64IMC,
  64, 64, & rv64imc_models[0], & riscv64bf_imp_properties,
  rv64imc_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64g_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64g_mach =
{
  "rv64g", "rv64g", MACH_RV64G,
  64, 64, & rv64g_models[0], & riscv64bf_imp_properties,
  rv64g_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64gc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64gc_mach =
{
  "rv64gc", "rv64gc", MACH_RV64GC,
  64, 64, & rv64gc_models[0], & riscv64bf_imp_properties,
  rv64gc_init_cpu,
  riscv64bf_prepare_run
};

static void
rv64gqc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv64gqc_mach =
{
  "rv64gqc", "riscv:rv64", MACH_RV64GQC,
  64, 64, & rv64gqc_models[0], & riscv64bf_imp_properties,
  rv64gqc_init_cpu,
  riscv64bf_prepare_run
};

