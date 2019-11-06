# mach: riscv

.include "testutils.inc"

  start

  # ble rs1, rs2, offset
  li a0, 0
  li a1, 0
  ble a0, a1, .Lble1
  fail
.Lble1:
  li a0, 1
  ble a0, a1, .Lfailure
  li a0, -1
  ble a0, a1, .Lble2
  fail
.Lble2:

  pass
.Lfailure:
  fail
