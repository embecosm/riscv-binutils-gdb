# mach: riscv32
# as: -march=rv32if

.include "testutils.inc"

  start

  # fsgnjn.s rd, rs1, rs2
  li a0, 0xc438618b  # -737.52410888671875f
  li a1, 0xc7ac6800  # -88272.0f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fsgnjn.s fa0, fa0, fa1
  li a0, 0x4438618b  # 737.52410888671875f
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
