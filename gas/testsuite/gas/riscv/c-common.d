#as: -march=rv64ic
#objdump: -dr
#name: c-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <jr>:
   0:	8302                	jr	t1
   2:	8f82                	jr	t6
   4:	8782                	jr	a5
   6:	8082                	ret

0000000000000008 <jalr>:
   8:	9302                	jalr	t1
   a:	9f82                	jalr	t6
   c:	9782                	jalr	a5
   e:	9082                	jalr	ra

0000000000000010 <mv>:
  10:	8086                	mv	ra,ra
  12:	8f86                	mv	t6,ra
  14:	80fe                	mv	ra,t6
  16:	883e                	mv	a6,a5

0000000000000018 <add>:
  18:	9086                	add	ra,ra,ra
  1a:	9f86                	add	t6,t6,ra
  1c:	90fe                	add	ra,ra,t6
  1e:	983e                	add	a6,a6,a5

0000000000000020 <ebreak>:
  20:	9002                	ebreak

0000000000000022 <li>:
  22:	4081                	li	ra,0
  24:	4f81                	li	t6,0
  26:	40fd                	li	ra,31
  28:	4ffd                	li	t6,31
  2a:	5085                	li	ra,-31
  2c:	5f85                	li	t6,-31

000000000000002e <addi>:
  2e:	0085                	addi	ra,ra,1
  30:	0f85                	addi	t6,t6,1
  32:	00fd                	addi	ra,ra,31
  34:	1f85                	addi	t6,t6,-31

0000000000000036 <addiw>:
  36:	2081                	sext\.w	ra,ra
  38:	2f81                	sext\.w	t6,t6
  3a:	2085                	addiw	ra,ra,1
  3c:	2ffd                	addiw	t6,t6,31
  3e:	3085                	addiw	ra,ra,-31
  40:	3ffd                	addiw	t6,t6,-1

0000000000000042 <slli>:
  42:	0086                	slli	ra,ra,0x1
  44:	0f86                	slli	t6,t6,0x1
  46:	10fe                	slli	ra,ra,0x3f
  48:	1ffe                	slli	t6,t6,0x3f

000000000000004a <nop>:
  4a:	0001                	nop

000000000000004c <ld>:
  4c:	6000                	ld	s0,0\(s0\)
  4e:	601c                	ld	a5,0\(s0\)
  50:	6780                	ld	s0,8\(a5\)
  52:	6b9c                	ld	a5,16\(a5\)
  54:	7000                	ld	s0,32\(s0\)
  56:	603c                	ld	a5,64\(s0\)
  58:	63c0                	ld	s0,128\(a5\)
  5a:	6f9c                	ld	a5,24\(a5\)

000000000000005c <lw>:
  5c:	4000                	lw	s0,0\(s0\)
  5e:	401c                	lw	a5,0\(s0\)
  60:	43c0                	lw	s0,4\(a5\)
  62:	479c                	lw	a5,8\(a5\)
  64:	4800                	lw	s0,16\(s0\)
  66:	501c                	lw	a5,32\(s0\)
  68:	43a0                	lw	s0,64\(a5\)
  6a:	4fdc                	lw	a5,28\(a5\)

000000000000006c <sd>:
  6c:	e000                	sd	s0,0\(s0\)
  6e:	e01c                	sd	a5,0\(s0\)
  70:	e780                	sd	s0,8\(a5\)
  72:	eb9c                	sd	a5,16\(a5\)
  74:	f000                	sd	s0,32\(s0\)
  76:	e03c                	sd	a5,64\(s0\)
  78:	e3c0                	sd	s0,128\(a5\)
  7a:	ef9c                	sd	a5,24\(a5\)

000000000000007c <sw>:
  7c:	c000                	sw	s0,0\(s0\)
  7e:	c01c                	sw	a5,0\(s0\)
  80:	c3c0                	sw	s0,4\(a5\)
  82:	c79c                	sw	a5,8\(a5\)
  84:	c800                	sw	s0,16\(s0\)
  86:	d01c                	sw	a5,32\(s0\)
  88:	c3a0                	sw	s0,64\(a5\)
  8a:	cfdc                	sw	a5,28\(a5\)

000000000000008c <addw>:
  8c:	9c21                	addw	s0,s0,s0
  8e:	9fa1                	addw	a5,a5,s0
  90:	9c3d                	addw	s0,s0,a5
  92:	9fbd                	addw	a5,a5,a5

0000000000000094 <subw>:
  94:	9c01                	subw	s0,s0,s0
  96:	9f81                	subw	a5,a5,s0
  98:	9c1d                	subw	s0,s0,a5
  9a:	9f9d                	subw	a5,a5,a5

000000000000009c <and>:
  9c:	8c61                	and	s0,s0,s0
  9e:	8fe1                	and	a5,a5,s0
  a0:	8c7d                	and	s0,s0,a5
  a2:	8ffd                	and	a5,a5,a5

00000000000000a4 <or>:
  a4:	8c41                	or	s0,s0,s0
  a6:	8fc1                	or	a5,a5,s0
  a8:	8c5d                	or	s0,s0,a5
  aa:	8fdd                	or	a5,a5,a5

00000000000000ac <xor>:
  ac:	8c21                	xor	s0,s0,s0
  ae:	8fa1                	xor	a5,a5,s0
  b0:	8c3d                	xor	s0,s0,a5
  b2:	8fbd                	xor	a5,a5,a5

00000000000000b4 <sub>:
  b4:	8c01                	sub	s0,s0,s0
  b6:	8f81                	sub	a5,a5,s0
  b8:	8c1d                	sub	s0,s0,a5
  ba:	8f9d                	sub	a5,a5,a5

00000000000000bc <srai>:
  bc:	8405                	srai	s0,s0,0x1
  be:	8785                	srai	a5,a5,0x1
  c0:	947d                	srai	s0,s0,0x3f
  c2:	97fd                	srai	a5,a5,0x3f

00000000000000c4 <srli>:
  c4:	8005                	srli	s0,s0,0x1
  c6:	8385                	srli	a5,a5,0x1
  c8:	907d                	srli	s0,s0,0x3f
  ca:	93fd                	srli	a5,a5,0x3f

00000000000000cc <addi16sp>:
  cc:	6141                	addi	sp,sp,16
  ce:	610d                	addi	sp,sp,160
  d0:	7135                	addi	sp,sp,-160
  d2:	617d                	addi	sp,sp,496
  d4:	7101                	addi	sp,sp,-512

00000000000000d6 <addi4spn>:
  d6:	0040                	addi	s0,sp,4
  d8:	103c                	addi	a5,sp,40
  da:	1fe0                	addi	s0,sp,1020

00000000000000dc <sdsp>:
  dc:	e422                	sd	s0,8\(sp\)
  de:	f03e                	sd	a5,32\(sp\)
  e0:	e0a2                	sd	s0,64\(sp\)
  e2:	e13e                	sd	a5,128\(sp\)

00000000000000e4 <swsp>:
  e4:	c422                	sw	s0,8\(sp\)
  e6:	d03e                	sw	a5,32\(sp\)
  e8:	c0a2                	sw	s0,64\(sp\)
  ea:	c13e                	sw	a5,128\(sp\)

00000000000000ec <ldsp>:
  ec:	6422                	ld	s0,8\(sp\)
  ee:	7782                	ld	a5,32\(sp\)
  f0:	6406                	ld	s0,64\(sp\)
  f2:	678a                	ld	a5,128\(sp\)

00000000000000f4 <lwsp>:
  f4:	4422                	lw	s0,8\(sp\)
  f6:	5782                	lw	a5,32\(sp\)
  f8:	4406                	lw	s0,64\(sp\)
  fa:	478a                	lw	a5,128\(sp\)

00000000000000fc <beqz>:
  fc:	00041463          	bnez	s0,104 <beqz\+0x8>
 100:	0000006f          	j	100 <beqz\+0x4>
			100: R_RISCV_JAL	\*ABS\*
 104:	00079463          	bnez	a5,10c <beqz\+0x10>
 108:	0000006f          	j	108 <beqz\+0xc>
			108: R_RISCV_JAL	\*ABS\*
 10c:	00041463          	bnez	s0,114 <beqz\+0x18>
 110:	0000006f          	j	110 <beqz\+0x14>
			110: R_RISCV_JAL	\*ABS\*\+0x20
 114:	00079463          	bnez	a5,11c <bnez>
 118:	0000006f          	j	118 <beqz\+0x1c>
			118: R_RISCV_JAL	\*ABS\*-0x80

000000000000011c <bnez>:
 11c:	00040463          	beqz	s0,124 <bnez\+0x8>
 120:	0000006f          	j	120 <bnez\+0x4>
			120: R_RISCV_JAL	\*ABS\*
 124:	00078463          	beqz	a5,12c <bnez\+0x10>
 128:	0000006f          	j	128 <bnez\+0xc>
			128: R_RISCV_JAL	\*ABS\*
 12c:	00040463          	beqz	s0,134 <bnez\+0x18>
 130:	0000006f          	j	130 <bnez\+0x14>
			130: R_RISCV_JAL	\*ABS\*\+0x20
 134:	00078463          	beqz	a5,13c <j>
 138:	0000006f          	j	138 <bnez\+0x1c>
			138: R_RISCV_JAL	\*ABS\*-0x80

000000000000013c <j>:
 13c:	0000006f          	j	13c <j>
			13c: R_RISCV_JAL	\*ABS\*
 140:	0000006f          	j	140 <j\+0x4>
			140: R_RISCV_JAL	\*ABS\*\+0x20
 144:	0000006f          	j	144 <j\+0x8>
			144: R_RISCV_JAL	\*ABS\*-0x80
 148:	0000006f          	j	148 <j\+0xc>
			148: R_RISCV_JAL	\*ABS\*-0x10e
 14c:	0000006f          	j	14c <j\+0x10>
			14c: R_RISCV_JAL	\*ABS\*-0x114

0000000000000150 <lui>:
 150:	6085                	lui	ra,0x1
 152:	6791                	lui	a5,0x4
 154:	6421                	lui	s0,0x8
 156:	687d                	lui	a6,0x1f

0000000000000158 <andi>:
 158:	8805                	andi	s0,s0,1
 15a:	8b85                	andi	a5,a5,1
 15c:	887d                	andi	s0,s0,31
 15e:	9b85                	andi	a5,a5,-31
