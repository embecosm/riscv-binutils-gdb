# mach: riscv64
# as: -march=rv64if

# TODO: Executing fcvt.s.lu causes segfault in cgen sim.
#       Test passes in qemu.

.include "testutils.inc"

  start

  # fcvt.s.lu rd, rs1, rs2
  li a0, 123
  li a1, 0x42f60000
  fcvt.s.lu fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure
  li a0, 0xb0a7face
  li a1, 0x4F30A7FB
  fcvt.s.lu fa0, a0
  fmv.w.x fa1, a1
  feq.s a0, fa0, fa1
  beqz a0, .Lfailure

  # TODO: test the invalid flag

  pass
.Lfailure:
  fail
