# mach: riscv64
# as: -march=rv64if

.include "testutils.inc"

  start

  # fcvt.s.w rd, rs1, rs2
  li a0, 123
  li a1, 0x42f60000
  fcvt.s.w fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure
  li a0, -123
  li a1, 0xC2f60000
  fcvt.s.w fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: test the invalid flag

  pass
.Lfailure:
  fail
