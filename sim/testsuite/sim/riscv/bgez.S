# mach: riscv

.include "testutils.inc"

  start

  # bgez rs1, offset
  li a0, 0
  bgez a0, .Lbgez1
  fail
.Lbgez1:
  li a0, 1
  bgez a0, .Lbgez2
  fail
.Lbgez2:
  li a0, -1
  bgez a0, .Lfailure

  pass
.Lfailure:
  fail
