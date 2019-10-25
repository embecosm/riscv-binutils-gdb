/* Target-dependent header for the RISC-V architecture, for GDB, the
   GNU Debugger.

   Copyright (C) 2018 Free Software Foundation, Inc.

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

#ifndef RISCV_TDEP_H
#define RISCV_TDEP_H

#include "gdb/sim-riscv.h"

/* RISC-V specific per-architecture information.  */
struct gdbarch_tdep
{
  union
  {
    /* Provide access to the whole ABI in one value.  */
    unsigned value;

    struct
    {
      /* Encode the base machine length following the same rules as in the
	 MISA register.  */
      unsigned base_len : 2;

      /* Encode which floating point ABI is in use following the same rules
	 as the ELF e_flags field.  */
      unsigned float_abi : 2;
    } fields;
  } abi;

  /* Only the least significant 26 bits are (possibly) valid, and indicate
     features that are supported on the target.  These could be cached from
     the target, or read from the executable when available.  */
  unsigned core_features;
};

/* Return the width in bytes of the general purpose registers for GDBARCH.  */
extern int riscv_isa_xlen (struct gdbarch *gdbarch);

/* Single step based on where the current instruction will take us.  */
extern std::vector<CORE_ADDR> riscv_software_single_step
  (struct regcache *regcache);

#endif /* RISCV_TDEP_H */
