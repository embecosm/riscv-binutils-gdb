# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.lui rd, imm
  c.lui a0, 1
  li a1, 1
  slli a1, a1, 12
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
