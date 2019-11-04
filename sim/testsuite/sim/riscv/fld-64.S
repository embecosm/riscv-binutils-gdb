# mach: riscv64
# as: -march=rv64ifd

.include "testutils.inc"

  start

  la a1, test_doubles
  fld fa0, 8(a1)
  li a1, 0x40379CCCCCCCCCCD   # 23.6125d
  fmv.d.x fa1, a1
  feq.d a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail

  .data
  .align 2
test_doubles:
  #     -1.0d,               23.6125d,           NaN
  .dword 0x3FF0000000000000, 0x40379CCCCCCCCCCD, 0x7FF4953043202340
