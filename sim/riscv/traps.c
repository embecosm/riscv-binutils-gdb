/* Lattice Mico32 exception and system call support.
   Contributed by Jon Beniston <jon@beniston.com>

   Copyright (C) 2009-2017 Free Software Foundation, Inc.

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

#if XLEN == 32
#define WANT_CPU riscv32bf
#define WANT_CPU_RISCV32BF
#elif XLEN == 64
#define WANT_CPU riscv64bf
#define WANT_CPU_RISCV64BF
#else
#error XLEN not defined, or not 32 or 64 bits
#endif

#include "sim-main.h"

/* Handle invalid instructions.  */

SEM_PC
sim_engine_invalid_insn (SIM_CPU * current_cpu, IADDR cia, SEM_PC pc)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  sim_engine_halt (sd, current_cpu, NULL, pc, sim_stopped, SIM_SIGILL);
  return 0;
}


#if XLEN == 32

void
riscv32bf_exception (sim_cpu *current_cpu, USI pc, USI exnum)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  if (exnum == EXCEPT_EBREAK)
    {
      /* ebreak, used for breakpoints, sends control back to gdb breakpoint
         handling.  */
      sim_engine_halt (sd, current_cpu, NULL, pc, sim_stopped, SIM_SIGTRAP);
    }
}

#elif XLEN == 64

void
riscv64bf_exception (sim_cpu *current_cpu, UDI pc, USI exnum)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  if (exnum == EXCEPT_EBREAK)
    {
      /* ebreak, used for breakpoints, sends control back to gdb breakpoint
         handling.  */
      sim_engine_halt (sd, current_cpu, NULL, pc, sim_stopped, SIM_SIGTRAP);
    }
}

#endif

