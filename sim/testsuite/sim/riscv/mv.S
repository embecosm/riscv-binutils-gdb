# mach: riscv

.include "testutils.inc"

  start

  # mv rd, rs1
  li a0, 0
  li a1, 1
  mv a0, a1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
