# mach: riscv64
# as: -march=rv64if

.include "testutils.inc"

  start

  # fadd.s rd, rs1, rs2
  li a0, 0x42886800  # 68.203125f
  li a1, 0x3eb00000  # 0.34375f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fadd.s fa0, fa0, fa1
  li a0, 0x42891800  # 68.546875
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
