# mach: riscv

.include "testutils.inc"

  start

  # beqz rs1, offset
  li a0, 0
  beqz a0, .Lbeqz1
  fail
.Lbeqz1:
  li a0, 1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
