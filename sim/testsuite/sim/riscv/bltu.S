# mach: riscv

.include "testutils.inc"

  start

  # bltu rs1, rs2, offset
  li a0, 2
  li a1, 2
  bltu a0, a1, .Lfailure
  li a0, 3
  bltu a0, a1, .Lfailure
  li a0, 1
  bltu a0, a1, .Lbltu1
  fail
.Lbltu1:

  pass
.Lfailure:
  fail
