# mach: riscv

.include "testutils.inc"

  start

  # bgeu rs1, rs2, offset
  li a0, 2
  li a1, 2
  bgeu a0, a1, .Lbgeu1
  fail
.Lbgeu1:
  li a0, 3
  bgeu a0, a1, .Lbgeu2
  fail
.Lbgeu2:
  li a0, 1
  bgeu a0, a1, .Lfailure

  pass
.Lfailure:
  fail
