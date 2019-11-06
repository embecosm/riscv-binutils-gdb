# mach: riscv64

.include "testutils.inc"

  start

  # sraw rd, rs1, rs2
  li a0, -1024
  li a1, 3
  sraw a0, a0, a1
  li a1, -128
  bne a0, a1, .Lfailure
  li a0, 1024
  li a1, 3
  sraw a0, a0, a1
  li a1, 128
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
