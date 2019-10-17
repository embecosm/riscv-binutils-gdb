/* RISCV simulator support code
   Copyright (C) 2019 Free Software Foundation, Inc.

   This file is part of the GNU simulators.

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

/* Main header for riscv.  */

#ifndef SIM_MAIN_H
#define SIM_MAIN_H

/* This is a global setting.  Different cpu families can't mix-n-match -scache
   and -pbb.  However some cpu families may use -simple while others use
   one of -scache/-pbb.  */
#define WITH_SCACHE_PBB 0

#include <stdlib.h>

#include "symcat.h"
#include "sim-basics.h"
#include "cgen-types.h"
#include "riscv-cgen-desc.h"
#include "riscv-cgen-opc.h"
#include "arch.h"

#include "sim-base.h"
#include "cgen-sim.h"
#include "riscv-sim.h"


/* The _sim_cpu struct.  */

struct _sim_cpu
{
  /* sim/common cpu base.  */
  sim_cpu_base base;

  /* Static parts of cgen.  */
  CGEN_CPU cgen_cpu;

  /* CPU specific parts go here.
     Note that in files that don't need to access these pieces WANT_CPU_FOO
     won't be defined and thus these parts won't appear.  This is ok in the
     sense that things work.  It is a source of bugs though.
     One has to of course be careful to not take the size of this
     struct and no structure members accessed in non-cpu specific files can
     go after here.  Oh for a better language.  */
#ifdef WANT_CPU_RISCV32BF
  RISCV32BF_CPU_DATA cpu_data;
#endif
#ifdef WANT_CPU_RISCV64BF
  RISCV64BF_CPU_DATA cpu_data;
#endif
};

/* The sim_state struct.  */

struct sim_state
{
  sim_cpu *cpu[MAX_NR_PROCESSORS];

  CGEN_STATE cgen_state;

  sim_state_base base;
};

/* Misc.  */

/* Default memory size and addresses.  */
#define RISCV_DEFAULT_MEM_SIZE    0x2000000	/* 32MB */
#define RISCV_DEFAULT_STACK_SIZE  0x100000	/* 1MB  */
#define RISCV_DEFAULT_HEAP_SIZE   0x400000	/* 16MB */

/* The stack is by-default allocated at the top of a 2GiB memory space.
   The heap is allocated just below the stack. This keeps the heap and the
   stack far away from the program which starts at address 0.  */
#define RISCV_DEFAULT_STACK_START (0x7fffffff - RISCV_DEFAULT_STACK_SIZE + 1)
#define RISCV_DEFAULT_HEAP_START  (RISCV_DEFAULT_STACK_START - RISCV_DEFAULT_HEAP_SIZE)

#endif /* SIM_MAIN_H */
