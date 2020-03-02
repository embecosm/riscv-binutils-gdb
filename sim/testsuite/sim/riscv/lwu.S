# mach: riscv64

.include "testutils.inc"

  start

  # lwu rd, offset(rs1)
  la a1, test_words
  lwu a0, 16(a1)
  li a1, 5
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_words:
  .word 1, -2, 3, -4, 5, -6, 7, -8
