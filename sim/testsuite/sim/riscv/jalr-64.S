# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # jalr rd, offset(rs1)
  la a1, .Ljalr2
  jalr a0, 2(a1)
.Ljalr1:
  fail
.Ljalr2:
  c.j .Lfailure
.Ljalr3:
  la a1, .Ljalr1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
