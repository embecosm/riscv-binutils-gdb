#as: -march=rv32e
#objdump: -dr
#name: rv32e

.*: +file format .*


Disassembly of section \.text:

00000000 <lui>:
   0:	00000037          	lui	zero,0x0
   4:	fffff7b7          	lui	a5,0xfffff
   8:	800005b7          	lui	a1,0x80000
   c:	7ffff7b7          	lui	a5,0x7ffff
  10:	000010b7          	lui	ra,0x1
  14:	e6b955b7          	lui	a1,0xe6b95
  18:	f9fa8437          	lui	s0,0xf9fa8
  1c:	9e9705b7          	lui	a1,0x9e970

00000020 <auipc>:
  20:	00000017          	auipc	zero,0x0
  24:	fffff797          	auipc	a5,0xfffff
  28:	80000597          	auipc	a1,0x80000
  2c:	7ffff797          	auipc	a5,0x7ffff
  30:	00001097          	auipc	ra,0x1
  34:	f2e82797          	auipc	a5,0xf2e82
  38:	2e37d697          	auipc	a3,0x2e37d
  3c:	d2a0f317          	auipc	t1,0xd2a0f

00000040 <jal>:
  40:	0000006f          	j	40 <jal>
			40: R_RISCV_JAL	\*ABS\*
  44:	000007ef          	jal	a5,44 <jal\+0x4>
			44: R_RISCV_JAL	\*ABS\*-0x1
  48:	000005ef          	jal	a1,48 <jal\+0x8>
			48: R_RISCV_JAL	\*ABS\*-0x80000
  4c:	000007ef          	jal	a5,4c <jal\+0xc>
			4c: R_RISCV_JAL	\*ABS\*\+0x7ffff
  50:	000000ef          	jal	ra,50 <jal\+0x10>
			50: R_RISCV_JAL	\*ABS\*\+0x1
  54:	000006ef          	jal	a3,54 <jal\+0x14>
			54: R_RISCV_JAL	\*ABS\*-0x5d599
  58:	000001ef          	jal	gp,58 <jal\+0x18>
			58: R_RISCV_JAL	\*ABS\*\+0x18349
  5c:	0000066f          	jal	a2,5c <jal\+0x1c>
			5c: R_RISCV_JAL	\*ABS\*\+0x20cf2

00000060 <jalr>:
  60:	00000067          	jr	zero # 0 <lui>
  64:	fff787e7          	jalr	a5,-1\(a5\) # f2e82033 <csr_abs\+0xf2e819ff>
  68:	800585e7          	jalr	a1,-2048\(a1\) # 7ffff828 <csr_abs\+0x7ffff1f4>
  6c:	7ff787e7          	jalr	a5,2047\(a5\)
  70:	001080e7          	jalr	1\(ra\) # 1031 <csr_abs\+0x9fd>
  74:	b4828767          	jalr	a4,-1208\(t0\)
  78:	079685e7          	jalr	a1,121\(a3\) # 2e37d0b1 <csr_abs\+0x2e37ca7d>
  7c:	5dc70767          	jalr	a4,1500\(a4\)

00000080 <beq>:
  80:	00001463          	bnez	zero,88 <beq\+0x8>
  84:	0000006f          	j	84 <beq\+0x4>
			84: R_RISCV_JAL	\*ABS\*
  88:	00f79463          	bne	a5,a5,90 <beq\+0x10>
  8c:	0000006f          	j	8c <beq\+0xc>
			8c: R_RISCV_JAL	\*ABS\*-0x1
  90:	00b59463          	bne	a1,a1,98 <beq\+0x18>
  94:	0000006f          	j	94 <beq\+0x14>
			94: R_RISCV_JAL	\*ABS\*-0x800
  98:	00f79463          	bne	a5,a5,a0 <beq\+0x20>
  9c:	0000006f          	j	9c <beq\+0x1c>
			9c: R_RISCV_JAL	\*ABS\*\+0x7ff
  a0:	00109463          	bne	ra,ra,a8 <beq\+0x28>
  a4:	0000006f          	j	a4 <beq\+0x24>
			a4: R_RISCV_JAL	\*ABS\*\+0x1
  a8:	00c71463          	bne	a4,a2,b0 <beq\+0x30>
  ac:	0000006f          	j	ac <beq\+0x2c>
			ac: R_RISCV_JAL	\*ABS\*-0x496
  b0:	00f71463          	bne	a4,a5,b8 <beq\+0x38>
  b4:	0000006f          	j	b4 <beq\+0x34>
			b4: R_RISCV_JAL	\*ABS\*\+0x1d0
  b8:	00531463          	bne	t1,t0,c0 <bne>
  bc:	0000006f          	j	bc <beq\+0x3c>
			bc: R_RISCV_JAL	\*ABS\*-0x710

000000c0 <bne>:
  c0:	00000463          	beqz	zero,c8 <bne\+0x8>
  c4:	0000006f          	j	c4 <bne\+0x4>
			c4: R_RISCV_JAL	\*ABS\*
  c8:	00f78463          	beq	a5,a5,d0 <bne\+0x10>
  cc:	0000006f          	j	cc <bne\+0xc>
			cc: R_RISCV_JAL	\*ABS\*-0x1
  d0:	00b58463          	beq	a1,a1,d8 <bne\+0x18>
  d4:	0000006f          	j	d4 <bne\+0x14>
			d4: R_RISCV_JAL	\*ABS\*-0x800
  d8:	00f78463          	beq	a5,a5,e0 <bne\+0x20>
  dc:	0000006f          	j	dc <bne\+0x1c>
			dc: R_RISCV_JAL	\*ABS\*\+0x7ff
  e0:	00108463          	beq	ra,ra,e8 <bne\+0x28>
  e4:	0000006f          	j	e4 <bne\+0x24>
			e4: R_RISCV_JAL	\*ABS\*\+0x1
  e8:	00d20463          	beq	tp,a3,f0 <bne\+0x30>
  ec:	0000006f          	j	ec <bne\+0x2c>
			ec: R_RISCV_JAL	\*ABS\*\+0x79c
  f0:	00e28463          	beq	t0,a4,f8 <bne\+0x38>
  f4:	0000006f          	j	f4 <bne\+0x34>
			f4: R_RISCV_JAL	\*ABS\*\+0x540
  f8:	00520463          	beq	tp,t0,100 <blt>
  fc:	0000006f          	j	fc <bne\+0x3c>
			fc: R_RISCV_JAL	\*ABS\*-0x5

00000100 <blt>:
 100:	00005463          	blez	zero,108 <blt\+0x8>
 104:	0000006f          	j	104 <blt\+0x4>
			104: R_RISCV_JAL	\*ABS\*
 108:	00f7d463          	ble	a5,a5,110 <blt\+0x10>
 10c:	0000006f          	j	10c <blt\+0xc>
			10c: R_RISCV_JAL	\*ABS\*-0x1
 110:	00b5d463          	ble	a1,a1,118 <blt\+0x18>
 114:	0000006f          	j	114 <blt\+0x14>
			114: R_RISCV_JAL	\*ABS\*-0x800
 118:	00f7d463          	ble	a5,a5,120 <blt\+0x20>
 11c:	0000006f          	j	11c <blt\+0x1c>
			11c: R_RISCV_JAL	\*ABS\*\+0x7ff
 120:	0010d463          	ble	ra,ra,128 <blt\+0x28>
 124:	0000006f          	j	124 <blt\+0x24>
			124: R_RISCV_JAL	\*ABS\*\+0x1
 128:	00b75463          	ble	a1,a4,130 <blt\+0x30>
 12c:	0000006f          	j	12c <blt\+0x2c>
			12c: R_RISCV_JAL	\*ABS\*\+0x7f7
 130:	00e5d463          	ble	a4,a1,138 <blt\+0x38>
 134:	0000006f          	j	134 <blt\+0x34>
			134: R_RISCV_JAL	\*ABS\*-0x2dc
 138:	00c55463          	ble	a2,a0,140 <bge>
 13c:	0000006f          	j	13c <blt\+0x3c>
			13c: R_RISCV_JAL	\*ABS\*-0x2d8

00000140 <bge>:
 140:	00004463          	bltz	zero,148 <bge\+0x8>
 144:	0000006f          	j	144 <bge\+0x4>
			144: R_RISCV_JAL	\*ABS\*
 148:	00f7c463          	blt	a5,a5,150 <bge\+0x10>
 14c:	0000006f          	j	14c <bge\+0xc>
			14c: R_RISCV_JAL	\*ABS\*-0x1
 150:	00b5c463          	blt	a1,a1,158 <bge\+0x18>
 154:	0000006f          	j	154 <bge\+0x14>
			154: R_RISCV_JAL	\*ABS\*-0x800
 158:	00f7c463          	blt	a5,a5,160 <bge\+0x20>
 15c:	0000006f          	j	15c <bge\+0x1c>
			15c: R_RISCV_JAL	\*ABS\*\+0x7ff
 160:	0010c463          	blt	ra,ra,168 <bge\+0x28>
 164:	0000006f          	j	164 <bge\+0x24>
			164: R_RISCV_JAL	\*ABS\*\+0x1
 168:	0096c463          	blt	a3,s1,170 <bge\+0x30>
 16c:	0000006f          	j	16c <bge\+0x2c>
			16c: R_RISCV_JAL	\*ABS\*-0x176
 170:	0055c463          	blt	a1,t0,178 <bge\+0x38>
 174:	0000006f          	j	174 <bge\+0x34>
			174: R_RISCV_JAL	\*ABS\*-0x274
 178:	00b6c463          	blt	a3,a1,180 <bltu>
 17c:	0000006f          	j	17c <bge\+0x3c>
			17c: R_RISCV_JAL	\*ABS\*-0x436

00000180 <bltu>:
 180:	00007463          	bleu	zero,zero,188 <bltu\+0x8>
 184:	0000006f          	j	184 <bltu\+0x4>
			184: R_RISCV_JAL	\*ABS\*
 188:	00f7f463          	bleu	a5,a5,190 <bltu\+0x10>
 18c:	0000006f          	j	18c <bltu\+0xc>
			18c: R_RISCV_JAL	\*ABS\*-0x1
 190:	00b5f463          	bleu	a1,a1,198 <bltu\+0x18>
 194:	0000006f          	j	194 <bltu\+0x14>
			194: R_RISCV_JAL	\*ABS\*-0x800
 198:	00f7f463          	bleu	a5,a5,1a0 <bltu\+0x20>
 19c:	0000006f          	j	19c <bltu\+0x1c>
			19c: R_RISCV_JAL	\*ABS\*\+0x7ff
 1a0:	0010f463          	bleu	ra,ra,1a8 <bltu\+0x28>
 1a4:	0000006f          	j	1a4 <bltu\+0x24>
			1a4: R_RISCV_JAL	\*ABS\*\+0x1
 1a8:	0062f463          	bleu	t1,t0,1b0 <bltu\+0x30>
 1ac:	0000006f          	j	1ac <bltu\+0x2c>
			1ac: R_RISCV_JAL	\*ABS\*\+0x118
 1b0:	00267463          	bleu	sp,a2,1b8 <bltu\+0x38>
 1b4:	0000006f          	j	1b4 <bltu\+0x34>
			1b4: R_RISCV_JAL	\*ABS\*-0x83
 1b8:	00c77463          	bleu	a2,a4,1c0 <bgeu>
 1bc:	0000006f          	j	1bc <bltu\+0x3c>
			1bc: R_RISCV_JAL	\*ABS\*-0xda

000001c0 <bgeu>:
 1c0:	00006463          	bltu	zero,zero,1c8 <bgeu\+0x8>
 1c4:	0000006f          	j	1c4 <bgeu\+0x4>
			1c4: R_RISCV_JAL	\*ABS\*
 1c8:	00f7e463          	bltu	a5,a5,1d0 <bgeu\+0x10>
 1cc:	0000006f          	j	1cc <bgeu\+0xc>
			1cc: R_RISCV_JAL	\*ABS\*-0x1
 1d0:	00b5e463          	bltu	a1,a1,1d8 <bgeu\+0x18>
 1d4:	0000006f          	j	1d4 <bgeu\+0x14>
			1d4: R_RISCV_JAL	\*ABS\*-0x800
 1d8:	00f7e463          	bltu	a5,a5,1e0 <bgeu\+0x20>
 1dc:	0000006f          	j	1dc <bgeu\+0x1c>
			1dc: R_RISCV_JAL	\*ABS\*\+0x7ff
 1e0:	0010e463          	bltu	ra,ra,1e8 <bgeu\+0x28>
 1e4:	0000006f          	j	1e4 <bgeu\+0x24>
			1e4: R_RISCV_JAL	\*ABS\*\+0x1
 1e8:	0074e463          	bltu	s1,t2,1f0 <bgeu\+0x30>
 1ec:	0000006f          	j	1ec <bgeu\+0x2c>
			1ec: R_RISCV_JAL	\*ABS\*-0x534
 1f0:	0075e463          	bltu	a1,t2,1f8 <bgeu\+0x38>
 1f4:	0000006f          	j	1f4 <bgeu\+0x34>
			1f4: R_RISCV_JAL	\*ABS\*-0x29
 1f8:	00736463          	bltu	t1,t2,200 <lb>
 1fc:	0000006f          	j	1fc <bgeu\+0x3c>
			1fc: R_RISCV_JAL	\*ABS\*\+0x7b8

00000200 <lb>:
 200:	00000003          	lb	zero,0\(zero\) # 0 <lui>
 204:	fff40783          	lb	a5,-1\(s0\) # f9fa7fff <csr_abs\+0xf9fa79cb>
 208:	80000303          	lb	t1,-2048\(zero\) # fffff800 <csr_abs\+0xfffff1cc>
 20c:	7ff58703          	lb	a4,2047\(a1\)
 210:	00160003          	lb	zero,1\(a2\)
 214:	fa540183          	lb	gp,-91\(s0\)
 218:	8ab38583          	lb	a1,-1877\(t2\)
 21c:	eeb38783          	lb	a5,-277\(t2\)

00000220 <lh>:
 220:	00001003          	lh	zero,0\(zero\) # 0 <lui>
 224:	fff79783          	lh	a5,-1\(a5\)
 228:	80059583          	lh	a1,-2048\(a1\)
 22c:	7ff79783          	lh	a5,2047\(a5\)
 230:	00109083          	lh	ra,1\(ra\)
 234:	fce39703          	lh	a4,-50\(t2\)
 238:	bb429003          	lh	zero,-1100\(t0\)
 23c:	cf809083          	lh	ra,-776\(ra\)

00000240 <lw>:
 240:	00002003          	lw	zero,0\(zero\) # 0 <lui>
 244:	fff7a783          	lw	a5,-1\(a5\)
 248:	8005a583          	lw	a1,-2048\(a1\)
 24c:	7ff7a783          	lw	a5,2047\(a5\)
 250:	0010a083          	lw	ra,1\(ra\)
 254:	6907a703          	lw	a4,1680\(a5\)
 258:	6ba02403          	lw	s0,1722\(zero\) # 6ba <csr_abs\+0x86>
 25c:	ad82a483          	lw	s1,-1320\(t0\)

00000260 <lbu>:
 260:	00004003          	lbu	zero,0\(zero\) # 0 <lui>
 264:	fff7c783          	lbu	a5,-1\(a5\)
 268:	8005c583          	lbu	a1,-2048\(a1\)
 26c:	7ff7c783          	lbu	a5,2047\(a5\)
 270:	0010c083          	lbu	ra,1\(ra\)
 274:	f2a4c783          	lbu	a5,-214\(s1\)
 278:	4550c183          	lbu	gp,1109\(ra\)
 27c:	a6164603          	lbu	a2,-1439\(a2\)

00000280 <lhu>:
 280:	00005003          	lhu	zero,0\(zero\) # 0 <lui>
 284:	fff7d783          	lhu	a5,-1\(a5\)
 288:	8005d583          	lhu	a1,-2048\(a1\)
 28c:	7ff7d783          	lhu	a5,2047\(a5\)
 290:	0010d083          	lhu	ra,1\(ra\)
 294:	86a5d403          	lhu	s0,-1942\(a1\)
 298:	4424d303          	lhu	t1,1090\(s1\)
 29c:	4272d403          	lhu	s0,1063\(t0\)

000002a0 <sb>:
 2a0:	00000023          	sb	zero,0\(zero\) # 0 <lui>
 2a4:	fef78fa3          	sb	a5,-1\(a5\)
 2a8:	80b58023          	sb	a1,-2048\(a1\)
 2ac:	7ef78fa3          	sb	a5,2047\(a5\)
 2b0:	001080a3          	sb	ra,1\(ra\)
 2b4:	16a206a3          	sb	a0,365\(tp\) # 16d <bge\+0x2d>
 2b8:	7aa38da3          	sb	a0,1979\(t2\)
 2bc:	26e30723          	sb	a4,622\(t1\) # d2a0f2aa <csr_abs\+0xd2a0ec76>

000002c0 <sh>:
 2c0:	00001023          	sh	zero,0\(zero\) # 0 <lui>
 2c4:	fef79fa3          	sh	a5,-1\(a5\)
 2c8:	80b59023          	sh	a1,-2048\(a1\)
 2cc:	7ef79fa3          	sh	a5,2047\(a5\)
 2d0:	001090a3          	sh	ra,1\(ra\)
 2d4:	ea671a23          	sh	t1,-332\(a4\)
 2d8:	10f392a3          	sh	a5,261\(t2\)
 2dc:	58f69aa3          	sh	a5,1429\(a3\)

000002e0 <sw>:
 2e0:	00002023          	sw	zero,0\(zero\) # 0 <lui>
 2e4:	fef7afa3          	sw	a5,-1\(a5\)
 2e8:	80b5a023          	sw	a1,-2048\(a1\)
 2ec:	7ef7afa3          	sw	a5,2047\(a5\)
 2f0:	0010a0a3          	sw	ra,1\(ra\)
 2f4:	f0052823          	sw	zero,-240\(a0\)
 2f8:	7ef22f23          	sw	a5,2046\(tp\) # 7fe <csr_abs\+0x1ca>
 2fc:	54e52623          	sw	a4,1356\(a0\)

00000300 <addi>:
 300:	00000013          	nop
 304:	fff78793          	addi	a5,a5,-1
 308:	80058593          	addi	a1,a1,-2048
 30c:	7ff78793          	addi	a5,a5,2047
 310:	00108093          	addi	ra,ra,1
 314:	dd258213          	addi	tp,a1,-558
 318:	f9e70293          	addi	t0,a4,-98
 31c:	29b00513          	li	a0,667

00000320 <slti>:
 320:	00002013          	slti	zero,zero,0
 324:	fff7a793          	slti	a5,a5,-1
 328:	8005a593          	slti	a1,a1,-2048
 32c:	7ff7a793          	slti	a5,a5,2047
 330:	0010a093          	slti	ra,ra,1
 334:	2a16a593          	slti	a1,a3,673
 338:	ea04a293          	slti	t0,s1,-352
 33c:	fac5a393          	slti	t2,a1,-84

00000340 <sltiu>:
 340:	00003013          	sltiu	zero,zero,0
 344:	fff7b793          	sltiu	a5,a5,-1
 348:	8005b593          	sltiu	a1,a1,-2048
 34c:	7ff7b793          	sltiu	a5,a5,2047
 350:	0010b093          	seqz	ra,ra
 354:	b4f73793          	sltiu	a5,a4,-1201
 358:	2b573793          	sltiu	a5,a4,693
 35c:	5a143593          	sltiu	a1,s0,1441

00000360 <xori>:
 360:	00004013          	xori	zero,zero,0
 364:	fff7c793          	not	a5,a5
 368:	8005c593          	xori	a1,a1,-2048
 36c:	7ff7c793          	xori	a5,a5,2047
 370:	0010c093          	xori	ra,ra,1
 374:	5f36c393          	xori	t2,a3,1523
 378:	2df5c713          	xori	a4,a1,735
 37c:	7dc54713          	xori	a4,a0,2012

00000380 <ori>:
 380:	00006013          	ori	zero,zero,0
 384:	fff7e793          	ori	a5,a5,-1
 388:	8005e593          	ori	a1,a1,-2048
 38c:	7ff7e793          	ori	a5,a5,2047
 390:	0010e093          	ori	ra,ra,1
 394:	8ce06293          	ori	t0,zero,-1842
 398:	ba906693          	ori	a3,zero,-1111
 39c:	7a96e593          	ori	a1,a3,1961

000003a0 <andi>:
 3a0:	00007013          	andi	zero,zero,0
 3a4:	fff7f793          	andi	a5,a5,-1
 3a8:	8005f593          	andi	a1,a1,-2048
 3ac:	7ff7f793          	andi	a5,a5,2047
 3b0:	0010f093          	andi	ra,ra,1
 3b4:	fff1f693          	andi	a3,gp,-1
 3b8:	7952f113          	andi	sp,t0,1941
 3bc:	1d937713          	andi	a4,t1,473

000003c0 <add>:
 3c0:	00000033          	add	zero,zero,zero
 3c4:	00f787b3          	add	a5,a5,a5
 3c8:	00b585b3          	add	a1,a1,a1
 3cc:	00f787b3          	add	a5,a5,a5
 3d0:	001080b3          	add	ra,ra,ra
 3d4:	007785b3          	add	a1,a5,t2
 3d8:	006386b3          	add	a3,t2,t1
 3dc:	00e58033          	add	zero,a1,a4

000003e0 <sub>:
 3e0:	40000033          	neg	zero,zero
 3e4:	40f787b3          	sub	a5,a5,a5
 3e8:	40b585b3          	sub	a1,a1,a1
 3ec:	40f787b3          	sub	a5,a5,a5
 3f0:	401080b3          	sub	ra,ra,ra
 3f4:	40550733          	sub	a4,a0,t0
 3f8:	409402b3          	sub	t0,s0,s1
 3fc:	409203b3          	sub	t2,tp,s1

00000400 <sll>:
 400:	00001033          	sll	zero,zero,zero
 404:	00f797b3          	sll	a5,a5,a5
 408:	00b595b3          	sll	a1,a1,a1
 40c:	00f797b3          	sll	a5,a5,a5
 410:	001090b3          	sll	ra,ra,ra
 414:	00f51533          	sll	a0,a0,a5
 418:	005215b3          	sll	a1,tp,t0
 41c:	00071633          	sll	a2,a4,zero

00000420 <slt>:
 420:	00002033          	sltz	zero,zero
 424:	00f7a7b3          	slt	a5,a5,a5
 428:	00b5a5b3          	slt	a1,a1,a1
 42c:	00f7a7b3          	slt	a5,a5,a5
 430:	0010a0b3          	slt	ra,ra,ra
 434:	0053a733          	slt	a4,t2,t0
 438:	00c122b3          	slt	t0,sp,a2
 43c:	00e5a7b3          	slt	a5,a1,a4

00000440 <sltu>:
 440:	00003033          	snez	zero,zero
 444:	00f7b7b3          	sltu	a5,a5,a5
 448:	00b5b5b3          	sltu	a1,a1,a1
 44c:	00f7b7b3          	sltu	a5,a5,a5
 450:	0010b0b3          	sltu	ra,ra,ra
 454:	00e2b3b3          	sltu	t2,t0,a4
 458:	00e731b3          	sltu	gp,a4,a4
 45c:	00f13533          	sltu	a0,sp,a5

00000460 <xor>:
 460:	00004033          	xor	zero,zero,zero
 464:	00f7c7b3          	xor	a5,a5,a5
 468:	00b5c5b3          	xor	a1,a1,a1
 46c:	00f7c7b3          	xor	a5,a5,a5
 470:	0010c0b3          	xor	ra,ra,ra
 474:	00524433          	xor	s0,tp,t0
 478:	00c34733          	xor	a4,t1,a2
 47c:	008742b3          	xor	t0,a4,s0

00000480 <srl>:
 480:	00005033          	srl	zero,zero,zero
 484:	00f7d7b3          	srl	a5,a5,a5
 488:	00b5d5b3          	srl	a1,a1,a1
 48c:	00f7d7b3          	srl	a5,a5,a5
 490:	0010d0b3          	srl	ra,ra,ra
 494:	004352b3          	srl	t0,t1,tp
 498:	00505733          	srl	a4,zero,t0
 49c:	00855633          	srl	a2,a0,s0

000004a0 <sra>:
 4a0:	40005033          	sra	zero,zero,zero
 4a4:	40f7d7b3          	sra	a5,a5,a5
 4a8:	40b5d5b3          	sra	a1,a1,a1
 4ac:	40f7d7b3          	sra	a5,a5,a5
 4b0:	4010d0b3          	sra	ra,ra,ra
 4b4:	40e3d433          	sra	s0,t2,a4
 4b8:	40e1d6b3          	sra	a3,gp,a4
 4bc:	40c6d5b3          	sra	a1,a3,a2

000004c0 <or>:
 4c0:	00006033          	or	zero,zero,zero
 4c4:	00f7e7b3          	or	a5,a5,a5
 4c8:	00b5e5b3          	or	a1,a1,a1
 4cc:	00f7e7b3          	or	a5,a5,a5
 4d0:	0010e0b3          	or	ra,ra,ra
 4d4:	00b2e0b3          	or	ra,t0,a1
 4d8:	00e2e733          	or	a4,t0,a4
 4dc:	0005e733          	or	a4,a1,zero

000004e0 <and>:
 4e0:	00007033          	and	zero,zero,zero
 4e4:	00f7f7b3          	and	a5,a5,a5
 4e8:	00b5f5b3          	and	a1,a1,a1
 4ec:	00f7f7b3          	and	a5,a5,a5
 4f0:	0010f0b3          	and	ra,ra,ra
 4f4:	00f3f633          	and	a2,t2,a5
 4f8:	0062f133          	and	sp,t0,t1
 4fc:	0056f133          	and	sp,a3,t0

00000500 <fence>:
 500:	0110000f          	fence	w,w
 504:	0ff0000f          	fence
 508:	0880000f          	fence	i,i
 50c:	0770000f          	fence	orw,orw
 510:	0110000f          	fence	w,w
 514:	0450000f          	fence	o,ow
 518:	0590000f          	fence	ow,iw
 51c:	02c0000f          	fence	r,io

00000520 <fence_i>:
 520:	0000100f          	fence\.i

00000524 <ecall>:
 524:	00000073          	ecall

00000528 <ebreak>:
 528:	00100073          	ebreak

0000052c <csrrw>:
 52c:	00101073          	fsflags	zero
 530:	001797f3          	fsflags	a5,a5
 534:	001595f3          	fsflags	a1,a1
 538:	001797f3          	fsflags	a5,a5
 53c:	001090f3          	fsflags	ra,ra
 540:	00171773          	fsflags	a4,a4
 544:	00159173          	fsflags	sp,a1
 548:	00119773          	fsflags	a4,gp

0000054c <csrrs>:
 54c:	00102073          	frflags	zero
 550:	0017a7f3          	csrrs	a5,fflags,a5
 554:	0015a5f3          	csrrs	a1,fflags,a1
 558:	0017a7f3          	csrrs	a5,fflags,a5
 55c:	0010a0f3          	csrrs	ra,fflags,ra
 560:	0014a373          	csrrs	t1,fflags,s1
 564:	001722f3          	csrrs	t0,fflags,a4
 568:	0012a6f3          	csrrs	a3,fflags,t0

0000056c <csrrc>:
 56c:	00103073          	csrc	fflags,zero
 570:	0017b7f3          	csrrc	a5,fflags,a5
 574:	0015b5f3          	csrrc	a1,fflags,a1
 578:	0017b7f3          	csrrc	a5,fflags,a5
 57c:	0010b0f3          	csrrc	ra,fflags,ra
 580:	0017b2f3          	csrrc	t0,fflags,a5
 584:	001335f3          	csrrc	a1,fflags,t1
 588:	0016b473          	csrrc	s0,fflags,a3

0000058c <csrrwi>:
 58c:	00105073          	fsflagsi	zero,0
 590:	001fd7f3          	fsflagsi	a5,31
 594:	001855f3          	fsflagsi	a1,16
 598:	0017d7f3          	fsflagsi	a5,15
 59c:	0010d0f3          	fsflagsi	ra,1
 5a0:	0016d073          	fsflagsi	zero,13
 5a4:	001ed5f3          	fsflagsi	a1,29
 5a8:	001ed2f3          	fsflagsi	t0,29

000005ac <csrrsi>:
 5ac:	00106073          	csrsi	fflags,0
 5b0:	001fe7f3          	csrrsi	a5,fflags,31
 5b4:	001865f3          	csrrsi	a1,fflags,16
 5b8:	0017e7f3          	csrrsi	a5,fflags,15
 5bc:	0010e0f3          	csrrsi	ra,fflags,1
 5c0:	001a6573          	csrrsi	a0,fflags,20
 5c4:	001ae5f3          	csrrsi	a1,fflags,21
 5c8:	001ee6f3          	csrrsi	a3,fflags,29

000005cc <csrrci>:
 5cc:	00107073          	csrci	fflags,0
 5d0:	001ff7f3          	csrrci	a5,fflags,31
 5d4:	001875f3          	csrrci	a1,fflags,16
 5d8:	0017f7f3          	csrrci	a5,fflags,15
 5dc:	0010f0f3          	csrrci	ra,fflags,1
 5e0:	0014f7f3          	csrrci	a5,fflags,9
 5e4:	001e75f3          	csrrci	a1,fflags,28
 5e8:	00187373          	csrrci	t1,fflags,16

000005ec <uret>:
 5ec:	00200073          	uret

000005f0 <sret>:
 5f0:	10200073          	sret

000005f4 <hret>:
 5f4:	20200073          	hret

000005f8 <mret>:
 5f8:	30200073          	mret

000005fc <dret>:
 5fc:	7b200073          	dret

00000600 <wfi>:
 600:	10500073          	wfi

00000604 <sfence_vm>:
 604:	10400073          	sfence\.vm
 608:	10418073          	sfence\.vm	gp
 60c:	10428073          	sfence\.vm	t0
 610:	10468073          	sfence\.vm	a3
 614:	10438073          	sfence\.vm	t2
 618:	10478073          	sfence\.vm	a5

0000061c <sfence_vma>:
 61c:	12000073          	sfence\.vma
 620:	12e00073          	sfence\.vma	zero,a4
 624:	12f48073          	sfence\.vma	s1,a5
 628:	12138073          	sfence\.vma	t2,ra
 62c:	12c58073          	sfence\.vma	a1,a2
 630:	12678073          	sfence\.vma	a5,t1

00000634 <csr_abs>:
 634:	7c119773          	csrrw	a4,0x7c1,gp
 638:	7c12a6f3          	csrrs	a3,0x7c1,t0
 63c:	7c16b473          	csrrc	s0,0x7c1,a3
 640:	7c1ed2f3          	csrrwi	t0,0x7c1,29
 644:	7c1ee6f3          	csrrsi	a3,0x7c1,29
 648:	7c187373          	csrrci	t1,0x7c1,16
