# mach: riscv64
# as: -march=rv64if

.include "testutils.inc"

  start

  # fcvt.w.s rd, rs1, rs2
  li a0, 0x40A00000  # 5f
  li a1, 0x40E00000  # 7f
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  flt.s a0, fa0, fa1 # 5f < 7f
  beqz a0, .Lfailure
  li a1, 0xc0E00000  # -7f
  fmv.w.x fa1, a1
  flt.s a0, fa0, fa1 # 5f < -7f
  bnez a0, .Lfailure
  li a0, 0xc0A00000  # -5f
  fmv.w.x fa0, a0
  flt.s a0, fa0, fa1 # -5f < -7f
  bnez a0, .Lfailure
  li a1, 0x40E00000  # 7f
  fmv.w.x fa1, a1
  flt.s a0, fa0, fa1 # -5 < 7f
  beqz a0, .Lfailure

  pass
.Lfailure:
  fail
