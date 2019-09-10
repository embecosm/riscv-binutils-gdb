/* RISC-V simulator support code.
   Copyright (C) 2019 Free Software Foundation, Inc.

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

#include <assert.h>
#include "sim-main.h"
#include "cgen-mem.h"
#include "gdb/sim-riscv.h"


UWI
CPU_FUNC(_h_xlen_get_handler) (SIM_CPU *current_cpu)
{
  return XLEN;
}

UWI
CPU_FUNC(_h_csr_get_handler) (SIM_CPU *current_cpu, UINT rn)
{
  int csr = rn + RISCV_FIRST_CSR_REGNUM;
  if (csr == RISCV_CSR_MISA_REGNUM)
    {
      UWI misa = 0;

      /* Encode the base field in misa.  */ 
      assert (XLEN == 32 || XLEN == 64);
      misa |= (UWI)(XLEN == 32 ? 1 : 2) << (XLEN - 2);

      /* Encode the supported extensions.  */
      const char *mach_name = MACH_NAME (CPU_MACH (current_cpu));
      assert (!strncmp (mach_name, "rv32", strlen ("rv32"))
              || !strncmp (mach_name, "rv64", strlen ("rv64")));
      mach_name += strlen ("rv32");

      for (const char *ext = mach_name; *ext != '\0'; ext++) 
	{
	  /* Set the bit in misa for each supported extension.  */
	  #define EXTENSION_TO_MASK(EXT) (1 << (EXT - 'a'))
	  switch (*ext)
	    {
	    case 'i':
	    case 'a':
	    case 'f':
	    case 'd':
	    case 'q':
	    case 'm':
	    case 'c':
	      misa |= EXTENSION_TO_MASK(*ext);
	      break;
	    case 'g':
	      misa |= EXTENSION_TO_MASK('i');
	      misa |= EXTENSION_TO_MASK('a');
	      misa |= EXTENSION_TO_MASK('f');
	      misa |= EXTENSION_TO_MASK('d');
	      misa |= EXTENSION_TO_MASK('m');
	      break;
	    default:
	      assert (0 && "Unsupported extension in machine name");
	    }
	  #undef EXTENSION_MASK
	}
      return misa;
    } 
  else
    {
      /* No special handling, just return the raw value.  */
      return CPU (h_csr[rn]);
    }
}

void
CPU_FUNC(_h_csr_set_handler) (SIM_CPU *current_cpu, UINT rn, UWI val)
{
  /* Most CSRs are currently treated as read-only, and any writes are just
     ignored. This will be gradually expanded as more features are added.  */
  if (rn == 0x3/*fcsr*/)
    {
      CPU (h_csr[rn]) = (CPU (h_csr[rn]) & 0xff00) | (val & 0xff);
    }
}

/* The contents of BUF are in target byte order.  */
int
CPU_FUNC(_fetch_register) (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                           int len)
{
  if (RISCV_ZERO_REGNUM <= rn && rn < RISCV_PC_REGNUM)
    {
      assert (len == (XLEN / 8));
      int gprn = rn - RISCV_ZERO_REGNUM;
      SETTWI (buf, GET_H_GPR (gprn));
    }
  else if (rn == RISCV_PC_REGNUM)
    {
      SETTUSI (buf, GET_H_PC ());
    }
  else if (RISCV_FIRST_FP_REGNUM <= rn && rn <= RISCV_LAST_FP_REGNUM)
    {
      int fprn = rn - RISCV_FIRST_FP_REGNUM;
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
  else if (RISCV_FIRST_CSR_REGNUM <= rn && rn <= RISCV_LAST_CSR_REGNUM)
    {
      assert (len == (XLEN / 8));
      int csrn = rn - RISCV_FIRST_CSR_REGNUM;
      SETTWI (buf, GET_H_CSR (csrn));
    }
  else
    {
      assert (0 && "Unknown register!");
      SETTUWI (buf, 0);
      return 0;
    }
  return len;
}

/* The contents of BUF are in target byte order.  */
int
CPU_FUNC(_store_register) (SIM_CPU * current_cpu, int rn, unsigned char *buf,
                           int len)
{
  if (RISCV_ZERO_REGNUM <= rn && rn < RISCV_PC_REGNUM)
    {
      assert (len == (XLEN / 8));
      int gprn = rn - RISCV_ZERO_REGNUM;
      SET_H_GPR (gprn, GETTWI (buf));
    }
  else if (rn == RISCV_PC_REGNUM)
    {
      SET_H_PC (GETTUSI (buf));
    }
  else if (RISCV_FIRST_FP_REGNUM <= rn && rn <= RISCV_LAST_FP_REGNUM)
    {
      int fprn = rn - RISCV_FIRST_FP_REGNUM;
      SET_H_FPR (fprn, GETTDF (buf));
      return 8;
    }
  else if (RISCV_FIRST_CSR_REGNUM <= rn && rn <= RISCV_LAST_CSR_REGNUM)
    {
      assert (len == (XLEN / 8));
      int csrn = rn - RISCV_FIRST_CSR_REGNUM;
      SET_H_CSR (csrn, GETTWI (buf));
    }
  else
    {
      assert (0 && "Unknown register!");
      return 0;
    }
  return len;
}

#ifdef WANT_CPU_RISCV32BF

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
