# mach: riscv64
# as: -march=rv64im

.include "testutils.inc"

  start

  # rem rd, rs1, rs2
  li a0, 11
  li a1, 3
  rem a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, 11
  li a1, -3
  rem a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, -11
  li a1, 3
  rem a0, a0, a1
  li a1, -2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
