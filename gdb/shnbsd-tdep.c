/* Target-dependent code for NetBSD/sh.

   Copyright (C) 2002, 2003, 2006, 2007, 2008, 2009
   Free Software Foundation, Inc.

   Contributed by Wasabi Systems, Inc.

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

#include "defs.h"
#include "gdbcore.h"
#include "regset.h"
#include "value.h"
#include "osabi.h"

#include "gdb_string.h"

#include "sh-tdep.h"
#include "solib-svr4.h"

/* Convert a register number into an offset into a ptrace
   register structure.  */
static const struct sh_corefile_regmap regmap[] =
{
  {R0_REGNUM,      20 * 4},
  {R0_REGNUM + 1,  19 * 4},
  {R0_REGNUM + 2,  18 * 4},
  {R0_REGNUM + 3,  17 * 4},
  {R0_REGNUM + 4,  16 * 4},
  {R0_REGNUM + 5,  15 * 4},
  {R0_REGNUM + 6,  14 * 4},
  {R0_REGNUM + 7,  13 * 4},
  {R0_REGNUM + 8,  12 * 4},
  {R0_REGNUM + 9,  11 * 4},
  {R0_REGNUM + 10, 10 * 4},
  {R0_REGNUM + 11,  9 * 4},
  {R0_REGNUM + 12,  8 * 4},
  {R0_REGNUM + 13,  7 * 4},
  {R0_REGNUM + 14,  6 * 4},
  {R0_REGNUM + 15,  5 * 4},
  {PC_REGNUM,       0 * 4},
  {SR_REGNUM,       1 * 4},
  {PR_REGNUM,	    2 * 4},
  {MACH_REGNUM,	    3 * 4},
  {MACL_REGNUM,	    4 * 4},
  {-1 /* Terminator.  */, 0}
};


static void
shnbsd_init_abi (struct gdbarch_info info,
                  struct gdbarch *gdbarch)
{
  struct gdbarch_tdep *tdep = gdbarch_tdep (gdbarch);

  tdep->core_gregmap = (struct sh_corefile_regmap *)regmap;

  set_solib_svr4_fetch_link_map_offsets
    (gdbarch, svr4_ilp32_fetch_link_map_offsets);
}


/* OpenBSD uses uses the traditional NetBSD core file format, even for
   ports that use ELF.  */
#define GDB_OSABI_NETBSD_CORE GDB_OSABI_OPENBSD_ELF

static enum gdb_osabi
shnbsd_core_osabi_sniffer (bfd *abfd)
{
  if (strcmp (bfd_get_target (abfd), "netbsd-core") == 0)
    return GDB_OSABI_NETBSD_CORE;

  return GDB_OSABI_UNKNOWN;
}

/* Provide a prototype to silence -Wmissing-prototypes.  */
extern initialize_file_ftype _initialize_shnbsd_tdep;

void
_initialize_shnbsd_tdep (void)
{
  /* BFD doesn't set a flavour for NetBSD style a.out core files.  */
  gdbarch_register_osabi_sniffer (bfd_arch_sh, bfd_target_unknown_flavour,
                                  shnbsd_core_osabi_sniffer);

  gdbarch_register_osabi (bfd_arch_sh, 0, GDB_OSABI_NETBSD_ELF,
			  shnbsd_init_abi);
  gdbarch_register_osabi (bfd_arch_sh, 0, GDB_OSABI_OPENBSD_ELF,
			  shnbsd_init_abi);
}
