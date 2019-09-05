# mach: riscv

.include "testutils.inc"

  start

  # bgt rs1, rs2, offset
  li a0, 0
  li a1, 0
  bgt a0, a1, .Lfailure
  li a0, 1
  bgt a0, a1, .Lbgt1
  fail
.Lbgt1:
  li a0, -1
  bgt a0, a1, .Lfailure

  pass
.Lfailure:
  fail
