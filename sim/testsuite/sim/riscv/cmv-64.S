# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.mv rd, rs2
  li a0, 0
  li a1, 1
  c.mv a0, a1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
