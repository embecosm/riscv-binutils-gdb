#as: -march=rv64i
#objdump: -dr
#name: i-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <lui>:
   0:	00000037          	lui	zero,0x0
   4:	ffffffb7          	lui	t6,0xfffff
   8:	80000837          	lui	a6,0x80000
   c:	7ffff7b7          	lui	a5,0x7ffff
  10:	000010b7          	lui	ra,0x1
  14:	e6b955b7          	lui	a1,0xe6b95
  18:	f9fa8437          	lui	s0,0xf9fa8
  1c:	9e9705b7          	lui	a1,0x9e970

0000000000000020 <auipc>:
  20:	00000017          	auipc	zero,0x0
  24:	ffffff97          	auipc	t6,0xfffff
  28:	80000817          	auipc	a6,0x80000
  2c:	7ffff797          	auipc	a5,0x7ffff
  30:	00001097          	auipc	ra,0x1
  34:	f2e82797          	auipc	a5,0xf2e82
  38:	2e37de17          	auipc	t3,0x2e37d
  3c:	d2a0fa17          	auipc	s4,0xd2a0f

0000000000000040 <jal>:
  40:	0000006f          	j	40 <jal>
			40: R_RISCV_JAL	\*ABS\*
  44:	00000fef          	jal	t6,44 <jal\+0x4>
			44: R_RISCV_JAL	\*ABS\*-0x1
  48:	0000086f          	jal	a6,48 <jal\+0x8>
			48: R_RISCV_JAL	\*ABS\*-0x80000
  4c:	000007ef          	jal	a5,4c <jal\+0xc>
			4c: R_RISCV_JAL	\*ABS\*\+0x7ffff
  50:	000000ef          	jal	ra,50 <jal\+0x10>
			50: R_RISCV_JAL	\*ABS\*\+0x1
  54:	00000e6f          	jal	t3,54 <jal\+0x14>
			54: R_RISCV_JAL	\*ABS\*-0x5d599
  58:	000001ef          	jal	gp,58 <jal\+0x18>
			58: R_RISCV_JAL	\*ABS\*\+0x18349
  5c:	00000d6f          	jal	s10,5c <jal\+0x1c>
			5c: R_RISCV_JAL	\*ABS\*\+0x20cf2

0000000000000060 <jalr>:
  60:	00000067          	jr	zero # 0 <lui>
  64:	ffff8fe7          	jalr	t6,-1\(t6\) # fffffffffffff023 <csr_abs\+0xffffffffffffe7af>
  68:	80080867          	jalr	a6,-2048\(a6\) # ffffffff7ffff828 <csr_abs\+0xffffffff7fffefb4>
  6c:	7ff787e7          	jalr	a5,2047\(a5\) # fffffffff2e82833 <csr_abs\+0xfffffffff2e81fbf>
  70:	001080e7          	jalr	1\(ra\) # 1031 <csr_abs\+0x7bd>
  74:	b4828767          	jalr	a4,-1208\(t0\)
  78:	079d8867          	jalr	a6,121\(s11\)
  7c:	5dc708e7          	jalr	a7,1500\(a4\)

0000000000000080 <beq>:
  80:	00001463          	bnez	zero,88 <beq\+0x8>
  84:	0000006f          	j	84 <beq\+0x4>
			84: R_RISCV_JAL	\*ABS\*
  88:	01ff9463          	bne	t6,t6,90 <beq\+0x10>
  8c:	0000006f          	j	8c <beq\+0xc>
			8c: R_RISCV_JAL	\*ABS\*-0x1
  90:	01081463          	bne	a6,a6,98 <beq\+0x18>
  94:	0000006f          	j	94 <beq\+0x14>
			94: R_RISCV_JAL	\*ABS\*-0x800
  98:	00f79463          	bne	a5,a5,a0 <beq\+0x20>
  9c:	0000006f          	j	9c <beq\+0x1c>
			9c: R_RISCV_JAL	\*ABS\*\+0x7ff
  a0:	00109463          	bne	ra,ra,a8 <beq\+0x28>
  a4:	0000006f          	j	a4 <beq\+0x24>
			a4: R_RISCV_JAL	\*ABS\*\+0x1
  a8:	01ae9463          	bne	t4,s10,b0 <beq\+0x30>
  ac:	0000006f          	j	ac <beq\+0x2c>
			ac: R_RISCV_JAL	\*ABS\*-0x496
  b0:	00f71463          	bne	a4,a5,b8 <beq\+0x38>
  b4:	0000006f          	j	b4 <beq\+0x34>
			b4: R_RISCV_JAL	\*ABS\*\+0x1d0
  b8:	013a1463          	bne	s4,s3,c0 <bne>
  bc:	0000006f          	j	bc <beq\+0x3c>
			bc: R_RISCV_JAL	\*ABS\*-0x710

00000000000000c0 <bne>:
  c0:	00000463          	beqz	zero,c8 <bne\+0x8>
  c4:	0000006f          	j	c4 <bne\+0x4>
			c4: R_RISCV_JAL	\*ABS\*
  c8:	01ff8463          	beq	t6,t6,d0 <bne\+0x10>
  cc:	0000006f          	j	cc <bne\+0xc>
			cc: R_RISCV_JAL	\*ABS\*-0x1
  d0:	01080463          	beq	a6,a6,d8 <bne\+0x18>
  d4:	0000006f          	j	d4 <bne\+0x14>
			d4: R_RISCV_JAL	\*ABS\*-0x800
  d8:	00f78463          	beq	a5,a5,e0 <bne\+0x20>
  dc:	0000006f          	j	dc <bne\+0x1c>
			dc: R_RISCV_JAL	\*ABS\*\+0x7ff
  e0:	00108463          	beq	ra,ra,e8 <bne\+0x28>
  e4:	0000006f          	j	e4 <bne\+0x24>
			e4: R_RISCV_JAL	\*ABS\*\+0x1
  e8:	01b20463          	beq	tp,s11,f0 <bne\+0x30>
  ec:	0000006f          	j	ec <bne\+0x2c>
			ec: R_RISCV_JAL	\*ABS\*\+0x79c
  f0:	01e90463          	beq	s2,t5,f8 <bne\+0x38>
  f4:	0000006f          	j	f4 <bne\+0x34>
			f4: R_RISCV_JAL	\*ABS\*\+0x540
  f8:	00520463          	beq	tp,t0,100 <blt>
  fc:	0000006f          	j	fc <bne\+0x3c>
			fc: R_RISCV_JAL	\*ABS\*-0x5

0000000000000100 <blt>:
 100:	00005463          	blez	zero,108 <blt\+0x8>
 104:	0000006f          	j	104 <blt\+0x4>
			104: R_RISCV_JAL	\*ABS\*
 108:	01ffd463          	ble	t6,t6,110 <blt\+0x10>
 10c:	0000006f          	j	10c <blt\+0xc>
			10c: R_RISCV_JAL	\*ABS\*-0x1
 110:	01085463          	ble	a6,a6,118 <blt\+0x18>
 114:	0000006f          	j	114 <blt\+0x14>
			114: R_RISCV_JAL	\*ABS\*-0x800
 118:	00f7d463          	ble	a5,a5,120 <blt\+0x20>
 11c:	0000006f          	j	11c <blt\+0x1c>
			11c: R_RISCV_JAL	\*ABS\*\+0x7ff
 120:	0010d463          	ble	ra,ra,128 <blt\+0x28>
 124:	0000006f          	j	124 <blt\+0x24>
			124: R_RISCV_JAL	\*ABS\*\+0x1
 128:	01975463          	ble	s9,a4,130 <blt\+0x30>
 12c:	0000006f          	j	12c <blt\+0x2c>
			12c: R_RISCV_JAL	\*ABS\*\+0x7f7
 130:	01185463          	ble	a7,a6,138 <blt\+0x38>
 134:	0000006f          	j	134 <blt\+0x34>
			134: R_RISCV_JAL	\*ABS\*-0x2dc
 138:	01ac5463          	ble	s10,s8,140 <bge>
 13c:	0000006f          	j	13c <blt\+0x3c>
			13c: R_RISCV_JAL	\*ABS\*-0x2d8

0000000000000140 <bge>:
 140:	00004463          	bltz	zero,148 <bge\+0x8>
 144:	0000006f          	j	144 <bge\+0x4>
			144: R_RISCV_JAL	\*ABS\*
 148:	01ffc463          	blt	t6,t6,150 <bge\+0x10>
 14c:	0000006f          	j	14c <bge\+0xc>
			14c: R_RISCV_JAL	\*ABS\*-0x1
 150:	01084463          	blt	a6,a6,158 <bge\+0x18>
 154:	0000006f          	j	154 <bge\+0x14>
			154: R_RISCV_JAL	\*ABS\*-0x800
 158:	00f7c463          	blt	a5,a5,160 <bge\+0x20>
 15c:	0000006f          	j	15c <bge\+0x1c>
			15c: R_RISCV_JAL	\*ABS\*\+0x7ff
 160:	0010c463          	blt	ra,ra,168 <bge\+0x28>
 164:	0000006f          	j	164 <bge\+0x24>
			164: R_RISCV_JAL	\*ABS\*\+0x1
 168:	017e4463          	blt	t3,s7,170 <bge\+0x30>
 16c:	0000006f          	j	16c <bge\+0x2c>
			16c: R_RISCV_JAL	\*ABS\*-0x176
 170:	01384463          	blt	a6,s3,178 <bge\+0x38>
 174:	0000006f          	j	174 <bge\+0x34>
			174: R_RISCV_JAL	\*ABS\*-0x274
 178:	010e4463          	blt	t3,a6,180 <bltu>
 17c:	0000006f          	j	17c <bge\+0x3c>
			17c: R_RISCV_JAL	\*ABS\*-0x436

0000000000000180 <bltu>:
 180:	00007463          	bleu	zero,zero,188 <bltu\+0x8>
 184:	0000006f          	j	184 <bltu\+0x4>
			184: R_RISCV_JAL	\*ABS\*
 188:	01fff463          	bleu	t6,t6,190 <bltu\+0x10>
 18c:	0000006f          	j	18c <bltu\+0xc>
			18c: R_RISCV_JAL	\*ABS\*-0x1
 190:	01087463          	bleu	a6,a6,198 <bltu\+0x18>
 194:	0000006f          	j	194 <bltu\+0x14>
			194: R_RISCV_JAL	\*ABS\*-0x800
 198:	00f7f463          	bleu	a5,a5,1a0 <bltu\+0x20>
 19c:	0000006f          	j	19c <bltu\+0x1c>
			19c: R_RISCV_JAL	\*ABS\*\+0x7ff
 1a0:	0010f463          	bleu	ra,ra,1a8 <bltu\+0x28>
 1a4:	0000006f          	j	1a4 <bltu\+0x24>
			1a4: R_RISCV_JAL	\*ABS\*\+0x1
 1a8:	0149f463          	bleu	s4,s3,1b0 <bltu\+0x30>
 1ac:	0000006f          	j	1ac <bltu\+0x2c>
			1ac: R_RISCV_JAL	\*ABS\*\+0x118
 1b0:	002d7463          	bleu	sp,s10,1b8 <bltu\+0x38>
 1b4:	0000006f          	j	1b4 <bltu\+0x34>
			1b4: R_RISCV_JAL	\*ABS\*-0x83
 1b8:	01aef463          	bleu	s10,t4,1c0 <bgeu>
 1bc:	0000006f          	j	1bc <bltu\+0x3c>
			1bc: R_RISCV_JAL	\*ABS\*-0xda

00000000000001c0 <bgeu>:
 1c0:	00006463          	bltu	zero,zero,1c8 <bgeu\+0x8>
 1c4:	0000006f          	j	1c4 <bgeu\+0x4>
			1c4: R_RISCV_JAL	\*ABS\*
 1c8:	01ffe463          	bltu	t6,t6,1d0 <bgeu\+0x10>
 1cc:	0000006f          	j	1cc <bgeu\+0xc>
			1cc: R_RISCV_JAL	\*ABS\*-0x1
 1d0:	01086463          	bltu	a6,a6,1d8 <bgeu\+0x18>
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
 1f0:	007ce463          	bltu	s9,t2,1f8 <bgeu\+0x38>
 1f4:	0000006f          	j	1f4 <bgeu\+0x34>
			1f4: R_RISCV_JAL	\*ABS\*-0x29
 1f8:	00736463          	bltu	t1,t2,200 <lb>
 1fc:	0000006f          	j	1fc <bgeu\+0x3c>
			1fc: R_RISCV_JAL	\*ABS\*\+0x7b8

0000000000000200 <lb>:
 200:	00000003          	lb	zero,0\(zero\) # 0 <lui>
 204:	fff40f83          	lb	t6,-1\(s0\) # fffffffff9fa7fff <csr_abs\+0xfffffffff9fa778b>
 208:	80000303          	lb	t1,-2048\(zero\) # fffffffffffff800 <csr_abs\+0xffffffffffffef8c>
 20c:	7ff80703          	lb	a4,2047\(a6\)
 210:	001d0003          	lb	zero,1\(s10\)
 214:	fa5b0183          	lb	gp,-91\(s6\)
 218:	8ab38c83          	lb	s9,-1877\(t2\)
 21c:	eeba8f83          	lb	t6,-277\(s5\)

0000000000000220 <lh>:
 220:	00001003          	lh	zero,0\(zero\) # 0 <lui>
 224:	ffff9f83          	lh	t6,-1\(t6\)
 228:	80081803          	lh	a6,-2048\(a6\)
 22c:	7ff79783          	lh	a5,2047\(a5\)
 230:	00109083          	lh	ra,1\(ra\)
 234:	fcea9883          	lh	a7,-50\(s5\)
 238:	bb491003          	lh	zero,-1100\(s2\)
 23c:	cf809083          	lh	ra,-776\(ra\)

0000000000000240 <lw>:
 240:	00002003          	lw	zero,0\(zero\) # 0 <lui>
 244:	ffffaf83          	lw	t6,-1\(t6\)
 248:	80082803          	lw	a6,-2048\(a6\)
 24c:	7ff7a783          	lw	a5,2047\(a5\)
 250:	0010a083          	lw	ra,1\(ra\)
 254:	690fa703          	lw	a4,1680\(t6\)
 258:	6ba02403          	lw	s0,1722\(zero\) # 6ba <slli_shift6\+0xe>
 25c:	ad89ab83          	lw	s7,-1320\(s3\)

0000000000000260 <lbu>:
 260:	00004003          	lbu	zero,0\(zero\) # 0 <lui>
 264:	ffffcf83          	lbu	t6,-1\(t6\)
 268:	80084803          	lbu	a6,-2048\(a6\)
 26c:	7ff7c783          	lbu	a5,2047\(a5\)
 270:	0010c083          	lbu	ra,1\(ra\)
 274:	f2a4c783          	lbu	a5,-214\(s1\)
 278:	4550c183          	lbu	gp,1109\(ra\)
 27c:	a61d4603          	lbu	a2,-1439\(s10\)

0000000000000280 <lhu>:
 280:	00005003          	lhu	zero,0\(zero\) # 0 <lui>
 284:	ffffdf83          	lhu	t6,-1\(t6\)
 288:	80085803          	lhu	a6,-2048\(a6\)
 28c:	7ff7d783          	lhu	a5,2047\(a5\)
 290:	0010d083          	lhu	ra,1\(ra\)
 294:	86a85b03          	lhu	s6,-1942\(a6\)
 298:	4424d303          	lhu	t1,1090\(s1\)
 29c:	4272d403          	lhu	s0,1063\(t0\)

00000000000002a0 <sb>:
 2a0:	00000023          	sb	zero,0\(zero\) # 0 <lui>
 2a4:	ffff8fa3          	sb	t6,-1\(t6\)
 2a8:	81080023          	sb	a6,-2048\(a6\)
 2ac:	7ef78fa3          	sb	a5,2047\(a5\)
 2b0:	001080a3          	sb	ra,1\(ra\)
 2b4:	178206a3          	sb	s8,365\(tp\) # 16d <bge\+0x2d>
 2b8:	7aa38da3          	sb	a0,1979\(t2\)
 2bc:	27d30723          	sb	t4,622\(t1\)

00000000000002c0 <sh>:
 2c0:	00001023          	sh	zero,0\(zero\) # 0 <lui>
 2c4:	ffff9fa3          	sh	t6,-1\(t6\)
 2c8:	81081023          	sh	a6,-2048\(a6\)
 2cc:	7ef79fa3          	sh	a5,2047\(a5\)
 2d0:	001090a3          	sh	ra,1\(ra\)
 2d4:	eb4e9a23          	sh	s4,-332\(t4\)
 2d8:	10fa92a3          	sh	a5,261\(s5\)
 2dc:	59fe1aa3          	sh	t6,1429\(t3\) # 2e37d5cd <csr_abs\+0x2e37cd59>

00000000000002e0 <sw>:
 2e0:	00002023          	sw	zero,0\(zero\) # 0 <lui>
 2e4:	ffffafa3          	sw	t6,-1\(t6\)
 2e8:	81082023          	sw	a6,-2048\(a6\)
 2ec:	7ef7afa3          	sw	a5,2047\(a5\)
 2f0:	0010a0a3          	sw	ra,1\(ra\)
 2f4:	f0052823          	sw	zero,-240\(a0\)
 2f8:	7ef22f23          	sw	a5,2046\(tp\) # 7fe <srlw\+0x12>
 2fc:	55152623          	sw	a7,1356\(a0\)

0000000000000300 <addi>:
 300:	00000013          	nop
 304:	ffff8f93          	addi	t6,t6,-1
 308:	80080813          	addi	a6,a6,-2048
 30c:	7ff78793          	addi	a5,a5,2047
 310:	00108093          	addi	ra,ra,1
 314:	dd280213          	addi	tp,a6,-558
 318:	f9e70913          	addi	s2,a4,-98
 31c:	29b00513          	li	a0,667

0000000000000320 <slti>:
 320:	00002013          	slti	zero,zero,0
 324:	ffffaf93          	slti	t6,t6,-1
 328:	80082813          	slti	a6,a6,-2048
 32c:	7ff7a793          	slti	a5,a5,2047
 330:	0010a093          	slti	ra,ra,1
 334:	2a1e2c93          	slti	s9,t3,673
 338:	ea04a913          	slti	s2,s1,-352
 33c:	faccaa93          	slti	s5,s9,-84

0000000000000340 <sltiu>:
 340:	00003013          	sltiu	zero,zero,0
 344:	ffffbf93          	sltiu	t6,t6,-1
 348:	80083813          	sltiu	a6,a6,-2048
 34c:	7ff7b793          	sltiu	a5,a5,2047
 350:	0010b093          	seqz	ra,ra
 354:	b4f8bf93          	sltiu	t6,a7,-1201
 358:	2b573793          	sltiu	a5,a4,693
 35c:	5a143813          	sltiu	a6,s0,1441

0000000000000360 <xori>:
 360:	00004013          	xori	zero,zero,0
 364:	ffffcf93          	not	t6,t6
 368:	80084813          	xori	a6,a6,-2048
 36c:	7ff7c793          	xori	a5,a5,2047
 370:	0010c093          	xori	ra,ra,1
 374:	5f3dc393          	xori	t2,s11,1523
 378:	2df84f13          	xori	t5,a6,735
 37c:	7dcc4713          	xori	a4,s8,2012

0000000000000380 <ori>:
 380:	00006013          	ori	zero,zero,0
 384:	ffffef93          	ori	t6,t6,-1
 388:	80086813          	ori	a6,a6,-2048
 38c:	7ff7e793          	ori	a5,a5,2047
 390:	0010e093          	ori	ra,ra,1
 394:	8ce06993          	ori	s3,zero,-1842
 398:	ba906693          	ori	a3,zero,-1111
 39c:	7a96ec93          	ori	s9,a3,1961

00000000000003a0 <andi>:
 3a0:	00007013          	andi	zero,zero,0
 3a4:	ffffff93          	andi	t6,t6,-1
 3a8:	80087813          	andi	a6,a6,-2048
 3ac:	7ff7f793          	andi	a5,a5,2047
 3b0:	0010f093          	andi	ra,ra,1
 3b4:	fff1f693          	andi	a3,gp,-1
 3b8:	79597113          	andi	sp,s2,1941
 3bc:	1d937f13          	andi	t5,t1,473

00000000000003c0 <slli_shift5>:
 3c0:	00001013          	slli	zero,zero,0x0
 3c4:	01ff9f93          	slli	t6,t6,0x1f
 3c8:	01081813          	slli	a6,a6,0x10
 3cc:	00f79793          	slli	a5,a5,0xf
 3d0:	00109093          	slli	ra,ra,0x1
 3d4:	01b91e93          	slli	t4,s2,0x1b
 3d8:	003e9d93          	slli	s11,t4,0x3
 3dc:	00a01d13          	slli	s10,zero,0xa

00000000000003e0 <srli_shift5>:
 3e0:	00005013          	srli	zero,zero,0x0
 3e4:	01ffdf93          	srli	t6,t6,0x1f
 3e8:	01085813          	srli	a6,a6,0x10
 3ec:	00f7d793          	srli	a5,a5,0xf
 3f0:	0010d093          	srli	ra,ra,0x1
 3f4:	0187db93          	srli	s7,a5,0x18
 3f8:	0137d813          	srli	a6,a5,0x13
 3fc:	01d75593          	srli	a1,a4,0x1d

0000000000000400 <srai_shift5>:
 400:	40005013          	srai	zero,zero,0x0
 404:	41ffdf93          	srai	t6,t6,0x1f
 408:	41085813          	srai	a6,a6,0x10
 40c:	40f7d793          	srai	a5,a5,0xf
 410:	4010d093          	srai	ra,ra,0x1
 414:	40435913          	srai	s2,t1,0x4
 418:	41185113          	srai	sp,a6,0x11
 41c:	4112d613          	srai	a2,t0,0x11

0000000000000420 <add>:
 420:	00000033          	add	zero,zero,zero
 424:	01ff8fb3          	add	t6,t6,t6
 428:	01080833          	add	a6,a6,a6
 42c:	00f787b3          	add	a5,a5,a5
 430:	001080b3          	add	ra,ra,ra
 434:	015f8833          	add	a6,t6,s5
 438:	006a86b3          	add	a3,s5,t1
 43c:	01d58033          	add	zero,a1,t4

0000000000000440 <sub>:
 440:	40000033          	neg	zero,zero
 444:	41ff8fb3          	sub	t6,t6,t6
 448:	41080833          	sub	a6,a6,a6
 44c:	40f787b3          	sub	a5,a5,a5
 450:	401080b3          	sub	ra,ra,ra
 454:	41250eb3          	sub	t4,a0,s2
 458:	417b0933          	sub	s2,s6,s7
 45c:	417203b3          	sub	t2,tp,s7

0000000000000460 <sll>:
 460:	00001033          	sll	zero,zero,zero
 464:	01ff9fb3          	sll	t6,t6,t6
 468:	01081833          	sll	a6,a6,a6
 46c:	00f797b3          	sll	a5,a5,a5
 470:	001090b3          	sll	ra,ra,ra
 474:	00fc1533          	sll	a0,s8,a5
 478:	012215b3          	sll	a1,tp,s2
 47c:	00071d33          	sll	s10,a4,zero

0000000000000480 <slt>:
 480:	00002033          	sltz	zero,zero
 484:	01ffafb3          	slt	t6,t6,t6
 488:	01082833          	slt	a6,a6,a6
 48c:	00f7a7b3          	slt	a5,a5,a5
 490:	0010a0b3          	slt	ra,ra,ra
 494:	0133af33          	slt	t5,t2,s3
 498:	01a129b3          	slt	s3,sp,s10
 49c:	011cafb3          	slt	t6,s9,a7

00000000000004a0 <sltu>:
 4a0:	00003033          	snez	zero,zero
 4a4:	01ffbfb3          	sltu	t6,t6,t6
 4a8:	01083833          	sltu	a6,a6,a6
 4ac:	00f7b7b3          	sltu	a5,a5,a5
 4b0:	0010b0b3          	sltu	ra,ra,ra
 4b4:	01d9b3b3          	sltu	t2,s3,t4
 4b8:	0118b1b3          	sltu	gp,a7,a7
 4bc:	01f13533          	sltu	a0,sp,t6

00000000000004c0 <xor>:
 4c0:	00004033          	xor	zero,zero,zero
 4c4:	01ffcfb3          	xor	t6,t6,t6
 4c8:	01084833          	xor	a6,a6,a6
 4cc:	00f7c7b3          	xor	a5,a5,a5
 4d0:	0010c0b3          	xor	ra,ra,ra
 4d4:	00524b33          	xor	s6,tp,t0
 4d8:	01aa4f33          	xor	t5,s4,s10
 4dc:	0088c2b3          	xor	t0,a7,s0

00000000000004e0 <srl>:
 4e0:	00005033          	srl	zero,zero,zero
 4e4:	01ffdfb3          	srl	t6,t6,t6
 4e8:	01085833          	srl	a6,a6,a6
 4ec:	00f7d7b3          	srl	a5,a5,a5
 4f0:	0010d0b3          	srl	ra,ra,ra
 4f4:	00435933          	srl	s2,t1,tp
 4f8:	01205eb3          	srl	t4,zero,s2
 4fc:	008c5d33          	srl	s10,s8,s0

0000000000000500 <sra>:
 500:	40005033          	sra	zero,zero,zero
 504:	41ffdfb3          	sra	t6,t6,t6
 508:	41085833          	sra	a6,a6,a6
 50c:	40f7d7b3          	sra	a5,a5,a5
 510:	4010d0b3          	sra	ra,ra,ra
 514:	41dad433          	sra	s0,s5,t4
 518:	4111ddb3          	sra	s11,gp,a7
 51c:	41a6dcb3          	sra	s9,a3,s10

0000000000000520 <or>:
 520:	00006033          	or	zero,zero,zero
 524:	01ffefb3          	or	t6,t6,t6
 528:	01086833          	or	a6,a6,a6
 52c:	00f7e7b3          	or	a5,a5,a5
 530:	0010e0b3          	or	ra,ra,ra
 534:	00b960b3          	or	ra,s2,a1
 538:	01196733          	or	a4,s2,a7
 53c:	00086733          	or	a4,a6,zero

0000000000000540 <and>:
 540:	00007033          	and	zero,zero,zero
 544:	01ffffb3          	and	t6,t6,t6
 548:	01087833          	and	a6,a6,a6
 54c:	00f7f7b3          	and	a5,a5,a5
 550:	0010f0b3          	and	ra,ra,ra
 554:	01f3fd33          	and	s10,t2,t6
 558:	01497133          	and	sp,s2,s4
 55c:	005e7133          	and	sp,t3,t0

0000000000000560 <fence>:
 560:	0110000f          	fence	w,w
 564:	0ff0000f          	fence
 568:	0880000f          	fence	i,i
 56c:	0770000f          	fence	orw,orw
 570:	0110000f          	fence	w,w
 574:	0450000f          	fence	o,ow
 578:	0590000f          	fence	ow,iw
 57c:	02c0000f          	fence	r,io

0000000000000580 <fence_i>:
 580:	0000100f          	fence\.i

0000000000000584 <ecall>:
 584:	00000073          	ecall

0000000000000588 <ebreak>:
 588:	00100073          	ebreak

000000000000058c <csrrw>:
 58c:	00101073          	fsflags	zero
 590:	001f9ff3          	fsflags	t6,t6
 594:	00181873          	fsflags	a6,a6
 598:	001797f3          	fsflags	a5,a5
 59c:	001090f3          	fsflags	ra,ra
 5a0:	00171ef3          	fsflags	t4,a4
 5a4:	00181173          	fsflags	sp,a6
 5a8:	00119773          	fsflags	a4,gp

00000000000005ac <csrrs>:
 5ac:	00102073          	frflags	zero
 5b0:	001faff3          	csrrs	t6,fflags,t6
 5b4:	00182873          	csrrs	a6,fflags,a6
 5b8:	0017a7f3          	csrrs	a5,fflags,a5
 5bc:	0010a0f3          	csrrs	ra,fflags,ra
 5c0:	001ba373          	csrrs	t1,fflags,s7
 5c4:	001f2973          	csrrs	s2,fflags,t5
 5c8:	0012adf3          	csrrs	s11,fflags,t0

00000000000005cc <csrrc>:
 5cc:	00103073          	csrc	fflags,zero
 5d0:	001fbff3          	csrrc	t6,fflags,t6
 5d4:	00183873          	csrrc	a6,fflags,a6
 5d8:	0017b7f3          	csrrc	a5,fflags,a5
 5dc:	0010b0f3          	csrrc	ra,fflags,ra
 5e0:	001fb2f3          	csrrc	t0,fflags,t6
 5e4:	001a3873          	csrrc	a6,fflags,s4
 5e8:	001dbb73          	csrrc	s6,fflags,s11

00000000000005ec <csrrwi>:
 5ec:	00105073          	fsflagsi	zero,0
 5f0:	001fdff3          	fsflagsi	t6,31
 5f4:	00185873          	fsflagsi	a6,16
 5f8:	0017d7f3          	fsflagsi	a5,15
 5fc:	0010d0f3          	fsflagsi	ra,1
 600:	0016d073          	fsflagsi	zero,13
 604:	001edcf3          	fsflagsi	s9,29
 608:	001ed973          	fsflagsi	s2,29

000000000000060c <csrrsi>:
 60c:	00106073          	csrsi	fflags,0
 610:	001feff3          	csrrsi	t6,fflags,31
 614:	00186873          	csrrsi	a6,fflags,16
 618:	0017e7f3          	csrrsi	a5,fflags,15
 61c:	0010e0f3          	csrrsi	ra,fflags,1
 620:	001a6c73          	csrrsi	s8,fflags,20
 624:	001ae873          	csrrsi	a6,fflags,21
 628:	001eedf3          	csrrsi	s11,fflags,29

000000000000062c <csrrci>:
 62c:	00107073          	csrci	fflags,0
 630:	001ffff3          	csrrci	t6,fflags,31
 634:	00187873          	csrrci	a6,fflags,16
 638:	0017f7f3          	csrrci	a5,fflags,15
 63c:	0010f0f3          	csrrci	ra,fflags,1
 640:	0014fff3          	csrrci	t6,fflags,9
 644:	001e75f3          	csrrci	a1,fflags,28
 648:	00187373          	csrrci	t1,fflags,16

000000000000064c <lwu>:
 64c:	00006003          	lwu	zero,0\(zero\) # 0 <lui>
 650:	ffffef83          	lwu	t6,-1\(t6\)
 654:	80086803          	lwu	a6,-2048\(a6\)
 658:	7ff7e783          	lwu	a5,2047\(a5\)
 65c:	0010e083          	lwu	ra,1\(ra\)
 660:	89faef03          	lwu	t5,-1889\(s5\)
 664:	3532e183          	lwu	gp,851\(t0\)
 668:	26276403          	lwu	s0,610\(a4\)

000000000000066c <ld>:
 66c:	00003003          	ld	zero,0\(zero\) # 0 <lui>
 670:	ffffbf83          	ld	t6,-1\(t6\)
 674:	80083803          	ld	a6,-2048\(a6\)
 678:	7ff7b783          	ld	a5,2047\(a5\)
 67c:	0010b083          	ld	ra,1\(ra\)
 680:	3a4b3b03          	ld	s6,932\(s6\)
 684:	0a5a3683          	ld	a3,165\(s4\) # ffffffffd2a0f0e1 <csr_abs\+0xffffffffd2a0e86d>
 688:	0a36b603          	ld	a2,163\(a3\)

000000000000068c <sd>:
 68c:	00003023          	sd	zero,0\(zero\) # 0 <lui>
 690:	ffffbfa3          	sd	t6,-1\(t6\)
 694:	81083023          	sd	a6,-2048\(a6\)
 698:	7ef7bfa3          	sd	a5,2047\(a5\)
 69c:	0010b0a3          	sd	ra,1\(ra\)
 6a0:	dfe7bda3          	sd	t5,-517\(a5\)
 6a4:	de61bf23          	sd	t1,-514\(gp\)
 6a8:	4132b9a3          	sd	s3,1043\(t0\)

00000000000006ac <slli_shift6>:
 6ac:	00001013          	slli	zero,zero,0x0
 6b0:	03ff9f93          	slli	t6,t6,0x3f
 6b4:	02081813          	slli	a6,a6,0x20
 6b8:	01f79793          	slli	a5,a5,0x1f
 6bc:	00109093          	slli	ra,ra,0x1
 6c0:	00129f93          	slli	t6,t0,0x1
 6c4:	02c91f13          	slli	t5,s2,0x2c
 6c8:	02589293          	slli	t0,a7,0x25

00000000000006cc <srli_shift6>:
 6cc:	00005013          	srli	zero,zero,0x0
 6d0:	03ffdf93          	srli	t6,t6,0x3f
 6d4:	02085813          	srli	a6,a6,0x20
 6d8:	01f7d793          	srli	a5,a5,0x1f
 6dc:	0010d093          	srli	ra,ra,0x1
 6e0:	01abd493          	srli	s1,s7,0x1a
 6e4:	0117dc93          	srli	s9,a5,0x11
 6e8:	023c5c93          	srli	s9,s8,0x23

00000000000006ec <srai_shift6>:
 6ec:	40005013          	srai	zero,zero,0x0
 6f0:	43ffdf93          	srai	t6,t6,0x3f
 6f4:	42085813          	srai	a6,a6,0x20
 6f8:	41f7d793          	srai	a5,a5,0x1f
 6fc:	4010d093          	srai	ra,ra,0x1
 700:	42ecdf13          	srai	t5,s9,0x2e
 704:	42265013          	srai	zero,a2,0x22
 708:	4122d693          	srai	a3,t0,0x12

000000000000070c <addiw>:
 70c:	0000001b          	sext\.w	zero,zero
 710:	ffff8f9b          	addiw	t6,t6,-1
 714:	8008081b          	addiw	a6,a6,-2048
 718:	7ff7879b          	addiw	a5,a5,2047
 71c:	0010809b          	addiw	ra,ra,1
 720:	4017891b          	addiw	s2,a5,1025
 724:	f1a3021b          	addiw	tp,t1,-230
 728:	1c9e889b          	addiw	a7,t4,457

000000000000072c <slliw_shift5>:
 72c:	0000101b          	slliw	zero,zero,0x0
 730:	01ff9f9b          	slliw	t6,t6,0x1f
 734:	0108181b          	slliw	a6,a6,0x10
 738:	00f7979b          	slliw	a5,a5,0xf
 73c:	0010909b          	slliw	ra,ra,0x1
 740:	01149c1b          	slliw	s8,s1,0x11
 744:	0090151b          	slliw	a0,zero,0x9
 748:	013b9c9b          	slliw	s9,s7,0x13

000000000000074c <srliw_shift5>:
 74c:	0000501b          	srliw	zero,zero,0x0
 750:	01ffdf9b          	srliw	t6,t6,0x1f
 754:	0108581b          	srliw	a6,a6,0x10
 758:	00f7d79b          	srliw	a5,a5,0xf
 75c:	0010d09b          	srliw	ra,ra,0x1
 760:	01a6db1b          	srliw	s6,a3,0x1a
 764:	012e5a9b          	srliw	s5,t3,0x12
 768:	00cb569b          	srliw	a3,s6,0xc

000000000000076c <sraiw_shift5>:
 76c:	4000501b          	sraiw	zero,zero,0x0
 770:	41ffdf9b          	sraiw	t6,t6,0x1f
 774:	4108581b          	sraiw	a6,a6,0x10
 778:	40f7d79b          	sraiw	a5,a5,0xf
 77c:	4010d09b          	sraiw	ra,ra,0x1
 780:	4057d49b          	sraiw	s1,a5,0x5
 784:	41c5569b          	sraiw	a3,a0,0x1c
 788:	401f509b          	sraiw	ra,t5,0x1

000000000000078c <addw>:
 78c:	0000003b          	addw	zero,zero,zero
 790:	01ff8fbb          	addw	t6,t6,t6
 794:	0108083b          	addw	a6,a6,a6
 798:	00f787bb          	addw	a5,a5,a5
 79c:	001080bb          	addw	ra,ra,ra
 7a0:	009e893b          	addw	s2,t4,s1
 7a4:	00ce0dbb          	addw	s11,t3,a2
 7a8:	01c2893b          	addw	s2,t0,t3

00000000000007ac <subw>:
 7ac:	4000003b          	negw	zero,zero
 7b0:	41ff8fbb          	subw	t6,t6,t6
 7b4:	4108083b          	subw	a6,a6,a6
 7b8:	40f787bb          	subw	a5,a5,a5
 7bc:	401080bb          	subw	ra,ra,ra
 7c0:	415306bb          	subw	a3,t1,s5
 7c4:	41248d3b          	subw	s10,s1,s2
 7c8:	40c50d3b          	subw	s10,a0,a2

00000000000007cc <sllw>:
 7cc:	0000103b          	sllw	zero,zero,zero
 7d0:	01ff9fbb          	sllw	t6,t6,t6
 7d4:	0108183b          	sllw	a6,a6,a6
 7d8:	00f797bb          	sllw	a5,a5,a5
 7dc:	001090bb          	sllw	ra,ra,ra
 7e0:	012314bb          	sllw	s1,t1,s2
 7e4:	01e01cbb          	sllw	s9,zero,t5
 7e8:	008d993b          	sllw	s2,s11,s0

00000000000007ec <srlw>:
 7ec:	0000503b          	srlw	zero,zero,zero
 7f0:	01ffdfbb          	srlw	t6,t6,t6
 7f4:	0108583b          	srlw	a6,a6,a6
 7f8:	00f7d7bb          	srlw	a5,a5,a5
 7fc:	0010d0bb          	srlw	ra,ra,ra
 800:	00bb533b          	srlw	t1,s6,a1
 804:	001a5a3b          	srlw	s4,s4,ra
 808:	010bd2bb          	srlw	t0,s7,a6

000000000000080c <sraw>:
 80c:	4000503b          	sraw	zero,zero,zero
 810:	41ffdfbb          	sraw	t6,t6,t6
 814:	4108583b          	sraw	a6,a6,a6
 818:	40f7d7bb          	sraw	a5,a5,a5
 81c:	4010d0bb          	sraw	ra,ra,ra
 820:	41b1d03b          	sraw	zero,gp,s11
 824:	41f6de3b          	sraw	t3,a3,t6
 828:	40315a3b          	sraw	s4,sp,gp

000000000000082c <uret>:
 82c:	00200073          	uret

0000000000000830 <sret>:
 830:	10200073          	sret

0000000000000834 <hret>:
 834:	20200073          	hret

0000000000000838 <mret>:
 838:	30200073          	mret

000000000000083c <dret>:
 83c:	7b200073          	dret

0000000000000840 <wfi>:
 840:	10500073          	wfi

0000000000000844 <sfence_vm>:
 844:	10400073          	sfence\.vm
 848:	10418073          	sfence\.vm	gp
 84c:	10428073          	sfence\.vm	t0
 850:	104d8073          	sfence\.vm	s11
 854:	10438073          	sfence\.vm	t2
 858:	104f8073          	sfence\.vm	t6

000000000000085c <sfence_vma>:
 85c:	12000073          	sfence\.vma
 860:	13e00073          	sfence\.vma	zero,t5
 864:	12fb8073          	sfence\.vma	s7,a5
 868:	12188073          	sfence\.vma	a7,ra
 86c:	13a80073          	sfence\.vma	a6,s10
 870:	126f8073          	sfence\.vma	t6,t1

0000000000000874 <csr_abs>:
 874:	7c119773          	csrrw	a4,0x7c1,gp
 878:	7c12adf3          	csrrs	s11,0x7c1,t0
 87c:	7c1dbb73          	csrrc	s6,0x7c1,s11
 880:	7c1ed973          	csrrwi	s2,0x7c1,29
 884:	7c1eedf3          	csrrsi	s11,0x7c1,29
 888:	7c187373          	csrrci	t1,0x7c1,16
