# mach: riscv64

.include "testutils.inc"

  start

  # srlw rd, rs1, rs2
  li a0, 0x80000000
  li a1, 30
  srlw a0, a0, a1
  li a1, 2
  bne a0, a1, .Lfailure
  li a0, 1024
  li a1, 3
  srlw a0, a0, a1
  li a1, 128
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
