# mach: riscv

.include "testutils.inc"

  start

  # bgtu rs1, rs2, offset
  li a0, 2
  li a1, 2
  bgtu a0, a1, .Lfailure
  li a0, 3
  bgtu a0, a1, .Lbgtu1
  fail
.Lbgtu1:
  li a0, 1
  bgtu a0, a1, .Lfailure

  pass
.Lfailure:
  fail
