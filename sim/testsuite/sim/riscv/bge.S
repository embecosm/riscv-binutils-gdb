# mach: riscv

.include "testutils.inc"

  start

  # bge rs1, rs2, offset
  li a0, 0
  li a1, 0
  bge a0, a1, .Lbge1
  fail
.Lbge1:
  li a0, 1
  bge a0, a1, .Lbge2
  fail
.Lbge2:
  li a0, -1
  bge a0, a1, .Lfailure

  pass
.Lfailure:
  fail
