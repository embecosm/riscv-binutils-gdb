# mach: riscv

.include "testutils.inc"

  start

  # srl rd, rs1, rs2
  li a0, 0x80000000
  li a1, 30
  srl a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, 1024
  li a1, 3
  srl a0, a0, a1
  li a1, 128
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
