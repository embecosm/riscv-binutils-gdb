/* Tests basic instructions

   Copyright (C) 2019 Free Software Foundation, Inc.

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

# mach: riscv


  .data
  .global pass_string
pass_string:
  .ascii "pass\n"

  .text
  .global pass
pass:
  # Call the 'write' syscall (64)
  li a7, 64
  li a0, 0             # fd:   stdout
  la a1, pass_string   # buf:  "pass\n"
  li a2, 5             # count: 5
  mv a3, zero
  mv a4, zero
  mv a5, zero
  scall
  ret

  .global exit
exit:
  # Call the 'exit' syscall (93)
  li a7, 93
  # a0 contains the return code
  mv a1, zero
  mv a2, zero
  mv a3, zero
  mv a4, zero
  mv a5, zero
  scall

  .global _start
_start:
  call pass
  li   a0, 0
  call exit
