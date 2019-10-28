# mach: riscv64
# as: -march=rv64if

.include "testutils.inc"

  start

  la a1, test_floats
  flw fa0, 4(a1)
  li a1, 0x41bd0000   # 23.6125f
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_floats:
  #       -1.0f,     23.6125f,     NaN
  .word 0xbf800000, 0x41bd0000, 0xff80e9bc
