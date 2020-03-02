# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.andi rd', imm
  li a0, 3
  c.andi a0, 6
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
