# mach: riscv32
# as: -march=rv32im

.include "testutils.inc"

  start

  # mul rd, rs1, rs2
  li a0, 3
  li a1, 5
  mul a0, a0, a1
  li a1, 15
  bne a0, a1, .Lfailure
  li a0, 3
  li a1, -5
  mul a0, a0, a1
  li a1, -15
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
