# mach: riscv32
# as: -march=rv32if

.include "testutils.inc"

  start

  li a0, 0x80800000  # -FLT_MIN
  la a1, test_float_buffer
  fmv.w.x fa0, a0
  fsw fa0, 6(a1)
  flw fa1, 6(a1)
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_float_buffer:
  .skip 32, 0
