# mach: riscv64

.include "testutils.inc"

  start

  # srai rd, rs1, shamt
  li a0, 0x8000000000000000
  srai a0, a0, 0b100000
  li a1, 0xffffffff80000000
  bne a0, a1, .Lfailure
  li a0, 0x1000000000000000
  srai a0, a0, 0b100000
  li a1, 0x10000000
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
