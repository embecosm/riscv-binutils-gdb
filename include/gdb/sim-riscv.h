/* This file defines the interface between the RISCV simulator and GDB.

   Copyright (C) 2002-2018 Free Software Foundation, Inc.

   Contributed by Embecosm

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

#ifndef SIM_RISCV_H
#define SIM_RISCV_H

/* RiscV register numbers.  */
enum
{
  SIM_RISCV_ZERO_REGNUM = 0,	/* Read-only register, always 0.  */
  SIM_RISCV_RA_REGNUM = 1,		/* Return Address.  */
  SIM_RISCV_SP_REGNUM = 2,		/* Stack Pointer.  */
  SIM_RISCV_GP_REGNUM = 3,		/* Global Pointer.  */
  SIM_RISCV_TP_REGNUM = 4,		/* Thread Pointer.  */
  SIM_RISCV_FP_REGNUM = 8,		/* Frame Pointer.  */
  SIM_RISCV_A0_REGNUM = 10,		/* First argument.  */
  SIM_RISCV_A1_REGNUM = 11,		/* Second argument.  */
  SIM_RISCV_T6_REGNUM = 31,
  SIM_RISCV_PC_REGNUM = 32,		/* Program Counter.  */

  SIM_RISCV_FIRST_FP_REGNUM = 33,	/* First Floating Point Register */
  SIM_RISCV_FA0_REGNUM = 43,
  SIM_RISCV_FA1_REGNUM = SIM_RISCV_FA0_REGNUM + 1,
  SIM_RISCV_LAST_FP_REGNUM = 64,	/* Last Floating Point Register */

  /* Somehow define CSRs?  */
  SIM_RISCV_LAST_REGNUM = SIM_RISCV_LAST_FP_REGNUM
};

#endif /* SIM_RISCV_H */
