# mach: riscv

.include "testutils.inc"

  start

  # bnez rs1, offset
  li a0, 0
  bnez a0, .Lfailure
  li a0, 1
  bnez a0, .Lbnez1
  fail
.Lbnez1:

  pass
.Lfailure:
  fail
