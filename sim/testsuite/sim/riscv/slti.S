# mach: riscv

.include "testutils.inc"

  start

  # slti rd, rs1, imm
  li a0, 0
  slti a0, a0, 0
  li a1, 0
  bne a0, a1, .Lfailure
  slti a0, a0, 1
  li a1, 1
  bne a0, a1, .Lfailure
  li a0, 0
  slti a0, a0, -1
  li a1, 0
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
