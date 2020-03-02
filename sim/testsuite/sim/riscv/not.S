# mach: riscv

.include "testutils.inc"

  start

  # not rd, rs1
  li a0, 1
  li a1, -2
  not a0, a0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
