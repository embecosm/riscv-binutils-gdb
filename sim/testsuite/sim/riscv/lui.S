# mach: riscv

.include "testutils.inc"

  start

  # lui rd, imm
  lui a0, 1
  li a1, 1
  slli a1, a1, 12
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
