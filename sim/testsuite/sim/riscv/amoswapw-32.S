# mach: riscv32
# as: -march=rv32ia

.include "testutils.inc"

  start

  # amoswap.w rd, rs2, (rs1)
  li a1, 8
  la a2, test_word1
  amoswap.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 8
  bne a0, a1, .Lfailure
  li a1, -2
  la a2, test_word2
  amoswap.w a0, a1, (a2)
  li a1, -4
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, -2
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word1:
  .word 6
test_word2:
  .word -4
