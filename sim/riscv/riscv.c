/* RISC-V simulator support code.
   Contributed by Edward Jones  <ed.jones@embecosm.com>

   Copyright (C) 2009-2018 Free Software Foundation, Inc.

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
#include "cgen-mem.h"
#include "gdb/sim-riscv.h"


#ifdef WANT_CPU_RISCV32BF

USI
riscv32bf_h_xlen_get_handler (SIM_CPU *current_cpu)
{
  return 32;
}

/* The contents of BUF are in target byte order.  */
int
riscv32bf_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SETTSI (buf, GET_H_GPR (gprn));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SETTUSI (buf, GET_H_PC ());
    }
  else if (SIM_RISCV_FIRST_FP_REGNUM <= rn && rn <= SIM_RISCV_LAST_FP_REGNUM)
    {
      int fprn = rn - SIM_RISCV_FIRST_FP_REGNUM;
      if (len == 4)
	{
	  SETTSF (buf, GET_H_FPR (fprn));
	  return 4;
	}
      else if (len == 8)
	{
	  SETTDF (buf, GET_H_FPR (fprn));
	  return 8;
	}
    }
  else
    {
      SETTUSI (buf, 0xcabba9e5);
      return 0;
    }
  return len;
}

/* The contents of BUF are in target byte order.  */
int
riscv32bf_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SET_H_GPR (gprn, GETTDI (buf));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SET_H_PC (GETTUDI (buf));
    }
  else if (SIM_RISCV_FIRST_FP_REGNUM <= rn && rn <= SIM_RISCV_LAST_FP_REGNUM)
    {
      int fprn = rn - SIM_RISCV_FIRST_FP_REGNUM;
      SET_H_FPR (fprn, GETTDF (buf));
      return 8;
    }
  else
    {
      return 0;
    }
  return len;
}

int riscv32bf_model_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                            int unit_num, int referenced)
{
  return -1;
}
int riscv32bf_model_rv32i_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                  int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32ic_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32im_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32imc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                    int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32g_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                  int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32gc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv32bf_model_rv32gqc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                    int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

#elif defined(WANT_CPU_RISCV64BF)

UDI
riscv64bf_h_xlen_get_handler (SIM_CPU *current_cpu)
{
  return 64;
}

/* The contents of BUF are in target byte order.  */
int
riscv64bf_fetch_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SETTDI (buf, GET_H_GPR (gprn));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SETTUDI (buf, GET_H_PC ());
    }
  else
    {
      SETTUDI (buf, 0xcabba9e50be0f00d);
      return 0;
    }
  return len;
}

/* The contents of BUF are in target byte order.  */
int
riscv64bf_store_register (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                          int len)
{
  if (SIM_RISCV_ZERO_REGNUM <= rn && rn <= SIM_RISCV_T6_REGNUM)
    {
      int gprn = rn - SIM_RISCV_ZERO_REGNUM;
      SET_H_GPR (gprn, GETTDI (buf));
    }
  else if (rn == SIM_RISCV_PC_REGNUM)
    {
      SET_H_PC (GETTUDI (buf));
    }
  else
    {
      return 0;
    }
  return len;
}

int riscv64bf_model_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                            int unit_num, int referenced)
{
  return -1;
}
int riscv64bf_model_rv64i_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                  int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64ic_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64im_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64imc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                    int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64g_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                  int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64gc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                   int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}
int riscv64bf_model_rv64gqc_u_exec (SIM_CPU * current_cpu, const IDESC *idesc,
                                    int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

#endif

