# mach: riscv

.include "testutils.inc"

  start

  # bltz rs1, offset
  li a0, 0
  bltz a0, .Lfailure
  li a0, 1
  bltz a0, .Lfailure
  li a0, -1
  bltz a0, .Lbltz1
  fail
.Lbltz1:

  pass
.Lfailure:
  fail
