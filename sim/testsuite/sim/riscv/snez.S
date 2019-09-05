# mach: riscv

.include "testutils.inc"

  start

  # snez rd, rs2
  li a0, 0
  snez a0, a0
  li a1, 0
  bne a0, a1, .Lfailure
  li a0, 2
  snez a0, a0
  li a1, 1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
