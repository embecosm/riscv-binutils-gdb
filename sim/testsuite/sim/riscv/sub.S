# mach: riscv

.include "testutils.inc"

  start

  # sub rd, rs1, rs2
  li a0, 6
  li a1, 2
  sub a0, a0, a1
  li a1, 4
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
