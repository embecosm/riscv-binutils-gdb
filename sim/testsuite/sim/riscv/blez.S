# mach: riscv

.include "testutils.inc"

  start

  # blez rs2, offset
  li a0, 0
  blez a0, .Lblez1
  fail
.Lblez1:
  li a0, 1
  blez a0, .Lfailure
  li a0, -1
  blez a0, .Lblez2
  fail
.Lblez2:

  pass
.Lfailure:
  fail
