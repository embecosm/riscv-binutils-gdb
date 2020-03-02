# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.jr rs1
  la a0, .Ljr1
  c.jr a0
  fail
.Ljr1:

  pass
.Lfailure:
  fail
