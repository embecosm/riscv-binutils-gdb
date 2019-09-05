# mach: riscv

.include "testutils.inc"

  start

  # bne rs1, rs2, offset
  li a0, 2
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, 3
  bne a0, a1, .Lbne1
  fail
.Lbne1:

  pass
.Lfailure:
  fail
