# mach: riscv

.include "testutils.inc"

  start

  # fmul.s rd, rs1, rs2
  li a0, 0x3f000000  # 0.5f
  li a1, 0x49f42400  # 2000000.0f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fmul.s fa0, fa0, fa1
  li a0, 0x49742400  # 1000000.0f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
