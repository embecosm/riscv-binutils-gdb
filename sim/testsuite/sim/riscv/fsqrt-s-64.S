# mach: riscv64
# as: -march=rv64imf

.include "testutils.inc"

  start

  # fsqrt.s rd, rs1, rs2, rs3
  li a0, 0x41620000  # 14.125f
  fmv.w.x fa0, a0
  fsqrt.s fa0, fa0
  li a0, 0x40708862  # 3.758324094593227f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: add a test which will give a different result if fsqrt is not
  # rounding correctly

  pass
.Lfailure:
  fail
