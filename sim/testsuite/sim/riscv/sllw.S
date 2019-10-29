# mach: riscv64

.include "testutils.inc"

  start

  # sllw rd, rs1, rs2
  li a0, 1
  li a1, 5
  sllw a0, a0, a1
  li a1, 32
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
