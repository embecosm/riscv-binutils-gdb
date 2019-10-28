# mach: riscv32
# as: -march=rv32ia

.include "testutils.inc"

  start

  # amoor.w rd, rs2, (rs1)
  li a1, 3
  la a2, test_word
  amoor.w a0, a1, (a2)
  li a1, 6
  bne a0, a1, .Lfailure
  lw a0, (a2)
  li a1, 7
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word:
  .word 6
