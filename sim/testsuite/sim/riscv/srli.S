# mach: riscv

.include "testutils.inc"

  start

  # srli rd, rs1, shamt
  li a0, 0x80000000
  srli a0, a0, 30
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, 1024
  srli a0, a0, 3
  li a1, 128
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
