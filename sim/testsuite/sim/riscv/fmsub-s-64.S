# mach: riscv64
# as: -march=rv64imf

.include "testutils.inc"

  start

  # fmsub.s rd, rs1, rs2, rs3
  li a0, 0x41620000  # 14.125f
  li a1, 0x44bc3a00  # 1505.8125f
  li a2, 0x3f000000  # 0.5f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fmv.w.x fa2, a2
  fmsub.s fa0, fa0, fa1, fa2
  li a0, 0x46a62a34  # 21269.1015625f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: add a test which will give a different result if fmsub is not
  # rounding correctly

  pass
.Lfailure:
  fail
