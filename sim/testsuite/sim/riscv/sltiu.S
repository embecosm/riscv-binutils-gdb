# mach: riscv

.include "testutils.inc"

  start

  # sltiu rd, rs1, imm
  li a0, 2
  sltiu a0, a0, 2
  li a1, 0
  bne a0, a1, .Lfailure
  li a0, 2
  sltiu a0, a0, 3
  li a1, 1
  bne a0, a1, .Lfailure
  li a0, 2
  sltiu a0, a0, 1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
