# mach: riscv

.include "testutils.inc"

  start

  # beq rs1, rs2, offset
  li a0, 1
  li a1, 1
  beq a0, a1, .Lbeq1
  fail
.Lbeq1:
  li a1, 2
  beq a0, a1, .Lfailure

  pass
.Lfailure:
  fail
