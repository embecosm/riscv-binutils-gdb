# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.beqz rs1', offset
  li a0, 0
  c.beqz a0, .Lbeqz1
  fail
.Lbeqz1:
  li a0, 1
  c.beqz a0, .Lfailure

  pass
.Lfailure:
  fail
