# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.add rd, rs2
  li a0, 1
  li a1, 1
  c.add a0, a1
  li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
