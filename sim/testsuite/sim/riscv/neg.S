# mach: riscv

.include "testutils.inc"

  start

  # neg rd, rs2
  li a0, 1
  li a1, -1
  neg a0, a0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
