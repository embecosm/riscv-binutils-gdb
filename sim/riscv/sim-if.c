/* Main simulator entry points specific to the RISCV
   Copyright (C) 2019 Free Software Foundation, Inc.

   This file is part of GDB, the GNU debugger.

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

#include "sim-main.h"
#include "sim-options.h"
#include "bfd.h"

#include "gdb/sim-riscv.h"

/* Cover function of sim_state_free to free the cpu buffers as well.  */

static void
free_state (SIM_DESC sd)
{
  if (STATE_MODULES (sd) != NULL)
    sim_module_uninstall (sd);
  sim_cpu_free_all (sd);
  sim_state_free (sd);
}


/* Create an instance of the simulator.  */

SIM_DESC
sim_open (kind, callback, abfd, argv)
     SIM_OPEN_KIND kind;
     host_callback *callback;
     struct bfd *abfd;
     char *const *argv;
{
  SIM_DESC sd = sim_state_alloc (kind, callback);
  char c;
  int i;

  if (sim_cpu_alloc_all (sd, 1, cgen_cpu_max_extra_bytes ()) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  if (sim_pre_argv_init (sd, argv[0]) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  /* The parse will print an error message for us, so we silently return.  */
  if (sim_parse_args (sd, argv) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  /* Allocate core managed memory if none specified by the user.
     Use address 4 here in case the user wanted address 0 unmapped.  */
  if (sim_core_read_buffer (sd, NULL, read_map, &c, 4, 1) == 0)
    {
      /* Leave 0 unmapped so NULL pointer dereferences cause a segfault.  */
      sim_do_commandf (sd, "memory region 0x8,0x%x",
		       RISCV_DEFAULT_MEM_SIZE - 0x8);
    }

  /* If there's no OS to manage memory, then the simulator is responsible
     for setting up the stack pointer and handling the program break. By
     default these are seperate memory regions allocated at the top of
     a 2GiB address space, far away from the static program memory.  */
  if (STATE_ENVIRONMENT (sd) != OPERATING_ENVIRONMENT)
    {
      sim_do_commandf (sd, "memory region 0x%x,0x%x",
		       RISCV_DEFAULT_STACK_START, RISCV_DEFAULT_STACK_SIZE);
      sim_do_commandf (sd, "memory region 0x%x,0x%x",
		       RISCV_DEFAULT_HEAP_START, RISCV_DEFAULT_HEAP_SIZE);
    }

  /* check for/establish the reference program image */
  if (sim_analyze_program (sd,
			   (STATE_PROG_ARGV (sd) != NULL
			    ? *STATE_PROG_ARGV (sd)
			    : NULL), abfd) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  /* Establish any remaining configuration options.  */
  if (sim_config (sd) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  if (sim_post_argv_init (sd) != SIM_RC_OK)
    {
      free_state (sd);
      return 0;
    }

  /* Open a copy of the cpu descriptor table.  */
  {
    CGEN_CPU_DESC cd =
      riscv_cgen_cpu_open_1 (STATE_ARCHITECTURE (sd)->printable_name,
			     CGEN_ENDIAN_LITTLE);
    for (i = 0; i < MAX_NR_PROCESSORS; ++i)
      {
	SIM_CPU *cpu = STATE_CPU (sd, i);
	CPU_CPU_DESC (cpu) = cd;
	CPU_DISASSEMBLER (cpu) = sim_cgen_disassemble_insn;
      }

    riscv_cgen_init_dis (cd);
  }

  /* Initialize various cgen things not done by common framework.
     Must be done after riscv_cgen_cpu_open.  */
  cgen_init (sd);

  SIM_CPU *current_cpu = STATE_CPU (sd, i);
  cgen_init_accurate_fpu (current_cpu, CGEN_CPU_FPU (current_cpu),
			  CPU_FUNC (_fpu_error));

  return sd;
}

SIM_RC
sim_create_inferior (sd, abfd, argv, envp)
     SIM_DESC sd;
     struct bfd *abfd;
     char *const *argv;
     char *const *envp;
{
  SIM_CPU *current_cpu = STATE_CPU (sd, 0);
  SIM_ADDR addr;

  if (abfd != NULL)
    addr = bfd_get_start_address (abfd);
  else
    addr = 0;
  sim_pc_set (current_cpu, addr);

  /* Standalone mode (i.e. `run`) will take care of the argv for us in
     sim_open() -> sim_parse_args().  But in debug mode (i.e. 'target sim'
     with `gdb`), we need to handle it because the user can change the
     argv on the fly via gdb's 'run'.  */
  if (STATE_PROG_ARGV (sd) != argv)
    {
      freeargv (STATE_PROG_ARGV (sd));
      STATE_PROG_ARGV (sd) = dupargv (argv);
    }

  /* Put the stack pointer somewhere sensible by default (at the top of the
     2GiB address space).  */
  char buf[8] = { 0xf0, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00 };
  sim_store_register (sd, RISCV_SP_REGNUM, buf, XLEN / 8);

  return SIM_RC_OK;
}
