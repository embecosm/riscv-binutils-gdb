/* RISCV exception and system call support.
   Contributed by Edward Jones  <ed.jones@embecosm.com>

   Copyright (C) 2018-2019 Free Software Foundation, Inc.

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
#include "sim-syscall.h"


// Syscall numbers defined in newlib libgloss
#define TARGET_SYS_close   57
#define TARGET_SYS_lseek   62
#define TARGET_SYS_read    63
#define TARGET_SYS_write   64
#define TARGET_SYS_fstat   80
#define TARGET_SYS_exit    93
#define TARGET_SYS_kill    129
#define TARGET_SYS_getpid  172
#define TARGET_SYS_brk     214
#define TARGET_SYS_open    1024
#define TARGET_SYS_unlink  1026

static CB_TARGET_DEFS_MAP syscall_map[] =
{
  { "exit",   CB_SYS_exit,   TARGET_SYS_exit },
  { "open",   CB_SYS_open,   TARGET_SYS_open },
  { "close",  CB_SYS_close,  TARGET_SYS_close },
  { "read",   CB_SYS_read,   TARGET_SYS_read },
  { "write",  CB_SYS_write,  TARGET_SYS_write },
  { "lseek",  CB_SYS_lseek,  TARGET_SYS_lseek },
  { "unlink", CB_SYS_unlink, TARGET_SYS_unlink },
  { "getpid", CB_SYS_getpid, TARGET_SYS_getpid },
  { "kill",   CB_SYS_kill,   TARGET_SYS_kill },
  { "fstat",  CB_SYS_fstat,  TARGET_SYS_fstat },
};


/* Handle invalid instructions.  */

SEM_PC
sim_engine_invalid_insn (SIM_CPU * current_cpu, IADDR cia, SEM_PC pc)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  sim_engine_halt (sd, current_cpu, NULL, pc, sim_stopped, SIM_SIGILL);
  return 0;
}

/* Floating point errors.  */

void
CPU_FUNC(_fpu_error) (CGEN_FPU *fpu, int status)
{
  /* FIXME: Handle floating point errors properly. At the moment we just
     ignore them and continue, but as a minimum this should set CSRs.  */
  return;
}

/* Handle syscalls */

void
CPU_FUNC(_exception) (sim_cpu *current_cpu, USI pc, USI exnum)
{
  SIM_DESC sd = CPU_STATE (current_cpu);
  host_callback *cb = STATE_CALLBACK (sd);
  cb->syscall_map = syscall_map;

  if (exnum == EXCEPT_EBREAK)
    {
      /* ebreak, used for breakpoints, sends control back to gdb breakpoint
         handling.  */
      sim_engine_halt (sd, current_cpu, NULL, pc, sim_stopped, SIM_SIGTRAP);
    }
  else if (exnum == EXCEPT_ECALL)
    {
      CB_SYSCALL s;
      CB_SYSCALL_INIT (&s);

      if (STATE_ENVIRONMENT (sd) != OPERATING_ENVIRONMENT)
	{
	  long syscall_id = GET_H_GPR(17);

	  long result;
	  if (syscall_id == TARGET_SYS_brk)
	    {
	      unsigned long addr = (unsigned long)GET_H_GPR (10);
	      unsigned long heap_end =
	          RISCV_DEFAULT_HEAP_START + RISCV_DEFAULT_HEAP_SIZE;

	      static unsigned long brk = -1;
	      if (addr == 0)
		{
		  brk = RISCV_DEFAULT_HEAP_START;
		  result = (long)brk;
		}
	      else if ((addr >= RISCV_DEFAULT_HEAP_START) && (addr < heap_end))
		{
		  brk = addr;
		  result = (long)brk;
		}
	      else
		{
		  result = (long)brk;
		}
	    }
	  else
	    {
	      result = sim_syscall (current_cpu, syscall_id, GET_H_GPR (10),
	                            GET_H_GPR (11), GET_H_GPR (12),
	                            GET_H_GPR (13));
	    }
	  SET_H_GPR (10, result);
	}
      else
	{
	  // TODO: Jump to exception handler
	}
    }
}
