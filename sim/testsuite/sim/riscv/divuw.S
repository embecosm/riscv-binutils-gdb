# mach: riscv64
# as: -march=rv64im

.include "testutils.inc"

  start

  # divuw rd, rs1, rs2
  li a0, 11
  li a1, 3
  divuw a0, a0, a1
  li a1, 3
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
