# mach: riscv

.include "testutils.inc"

  start

  # add rd, rs1, rs2
  li a0, 1
  li a1, 1
  add a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
