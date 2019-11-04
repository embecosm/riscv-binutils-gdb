# mach: riscv64
# as: -march=rv64imfd

.include "testutils.inc"

  start

  # fnmsub.d rd, rs1, rs2, rs3
  li a0, 0x402C400000000000  # 14.125d
  li a1, 0x4097874000000000  # 1505.8125d
  li a2, 0x3FE0000000000000  # 0.5d
  fmv.d.x fa0, a0
  fmv.d.x fa1, a1
  fmv.d.x fa2, a2
  fnmsub.d fa0, fa0, fa1, fa2
  li a0, 0xC0D4C54680000000  # -21269.1015625d
  fmv.d.x fa1, a0
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: add a test which will give a different result if fnmsub is not
  # rounding correctly

  pass
.Lfailure:
  fail
