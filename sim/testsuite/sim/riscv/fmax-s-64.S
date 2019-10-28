# mach: riscv64
# as: -march=rv64imf

.include "testutils.inc"

  start

  # fmax.s rd, rs1, rs2
  li a0, 0x3dcccccd  # 0.100000001490116119384765625f (0.1)
  li a1, 0xc47a0000  # -1000.0f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fmax.s fa0, fa0, fa1
  li a0, 0x3dcccccd  # 0.100000001490116119384765625f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # Test adjacent float numbers
  li a0, 0x3eaaaaab  # 0.3333333432674407958984375f
  li a1, 0x3eaaaaaa  # 0.333333313465118408203125f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fmax.s fa0, fa0, fa1
  li a0, 0x3eaaaaab  # 0.3333333432674407958984375f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
