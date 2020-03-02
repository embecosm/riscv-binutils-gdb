# mach: riscv32
# as: -march=rv32im

.include "testutils.inc"

  start

  # mulhsu rd, rs1, rs2
  li a0, 0x80000000
  li a1, 4
  mulhsu a0, a0, a1
  li a1, 0xfffffffe
  bne a0, a1, .Lfailure
  li a0, 4
  li a1, 0x80000000
  mulhsu a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
