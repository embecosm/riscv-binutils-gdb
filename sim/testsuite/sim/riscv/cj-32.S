# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.j offset
  c.j .Lj1
  fail
.Lj1:

  pass
.Lfailure:
  fail
