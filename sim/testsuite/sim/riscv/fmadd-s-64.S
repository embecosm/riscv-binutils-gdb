# mach: riscv64
# as: -march=rv64imf

.include "testutils.inc"

  start

  # fmadd.s rd, rs1, rs2, rs3
  li a0, 0x40400000  # 3.0f
  li a1, 0xc1400000  # -12.0f
  li a2, 0x41740000  # 15.25
  fmv.w.x fa0, a0
  fmv.w.x fa1, a1
  fmv.w.x fa2, a2
  fmadd.s fa0, fa0, fa1, fa2
  li a0, 0xc1a60000  # -20.75
  fmv.w.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: add a test which will give a different result if fmadd is not
  # rounding correctly

  pass
.Lfailure:
  fail
