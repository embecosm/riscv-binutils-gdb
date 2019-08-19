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
model_rv32gc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32i_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32i_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32ic_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32ic_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32im_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32im_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32imc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32imc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32g_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32g_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_addi16sp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi16sp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_addi4spn (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_addi4spn.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_nop (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_unimp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_jr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_mv (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_mv.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_li (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_li.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_slli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_slli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_lwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_swsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_srli (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_srai (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_srli.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_andi.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_beqz (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_bnez (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_beqz.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_j (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_slli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_srli64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_srai64 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_j.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_flwsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_flwsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fswsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fswsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_lw.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fldsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fldsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fsdsp (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_swsp.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_c_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_c_fsd.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lui (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_auipc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_lui.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_jal (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jal.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_jalr (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_beq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_bne (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_blt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_bge (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_bltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_bgeu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_beq.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lbu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sb (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_addi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_slti (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sltiu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_xori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_ori (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_andi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_slli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_srli_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_srai_shift5 (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_add (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sub (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sll (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_slt (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sltu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_xor (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_srl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sra (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_or (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_and (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fence (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sfence_vm (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sfence_vma (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fence_tso (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fence_i (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_ecall (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_ebreak (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrs (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrc (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrwi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrsi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_csrrci (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_uret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_hret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_mret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_dret (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_wfi (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_mul (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_mulh (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_mulhsu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_mulhu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_div (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_divu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_rem (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_remu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lr_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lr_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lr_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_lr_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sc_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sc_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sc_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_sc_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoswap_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoswap_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoswap_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoswap_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoadd_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoadd_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoadd_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoadd_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoxor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoxor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoxor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoxor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoand_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoand_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoand_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoand_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoor_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoor_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoor_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amoor_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomin_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomin_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomin_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomin_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomax_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomax_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomax_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomax_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amominu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amominu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amominu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amominu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomaxu_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomaxu_w_aq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomaxu_w_rl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_amomaxu_w_aqrl (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_flw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsw (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fadd_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsub_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmul_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fdiv_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnj_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjn_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjx_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmin_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmax_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_feq_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_flt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fle_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsqrt_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_w_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_wu_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmv_x_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fclass_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_s_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_s_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmv_w_x (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fld (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_jalr.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsd (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_sb.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fadd_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsub_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmul_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fdiv_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnj_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjn_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjx_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmin_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmax_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_feq_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_flt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fle_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_fmadd_s.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsqrt_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_w_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_wu_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fclass_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_d_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_d_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_s_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_d_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_slli_shift5.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_flq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsq (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fnmadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fadd_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsub_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmul_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fdiv_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnj_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjn_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsgnjx_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmin_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fmax_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_feq_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_flt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fle_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fsqrt_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_w_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_wu_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fclass_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_q_w (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_q_wu (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_s_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_d_q (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_q_s (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

static int
model_rv32gqc_fcvt_q_d (SIM_CPU *current_cpu, void *sem_arg)
{
#define FLD(f) abuf->fields.sfmt_empty.f
  const ARGBUF * UNUSED abuf = SEM_ARGBUF ((SEM_ARG) sem_arg);
  const IDESC * UNUSED idesc = abuf->idesc;
  int cycles = 0;
  {
    int referenced = 0;
    int UNUSED insn_referenced = abuf->written;
    cycles += riscv32bf_model_rv32gqc_u_exec (current_cpu, idesc, 0, referenced);
  }
  return cycles;
#undef FLD
}

/* We assume UNIT_NONE == 0 because the tables don't always terminate
   entries with it.  */

/* Model timing data for `rv32gc'.  */

static const INSN_TIMING rv32gc_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32gc_c_addi16sp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32gc_c_addi4spn, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32gc_c_nop, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32gc_c_ebreak, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32gc_c_unimp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32gc_c_jr, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32gc_c_jalr, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32gc_c_mv, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32gc_c_add, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32gc_c_and, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32gc_c_or, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32gc_c_xor, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32gc_c_sub, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32gc_c_li, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32gc_c_lui, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32gc_c_addi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32gc_c_slli, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32gc_c_lwsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32gc_c_swsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32gc_c_lw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32gc_c_sw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32gc_c_srli, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32gc_c_srai, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32gc_c_andi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32gc_c_beqz, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32gc_c_bnez, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32gc_c_j, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32gc_c_slli64, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32gc_c_srli64, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32gc_c_srai64, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32gc_c_jal, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32gc_c_flwsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32gc_c_fswsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32gc_c_fsw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32gc_c_flw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32gc_c_fldsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32gc_c_fsdsp, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32gc_c_fsd, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32gc_c_fld, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32gc_lui, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32gc_auipc, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32gc_jal, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32gc_jalr, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32gc_beq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32gc_bne, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32gc_blt, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32gc_bge, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32gc_bltu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32gc_bgeu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32gc_lb, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32gc_lh, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32gc_lw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32gc_lbu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32gc_lhu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32gc_sb, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32gc_sh, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32gc_sw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32gc_addi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32gc_slti, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32gc_sltiu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32gc_xori, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32gc_ori, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32gc_andi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32gc_slli_shift5, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32gc_srli_shift5, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32gc_srai_shift5, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32gc_add, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32gc_sub, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32gc_sll, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32gc_slt, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32gc_sltu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32gc_xor, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32gc_srl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32gc_sra, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32gc_or, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32gc_and, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32gc_fence, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32gc_sfence_vm, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32gc_sfence_vma, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32gc_fence_tso, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32gc_fence_i, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32gc_ecall, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32gc_ebreak, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32gc_csrrw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32gc_csrrs, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32gc_csrrc, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32gc_csrrwi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32gc_csrrsi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32gc_csrrci, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32gc_uret, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32gc_sret, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32gc_hret, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32gc_mret, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32gc_dret, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32gc_wfi, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32gc_mul, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32gc_mulh, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32gc_mulhsu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32gc_mulhu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32gc_div, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32gc_divu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32gc_rem, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32gc_remu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32gc_lr_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32gc_lr_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32gc_lr_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32gc_lr_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32gc_sc_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32gc_sc_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32gc_sc_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32gc_sc_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32gc_amoswap_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32gc_amoswap_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32gc_amoswap_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32gc_amoswap_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32gc_amoadd_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32gc_amoadd_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32gc_amoadd_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32gc_amoadd_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32gc_amoxor_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32gc_amoxor_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32gc_amoxor_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32gc_amoxor_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32gc_amoand_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32gc_amoand_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32gc_amoand_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32gc_amoand_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32gc_amoor_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32gc_amoor_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32gc_amoor_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32gc_amoor_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32gc_amomin_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32gc_amomin_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32gc_amomin_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32gc_amomin_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32gc_amomax_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32gc_amomax_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32gc_amomax_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32gc_amomax_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32gc_amominu_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32gc_amominu_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32gc_amominu_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32gc_amominu_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32gc_amomaxu_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32gc_amomaxu_w_aq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32gc_amomaxu_w_rl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32gc_amomaxu_w_aqrl, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32gc_flw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32gc_fsw, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32gc_fmadd_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32gc_fmsub_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32gc_fnmsub_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32gc_fnmadd_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32gc_fadd_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32gc_fsub_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32gc_fmul_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32gc_fdiv_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32gc_fsgnj_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32gc_fsgnjn_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32gc_fsgnjx_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32gc_fmin_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32gc_fmax_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32gc_feq_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32gc_flt_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32gc_fle_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32gc_fsqrt_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32gc_fcvt_w_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32gc_fcvt_wu_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32gc_fmv_x_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32gc_fclass_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32gc_fcvt_s_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32gc_fcvt_s_wu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32gc_fmv_w_x, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32gc_fld, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32gc_fsd, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32gc_fmadd_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32gc_fmsub_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32gc_fnmsub_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32gc_fnmadd_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32gc_fadd_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32gc_fsub_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32gc_fmul_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32gc_fdiv_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32gc_fsgnj_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32gc_fsgnjn_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32gc_fsgnjx_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32gc_fmin_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32gc_fmax_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32gc_feq_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32gc_flt_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32gc_fle_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32gc_fsqrt_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32gc_fcvt_w_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32gc_fcvt_wu_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32gc_fclass_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32gc_fcvt_d_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32gc_fcvt_d_wu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32gc_fcvt_s_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32gc_fcvt_d_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32gc_flq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32gc_fsq, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32gc_fmadd_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32gc_fmsub_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32gc_fnmsub_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32gc_fnmadd_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32gc_fadd_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32gc_fsub_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32gc_fmul_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32gc_fdiv_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32gc_fsgnj_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32gc_fsgnjn_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32gc_fsgnjx_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32gc_fmin_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32gc_fmax_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32gc_feq_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32gc_flt_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32gc_fle_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32gc_fsqrt_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32gc_fcvt_w_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32gc_fcvt_wu_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32gc_fclass_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32gc_fcvt_q_w, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32gc_fcvt_q_wu, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32gc_fcvt_s_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32gc_fcvt_d_q, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32gc_fcvt_q_s, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32gc_fcvt_q_d, { { (int) UNIT_RV32GC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32i'.  */

static const INSN_TIMING rv32i_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32i_c_addi16sp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32i_c_addi4spn, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32i_c_nop, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32i_c_ebreak, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32i_c_unimp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32i_c_jr, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32i_c_jalr, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32i_c_mv, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32i_c_add, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32i_c_and, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32i_c_or, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32i_c_xor, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32i_c_sub, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32i_c_li, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32i_c_lui, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32i_c_addi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32i_c_slli, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32i_c_lwsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32i_c_swsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32i_c_lw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32i_c_sw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32i_c_srli, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32i_c_srai, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32i_c_andi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32i_c_beqz, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32i_c_bnez, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32i_c_j, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32i_c_slli64, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32i_c_srli64, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32i_c_srai64, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32i_c_jal, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32i_c_flwsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32i_c_fswsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32i_c_fsw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32i_c_flw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32i_c_fldsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32i_c_fsdsp, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32i_c_fsd, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32i_c_fld, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32i_lui, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32i_auipc, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32i_jal, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32i_jalr, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32i_beq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32i_bne, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32i_blt, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32i_bge, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32i_bltu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32i_bgeu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32i_lb, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32i_lh, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32i_lw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32i_lbu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32i_lhu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32i_sb, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32i_sh, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32i_sw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32i_addi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32i_slti, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32i_sltiu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32i_xori, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32i_ori, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32i_andi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32i_slli_shift5, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32i_srli_shift5, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32i_srai_shift5, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32i_add, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32i_sub, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32i_sll, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32i_slt, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32i_sltu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32i_xor, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32i_srl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32i_sra, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32i_or, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32i_and, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32i_fence, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32i_sfence_vm, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32i_sfence_vma, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32i_fence_tso, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32i_fence_i, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32i_ecall, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32i_ebreak, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32i_csrrw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32i_csrrs, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32i_csrrc, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32i_csrrwi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32i_csrrsi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32i_csrrci, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32i_uret, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32i_sret, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32i_hret, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32i_mret, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32i_dret, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32i_wfi, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32i_mul, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32i_mulh, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32i_mulhsu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32i_mulhu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32i_div, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32i_divu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32i_rem, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32i_remu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32i_lr_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32i_lr_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32i_lr_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32i_lr_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32i_sc_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32i_sc_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32i_sc_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32i_sc_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32i_amoswap_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32i_amoswap_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32i_amoswap_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32i_amoswap_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32i_amoadd_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32i_amoadd_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32i_amoadd_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32i_amoadd_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32i_amoxor_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32i_amoxor_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32i_amoxor_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32i_amoxor_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32i_amoand_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32i_amoand_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32i_amoand_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32i_amoand_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32i_amoor_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32i_amoor_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32i_amoor_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32i_amoor_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32i_amomin_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32i_amomin_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32i_amomin_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32i_amomin_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32i_amomax_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32i_amomax_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32i_amomax_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32i_amomax_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32i_amominu_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32i_amominu_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32i_amominu_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32i_amominu_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32i_amomaxu_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32i_amomaxu_w_aq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32i_amomaxu_w_rl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32i_amomaxu_w_aqrl, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32i_flw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32i_fsw, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32i_fmadd_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32i_fmsub_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32i_fnmsub_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32i_fnmadd_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32i_fadd_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32i_fsub_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32i_fmul_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32i_fdiv_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32i_fsgnj_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32i_fsgnjn_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32i_fsgnjx_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32i_fmin_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32i_fmax_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32i_feq_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32i_flt_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32i_fle_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32i_fsqrt_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32i_fcvt_w_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32i_fcvt_wu_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32i_fmv_x_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32i_fclass_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32i_fcvt_s_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32i_fcvt_s_wu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32i_fmv_w_x, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32i_fld, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32i_fsd, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32i_fmadd_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32i_fmsub_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32i_fnmsub_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32i_fnmadd_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32i_fadd_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32i_fsub_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32i_fmul_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32i_fdiv_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32i_fsgnj_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32i_fsgnjn_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32i_fsgnjx_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32i_fmin_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32i_fmax_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32i_feq_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32i_flt_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32i_fle_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32i_fsqrt_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32i_fcvt_w_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32i_fcvt_wu_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32i_fclass_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32i_fcvt_d_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32i_fcvt_d_wu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32i_fcvt_s_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32i_fcvt_d_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32i_flq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32i_fsq, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32i_fmadd_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32i_fmsub_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32i_fnmsub_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32i_fnmadd_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32i_fadd_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32i_fsub_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32i_fmul_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32i_fdiv_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32i_fsgnj_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32i_fsgnjn_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32i_fsgnjx_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32i_fmin_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32i_fmax_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32i_feq_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32i_flt_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32i_fle_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32i_fsqrt_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32i_fcvt_w_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32i_fcvt_wu_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32i_fclass_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32i_fcvt_q_w, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32i_fcvt_q_wu, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32i_fcvt_s_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32i_fcvt_d_q, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32i_fcvt_q_s, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32i_fcvt_q_d, { { (int) UNIT_RV32I_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32ic'.  */

static const INSN_TIMING rv32ic_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32ic_c_addi16sp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32ic_c_addi4spn, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32ic_c_nop, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32ic_c_ebreak, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32ic_c_unimp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32ic_c_jr, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32ic_c_jalr, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32ic_c_mv, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32ic_c_add, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32ic_c_and, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32ic_c_or, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32ic_c_xor, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32ic_c_sub, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32ic_c_li, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32ic_c_lui, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32ic_c_addi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32ic_c_slli, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32ic_c_lwsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32ic_c_swsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32ic_c_lw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32ic_c_sw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32ic_c_srli, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32ic_c_srai, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32ic_c_andi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32ic_c_beqz, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32ic_c_bnez, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32ic_c_j, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32ic_c_slli64, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32ic_c_srli64, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32ic_c_srai64, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32ic_c_jal, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32ic_c_flwsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32ic_c_fswsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32ic_c_fsw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32ic_c_flw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32ic_c_fldsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32ic_c_fsdsp, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32ic_c_fsd, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32ic_c_fld, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32ic_lui, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32ic_auipc, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32ic_jal, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32ic_jalr, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32ic_beq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32ic_bne, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32ic_blt, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32ic_bge, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32ic_bltu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32ic_bgeu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32ic_lb, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32ic_lh, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32ic_lw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32ic_lbu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32ic_lhu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32ic_sb, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32ic_sh, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32ic_sw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32ic_addi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32ic_slti, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32ic_sltiu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32ic_xori, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32ic_ori, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32ic_andi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32ic_slli_shift5, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32ic_srli_shift5, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32ic_srai_shift5, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32ic_add, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32ic_sub, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32ic_sll, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32ic_slt, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32ic_sltu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32ic_xor, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32ic_srl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32ic_sra, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32ic_or, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32ic_and, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32ic_fence, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32ic_sfence_vm, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32ic_sfence_vma, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32ic_fence_tso, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32ic_fence_i, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32ic_ecall, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32ic_ebreak, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32ic_csrrw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32ic_csrrs, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32ic_csrrc, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32ic_csrrwi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32ic_csrrsi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32ic_csrrci, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32ic_uret, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32ic_sret, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32ic_hret, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32ic_mret, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32ic_dret, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32ic_wfi, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32ic_mul, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32ic_mulh, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32ic_mulhsu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32ic_mulhu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32ic_div, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32ic_divu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32ic_rem, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32ic_remu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32ic_lr_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32ic_lr_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32ic_lr_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32ic_lr_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32ic_sc_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32ic_sc_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32ic_sc_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32ic_sc_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32ic_amoswap_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32ic_amoswap_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32ic_amoswap_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32ic_amoswap_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32ic_amoadd_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32ic_amoadd_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32ic_amoadd_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32ic_amoadd_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32ic_amoxor_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32ic_amoxor_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32ic_amoxor_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32ic_amoxor_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32ic_amoand_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32ic_amoand_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32ic_amoand_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32ic_amoand_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32ic_amoor_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32ic_amoor_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32ic_amoor_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32ic_amoor_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32ic_amomin_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32ic_amomin_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32ic_amomin_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32ic_amomin_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32ic_amomax_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32ic_amomax_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32ic_amomax_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32ic_amomax_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32ic_amominu_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32ic_amominu_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32ic_amominu_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32ic_amominu_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32ic_amomaxu_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32ic_amomaxu_w_aq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32ic_amomaxu_w_rl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32ic_amomaxu_w_aqrl, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32ic_flw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32ic_fsw, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32ic_fmadd_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32ic_fmsub_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32ic_fnmsub_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32ic_fnmadd_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32ic_fadd_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32ic_fsub_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32ic_fmul_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32ic_fdiv_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32ic_fsgnj_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32ic_fsgnjn_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32ic_fsgnjx_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32ic_fmin_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32ic_fmax_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32ic_feq_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32ic_flt_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32ic_fle_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32ic_fsqrt_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32ic_fcvt_w_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32ic_fcvt_wu_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32ic_fmv_x_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32ic_fclass_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32ic_fcvt_s_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32ic_fcvt_s_wu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32ic_fmv_w_x, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32ic_fld, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32ic_fsd, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32ic_fmadd_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32ic_fmsub_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32ic_fnmsub_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32ic_fnmadd_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32ic_fadd_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32ic_fsub_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32ic_fmul_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32ic_fdiv_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32ic_fsgnj_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32ic_fsgnjn_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32ic_fsgnjx_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32ic_fmin_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32ic_fmax_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32ic_feq_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32ic_flt_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32ic_fle_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32ic_fsqrt_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32ic_fcvt_w_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32ic_fcvt_wu_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32ic_fclass_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32ic_fcvt_d_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32ic_fcvt_d_wu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32ic_fcvt_s_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32ic_fcvt_d_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32ic_flq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32ic_fsq, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32ic_fmadd_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32ic_fmsub_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32ic_fnmsub_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32ic_fnmadd_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32ic_fadd_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32ic_fsub_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32ic_fmul_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32ic_fdiv_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32ic_fsgnj_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32ic_fsgnjn_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32ic_fsgnjx_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32ic_fmin_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32ic_fmax_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32ic_feq_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32ic_flt_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32ic_fle_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32ic_fsqrt_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32ic_fcvt_w_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32ic_fcvt_wu_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32ic_fclass_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32ic_fcvt_q_w, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32ic_fcvt_q_wu, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32ic_fcvt_s_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32ic_fcvt_d_q, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32ic_fcvt_q_s, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32ic_fcvt_q_d, { { (int) UNIT_RV32IC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32im'.  */

static const INSN_TIMING rv32im_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32im_c_addi16sp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32im_c_addi4spn, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32im_c_nop, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32im_c_ebreak, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32im_c_unimp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32im_c_jr, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32im_c_jalr, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32im_c_mv, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32im_c_add, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32im_c_and, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32im_c_or, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32im_c_xor, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32im_c_sub, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32im_c_li, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32im_c_lui, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32im_c_addi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32im_c_slli, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32im_c_lwsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32im_c_swsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32im_c_lw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32im_c_sw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32im_c_srli, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32im_c_srai, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32im_c_andi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32im_c_beqz, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32im_c_bnez, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32im_c_j, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32im_c_slli64, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32im_c_srli64, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32im_c_srai64, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32im_c_jal, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32im_c_flwsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32im_c_fswsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32im_c_fsw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32im_c_flw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32im_c_fldsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32im_c_fsdsp, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32im_c_fsd, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32im_c_fld, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32im_lui, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32im_auipc, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32im_jal, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32im_jalr, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32im_beq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32im_bne, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32im_blt, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32im_bge, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32im_bltu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32im_bgeu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32im_lb, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32im_lh, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32im_lw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32im_lbu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32im_lhu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32im_sb, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32im_sh, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32im_sw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32im_addi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32im_slti, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32im_sltiu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32im_xori, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32im_ori, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32im_andi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32im_slli_shift5, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32im_srli_shift5, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32im_srai_shift5, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32im_add, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32im_sub, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32im_sll, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32im_slt, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32im_sltu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32im_xor, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32im_srl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32im_sra, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32im_or, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32im_and, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32im_fence, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32im_sfence_vm, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32im_sfence_vma, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32im_fence_tso, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32im_fence_i, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32im_ecall, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32im_ebreak, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32im_csrrw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32im_csrrs, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32im_csrrc, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32im_csrrwi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32im_csrrsi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32im_csrrci, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32im_uret, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32im_sret, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32im_hret, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32im_mret, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32im_dret, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32im_wfi, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32im_mul, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32im_mulh, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32im_mulhsu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32im_mulhu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32im_div, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32im_divu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32im_rem, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32im_remu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32im_lr_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32im_lr_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32im_lr_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32im_lr_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32im_sc_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32im_sc_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32im_sc_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32im_sc_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32im_amoswap_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32im_amoswap_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32im_amoswap_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32im_amoswap_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32im_amoadd_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32im_amoadd_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32im_amoadd_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32im_amoadd_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32im_amoxor_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32im_amoxor_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32im_amoxor_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32im_amoxor_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32im_amoand_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32im_amoand_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32im_amoand_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32im_amoand_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32im_amoor_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32im_amoor_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32im_amoor_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32im_amoor_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32im_amomin_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32im_amomin_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32im_amomin_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32im_amomin_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32im_amomax_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32im_amomax_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32im_amomax_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32im_amomax_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32im_amominu_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32im_amominu_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32im_amominu_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32im_amominu_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32im_amomaxu_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32im_amomaxu_w_aq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32im_amomaxu_w_rl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32im_amomaxu_w_aqrl, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32im_flw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32im_fsw, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32im_fmadd_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32im_fmsub_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32im_fnmsub_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32im_fnmadd_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32im_fadd_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32im_fsub_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32im_fmul_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32im_fdiv_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32im_fsgnj_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32im_fsgnjn_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32im_fsgnjx_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32im_fmin_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32im_fmax_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32im_feq_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32im_flt_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32im_fle_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32im_fsqrt_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32im_fcvt_w_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32im_fcvt_wu_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32im_fmv_x_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32im_fclass_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32im_fcvt_s_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32im_fcvt_s_wu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32im_fmv_w_x, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32im_fld, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32im_fsd, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32im_fmadd_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32im_fmsub_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32im_fnmsub_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32im_fnmadd_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32im_fadd_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32im_fsub_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32im_fmul_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32im_fdiv_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32im_fsgnj_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32im_fsgnjn_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32im_fsgnjx_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32im_fmin_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32im_fmax_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32im_feq_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32im_flt_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32im_fle_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32im_fsqrt_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32im_fcvt_w_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32im_fcvt_wu_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32im_fclass_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32im_fcvt_d_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32im_fcvt_d_wu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32im_fcvt_s_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32im_fcvt_d_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32im_flq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32im_fsq, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32im_fmadd_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32im_fmsub_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32im_fnmsub_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32im_fnmadd_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32im_fadd_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32im_fsub_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32im_fmul_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32im_fdiv_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32im_fsgnj_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32im_fsgnjn_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32im_fsgnjx_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32im_fmin_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32im_fmax_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32im_feq_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32im_flt_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32im_fle_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32im_fsqrt_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32im_fcvt_w_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32im_fcvt_wu_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32im_fclass_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32im_fcvt_q_w, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32im_fcvt_q_wu, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32im_fcvt_s_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32im_fcvt_d_q, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32im_fcvt_q_s, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32im_fcvt_q_d, { { (int) UNIT_RV32IM_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32imc'.  */

static const INSN_TIMING rv32imc_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32imc_c_addi16sp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32imc_c_addi4spn, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32imc_c_nop, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32imc_c_ebreak, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32imc_c_unimp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32imc_c_jr, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32imc_c_jalr, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32imc_c_mv, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32imc_c_add, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32imc_c_and, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32imc_c_or, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32imc_c_xor, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32imc_c_sub, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32imc_c_li, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32imc_c_lui, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32imc_c_addi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32imc_c_slli, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32imc_c_lwsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32imc_c_swsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32imc_c_lw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32imc_c_sw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32imc_c_srli, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32imc_c_srai, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32imc_c_andi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32imc_c_beqz, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32imc_c_bnez, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32imc_c_j, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32imc_c_slli64, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32imc_c_srli64, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32imc_c_srai64, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32imc_c_jal, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32imc_c_flwsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32imc_c_fswsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32imc_c_fsw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32imc_c_flw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32imc_c_fldsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32imc_c_fsdsp, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32imc_c_fsd, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32imc_c_fld, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32imc_lui, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32imc_auipc, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32imc_jal, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32imc_jalr, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32imc_beq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32imc_bne, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32imc_blt, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32imc_bge, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32imc_bltu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32imc_bgeu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32imc_lb, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32imc_lh, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32imc_lw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32imc_lbu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32imc_lhu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32imc_sb, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32imc_sh, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32imc_sw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32imc_addi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32imc_slti, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32imc_sltiu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32imc_xori, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32imc_ori, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32imc_andi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32imc_slli_shift5, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32imc_srli_shift5, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32imc_srai_shift5, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32imc_add, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32imc_sub, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32imc_sll, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32imc_slt, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32imc_sltu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32imc_xor, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32imc_srl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32imc_sra, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32imc_or, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32imc_and, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32imc_fence, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32imc_sfence_vm, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32imc_sfence_vma, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32imc_fence_tso, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32imc_fence_i, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32imc_ecall, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32imc_ebreak, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32imc_csrrw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32imc_csrrs, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32imc_csrrc, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32imc_csrrwi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32imc_csrrsi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32imc_csrrci, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32imc_uret, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32imc_sret, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32imc_hret, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32imc_mret, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32imc_dret, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32imc_wfi, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32imc_mul, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32imc_mulh, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32imc_mulhsu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32imc_mulhu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32imc_div, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32imc_divu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32imc_rem, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32imc_remu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32imc_lr_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32imc_lr_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32imc_lr_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32imc_lr_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32imc_sc_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32imc_sc_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32imc_sc_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32imc_sc_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32imc_amoswap_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32imc_amoswap_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32imc_amoswap_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32imc_amoswap_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32imc_amoadd_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32imc_amoadd_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32imc_amoadd_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32imc_amoadd_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32imc_amoxor_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32imc_amoxor_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32imc_amoxor_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32imc_amoxor_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32imc_amoand_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32imc_amoand_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32imc_amoand_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32imc_amoand_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32imc_amoor_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32imc_amoor_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32imc_amoor_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32imc_amoor_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32imc_amomin_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32imc_amomin_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32imc_amomin_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32imc_amomin_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32imc_amomax_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32imc_amomax_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32imc_amomax_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32imc_amomax_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32imc_amominu_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32imc_amominu_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32imc_amominu_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32imc_amominu_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32imc_amomaxu_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32imc_amomaxu_w_aq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32imc_amomaxu_w_rl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32imc_amomaxu_w_aqrl, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32imc_flw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32imc_fsw, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32imc_fmadd_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32imc_fmsub_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32imc_fnmsub_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32imc_fnmadd_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32imc_fadd_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32imc_fsub_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32imc_fmul_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32imc_fdiv_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32imc_fsgnj_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32imc_fsgnjn_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32imc_fsgnjx_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32imc_fmin_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32imc_fmax_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32imc_feq_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32imc_flt_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32imc_fle_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32imc_fsqrt_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32imc_fcvt_w_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32imc_fcvt_wu_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32imc_fmv_x_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32imc_fclass_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32imc_fcvt_s_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32imc_fcvt_s_wu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32imc_fmv_w_x, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32imc_fld, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32imc_fsd, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32imc_fmadd_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32imc_fmsub_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32imc_fnmsub_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32imc_fnmadd_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32imc_fadd_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32imc_fsub_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32imc_fmul_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32imc_fdiv_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32imc_fsgnj_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32imc_fsgnjn_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32imc_fsgnjx_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32imc_fmin_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32imc_fmax_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32imc_feq_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32imc_flt_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32imc_fle_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32imc_fsqrt_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32imc_fcvt_w_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32imc_fcvt_wu_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32imc_fclass_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32imc_fcvt_d_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32imc_fcvt_d_wu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32imc_fcvt_s_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32imc_fcvt_d_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32imc_flq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32imc_fsq, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32imc_fmadd_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32imc_fmsub_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32imc_fnmsub_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32imc_fnmadd_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32imc_fadd_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32imc_fsub_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32imc_fmul_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32imc_fdiv_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32imc_fsgnj_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32imc_fsgnjn_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32imc_fsgnjx_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32imc_fmin_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32imc_fmax_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32imc_feq_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32imc_flt_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32imc_fle_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32imc_fsqrt_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32imc_fcvt_w_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32imc_fcvt_wu_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32imc_fclass_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32imc_fcvt_q_w, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32imc_fcvt_q_wu, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32imc_fcvt_s_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32imc_fcvt_d_q, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32imc_fcvt_q_s, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32imc_fcvt_q_d, { { (int) UNIT_RV32IMC_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32g'.  */

static const INSN_TIMING rv32g_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32g_c_addi16sp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32g_c_addi4spn, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32g_c_nop, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32g_c_ebreak, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32g_c_unimp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32g_c_jr, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32g_c_jalr, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32g_c_mv, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32g_c_add, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32g_c_and, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32g_c_or, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32g_c_xor, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32g_c_sub, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32g_c_li, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32g_c_lui, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32g_c_addi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32g_c_slli, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32g_c_lwsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32g_c_swsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32g_c_lw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32g_c_sw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32g_c_srli, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32g_c_srai, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32g_c_andi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32g_c_beqz, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32g_c_bnez, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32g_c_j, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32g_c_slli64, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32g_c_srli64, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32g_c_srai64, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32g_c_jal, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32g_c_flwsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32g_c_fswsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32g_c_fsw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32g_c_flw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32g_c_fldsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32g_c_fsdsp, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32g_c_fsd, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32g_c_fld, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32g_lui, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32g_auipc, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32g_jal, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32g_jalr, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32g_beq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32g_bne, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32g_blt, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32g_bge, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32g_bltu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32g_bgeu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32g_lb, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32g_lh, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32g_lw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32g_lbu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32g_lhu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32g_sb, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32g_sh, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32g_sw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32g_addi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32g_slti, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32g_sltiu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32g_xori, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32g_ori, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32g_andi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32g_slli_shift5, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32g_srli_shift5, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32g_srai_shift5, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32g_add, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32g_sub, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32g_sll, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32g_slt, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32g_sltu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32g_xor, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32g_srl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32g_sra, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32g_or, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32g_and, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32g_fence, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32g_sfence_vm, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32g_sfence_vma, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32g_fence_tso, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32g_fence_i, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32g_ecall, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32g_ebreak, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32g_csrrw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32g_csrrs, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32g_csrrc, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32g_csrrwi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32g_csrrsi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32g_csrrci, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32g_uret, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32g_sret, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32g_hret, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32g_mret, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32g_dret, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32g_wfi, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32g_mul, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32g_mulh, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32g_mulhsu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32g_mulhu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32g_div, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32g_divu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32g_rem, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32g_remu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32g_lr_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32g_lr_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32g_lr_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32g_lr_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32g_sc_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32g_sc_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32g_sc_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32g_sc_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32g_amoswap_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32g_amoswap_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32g_amoswap_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32g_amoswap_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32g_amoadd_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32g_amoadd_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32g_amoadd_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32g_amoadd_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32g_amoxor_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32g_amoxor_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32g_amoxor_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32g_amoxor_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32g_amoand_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32g_amoand_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32g_amoand_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32g_amoand_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32g_amoor_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32g_amoor_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32g_amoor_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32g_amoor_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32g_amomin_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32g_amomin_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32g_amomin_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32g_amomin_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32g_amomax_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32g_amomax_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32g_amomax_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32g_amomax_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32g_amominu_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32g_amominu_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32g_amominu_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32g_amominu_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32g_amomaxu_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32g_amomaxu_w_aq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32g_amomaxu_w_rl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32g_amomaxu_w_aqrl, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32g_flw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32g_fsw, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32g_fmadd_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32g_fmsub_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32g_fnmsub_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32g_fnmadd_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32g_fadd_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32g_fsub_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32g_fmul_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32g_fdiv_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32g_fsgnj_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32g_fsgnjn_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32g_fsgnjx_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32g_fmin_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32g_fmax_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32g_feq_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32g_flt_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32g_fle_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32g_fsqrt_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32g_fcvt_w_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32g_fcvt_wu_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32g_fmv_x_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32g_fclass_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32g_fcvt_s_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32g_fcvt_s_wu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32g_fmv_w_x, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32g_fld, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32g_fsd, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32g_fmadd_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32g_fmsub_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32g_fnmsub_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32g_fnmadd_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32g_fadd_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32g_fsub_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32g_fmul_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32g_fdiv_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32g_fsgnj_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32g_fsgnjn_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32g_fsgnjx_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32g_fmin_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32g_fmax_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32g_feq_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32g_flt_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32g_fle_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32g_fsqrt_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32g_fcvt_w_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32g_fcvt_wu_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32g_fclass_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32g_fcvt_d_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32g_fcvt_d_wu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32g_fcvt_s_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32g_fcvt_d_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32g_flq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32g_fsq, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32g_fmadd_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32g_fmsub_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32g_fnmsub_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32g_fnmadd_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32g_fadd_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32g_fsub_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32g_fmul_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32g_fdiv_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32g_fsgnj_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32g_fsgnjn_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32g_fsgnjx_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32g_fmin_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32g_fmax_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32g_feq_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32g_flt_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32g_fle_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32g_fsqrt_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32g_fcvt_w_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32g_fcvt_wu_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32g_fclass_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32g_fcvt_q_w, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32g_fcvt_q_wu, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32g_fcvt_s_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32g_fcvt_d_q, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32g_fcvt_q_s, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32g_fcvt_q_d, { { (int) UNIT_RV32G_U_EXEC, 1, 1 } } },
};

/* Model timing data for `rv32gqc'.  */

static const INSN_TIMING rv32gqc_timing[] = {
  { RISCV32BF_RV32_INSN_X_INVALID, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_AFTER, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEFORE, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CTI_CHAIN, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_CHAIN, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_X_BEGIN, 0, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI16SP, model_rv32gqc_c_addi16sp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI4SPN, model_rv32gqc_c_addi4spn, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_NOP, model_rv32gqc_c_nop, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_EBREAK, model_rv32gqc_c_ebreak, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_UNIMP, model_rv32gqc_c_unimp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JR, model_rv32gqc_c_jr, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JALR, model_rv32gqc_c_jalr, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_MV, model_rv32gqc_c_mv, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADD, model_rv32gqc_c_add, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_AND, model_rv32gqc_c_and, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_OR, model_rv32gqc_c_or, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_XOR, model_rv32gqc_c_xor, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SUB, model_rv32gqc_c_sub, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LI, model_rv32gqc_c_li, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LUI, model_rv32gqc_c_lui, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ADDI, model_rv32gqc_c_addi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI, model_rv32gqc_c_slli, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LWSP, model_rv32gqc_c_lwsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SWSP, model_rv32gqc_c_swsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_LW, model_rv32gqc_c_lw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SW, model_rv32gqc_c_sw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI, model_rv32gqc_c_srli, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI, model_rv32gqc_c_srai, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_ANDI, model_rv32gqc_c_andi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BEQZ, model_rv32gqc_c_beqz, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_BNEZ, model_rv32gqc_c_bnez, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_J, model_rv32gqc_c_j, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SLLI64, model_rv32gqc_c_slli64, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRLI64, model_rv32gqc_c_srli64, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_SRAI64, model_rv32gqc_c_srai64, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_JAL, model_rv32gqc_c_jal, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLWSP, model_rv32gqc_c_flwsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSWSP, model_rv32gqc_c_fswsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSW, model_rv32gqc_c_fsw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLW, model_rv32gqc_c_flw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLDSP, model_rv32gqc_c_fldsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSDSP, model_rv32gqc_c_fsdsp, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FSD, model_rv32gqc_c_fsd, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_C_FLD, model_rv32gqc_c_fld, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LUI, model_rv32gqc_lui, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AUIPC, model_rv32gqc_auipc, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JAL, model_rv32gqc_jal, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_JALR, model_rv32gqc_jalr, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BEQ, model_rv32gqc_beq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BNE, model_rv32gqc_bne, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLT, model_rv32gqc_blt, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGE, model_rv32gqc_bge, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BLTU, model_rv32gqc_bltu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_BGEU, model_rv32gqc_bgeu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LB, model_rv32gqc_lb, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LH, model_rv32gqc_lh, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LW, model_rv32gqc_lw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LBU, model_rv32gqc_lbu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LHU, model_rv32gqc_lhu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SB, model_rv32gqc_sb, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SH, model_rv32gqc_sh, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SW, model_rv32gqc_sw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADDI, model_rv32gqc_addi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTI, model_rv32gqc_slti, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTIU, model_rv32gqc_sltiu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XORI, model_rv32gqc_xori, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ORI, model_rv32gqc_ori, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ANDI, model_rv32gqc_andi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLLI_SHIFT5, model_rv32gqc_slli_shift5, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRLI_SHIFT5, model_rv32gqc_srli_shift5, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRAI_SHIFT5, model_rv32gqc_srai_shift5, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ADD, model_rv32gqc_add, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SUB, model_rv32gqc_sub, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLL, model_rv32gqc_sll, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLT, model_rv32gqc_slt, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SLTU, model_rv32gqc_sltu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_XOR, model_rv32gqc_xor, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRL, model_rv32gqc_srl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRA, model_rv32gqc_sra, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_OR, model_rv32gqc_or, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AND, model_rv32gqc_and, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE, model_rv32gqc_fence, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VM, model_rv32gqc_sfence_vm, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SFENCE_VMA, model_rv32gqc_sfence_vma, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_TSO, model_rv32gqc_fence_tso, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FENCE_I, model_rv32gqc_fence_i, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_ECALL, model_rv32gqc_ecall, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_EBREAK, model_rv32gqc_ebreak, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRW, model_rv32gqc_csrrw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRS, model_rv32gqc_csrrs, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRC, model_rv32gqc_csrrc, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRWI, model_rv32gqc_csrrwi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRSI, model_rv32gqc_csrrsi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_CSRRCI, model_rv32gqc_csrrci, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_URET, model_rv32gqc_uret, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SRET, model_rv32gqc_sret, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_HRET, model_rv32gqc_hret, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MRET, model_rv32gqc_mret, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DRET, model_rv32gqc_dret, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_WFI, model_rv32gqc_wfi, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MUL, model_rv32gqc_mul, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULH, model_rv32gqc_mulh, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHSU, model_rv32gqc_mulhsu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_MULHU, model_rv32gqc_mulhu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIV, model_rv32gqc_div, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_DIVU, model_rv32gqc_divu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REM, model_rv32gqc_rem, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_REMU, model_rv32gqc_remu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W, model_rv32gqc_lr_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQ, model_rv32gqc_lr_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_RL, model_rv32gqc_lr_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_LR_W_AQRL, model_rv32gqc_lr_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W, model_rv32gqc_sc_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQ, model_rv32gqc_sc_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_RL, model_rv32gqc_sc_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_SC_W_AQRL, model_rv32gqc_sc_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W, model_rv32gqc_amoswap_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQ, model_rv32gqc_amoswap_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_RL, model_rv32gqc_amoswap_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOSWAP_W_AQRL, model_rv32gqc_amoswap_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W, model_rv32gqc_amoadd_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQ, model_rv32gqc_amoadd_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_RL, model_rv32gqc_amoadd_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOADD_W_AQRL, model_rv32gqc_amoadd_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W, model_rv32gqc_amoxor_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQ, model_rv32gqc_amoxor_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_RL, model_rv32gqc_amoxor_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOXOR_W_AQRL, model_rv32gqc_amoxor_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W, model_rv32gqc_amoand_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQ, model_rv32gqc_amoand_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_RL, model_rv32gqc_amoand_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOAND_W_AQRL, model_rv32gqc_amoand_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W, model_rv32gqc_amoor_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQ, model_rv32gqc_amoor_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_RL, model_rv32gqc_amoor_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOOR_W_AQRL, model_rv32gqc_amoor_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W, model_rv32gqc_amomin_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQ, model_rv32gqc_amomin_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_RL, model_rv32gqc_amomin_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMIN_W_AQRL, model_rv32gqc_amomin_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W, model_rv32gqc_amomax_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQ, model_rv32gqc_amomax_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_RL, model_rv32gqc_amomax_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAX_W_AQRL, model_rv32gqc_amomax_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W, model_rv32gqc_amominu_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQ, model_rv32gqc_amominu_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_RL, model_rv32gqc_amominu_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMINU_W_AQRL, model_rv32gqc_amominu_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W, model_rv32gqc_amomaxu_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQ, model_rv32gqc_amomaxu_w_aq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_RL, model_rv32gqc_amomaxu_w_rl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_AMOMAXU_W_AQRL, model_rv32gqc_amomaxu_w_aqrl, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLW, model_rv32gqc_flw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSW, model_rv32gqc_fsw, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_S, model_rv32gqc_fmadd_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_S, model_rv32gqc_fmsub_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_S, model_rv32gqc_fnmsub_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_S, model_rv32gqc_fnmadd_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_S, model_rv32gqc_fadd_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_S, model_rv32gqc_fsub_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_S, model_rv32gqc_fmul_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_S, model_rv32gqc_fdiv_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_S, model_rv32gqc_fsgnj_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_S, model_rv32gqc_fsgnjn_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_S, model_rv32gqc_fsgnjx_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_S, model_rv32gqc_fmin_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_S, model_rv32gqc_fmax_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_S, model_rv32gqc_feq_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_S, model_rv32gqc_flt_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_S, model_rv32gqc_fle_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_S, model_rv32gqc_fsqrt_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_S, model_rv32gqc_fcvt_w_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_S, model_rv32gqc_fcvt_wu_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_X_W, model_rv32gqc_fmv_x_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_S, model_rv32gqc_fclass_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_W, model_rv32gqc_fcvt_s_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_WU, model_rv32gqc_fcvt_s_wu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMV_W_X, model_rv32gqc_fmv_w_x, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLD, model_rv32gqc_fld, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSD, model_rv32gqc_fsd, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_D, model_rv32gqc_fmadd_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_D, model_rv32gqc_fmsub_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_D, model_rv32gqc_fnmsub_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_D, model_rv32gqc_fnmadd_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_D, model_rv32gqc_fadd_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_D, model_rv32gqc_fsub_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_D, model_rv32gqc_fmul_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_D, model_rv32gqc_fdiv_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_D, model_rv32gqc_fsgnj_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_D, model_rv32gqc_fsgnjn_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_D, model_rv32gqc_fsgnjx_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_D, model_rv32gqc_fmin_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_D, model_rv32gqc_fmax_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_D, model_rv32gqc_feq_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_D, model_rv32gqc_flt_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_D, model_rv32gqc_fle_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_D, model_rv32gqc_fsqrt_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_D, model_rv32gqc_fcvt_w_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_D, model_rv32gqc_fcvt_wu_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_D, model_rv32gqc_fclass_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_W, model_rv32gqc_fcvt_d_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_WU, model_rv32gqc_fcvt_d_wu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_D, model_rv32gqc_fcvt_s_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_S, model_rv32gqc_fcvt_d_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLQ, model_rv32gqc_flq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQ, model_rv32gqc_fsq, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMADD_Q, model_rv32gqc_fmadd_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMSUB_Q, model_rv32gqc_fmsub_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMSUB_Q, model_rv32gqc_fnmsub_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FNMADD_Q, model_rv32gqc_fnmadd_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FADD_Q, model_rv32gqc_fadd_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSUB_Q, model_rv32gqc_fsub_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMUL_Q, model_rv32gqc_fmul_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FDIV_Q, model_rv32gqc_fdiv_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJ_Q, model_rv32gqc_fsgnj_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJN_Q, model_rv32gqc_fsgnjn_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSGNJX_Q, model_rv32gqc_fsgnjx_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMIN_Q, model_rv32gqc_fmin_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FMAX_Q, model_rv32gqc_fmax_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FEQ_Q, model_rv32gqc_feq_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLT_Q, model_rv32gqc_flt_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FLE_Q, model_rv32gqc_fle_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FSQRT_Q, model_rv32gqc_fsqrt_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_W_Q, model_rv32gqc_fcvt_w_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_WU_Q, model_rv32gqc_fcvt_wu_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCLASS_Q, model_rv32gqc_fclass_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_W, model_rv32gqc_fcvt_q_w, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_WU, model_rv32gqc_fcvt_q_wu, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_S_Q, model_rv32gqc_fcvt_s_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_D_Q, model_rv32gqc_fcvt_d_q, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_S, model_rv32gqc_fcvt_q_s, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
  { RISCV32BF_RV32_INSN_FCVT_Q_D, model_rv32gqc_fcvt_q_d, { { (int) UNIT_RV32GQC_U_EXEC, 1, 1 } } },
};

#endif /* WITH_PROFILE_MODEL_P */

static void
rv32gc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32GC_DATA));
}

static void
rv32i_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32I_DATA));
}

static void
rv32ic_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32IC_DATA));
}

static void
rv32im_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32IM_DATA));
}

static void
rv32imc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32IMC_DATA));
}

static void
rv32g_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32G_DATA));
}

static void
rv32gqc_model_init (SIM_CPU *cpu)
{
  CPU_MODEL_DATA (cpu) = (void *) zalloc (sizeof (MODEL_RV32GQC_DATA));
}

#if WITH_PROFILE_MODEL_P
#define TIMING_DATA(td) td
#else
#define TIMING_DATA(td) 0
#endif

static const SIM_MODEL rv32gc_models[] =
{
  { "rv32gc", & rv32gc_mach, MODEL_RV32GC, TIMING_DATA (& rv32gc_timing[0]), rv32gc_model_init },
  { 0 }
};

static const SIM_MODEL rv32i_models[] =
{
  { "rv32i", & rv32i_mach, MODEL_RV32I, TIMING_DATA (& rv32i_timing[0]), rv32i_model_init },
  { 0 }
};

static const SIM_MODEL rv32ic_models[] =
{
  { "rv32ic", & rv32ic_mach, MODEL_RV32IC, TIMING_DATA (& rv32ic_timing[0]), rv32ic_model_init },
  { 0 }
};

static const SIM_MODEL rv32im_models[] =
{
  { "rv32im", & rv32im_mach, MODEL_RV32IM, TIMING_DATA (& rv32im_timing[0]), rv32im_model_init },
  { 0 }
};

static const SIM_MODEL rv32imc_models[] =
{
  { "rv32imc", & rv32imc_mach, MODEL_RV32IMC, TIMING_DATA (& rv32imc_timing[0]), rv32imc_model_init },
  { 0 }
};

static const SIM_MODEL rv32g_models[] =
{
  { "rv32g", & rv32g_mach, MODEL_RV32G, TIMING_DATA (& rv32g_timing[0]), rv32g_model_init },
  { 0 }
};

static const SIM_MODEL rv32gqc_models[] =
{
  { "rv32gqc", & rv32gqc_mach, MODEL_RV32GQC, TIMING_DATA (& rv32gqc_timing[0]), rv32gqc_model_init },
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
rv32gc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32gc_mach =
{
  "rv32gc", "riscv:rv32", MACH_RV32GC,
  32, 32, & rv32gc_models[0], & riscv32bf_imp_properties,
  rv32gc_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32i_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32i_mach =
{
  "rv32i", "riscv:rv32", MACH_RV32I,
  32, 32, & rv32i_models[0], & riscv32bf_imp_properties,
  rv32i_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32ic_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32ic_mach =
{
  "rv32ic", "riscv:rv32", MACH_RV32IC,
  32, 32, & rv32ic_models[0], & riscv32bf_imp_properties,
  rv32ic_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32im_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32im_mach =
{
  "rv32im", "riscv:rv32", MACH_RV32IM,
  32, 32, & rv32im_models[0], & riscv32bf_imp_properties,
  rv32im_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32imc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32imc_mach =
{
  "rv32imc", "riscv:rv32", MACH_RV32IMC,
  32, 32, & rv32imc_models[0], & riscv32bf_imp_properties,
  rv32imc_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32g_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32g_mach =
{
  "rv32g", "riscv:rv32", MACH_RV32G,
  32, 32, & rv32g_models[0], & riscv32bf_imp_properties,
  rv32g_init_cpu,
  riscv32bf_prepare_run
};

static void
rv32gqc_init_cpu (SIM_CPU *cpu)
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

const SIM_MACH rv32gqc_mach =
{
  "rv32gqc", "riscv:rv32", MACH_RV32GQC,
  32, 32, & rv32gqc_models[0], & riscv32bf_imp_properties,
  rv32gqc_init_cpu,
  riscv32bf_prepare_run
};

