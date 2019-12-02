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

DI
riscv64_shuffle64_stage(DI src, DI maskl, DI maskr, int n)
{
  DI x = src & ~(maskl | maskr);
  x |= ((src << n) & maskl) | ((src >> n) & maskr);
  return x;
}

DI
riscv64_shfl64 (DI rs1, DI rs2)
{
  DI x = rs1;
  int shamt = rs2 & 31;

  if (shamt & 16) x = riscv64_shuffle64_stage (x,
					       0x0000ffff00000000LL,
					       0x00000000ffff0000LL, 16);

  if (shamt & 8) x = riscv64_shuffle64_stage (x,
					      0x00ff000000ff0000LL,
					      0x0000ff000000ff00LL, 8);

  if (shamt & 4) x = riscv64_shuffle64_stage (x,
					      0x0f000f000f000f00LL,
					      0x00f000f000f000f0LL, 4);

  if (shamt & 2) x = riscv64_shuffle64_stage (x,
					      0x3030303030303030LL,
					      0x0c0c0c0c0c0c0c0cLL, 2);

  if (shamt & 1) x = riscv64_shuffle64_stage (x,
					      0x4444444444444444LL,
					      0x2222222222222222LL, 1);
  return x;
}

DI
riscv64_bmatflip (SIM_CPU *current_cpu, DI rs1)
{
  DI x = rs1;
  x = riscv64_shfl64 (x, 31);
  x = riscv64_shfl64 (x, 31);
  x = riscv64_shfl64 (x, 31);
  return x;
}

DI
riscv64_bmator (SIM_CPU *current_cpu, DI rs1, DI rs2)
{
  DI rs2t = riscv64_bmatflip (current_cpu, rs2);

  QI u[8];
  QI v[8];

  int i;

  for (i = 0; i < 8; ++i)
    {
      u[i] = rs1 >> (i * 8);
      v[i] = rs2t >> (i * 8);
    }

  DI x = 0;

  for (i = 0; i < 64; ++i)
    if ((u[i / 8] & v[i % 8]) != 0)
      x |= 1LL << i;

  return x;
}

DI
riscv64_bmatxor (SIM_CPU *current_cpu, DI rs1, DI rs2)
{
  DI rs2t = riscv64_bmatflip (current_cpu, rs2);

  unsigned char u[8];
  unsigned char v[8];

  int i;

  for (i = 0; i < 8; ++i)
    {
      u[i] = rs1 >> (i * 8);
      v[i] = rs2t >> (i * 8);
    }

  DI x = 0;

  for (i = 0; i < 64; ++i)
    if (__builtin_popcountl (u[i / 8] & v[i % 8]) & 1)
      x |= 1LL << i;

  return x;
}

#endif
