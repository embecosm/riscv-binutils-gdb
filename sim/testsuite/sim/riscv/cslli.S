# mach: riscv

.include "testutils.inc"

  start

  # c.slli rd, uimm
  li a0, 1
  c.slli a0, 5
  li a1, 32
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
