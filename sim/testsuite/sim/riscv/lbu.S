# mach: riscv

.include "testutils.inc"

  start

  # lbu rd, offset(rs1)
  la a1, test_bytes
  lbu a0, 4(a1)
  li a1, 5
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_bytes:
  .byte 1, -2, 3, -4, 5, -6, 7, -8
