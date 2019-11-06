# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.li rd, imm
  c.li a0, 2
  c.li a1, 2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
