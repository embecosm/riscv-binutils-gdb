# mach: riscv

.include "testutils.inc"

  start

  # c.lwsp rd, uimm(x2)
  la x2, test_words
  c.lwsp a0, 20(x2)
  li a1, -6
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_words:
  .word 1, -2, 3, -4, 5, -6, 7, -8
