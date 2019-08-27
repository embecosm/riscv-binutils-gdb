/* collection of junk waiting time to sort out
   Copyright (C) 2000-2017 Free Software Foundation, Inc.

This file is part of the GNU Simulators.

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

#ifndef RISCV_SIM_H
#define RISCV_SIM_H

/* Custom hardware handlers */
#if XLEN == 32
  #define WI  SI
  #define UWI USI
  #define SETTWI(buf, val) SETTSI(buf, val)
  #define SETTUWI(buf, val) SETTUSI(buf, val)
  #define GETTWI(buf) GETTDI(buf)
  #define CPU_FUNC(FN) riscv32bf ## FN
#elif XLEN == 64
  #define WI  DI
  #define UWI UDI
  #define SETTWI(buf, val) SETTDI(buf, val)
  #define SETTUWI(buf, val) SETTUDI(buf, val)
  #define GETTWI(buf) GETTDI(buf)
  #define CPU_FUNC(FN) riscv64bf ## FN
#else
  #error XLEN not defined, or not 32 or 64 bits
#endif

void CPU_FUNC(_exception) (sim_cpu *current_cpu, USI pc, USI exnum);
UWI  CPU_FUNC(_h_xlen_get_handler) (SIM_CPU * current_cpu);
UWI  CPU_FUNC(_h_csr_get_handler)  (SIM_CPU * current_cpu, UINT csr);

#endif /* RISCV_SIM_H */
