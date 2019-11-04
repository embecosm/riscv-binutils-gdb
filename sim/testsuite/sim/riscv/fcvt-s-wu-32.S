# mach: riscv32
# as: -march=rv32if

.include "testutils.inc"

  start

  # fcvt.s.wu rd, rs1, rs2
  li a0, 123
  li a1, 0x42f60000
  fcvt.s.wu fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure
  li a0, 0xb0a7face
  li a1, 0x4F30A7FB
  fcvt.s.wu fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: test the invalid flag

  pass
.Lfailure:
  fail
