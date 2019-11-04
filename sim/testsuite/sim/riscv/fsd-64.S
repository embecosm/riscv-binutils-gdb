# mach: riscv64
# as: -march=rv64ifd

.include "testutils.inc"

  start

  li a0, 0x8010000000000000  # -DBL_MIN
  la a1, test_double_buffer
  fmv.d.x fa0, a0
  fsd fa0, 6(a1)
  fld fa1, 6(a1)
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_double_buffer:
  .skip 64, 0
