/* RISC-V simulator support code.
   Copyright 2019 Free Software Foundation, Inc.

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


UWI CPU_FUNC (_h_xlen_get_handler) (SIM_CPU * current_cpu)
{
  return XLEN;
}

UWI CPU_FUNC (_h_csr_get_handler) (SIM_CPU * current_cpu, UINT rn)
{
  const int fcsr_rn = RISCV_CSR_FCSR_REGNUM - RISCV_FIRST_CSR_REGNUM;

  int csr = rn + RISCV_FIRST_CSR_REGNUM;
  if (csr == RISCV_CSR_MISA_REGNUM)
    {
      UWI misa = 0;

      /* Encode the base field in misa.  */
      assert (XLEN == 32 || XLEN == 64);
      misa |= (UWI) (XLEN == 32 ? 1 : 2) << (XLEN - 2);

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
	      misa |= EXTENSION_TO_MASK (*ext);
	      break;
	    case 'g':
	      misa |= EXTENSION_TO_MASK ('i');
	      misa |= EXTENSION_TO_MASK ('a');
	      misa |= EXTENSION_TO_MASK ('f');
	      misa |= EXTENSION_TO_MASK ('d');
	      misa |= EXTENSION_TO_MASK ('m');
	      break;
	    default:
	      assert (0 && "Unsupported extension in machine name");
	    }
#undef EXTENSION_MASK
	}
      return misa;
    }
  if (csr == RISCV_CSR_FFLAGS_REGNUM)
    {
      /* The FFLAGS csr is an alias for the fflags bits of FCSR. This is
         a 5-bit field starting at bit 0.  */
      return (CPU (h_csr[fcsr_rn]) >> 0) & 0x1f;
    }
  if (csr == RISCV_CSR_FRM_REGNUM)
    {
      /* The FRM csr is an alias for the frm bits of FCSR. This is a
         3-bit field starting at bit 5.  */
      return (CPU (h_csr[fcsr_rn]) >> 5) & 0x7;
    }
  else
    {
      /* No special handling, just return the raw value.  */
      return CPU (h_csr[rn]);
    }
}

void CPU_FUNC (_h_csr_set_handler) (SIM_CPU * current_cpu, UINT rn, UWI val)
{
  const int fcsr_rn = RISCV_CSR_FCSR_REGNUM - RISCV_FIRST_CSR_REGNUM;

  /* Most CSRs are currently treated as read-only, and any writes are just
     ignored. This will be gradually expanded as more features are added.  */
  int csr = rn + RISCV_FIRST_CSR_REGNUM;
  if (csr == RISCV_CSR_FCSR_REGNUM)
    {
      CPU (h_csr[rn]) = (CPU (h_csr[rn]) & 0xff00) | (val & 0xff);
    }
  else if (csr == RISCV_CSR_FFLAGS_REGNUM)
    {
      /* The FFLAGS csr is an alias for the fflags bits of FCSR. This is
         a 5-bit field starting at bit 0.  */
      CPU (h_csr[fcsr_rn]) = (CPU (h_csr[fcsr_rn]) & 0xffe0) | ((val & 0x1f) << 0);
    }
  else if (csr == RISCV_CSR_FRM_REGNUM)
    {
      /* The FRM csr is an alias for the frm bits of FCSR. This is a
         3-bit field starting at bit 5.  */
      assert (val <= 0x7);
      assert ((val != 0x5) && (val != 6) && "Cannot set invalid rounding mode");
      if (val == 0x7)
        {
          /* Technically rounding mode 0x7 is an invalid value for the
             rounding mode register, but in an instructions 'rm' field it
             signifies the dynamic rounding mode should be used. By treating
             it as a no-op here we can simplify the semantics for
             instructions with explicit rounding modes because we can just
             set the FRM CSR directly to the value in the instruction field,
             knowing that a 0x7 value will be ignored.  */
        }
      else
        CPU (h_csr[fcsr_rn]) = (CPU (h_csr[fcsr_rn]) & 0xff1f) | ((val & 0x7) << 5);
    }
  else if (csr == RISCV_CSR_MEPC_REGNUM)
    {
      CPU (h_csr[rn]) = val;
    }
}

/* The contents of BUF are in target byte order.  */
int
CPU_FUNC (_fetch_register) (SIM_CPU * current_cpu, int rn, unsigned char *buf,
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
      assert (len == (XLEN / 8));
      SETTUWI (buf, GET_H_PC ());
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
CPU_FUNC (_store_register) (SIM_CPU * current_cpu, int rn, unsigned char *buf,
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
      assert (len == (XLEN / 8));
      SET_H_PC (GETTUWI (buf));
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

int
riscv32bf_model_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			int unit_num, int referenced)
{
  return -1;
}

int
riscv32bf_model_rv32i_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			      int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32ic_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32im_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32imc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
				int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32g_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			      int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32gc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv32bf_model_rv32gqc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
				int unit_num, int referenced)
{
  return riscv32bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

#elif defined(WANT_CPU_RISCV64BF)

int
riscv64bf_model_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			int unit_num, int referenced)
{
  return -1;
}

int
riscv64bf_model_rv64i_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			      int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64ic_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64im_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64imc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
				int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64g_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			      int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64gc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
			       int unit_num, int referenced)
{
  return riscv64bf_model_u_exec (current_cpu, idesc, unit_num, referenced);
}

int
riscv64bf_model_rv64gqc_u_exec (SIM_CPU * current_cpu, const IDESC * idesc,
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
