# mach: riscv32
# as: -march=rv32if

# FIXME: fclass semantics not yet implemented in cgen sim
#        (this test passes in qemu)

.include "testutils.inc"

  start

  # fclass.s rd, rs1
  li a0, 0xFF800000  # -inf
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000000001
  bne a0, a1, .Lfailure

  li a0, 0xC2F60000  # -123f (normal -ve num)
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000000010
  bne a0, a1, .Lfailure

  li a0, 0x80012345  # Subnormal -ve num
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000000100
  bne a0, a1, .Lfailure

  li a0, 0x80000000  # -0
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000001000
  bne a0, a1, .Lfailure

  li a0, 0x00000000  # 0
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000010000
  bne a0, a1, .Lfailure

  li a0, 0x00012345  # Subnormal +ve num
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0000100000
  bne a0, a1, .Lfailure

  li a0, 0x429C0000  # 78f (normal +ve num)
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0001000000
  bne a0, a1, .Lfailure

  li a0, 0x7F800000  # inf
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0010000000
  bne a0, a1, .Lfailure

  li a0, 0x7F800001  # signalling NaN
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b0100000000
  bne a0, a1, .Lfailure

  li a0, 0x7fc00000  # quiet NaN
  fmv.w.x fa0, a0
  fclass.s a0, fa0
  li a1, 0b1000000000
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
