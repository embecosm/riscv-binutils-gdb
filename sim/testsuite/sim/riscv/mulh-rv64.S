# mach: riscv64

.include "testutils.inc"

  start

  # mulh rd, rs1, rs2
  li a0, 0x30000000
  li a1, 0x50000000
  mulh a0, a0, a1
  li a1, 0
  bne a0, a1, .Lfailure

  li a0, 0x8000000000000000
  li a1, 0x04
  mulh a0, a0, a1
  li a1, 0xfffffffffffffffe
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
