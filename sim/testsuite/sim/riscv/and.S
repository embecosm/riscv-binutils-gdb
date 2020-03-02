# mach: riscv

.include "testutils.inc"

  start

  # and rd, rs1, rs2
  li a0, 3
  li a1, 6
  and a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
