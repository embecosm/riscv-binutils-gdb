# mach: riscv32

.include "testutils.inc"

  start

  # mulh rd, rs1, rs2
  li a0, 0x30000000
  li a1, 0x50000000
  mulh a0, a0, a1
  li a1, 0x0f000000
  bne a0, a1, .Lfailure

  li a0, 0x80000000
  li a1, 0x04
  mulh a0, a0, a1
  li a1, 0xfffffffe
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
