# mach: riscv32
# as: -march=rv32if

.include "testutils.inc"

  start

  # fsgnj.s rd, rs1, rs2
  li a0, 0x3bd00000  # 0.00634765625f
  li a1, 0xbf800000  # -1.0f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fsgnj.s fa0, fa0, fa1
  li a0, 0xbbd00000  # -0.00634765625f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
