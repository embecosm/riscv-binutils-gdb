# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.j offset
  c.j .Lj1
  fail
.Lj1:

  pass
.Lfailure:
  fail
