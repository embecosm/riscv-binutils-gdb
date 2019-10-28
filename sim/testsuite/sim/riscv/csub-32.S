# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.sub rd', rs2'
  li a0, 6
  li a1, 2
  c.sub a0, a1
  li a1, 4
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
