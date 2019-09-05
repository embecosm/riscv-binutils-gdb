# mach: riscv

.include "testutils.inc"

  start

  # c.addi16sp imm
  li x2, 1
  c.addi16sp 1
  li a1, 17
  bne x2, a1, .Lfailure

  pass
.Lfailure:
  fail
