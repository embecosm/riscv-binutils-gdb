# mach: riscv

.include "testutils.inc"

  start

  # fsgnjx.s rd, rs1, rs2
  li a0, 0xc8200820  # -163872.5f
  li a1, 0xbf458000  # -0.771484375f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fsgnjx.s fa0, fa0, fa1
  li a0, 0x48200820  # 163872.5f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
