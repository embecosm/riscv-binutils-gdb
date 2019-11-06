# mach: riscv64

.include "testutils.inc"

  start

  # sraiw rd, rs1, shamt
  li a0, -1024
  sraiw a0, a0, 3
  li a1, -128
  bne a0, a1, .Lfailure
  li a0, 1024
  sraiw a0, a0, 3
  li a1, 128
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
