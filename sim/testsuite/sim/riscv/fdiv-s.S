# mach: riscv

.include "testutils.inc"

  start

  # fdiv.s rd, rs1, rs2
  li a0, 0x3f800000  # 1.0f
  li a1, 0x47255df8  # 42333.96875f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fdiv.s fa0, fa0, fa1
  li a0, 0x37c62733  # 0.00002362169268620722f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
