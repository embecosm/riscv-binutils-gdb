# mach: riscv32
# as: -march=rv32ic

.include "testutils.inc"

  start

  # c.sw rs2', uimm(rs1')
   li a0, 5
  la a1, test_word_buffer
  c.sw a0, 8(a1)
  lw a2, 8(a1)
  bne a0, a2, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_word_buffer:
  .skip 32, 0
