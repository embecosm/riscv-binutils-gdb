  .text
  .global nop
nop:
  nop

  .text
  .global ebreak
ebreak:
  ebreak

  .text
  .global sbreak
sbreak:
  sbreak

  .text
  .global ret
ret:
  ret

  .text
  .global jr
jr:
  # jr    rd_ne0
  jr    x0
  jr    ra
  jr    x2
  jr    x5

  .text
  .global jalr
jalr:
  # jalr  rd_ne0
  jalr  zero
  jalr  s11

  .text
  .global j
j:
  # j     imm[11:1]
  j     -2049
  j     -2048
  j     -2047
  j     -872
  j     -111     # no relaxation
  j     0
  j     1199
  j     2046
  j     2047
  j     2048
  j     banana
  j     cabbage

  .text
  .global jal
jal:
  # jal   imm[11:1]
  jal   -2049
  jal   -2048
  jal   -2047
  jal   -1999
  jal   -1048
  jal   0
  jal   22
  jal   2046     # no relaxation
  jal   2047
  jal   2048
  jal   aubergine
  jal   lemon

  .text
  .global beqz
beqz:
  # beqz  rs1_c, imm[8:1]
  # register constraint
  beqz  zero, 26
  beqz  x4, -42
  beqz  x7, 64
  beqz  x8, -88
  beqz  x15, 128
  beqz  x16, -2
  beqz  x23, 0
  # TODO: symbols
  # immediate constraints
  beqz  x8, -257
  beqz  x9, -256
  beqz  x10, -46
  beqz  x11, 0     # no relaxation
  beqz  x12, 99
  beqz  x12, 122
  beqz  x13, 254
  beqz  x13, 255
  beqz  x14, 256
  beqz  x15, 257
  # TODO: symbols
  # violate all constraints
  beqz  x4,  3000
  beqz  x31, -665

  .text
  .global bnez
bnez:
  # bnez  rs1_c, imm[8:1]
  # register constraints
  bnez  zero, 0
  bnez  x2, 2
  bnez  x7, -4
  bnez  x8, -60
  bnez  x15, 40
  bnez  x16, 32
  bnez  x30, -14
  # immediate constraints
  bnez  x8, -257
  bnez  x9, -256
  bnez  x10, -233   # no relaxation
  bnez  x11, 0
  bnez  x11, 192
  bnez  x12, 199
  bnez  x13, 254
  bnez  x13, 255
  bnez  x14, 256
  bnez  x15, 257
  #TODO symbols
  # violate all constraints
  bnez  x7,  3000
  bnez  x16, -665

  .text
  .global lui
lui:
  # lui   rd_ne0_ne2, nzimm[17:12]
  # register constraints
  lui   x0, 8192
  lui   x2, 32768
  # immediate constraints
  lui   x0, 0
  lui   x1, 0
  lui   x31, 0
  lui   x17, 0
  lui   x23, 1
  lui   x30, 8192
  lui   x3, 28227
  lui   x11, 126976
  lui   x19, 131072
  lui   x11, 135168
  #TODO: symbols
  # violate all constraints
  lui   x0, 1

  .text
  .global li
li:
  # li    rd_ne0, imm[5:0]
  # register constraints
  li    x0, 15
  li    zero, 0
  # immediate constraints
  li    x1,  -33
  li    x3,  -32
  li    x15, -1
  li    x9,  0
  li    x2,  22
  li    x11, 31
  li    x19, 32
  # all constraints
  li    x0, -55
  li    zero, 32

  .text
  .global mv
mv:
  # mv    rd_ne0, rs2_ne0
  mv    x0, x1
  mv    x5, zero
  mv    x11, x16
  mv    x23, x31
  mv    zero,zero

  .text
  .global move
move:
  # move  rd_ne0, rs2_ne0
  move  zero, x22
  move  x9, x0
  move  x13, x12
  move  zero, zero

  .text
  .global andi
andi:
  # andi  rd_c, rd_c, imm[5:0]
  # reg pairing
  andi  x9, x11, 12
  andi  x15, x8, -32
  # compressed reg constraint
  andi  x4, x4, 0
  andi  x7, x7, 2
  andi  x8, x8, 5
  andi  x12, x12, -1
  andi  x15, x15, 0      # uses long encoding on upstream
  andi  x16, x16, -27
  # immediate constraint
  andi  x9, x9, -77
  andi  x11, x11, -33
  andi  x13, x13, -32
  andi  x12, x12, -29
  andi  x15, x15, 31
  andi  x8, x8, 32
  andi  x8, x8, 99
  # violate all constraints
  andi  zero, x9, 55

  .text
  .global and
and:
  # and   rd_c, rd_c, rs2_c
  # and   rd_c, rs2_c, rd_c
  # register pairing
  and x9, x11, x13
  and x12, x13, x14
  # compressed register constraint
  and x8, x8, x8
  and x11, x11, x14    # register parsed as immediate operand
  and x14, x14, x11
  and x5, x5, x14
  and x15, x0, x15
  and x26, x11, x11
  and x13, x1, x13
  and x15, x15, x11
  and x11, x11, x15
  # violate all constraints
  and x0, x1, x2
  and x9, x22, x31

  # and   rd_c, rd_c, imm[5:0]
  # register pairing
  and  x9, x11, 12
  and  x15, x8, -32
  # compressed register constraint
  and  x7, x7, 2
  and  x8, x8, 5
  and  x12, x12, -1
  and  x15, x15, 0       # uses long encoding on upstream
  and  x16, x16, -27
  # immediate values
  and  x9, x9, -77
  and  x11, x11, -33
  and  x13, x13, -32
  and  x12, x12, -29
  and  x15, x15, 31
  and  x8, x8, 32
  and  x8, x8, 99
  # violate all constraints
  and  zero, x9, 55

  .text
  .global addi
addi:
  # addi  rs2_c, sp, nzuimm[9:2]    # addi4spn
  # compressed register constraint
  addi x0, sp, 8
  addi x7, sp, -4
  addi x8, sp, -8
  addi x15, sp, 232
  addi x16, sp, -496
  # stack pointer register constraint
  addi x9, x1, 8
  addi x11, x15, -332
  # immediate values
  addi x15, sp, -33
  addi x15, sp, 0
  addi x12, sp, 4
  addi x13, sp, 441
  addi x11, sp, 1020
  addi x10, sp, 1024
  # violate all constraints
  addi x0, x9, 3
  addi sp, x31, -588

  # addi  rd_ne0, rd_ne0, nzimm[5:0]
  # register values
  addi x0, x0, -15
  addi x0, x0, 23
  addi x1, x1, 7
  # register pairs
  addi x12, x12, -31
  addi x3, x4, -12
  addi x9, x8, 0
  addi x29, x29, 1
  # immediate values
  addi x1, x1, -228
  addi x3, x3, -33
  addi x11, x11, -32
  addi x9, x9, -31
  addi x14, x14, -8
  addi x23, x23, -1
  addi x15, x15, 0
  addi x9, x9, 22
  addi x10, x10, 31
  addi x19, x19, 32
  # violate all constraints
  addi x0, x1, 55
  addi x9, x0, -99

  # addi  sp, sp, nzimm[9:4]        # addi16sp
  # register pairs
  addi sp, sp, 208
  addi sp, sp, -192
  addi sp, x1, 64
  addi zero, sp, 48
  addi zero, zero, 0
  # register values
  addi sp, sp, 0
  addi sp, sp, 1
  addi x1, x1, -16
  # immediate values
  addi sp, sp, -528
  addi sp, sp, -512
  addi sp, sp, 224
  addi sp, sp, 111
  addi sp, sp, -80
  addi sp, sp, -1
  addi sp, sp, 496
  addi sp, sp, 512
  # violate all constraints
  addi x0, x5, -13
  addi x9, x22, 1024

  .text
  .global add
add:
  # add   rd_ne0, rd_ne0, rs2_ne0
  # add   rd_ne0, rs2_neo, rd_ne0
  # register values
  add x1, x1, x0
  add x5, x0, x5
  add x0, x31, x0
  add x0, x0, x0
  # register pairs
  add x1, x1, x5
  add x2, x22, x22
  add x30, x2, x30
  add x11, x12, x11
  add x14, x14, x14
  add x1, x2, x3
  add x5, x8, x1
  # violate all constraints
  add x0, x1, x2

  # add   rd_ne0, rd_ne0, nzimm[5:0]
  # register values
  add x0, x0, -15
  add x0, x0, 23
  add x1, x1, 7
  # register pairs
  add x12, x12, -31
  add x3, x4, -12
  add x9, x8, 0
  add x29, x29, 1
  # immediate values
  add x1, x1, -228
  add x3, x3, -33
  add x11, x11, -32
  add x9, x9, -31
  add x14, x14, -8
  add x23, x23, -1
  add x23, x23, 0
  add x9, x9, 22
  add x10, x10, 31
  add x19, x19, 32
  # violate all constraints
  add x0, x1, 55
  add x9, x0, -99

  # add   rs2_c, sp, nzuimm[9:2]    # addi4spn
  # compressed register values
  add x0, sp, 8
  add x7, sp, -4
  add x8, sp, 8
  add x15, sp, 232
  add x16, sp, -496
  # stack pointer register values
  add x9, x1, 8
  add x11, x15, -332
  # immediate values
  add x13, sp, -88
  add x15, sp, -33
  add x15, sp, 0
  add x12, sp, 4
  add x13, sp, 441
  add x11, sp, 508
  add x10, sp, 512
  # violate all constraints
  add x0, x9, 3
  add sp, x31, -588

  # add   sp, sp, nzimm[9:4]        # addi16sp
  # register pairs
  add sp, sp, 208
  add sp, sp, -192
  add sp, x1, 64
  add zero, sp, 48
  add zero, zero, 0
  # register values
  add x1, x1, -16
  # immediate values
  add sp, sp, -528
  add sp, sp, -512
  add sp, sp, 224
  add sp, sp, 111
  add sp, sp, -80
  add sp, sp, -1
  add sp, sp, 0
  add sp, sp, 496
  add sp, sp, 512
  # violate all constraints
  add x0, x5, -13
  add x9, x22, 1024

  .text
  .global slli
slli:
  # slli  rd_ne0, rd_ne0, nzuimm[5:0]
  # register values
  slli  x0, x0, 1
  slli  x0, x0, 22
####slli  x0, x0, 64  #Error: Improper shift amount (64)
  # register pairs
  slli  x1, x1, 5
  slli  x17, x17, 23
  slli  x27, x27, 44
  slli  x31, x31, 63
  slli  x8, x9, 22
  slli  x1, x20, 1
  slli  x19, x2, 19
  # immediate values
  slli  x1, x1, 0
  slli  x9, x9, 22
  slli  x19, x19, 63
  # violate all constraints

  .text
  .global sll
sll:
  # sll   rd_ne0, rd_ne0, nzuimm[5:0]
  # register values
  sll  x0, x0, 1
  sll  x0, x0, 22
  # register pairs
  sll  x1, x1, 5
  sll  x17, x17, 23
  sll  x27, x27, 44
  sll  x31, x31, 63
  sll  x8, x9, 22
  sll  x1, x20, 1
  sll  x19, x2, 19
  # immediate values
  sll  x1, x1, 0
  sll  x9, x9, 22
  sll  x19, x19, 63

  .text
  .global srli
srli:
  # srli  rd_c, rd_c, nzuimm[5:0]
  # register values
  srli x0, x0, 12
  srli x7, x7, 9
  srli x8, x8, 14
  srli x15, x15, 63
  srli x16, x16, 32
  srli x23, x23, 1
  # register pairs
  srli x8, x9, 2
  srli x11, x14, 60
  srli x12, x15, 12
  # immediate values
  srli x8, x8, 0
  srli x10, x10, 1
  srli x14, x14, 14
  srli x15, x15, 63

  .text
  .global srl
srl:
  # srl   rd_c, rd_c, nzuimm[5:0]
  # register values
  srl x0, x0, 12
  srl x7, x7, 9
  srl x8, x8, 14
  srl x15, x15, 63
  srl x16, x16, 32
  srl x23, x23, 1
  # register pairs
  srl x8, x9, 2
  srl x11, x14, 60
  srl x12, x15, 12
  # immediate values
  srl x8, x8, 0
  srl x10, x10, 1
  srl x14, x14, 14
  srl x15, x15, 63

  .text
  .global srai
srai:
  # srai   rd_c, rd_c, nzuimm[5:0]
  # register values
  srai x0, x0, 12
  srai x7, x7, 9
  srai x8, x8, 14
  srai x15, x15, 63
  srai x16, x16, 32
  srai x23, x23, 1
  # register pairs
  srai x8, x9, 2
  srai x11, x14, 60
  srai x12, x15, 12
  # immediate values
  srai x8, x8, 0
  srai x10, x10, 1
  srai x14, x14, 14
  srai x15, x15, 63

  .text
  .global sra
sra:
  # sra   rd_c, rd_c, nzuimm[5:0]
  # register values
  sra x0, x0, 12
  sra x7, x7, 9
  sra x8, x8, 14
  sra x15, x15, 63
  sra x16, x16, 32
  sra x23, x23, 1
  # register pairs
  sra x8, x9, 2
  sra x11, x14, 60
  sra x12, x15, 12
  # immediate values
  sra x8, x8, 0
  sra x10, x10, 1
  sra x14, x14, 14
  sra x15, x15, 63

  .text
  .global sub
sub:
  # sub   rd_c, rd_c, rs2_c
  # register values
  sub x0, x0, x1
  sub x8, x8, x0
  sub x4, x4, x15
  sub x23, x23, x11
  # register pairs
  sub x9, x9, x9
  sub x15, x15, x12
  sub x8, x9, x11
  sub x10, x13, x10
  sub x11, x12, x13
  # violate all constraints
  sub x1, x2, x3

  .text
  .global lw
lw:
  # lw    rd_ne0, uimm[7:2](sp)
  # register values
  lw  x0, 0(sp)
  lw  zero, 16(sp)
  lw  x5, 64(x0)
  lw  x12, 128(x30)
  # immediate values 
  lw  x12, -4(sp)
  lw  x9, -1(sp)  # unsigned
  lw  x11, 0(sp)
  lw  x14, 60(sp)
  lw  x25, 111(sp)
  lw  x1, 252(sp)
  lw  x9, 256(sp)
  lw  x22, 260(sp)
  lw  x31, 1024(sp)
  # violate all constraints
  lw  x0, -500(x9)
  # lw    rs2_c, uimm[6:2](rs1_c)
  # register values
  lw  x0, 96(x9)
  lw  x9, 64(x0)
  lw  x12, 0(x24)
  lw  x17, 48(x15)
  # immediate values
  lw  x9, -4(x10)
  lw  x12, 0(x12)
  lw  x13, 1(x15)
  lw  x10, 88(x11)
  lw  x10, 91(x9)
  lw  x12, 124(x10)
  lw  x9, 128(x12)
  # violate all constraints
  lw  x9, -1(x0)

  .text
  .global or
or:
  # or    rd_c, rd_c, rs2_c
  # or    rd_c, rs2_c, rd_c
  # register values
  or x0, x0, x8
  or x9, x9, x16
  or x8, x1, x8
  or x10, x10, x0
  or x15, x8, x15 # We don't support this type of tied regs yet
  or x7, x7, x8
  or x16, x15, x16  # We don't support this type of tied regs yet
  # register pairs
  or x9, x9, x8
  or x10, x9, x9
  or x12, x11, x12  # We don't support this type of tied regs yet
  or x13, x13, x13
  or x8, x8, x8
  or x9, x10, x11
  or x11, x15, x8
  or x12, x11, x15
  # violate all constraints
  or x1, x0, x3

  .text
  .global sw
sw:
  # sw    rs2, uimm[7:2](sp)
  # register values
  sw  x5, 64(x0)
  sw  x12, 128(x30)
  # immediate values
  sw  x12, -4(sp)
  sw  x9, -1(sp)  # unsigned
  sw  x11, 0(sp)
  sw  x14, 60(sp)
  sw  x25, 111(sp)
  sw  x1, 252(sp)
  sw  x9, 256(sp)
  sw  x22, 260(sp)
  sw  x31, 1024(sp)
  # violate all constraints
  sw  x0, -500(x9)

  # sw    rs2_c, uimm[6:2](rs1_c)
  # register values
  sw  x0, 96(x9)
  sw  x9, 64(x0)
  sw  x12, 0(x24)
  sw  x17, 48(x15)
  # immediate values
  sw  x9, -4(x10)
  sw  x12, 0(x12)
  sw  x13, 1(x15)
  sw  x10, 88(x11)
  sw  x10, 91(x9)
  sw  x12, 124(x10)
  sw  x9, 128(x12)
  # violate all constraints
  sw  x9, -1(x0)

  .text
  .global xor
xor:
  # xor    rd_c, rd_c, rs2_c
  # xor    rd_c, rs2_c, rd_c
  # register values
  xor x0, x0, x8
  xor x9, x9, x16
  xor x8, x1, x8
  xor x10, x10, x0
  xor x15, x8, x15
  xor x7, x7, x8
  xor x16, x15, x16
  # register pairs
  xor x9, x9, x8
  xor x12, x11, x12
  xor x13, x13, x13
  xor x8, x8, x8
  xor x9, x10, x11
  xor x11, x15, x8
  xor x12, x11, x15
  # violate all constraints
  xor x1, x0, x3

  .text
  .global ld
ld:
  # ld    rd_ne0, uimm[8:3](sp)
  # register values
  ld  x0, 0(sp)
  ld  zero, 32(sp)
  ld  x5, 128(x0)
  ld  x12, 256(x30)
  # immediate values
  ld  x12, -8(sp)
  ld  x9, -1(sp)  # unsigned
  ld  x11, 0(sp)
  ld  x14, 120(sp)
  ld  x25, 111(sp)
  ld  x1, 504(sp)
  ld  x9, 512(sp)
  ld  x22, 520(sp)
  # violate all constraints
  ld  x0, -1000(x9)

  # ld    rs2_c, uimm[7:3](rs1_c)
  # register values
  ld  x0, 192(x9)
  ld  x9, 128(x0)
  ld  x12, 0(x24)
  ld  x17, 96(x15)
  # immediate values
  ld  x9, -8(x10)
  ld  x12, 0(x12)
  ld  x13, 1(x15)
  ld  x10, 176(x11)
  ld  x10, 91(x9)
  ld  x12, 248(x10)
  ld  x9, 256(x12)
  # violate all constraints
  ld  x9, -1(x0)

  .text
  .global sd
sd:
  # sd    rs2, uimm[8:3](sp)
  # register values
  sd  x5, 128(x0)
  sd  x12, 256(x30)
  # immediate values
  sd  x12, -8(sp)
  sd  x9, -1(sp)  # unsigned
  sd  x11, 0(sp)
  sd  x14, 120(sp)
  sd  x25, 111(sp)
  sd  x1, 504(sp)
  sd  x9, 512(sp)
  sd  x22, 520(sp)
  # violate all constraints
  sd  x0, -1000(x9)

  # sd    rs2_c, uimm[7:3](rs1_c)
  # register values
  sd  x0, 192(x9)
  sd  x9, 128(x0)
  sd  x12, 0(x24)
  sd  x17, 96(x15)
  # immediate values
  sd  x9, -8(x10)
  sd  x12, 0(x12)
  sd  x13, 1(x15)
  sd  x10, 176(x11)
  sd  x10, 91(x9)
  sd  x12, 248(x10)
  sd  x9, 256(x12)
  # violate all constraints
  sd  x9, -1(x0)

  .text
  .global sext_w
sext_w:
  sext.w x0, x0
  sext.w x1, x1
  sext.w x31, x31
  
  .text
  .global addiw
addiw:
  # addiw  rd_ne0, rd_ne0, imm[5:0]
  # register values
  addiw x0, x0, -15
  addiw x0, x0, 23
  addiw x1, x1, 7
  # register pairs
  addiw x12, x12, -31
  addiw x3, x4, -12
  addiw x9, x8, 0
  addiw x29, x29, 1
  # immediate values
  addiw x1, x1, -228
  addiw x3, x3, -33
  addiw x11, x11, -32
  addiw x9, x9, -31
  addiw x14, x14, -8
  addiw x23, x23, -1
  addiw x11, x11, 0
  addiw x9, x9, 22
  addiw x10, x10, 31
  addiw x19, x19, 32
  # violate all constraints
  addiw x0, x1, 55
  addiw x9, x0, -99

  .text
  .global addw
addw:
  # addw   rd_c, rd_c, rs2_c
  # addw   rd_c, rs2_c, rd_c
  # register values
  addw x0, x0, x8
  addw x9, x9, x16
  addw x8, x1, x8
  addw x10, x10, x0
  addw x15, x8, x15
  addw x7, x7, x8
  addw x16, x15, x16
  # register pairs
  addw x9, x9, x8
  addw x12, x11, x12
  addw x13, x13, x13
  addw x8, x8, x8
  addw x9, x10, x11
  addw x11, x15, x8
  addw x12, x11, x15
  # violate all constraints
  addw x1, x0, x3

  # addw   rd_ne0, rd_ne0, imm[5:0]
  # register values
  addw x0, x0, -15
  addw x0, x0, 23
  addw x1, x1, 7
  # register pairs
  addw x12, x12, -31
  addw x3, x4, -12
  addw x9, x8, 0
  addw x29, x29, 1
  # immediate values
  addw x1, x1, -228
  addw x3, x3, -33
  addw x11, x11, -32
  addw x9, x9, -31
  addw x14, x14, -8
  addw x23, x23, -1
  addw x23, x23, 0
  addw x9, x9, 22
  addw x10, x10, 31
  addw x19, x19, 32
  # violate all constraints
  addw x0, x1, 55
  addw x9, x0, -99

  .text
  .global subw
subw:
  # subw   rd_c, rd_c, rs2_c
  # register values
  subw x0, x0, x8
  subw x9, x9, x16
  subw x8, x1, x8
  subw x10, x10, x0
  subw x15, x8, x15
  subw x7, x7, x8
  subw x16, x15, x16
  # register pairs
  subw x9, x9, x8
  subw x12, x11, x12
  subw x13, x13, x13
  subw x8, x8, x8
  subw x9, x10, x11
  subw x11, x15, x8
  subw x12, x11, x15
  # violate all constraints
  subw x1, x0, x3

