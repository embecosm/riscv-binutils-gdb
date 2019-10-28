# mach: riscv64
# as: -march=rv64im

.include "testutils.inc"

  start

  # mulhsu rd, rs1, rs2
  li a0, 0x8000000000000000
  li a1, 4
  mulhsu a0, a0, a1
  li a1, 0xfffffffffffffffe
  bne a0, a1, .Lfailure
  li a0, 4
  li a1, 0x8000000000000000
  mulhsu a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
