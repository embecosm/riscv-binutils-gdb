# mach: riscv

.include "testutils.inc"

  start

  # auipc rd, imm
  la a0, . + (0x08 + 0x00001000)
  auipc a1, 1
  bne a0, a1, .Lfailure

  pass
.Lfailure:
  fail
