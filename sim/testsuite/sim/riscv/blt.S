# mach: riscv

.include "testutils.inc"

  start

  # blt rs1, rs2, offset
  li a0, 0
  li a1, 0
  blt a0, a1, .Lfailure
  li a0, 1
  blt a0, a1, .Lfailure
  li a0, -1
  blt a0, a1, .Lblt1
  fail
.Lblt1:

  pass
.Lfailure:
  fail
