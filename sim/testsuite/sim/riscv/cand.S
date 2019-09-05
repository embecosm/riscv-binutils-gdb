# mach: riscv

.include "testutils.inc"

  start

  # c.and rd', rs2'
  li a0, 3
  li a1, 6
  c.and a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
