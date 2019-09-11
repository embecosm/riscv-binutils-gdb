# mach: riscv

.include "testutils.inc"

  start

  # bgtz rs2, offset
  li a0, 0
  bgtz a0, .Lfailure
  li a0, 1
  bgtz a0, .Lbgtz1
  fail
.Lbgtz1:
  li a0, -1
  bgtz a0, .Lfailure

  pass
.Lfailure:
  fail
