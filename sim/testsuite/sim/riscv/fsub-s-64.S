# mach: riscv64
# as: -march=rv64if

.include "testutils.inc"

  start

  # fsub.s rd, rs1, rs2
  li a0, 0xc0700000  # -3.75f
  li a1, 0x40fa0000  # 7.8125f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fsub.s fa0, fa0, fa1
  li a0, 0xc1390000  # -11.5625f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
