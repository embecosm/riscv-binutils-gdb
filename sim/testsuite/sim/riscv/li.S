# mach: riscv

.include "testutils.inc"

  start

  # li rd, imm
  li a0, 2
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
