# mach: riscv

.include "testutils.inc"

  start

  # xori rd, rs1, imm
  li a0, 6
  xor a0, a0, 4
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
