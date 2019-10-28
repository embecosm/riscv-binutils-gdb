# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.jalr rs1
  la a1, .Ljalr2
  c.jalr a1
.Ljalr1:
  fail
.Ljalr2:
  la a1, .Ljalr1
  bne x1, a1, .Lfailure

  pass
.Lfailure:
  fail
