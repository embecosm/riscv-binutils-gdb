# mach: riscv64

.include "testutils.inc"

  start

  # slli rd, rs1, shamt
  li a0, 1
  slli a0, a0, 0b100000
  li a1, 0x100000000
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
