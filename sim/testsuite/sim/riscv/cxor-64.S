# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.xor rd', rs2'
  li a0, 6
  li a1, 4
  c.xor a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
