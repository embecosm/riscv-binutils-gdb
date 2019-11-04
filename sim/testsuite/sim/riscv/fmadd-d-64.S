# mach: riscv64
# as: -march=rv64imfd

.include "testutils.inc"

  start

  # fmadd.d rd, rs1, rs2, rs3
  li a0, 0x4008000000000000  # 3.0d
  li a1, 0xC028000000000000  # -12.0d
  li a2, 0x402E800000000000  # 15.25d
  fmv.d.x fa0, a0
  fmv.d.x fa1, a1
  fmv.d.x fa2, a2
  fmadd.d fa0, fa0, fa1, fa2
  li a0, 0xC034C00000000000  # -20.75d
  fmv.d.x fa1, a0
  feq.d a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: add a test which will give a different result if fmadd is not
  # rounding correctly

  pass
.Lfailure:
  fail
