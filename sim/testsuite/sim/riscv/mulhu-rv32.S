# mach: riscv32
# as: -march=rv32im

.include "testutils.inc"

  start

  # mulhu rd, rs1, rs2
  li a0, 0x80000000
  li a1, 2
  mulhu a0, a0, a1
  li a1, 1
  bne a0, a1, .Lfailure
  li a0, 2
  li a1, 0x80000000
  mulhu a0, a0, a1
  li a1, 1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
