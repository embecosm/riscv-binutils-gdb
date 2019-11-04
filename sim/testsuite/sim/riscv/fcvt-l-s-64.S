# mach: riscv64
# as: -march=rv64if

# TODO: Executing fcvt.l.s causes segfault in cgen sim.
#       Test passes in qemu.

.include "testutils.inc"

  start

  # fcvt.l.s rd, rs1, rs2
  li a0, 0x42886800  # 68.203125f
  fmv.w.x fa0, a0
  fcvt.l.s a1, fa0
  li a0, 68
  bne a0, a1, .Lfailure
  li a0, 0xc2886800  # -68.203125f
  fmv.w.x fa0, a0
  fcvt.l.s a1, fa0
  li a0, -68
  bne a0, a1, .Lfailure
  # out of range +ve input
  li a0, 0x5F800000  # (2^64)f
  fmv.w.x fa0, a0
  fcvt.l.s a1, fa0
  li a0, 0x7fffffffffffffff  # 2^63-1
  bne a0, a1, .Lfailure
  # out of range -ve input
  li a0, 0xdF800000  # (-2^64)f
  fmv.w.x fa0, a0
  fcvt.l.s a1, fa0
  li a0, 0x8000000000000000 # -2^63
  bne a0, a1, .Lfailure

  # TODO: test the invalid flag

  pass
.Lfailure:
  fail
