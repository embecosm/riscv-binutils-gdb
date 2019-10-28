# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.or rd', rs2'
  li a0, 3
  li a1, 6
  c.or a0, a1
  li a1, 7
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
