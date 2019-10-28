# mach: riscv64
# as: -march=rv64ic

.include "testutils.inc"

  start

  # c.lw rd', uimm(rs1')
  la a1, test_words
  c.lw a0, 20(a1)
  li a1, -6
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_words:
  .word 1, -2, 3, -4, 5, -6, 7, -8
