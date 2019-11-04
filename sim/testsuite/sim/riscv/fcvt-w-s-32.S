# mach: riscv32
# as: -march=rv32if

.include "testutils.inc"

  start

  # fcvt.w.s rd, rs1, rs2
  li a0, 0x42886800  # 68.203125f
  fmv.w.x fa0, a0
  fcvt.w.s a1, fa0
  li a0, 68
  bne a0, a1, .Lfailure
  li a0, 0xc2886800  # -68.203125f
  fmv.w.x fa0, a0
  fcvt.w.s a1, fa0
  li a0, -68
  bne a0, a1, .Lfailure
  # out of range +ve input
  li a0, 0x4F800000  # (2^32)f
  fmv.w.x fa0, a0
  fcvt.w.s a1, fa0
  li a0, 0x7fffffff  # 2^31-1
  bne a0, a1, .Lfailure
  # out of range -ve input
  li a0, 0xcF800000  # (-2^32)f
  fmv.w.x fa0, a0
  fcvt.w.s a1, fa0
  li a0, 0x80000000 # -2^31
  bne a0, a1, .Lfailure

  # TODO: test the invalid flag

  pass
.Lfailure:
  fail
