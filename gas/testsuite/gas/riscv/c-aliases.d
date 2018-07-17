#as: -march=rv64ic
#objdump: -dr
#name: c-aliases

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <nop>:
   0:	0001                	nop

0000000000000002 <ebreak>:
   2:	9002                	ebreak

0000000000000004 <sbreak>:
   4:	9002                	ebreak

0000000000000006 <ret>:
   6:	8082                	ret

0000000000000008 <jr>:
   8:	00000067          	jr	zero # 0 <nop>
   c:	8082                	ret
   e:	8102                	jr	sp
  10:	8282                	jr	t0

0000000000000012 <jalr>:
  12:	000000e7          	jalr	zero # 0 <nop>
  16:	9d82                	jalr	s11

0000000000000018 <j>:
  18:	0000006f          	j	18 <j>
			18: R_RISCV_JAL	\*ABS\*-0x801
  1c:	0000006f          	j	1c <j\+0x4>
			1c: R_RISCV_JAL	\*ABS\*-0x800
  20:	0000006f          	j	20 <j\+0x8>
			20: R_RISCV_JAL	\*ABS\*-0x7ff
  24:	0000006f          	j	24 <j\+0xc>
			24: R_RISCV_JAL	\*ABS\*-0x368
  28:	0000006f          	j	28 <j\+0x10>
			28: R_RISCV_JAL	\*ABS\*-0x6f
  2c:	0000006f          	j	2c <j\+0x14>
			2c: R_RISCV_JAL	\*ABS\*
  30:	0000006f          	j	30 <j\+0x18>
			30: R_RISCV_JAL	\*ABS\*\+0x4af
  34:	0000006f          	j	34 <j\+0x1c>
			34: R_RISCV_JAL	\*ABS\*\+0x7fe
  38:	0000006f          	j	38 <j\+0x20>
			38: R_RISCV_JAL	\*ABS\*\+0x7ff
  3c:	0000006f          	j	3c <j\+0x24>
			3c: R_RISCV_JAL	\*ABS\*\+0x800
  40:	fc1ff06f          	j	0 <nop>
			40: R_RISCV_JAL	banana
  44:	fbdff06f          	j	0 <nop>
			44: R_RISCV_JAL	cabbage

0000000000000048 <jal>:
  48:	000000ef          	jal	ra,48 <jal>
			48: R_RISCV_JAL	\*ABS\*-0x801
  4c:	000000ef          	jal	ra,4c <jal\+0x4>
			4c: R_RISCV_JAL	\*ABS\*-0x800
  50:	000000ef          	jal	ra,50 <jal\+0x8>
			50: R_RISCV_JAL	\*ABS\*-0x7ff
  54:	000000ef          	jal	ra,54 <jal\+0xc>
			54: R_RISCV_JAL	\*ABS\*-0x7cf
  58:	000000ef          	jal	ra,58 <jal\+0x10>
			58: R_RISCV_JAL	\*ABS\*-0x418
  5c:	000000ef          	jal	ra,5c <jal\+0x14>
			5c: R_RISCV_JAL	\*ABS\*
  60:	000000ef          	jal	ra,60 <jal\+0x18>
			60: R_RISCV_JAL	\*ABS\*\+0x16
  64:	000000ef          	jal	ra,64 <jal\+0x1c>
			64: R_RISCV_JAL	\*ABS\*\+0x7fe
  68:	000000ef          	jal	ra,68 <jal\+0x20>
			68: R_RISCV_JAL	\*ABS\*\+0x7ff
  6c:	000000ef          	jal	ra,6c <jal\+0x24>
			6c: R_RISCV_JAL	\*ABS\*\+0x800
  70:	f91ff0ef          	jal	ra,0 <nop>
			70: R_RISCV_JAL	aubergine
  74:	f8dff0ef          	jal	ra,0 <nop>
			74: R_RISCV_JAL	lemon

0000000000000078 <beqz>:
  78:	00001463          	bnez	zero,80 <beqz\+0x8>
  7c:	0000006f          	j	7c <beqz\+0x4>
			7c: R_RISCV_JAL	\*ABS\*\+0x1a
  80:	00021463          	bnez	tp,88 <beqz\+0x10>
  84:	0000006f          	j	84 <beqz\+0xc>
			84: R_RISCV_JAL	\*ABS\*-0x2a
  88:	00039463          	bnez	t2,90 <beqz\+0x18>
  8c:	0000006f          	j	8c <beqz\+0x14>
			8c: R_RISCV_JAL	\*ABS\*\+0x40
  90:	00041463          	bnez	s0,98 <beqz\+0x20>
  94:	0000006f          	j	94 <beqz\+0x1c>
			94: R_RISCV_JAL	\*ABS\*-0x58
  98:	00079463          	bnez	a5,a0 <beqz\+0x28>
  9c:	0000006f          	j	9c <beqz\+0x24>
			9c: R_RISCV_JAL	\*ABS\*\+0x80
  a0:	00081463          	bnez	a6,a8 <beqz\+0x30>
  a4:	0000006f          	j	a4 <beqz\+0x2c>
			a4: R_RISCV_JAL	\*ABS\*-0x2
  a8:	000b9463          	bnez	s7,b0 <beqz\+0x38>
  ac:	0000006f          	j	ac <beqz\+0x34>
			ac: R_RISCV_JAL	\*ABS\*
  b0:	00041463          	bnez	s0,b8 <beqz\+0x40>
  b4:	0000006f          	j	b4 <beqz\+0x3c>
			b4: R_RISCV_JAL	\*ABS\*-0x101
  b8:	00049463          	bnez	s1,c0 <beqz\+0x48>
  bc:	0000006f          	j	bc <beqz\+0x44>
			bc: R_RISCV_JAL	\*ABS\*-0x100
  c0:	00051463          	bnez	a0,c8 <beqz\+0x50>
  c4:	0000006f          	j	c4 <beqz\+0x4c>
			c4: R_RISCV_JAL	\*ABS\*-0x2e
  c8:	00059463          	bnez	a1,d0 <beqz\+0x58>
  cc:	0000006f          	j	cc <beqz\+0x54>
			cc: R_RISCV_JAL	\*ABS\*
  d0:	00061463          	bnez	a2,d8 <beqz\+0x60>
  d4:	0000006f          	j	d4 <beqz\+0x5c>
			d4: R_RISCV_JAL	\*ABS\*\+0x63
  d8:	00061463          	bnez	a2,e0 <beqz\+0x68>
  dc:	0000006f          	j	dc <beqz\+0x64>
			dc: R_RISCV_JAL	\*ABS\*\+0x7a
  e0:	00069463          	bnez	a3,e8 <beqz\+0x70>
  e4:	0000006f          	j	e4 <beqz\+0x6c>
			e4: R_RISCV_JAL	\*ABS\*\+0xfe
  e8:	00069463          	bnez	a3,f0 <beqz\+0x78>
  ec:	0000006f          	j	ec <beqz\+0x74>
			ec: R_RISCV_JAL	\*ABS\*\+0xff
  f0:	00071463          	bnez	a4,f8 <beqz\+0x80>
  f4:	0000006f          	j	f4 <beqz\+0x7c>
			f4: R_RISCV_JAL	\*ABS\*\+0x100
  f8:	00079463          	bnez	a5,100 <beqz\+0x88>
  fc:	0000006f          	j	fc <beqz\+0x84>
			fc: R_RISCV_JAL	\*ABS\*\+0x101
 100:	00021463          	bnez	tp,108 <beqz\+0x90>
 104:	0000006f          	j	104 <beqz\+0x8c>
			104: R_RISCV_JAL	\*ABS\*\+0xbb8
 108:	000f9463          	bnez	t6,110 <bnez>
 10c:	0000006f          	j	10c <beqz\+0x94>
			10c: R_RISCV_JAL	\*ABS\*-0x299

0000000000000110 <bnez>:
 110:	00000463          	beqz	zero,118 <bnez\+0x8>
 114:	0000006f          	j	114 <bnez\+0x4>
			114: R_RISCV_JAL	\*ABS\*
 118:	00010463          	beqz	sp,120 <bnez\+0x10>
 11c:	0000006f          	j	11c <bnez\+0xc>
			11c: R_RISCV_JAL	\*ABS\*\+0x2
 120:	00038463          	beqz	t2,128 <bnez\+0x18>
 124:	0000006f          	j	124 <bnez\+0x14>
			124: R_RISCV_JAL	\*ABS\*-0x4
 128:	00040463          	beqz	s0,130 <bnez\+0x20>
 12c:	0000006f          	j	12c <bnez\+0x1c>
			12c: R_RISCV_JAL	\*ABS\*-0x3c
 130:	00078463          	beqz	a5,138 <bnez\+0x28>
 134:	0000006f          	j	134 <bnez\+0x24>
			134: R_RISCV_JAL	\*ABS\*\+0x28
 138:	00080463          	beqz	a6,140 <bnez\+0x30>
 13c:	0000006f          	j	13c <bnez\+0x2c>
			13c: R_RISCV_JAL	\*ABS\*\+0x20
 140:	000f0463          	beqz	t5,148 <bnez\+0x38>
 144:	0000006f          	j	144 <bnez\+0x34>
			144: R_RISCV_JAL	\*ABS\*-0xe
 148:	00040463          	beqz	s0,150 <bnez\+0x40>
 14c:	0000006f          	j	14c <bnez\+0x3c>
			14c: R_RISCV_JAL	\*ABS\*-0x101
 150:	00048463          	beqz	s1,158 <bnez\+0x48>
 154:	0000006f          	j	154 <bnez\+0x44>
			154: R_RISCV_JAL	\*ABS\*-0x100
 158:	00050463          	beqz	a0,160 <bnez\+0x50>
 15c:	0000006f          	j	15c <bnez\+0x4c>
			15c: R_RISCV_JAL	\*ABS\*-0xe9
 160:	00058463          	beqz	a1,168 <bnez\+0x58>
 164:	0000006f          	j	164 <bnez\+0x54>
			164: R_RISCV_JAL	\*ABS\*
 168:	00058463          	beqz	a1,170 <bnez\+0x60>
 16c:	0000006f          	j	16c <bnez\+0x5c>
			16c: R_RISCV_JAL	\*ABS\*\+0xc0
 170:	00060463          	beqz	a2,178 <bnez\+0x68>
 174:	0000006f          	j	174 <bnez\+0x64>
			174: R_RISCV_JAL	\*ABS\*\+0xc7
 178:	00068463          	beqz	a3,180 <bnez\+0x70>
 17c:	0000006f          	j	17c <bnez\+0x6c>
			17c: R_RISCV_JAL	\*ABS\*\+0xfe
 180:	00068463          	beqz	a3,188 <bnez\+0x78>
 184:	0000006f          	j	184 <bnez\+0x74>
			184: R_RISCV_JAL	\*ABS\*\+0xff
 188:	00070463          	beqz	a4,190 <bnez\+0x80>
 18c:	0000006f          	j	18c <bnez\+0x7c>
			18c: R_RISCV_JAL	\*ABS\*\+0x100
 190:	00078463          	beqz	a5,198 <bnez\+0x88>
 194:	0000006f          	j	194 <bnez\+0x84>
			194: R_RISCV_JAL	\*ABS\*\+0x101
 198:	00038463          	beqz	t2,1a0 <bnez\+0x90>
 19c:	0000006f          	j	19c <bnez\+0x8c>
			19c: R_RISCV_JAL	\*ABS\*\+0xbb8
 1a0:	00080463          	beqz	a6,1a8 <lui>
 1a4:	0000006f          	j	1a4 <bnez\+0x94>
			1a4: R_RISCV_JAL	\*ABS\*-0x299

00000000000001a8 <lui>:
 1a8:	02000037          	lui	zero,0x2000
 1ac:	08000137          	lui	sp,0x8000
 1b0:	00000037          	lui	zero,0x0
 1b4:	000000b7          	lui	ra,0x0
 1b8:	00000fb7          	lui	t6,0x0
 1bc:	000008b7          	lui	a7,0x0
 1c0:	6b85                	lui	s7,0x1
 1c2:	02000f37          	lui	t5,0x2000
 1c6:	06e431b7          	lui	gp,0x6e43
 1ca:	1f0005b7          	lui	a1,0x1f000
 1ce:	200009b7          	lui	s3,0x20000
 1d2:	210005b7          	lui	a1,0x21000
 1d6:	00001037          	lui	zero,0x1

00000000000001da <li>:
 1da:	00f00013          	li	zero,15
 1de:	00000013          	nop
 1e2:	fdf00093          	li	ra,-33
 1e6:	5181                	li	gp,-32
 1e8:	57fd                	li	a5,-1
 1ea:	4481                	li	s1,0
 1ec:	4159                	li	sp,22
 1ee:	45fd                	li	a1,31
 1f0:	02000993          	li	s3,32
 1f4:	fc900013          	li	zero,-55
 1f8:	02000013          	li	zero,32

00000000000001fc <mv>:
 1fc:	00008013          	mv	zero,ra
 200:	00000293          	li	t0,0
 204:	85c2                	mv	a1,a6
 206:	8bfe                	mv	s7,t6
 208:	00000013          	nop

000000000000020c <move>:
 20c:	000b0013          	mv	zero,s6
 210:	00000493          	li	s1,0
 214:	86b2                	mv	a3,a2
 216:	00000013          	nop

000000000000021a <andi>:
 21a:	00c5f493          	andi	s1,a1,12
 21e:	fe047793          	andi	a5,s0,-32
 222:	00027213          	andi	tp,tp,0
 226:	0023f393          	andi	t2,t2,2
 22a:	8815                	andi	s0,s0,5
 22c:	9a7d                	andi	a2,a2,-1
 22e:	8b81                	andi	a5,a5,0
 230:	fe587813          	andi	a6,a6,-27
 234:	fb34f493          	andi	s1,s1,-77
 238:	fdf5f593          	andi	a1,a1,-33
 23c:	9a81                	andi	a3,a3,-32
 23e:	9a0d                	andi	a2,a2,-29
 240:	8bfd                	andi	a5,a5,31
 242:	02047413          	andi	s0,s0,32
 246:	06347413          	andi	s0,s0,99
 24a:	0374f013          	andi	zero,s1,55

000000000000024e <and>:
 24e:	00d5f4b3          	and	s1,a1,a3
 252:	00e6f633          	and	a2,a3,a4
 256:	8c61                	and	s0,s0,s0
 258:	8df9                	and	a1,a1,a4
 25a:	8f6d                	and	a4,a4,a1
 25c:	00e2f2b3          	and	t0,t0,a4
 260:	00f077b3          	and	a5,zero,a5
 264:	00b5fd33          	and	s10,a1,a1
 268:	00d0f6b3          	and	a3,ra,a3
 26c:	8fed                	and	a5,a5,a1
 26e:	8dfd                	and	a1,a1,a5
 270:	0020f033          	and	zero,ra,sp
 274:	01fb74b3          	and	s1,s6,t6
 278:	00c5f493          	andi	s1,a1,12
 27c:	fe047793          	andi	a5,s0,-32
 280:	0023f393          	andi	t2,t2,2
 284:	8815                	andi	s0,s0,5
 286:	9a7d                	andi	a2,a2,-1
 288:	8b81                	andi	a5,a5,0
 28a:	fe587813          	andi	a6,a6,-27
 28e:	fb34f493          	andi	s1,s1,-77
 292:	fdf5f593          	andi	a1,a1,-33
 296:	9a81                	andi	a3,a3,-32
 298:	9a0d                	andi	a2,a2,-29
 29a:	8bfd                	andi	a5,a5,31
 29c:	02047413          	andi	s0,s0,32
 2a0:	06347413          	andi	s0,s0,99
 2a4:	0374f013          	andi	zero,s1,55

00000000000002a8 <addi>:
 2a8:	00810013          	addi	zero,sp,8 # 8000008 <subw\+0x7fff876>
 2ac:	ffc10393          	addi	t2,sp,-4
 2b0:	ff810413          	addi	s0,sp,-8
 2b4:	11bc                	addi	a5,sp,232
 2b6:	e1010813          	addi	a6,sp,-496
 2ba:	00808493          	addi	s1,ra,8 # 8 <jr>
 2be:	eb478593          	addi	a1,a5,-332
 2c2:	fdf10793          	addi	a5,sp,-33
 2c6:	00010793          	mv	a5,sp
 2ca:	0050                	addi	a2,sp,4
 2cc:	1b910693          	addi	a3,sp,441
 2d0:	1fec                	addi	a1,sp,1020
 2d2:	40010513          	addi	a0,sp,1024
 2d6:	00348013          	addi	zero,s1,3
 2da:	db4f8113          	addi	sp,t6,-588 # fffffffffffffdb4 <subw\+0xfffffffffffff622>
 2de:	ff100013          	li	zero,-15
 2e2:	01700013          	li	zero,23
 2e6:	009d                	addi	ra,ra,7
 2e8:	1605                	addi	a2,a2,-31
 2ea:	ff420193          	addi	gp,tp,-12 # fffffffffffffff4 <subw\+0xfffffffffffff862>
 2ee:	00040493          	mv	s1,s0
 2f2:	0e85                	addi	t4,t4,1
 2f4:	f1c08093          	addi	ra,ra,-228
 2f8:	fdf18193          	addi	gp,gp,-33 # 6e42fdf <subw\+0x6e4284d>
 2fc:	1581                	addi	a1,a1,-32
 2fe:	1485                	addi	s1,s1,-31
 300:	1761                	addi	a4,a4,-8
 302:	1bfd                	addi	s7,s7,-1
 304:	00078793          	mv	a5,a5
 308:	04d9                	addi	s1,s1,22
 30a:	057d                	addi	a0,a0,31
 30c:	02098993          	addi	s3,s3,32 # 20000020 <subw\+0x1ffff88e>
 310:	03708013          	addi	zero,ra,55
 314:	f9d00493          	li	s1,-99
 318:	6169                	addi	sp,sp,208
 31a:	7131                	addi	sp,sp,-192
 31c:	04008113          	addi	sp,ra,64
 320:	03010013          	addi	zero,sp,48
 324:	0001                	nop
 326:	00010113          	mv	sp,sp
 32a:	0105                	addi	sp,sp,1
 32c:	10c1                	addi	ra,ra,-16
 32e:	df010113          	addi	sp,sp,-528
 332:	7101                	addi	sp,sp,-512
 334:	612d                	addi	sp,sp,224
 336:	06f10113          	addi	sp,sp,111
 33a:	715d                	addi	sp,sp,-80
 33c:	117d                	addi	sp,sp,-1
 33e:	617d                	addi	sp,sp,496
 340:	20010113          	addi	sp,sp,512
 344:	ff328013          	addi	zero,t0,-13
 348:	400b0493          	addi	s1,s6,1024

000000000000034c <add>:
 34c:	000080b3          	add	ra,ra,zero
 350:	005002b3          	add	t0,zero,t0
 354:	000f8033          	add	zero,t6,zero
 358:	00000033          	add	zero,zero,zero
 35c:	9096                	add	ra,ra,t0
 35e:	016b0133          	add	sp,s6,s6
 362:	9f0a                	add	t5,t5,sp
 364:	95b2                	add	a1,a1,a2
 366:	973a                	add	a4,a4,a4
 368:	003100b3          	add	ra,sp,gp
 36c:	001402b3          	add	t0,s0,ra
 370:	00208033          	add	zero,ra,sp
 374:	ff100013          	li	zero,-15
 378:	01700013          	li	zero,23
 37c:	009d                	addi	ra,ra,7
 37e:	1605                	addi	a2,a2,-31
 380:	ff420193          	addi	gp,tp,-12 # fffffffffffffff4 <subw\+0xfffffffffffff862>
 384:	00040493          	mv	s1,s0
 388:	0e85                	addi	t4,t4,1
 38a:	f1c08093          	addi	ra,ra,-228
 38e:	fdf18193          	addi	gp,gp,-33
 392:	1581                	addi	a1,a1,-32
 394:	1485                	addi	s1,s1,-31
 396:	1761                	addi	a4,a4,-8
 398:	1bfd                	addi	s7,s7,-1
 39a:	0b81                	addi	s7,s7,0
 39c:	04d9                	addi	s1,s1,22
 39e:	057d                	addi	a0,a0,31
 3a0:	02098993          	addi	s3,s3,32
 3a4:	03708013          	addi	zero,ra,55
 3a8:	f9d00493          	li	s1,-99
 3ac:	00810013          	addi	zero,sp,8
 3b0:	ffc10393          	addi	t2,sp,-4
 3b4:	0020                	addi	s0,sp,8
 3b6:	11bc                	addi	a5,sp,232
 3b8:	e1010813          	addi	a6,sp,-496
 3bc:	00808493          	addi	s1,ra,8
 3c0:	eb478593          	addi	a1,a5,-332
 3c4:	fa810693          	addi	a3,sp,-88
 3c8:	fdf10793          	addi	a5,sp,-33
 3cc:	00010793          	mv	a5,sp
 3d0:	0050                	addi	a2,sp,4
 3d2:	1b910693          	addi	a3,sp,441
 3d6:	1bec                	addi	a1,sp,508
 3d8:	0408                	addi	a0,sp,512
 3da:	00348013          	addi	zero,s1,3
 3de:	db4f8113          	addi	sp,t6,-588
 3e2:	6169                	addi	sp,sp,208
 3e4:	7131                	addi	sp,sp,-192
 3e6:	04008113          	addi	sp,ra,64
 3ea:	03010013          	addi	zero,sp,48
 3ee:	00000013          	nop
 3f2:	10c1                	addi	ra,ra,-16
 3f4:	df010113          	addi	sp,sp,-528
 3f8:	7101                	addi	sp,sp,-512
 3fa:	612d                	addi	sp,sp,224
 3fc:	06f10113          	addi	sp,sp,111
 400:	715d                	addi	sp,sp,-80
 402:	117d                	addi	sp,sp,-1
 404:	0101                	addi	sp,sp,0
 406:	617d                	addi	sp,sp,496
 408:	20010113          	addi	sp,sp,512
 40c:	ff328013          	addi	zero,t0,-13
 410:	400b0493          	addi	s1,s6,1024

0000000000000414 <slli>:
 414:	00101013          	slli	zero,zero,0x1
 418:	01601013          	slli	zero,zero,0x16
 41c:	0096                	slli	ra,ra,0x5
 41e:	08de                	slli	a7,a7,0x17
 420:	1db2                	slli	s11,s11,0x2c
 422:	1ffe                	slli	t6,t6,0x3f
 424:	01649413          	slli	s0,s1,0x16
 428:	001a1093          	slli	ra,s4,0x1
 42c:	01311993          	slli	s3,sp,0x13
 430:	00009093          	slli	ra,ra,0x0
 434:	04da                	slli	s1,s1,0x16
 436:	19fe                	slli	s3,s3,0x3f

0000000000000438 <sll>:
 438:	00101013          	slli	zero,zero,0x1
 43c:	01601013          	slli	zero,zero,0x16
 440:	0096                	slli	ra,ra,0x5
 442:	08de                	slli	a7,a7,0x17
 444:	1db2                	slli	s11,s11,0x2c
 446:	1ffe                	slli	t6,t6,0x3f
 448:	01649413          	slli	s0,s1,0x16
 44c:	001a1093          	slli	ra,s4,0x1
 450:	01311993          	slli	s3,sp,0x13
 454:	00009093          	slli	ra,ra,0x0
 458:	04da                	slli	s1,s1,0x16
 45a:	19fe                	slli	s3,s3,0x3f

000000000000045c <srli>:
 45c:	00c05013          	srli	zero,zero,0xc
 460:	0093d393          	srli	t2,t2,0x9
 464:	8039                	srli	s0,s0,0xe
 466:	93fd                	srli	a5,a5,0x3f
 468:	02085813          	srli	a6,a6,0x20
 46c:	001bdb93          	srli	s7,s7,0x1
 470:	0024d413          	srli	s0,s1,0x2
 474:	03c75593          	srli	a1,a4,0x3c
 478:	00c7d613          	srli	a2,a5,0xc
 47c:	00045413          	srli	s0,s0,0x0
 480:	8105                	srli	a0,a0,0x1
 482:	8339                	srli	a4,a4,0xe
 484:	93fd                	srli	a5,a5,0x3f

0000000000000486 <srl>:
 486:	00c05013          	srli	zero,zero,0xc
 48a:	0093d393          	srli	t2,t2,0x9
 48e:	8039                	srli	s0,s0,0xe
 490:	93fd                	srli	a5,a5,0x3f
 492:	02085813          	srli	a6,a6,0x20
 496:	001bdb93          	srli	s7,s7,0x1
 49a:	0024d413          	srli	s0,s1,0x2
 49e:	03c75593          	srli	a1,a4,0x3c
 4a2:	00c7d613          	srli	a2,a5,0xc
 4a6:	00045413          	srli	s0,s0,0x0
 4aa:	8105                	srli	a0,a0,0x1
 4ac:	8339                	srli	a4,a4,0xe
 4ae:	93fd                	srli	a5,a5,0x3f

00000000000004b0 <srai>:
 4b0:	40c05013          	srai	zero,zero,0xc
 4b4:	4093d393          	srai	t2,t2,0x9
 4b8:	8439                	srai	s0,s0,0xe
 4ba:	97fd                	srai	a5,a5,0x3f
 4bc:	42085813          	srai	a6,a6,0x20
 4c0:	401bdb93          	srai	s7,s7,0x1
 4c4:	4024d413          	srai	s0,s1,0x2
 4c8:	43c75593          	srai	a1,a4,0x3c
 4cc:	40c7d613          	srai	a2,a5,0xc
 4d0:	40045413          	srai	s0,s0,0x0
 4d4:	8505                	srai	a0,a0,0x1
 4d6:	8739                	srai	a4,a4,0xe
 4d8:	97fd                	srai	a5,a5,0x3f

00000000000004da <sra>:
 4da:	40c05013          	srai	zero,zero,0xc
 4de:	4093d393          	srai	t2,t2,0x9
 4e2:	8439                	srai	s0,s0,0xe
 4e4:	97fd                	srai	a5,a5,0x3f
 4e6:	42085813          	srai	a6,a6,0x20
 4ea:	401bdb93          	srai	s7,s7,0x1
 4ee:	4024d413          	srai	s0,s1,0x2
 4f2:	43c75593          	srai	a1,a4,0x3c
 4f6:	40c7d613          	srai	a2,a5,0xc
 4fa:	40045413          	srai	s0,s0,0x0
 4fe:	8505                	srai	a0,a0,0x1
 500:	8739                	srai	a4,a4,0xe
 502:	97fd                	srai	a5,a5,0x3f

0000000000000504 <sub>:
 504:	40100033          	neg	zero,ra
 508:	40040433          	sub	s0,s0,zero
 50c:	40f20233          	sub	tp,tp,a5
 510:	40bb8bb3          	sub	s7,s7,a1
 514:	8c85                	sub	s1,s1,s1
 516:	8f91                	sub	a5,a5,a2
 518:	40b48433          	sub	s0,s1,a1
 51c:	40a68533          	sub	a0,a3,a0
 520:	40d605b3          	sub	a1,a2,a3
 524:	403100b3          	sub	ra,sp,gp

0000000000000528 <lw>:
 528:	00012003          	lw	zero,0\(sp\)
 52c:	01012003          	lw	zero,16\(sp\)
 530:	04002283          	lw	t0,64\(zero\) # 40 <j\+0x28>
 534:	080f2603          	lw	a2,128\(t5\) # 2000080 <subw\+0x1fff8ee>
 538:	ffc12603          	lw	a2,-4\(sp\)
 53c:	fff12483          	lw	s1,-1\(sp\)
 540:	4582                	lw	a1,0\(sp\)
 542:	5772                	lw	a4,60\(sp\)
 544:	06f12c83          	lw	s9,111\(sp\)
 548:	50fe                	lw	ra,252\(sp\)
 54a:	10012483          	lw	s1,256\(sp\)
 54e:	10412b03          	lw	s6,260\(sp\)
 552:	40012f83          	lw	t6,1024\(sp\)
 556:	e0c4a003          	lw	zero,-500\(s1\)
 55a:	0604a003          	lw	zero,96\(s1\)
 55e:	04002483          	lw	s1,64\(zero\) # 40 <j\+0x28>
 562:	000c2603          	lw	a2,0\(s8\)
 566:	0307a883          	lw	a7,48\(a5\)
 56a:	ffc52483          	lw	s1,-4\(a0\)
 56e:	4210                	lw	a2,0\(a2\)
 570:	0017a683          	lw	a3,1\(a5\)
 574:	4da8                	lw	a0,88\(a1\)
 576:	05b4a503          	lw	a0,91\(s1\)
 57a:	5d70                	lw	a2,124\(a0\)
 57c:	08062483          	lw	s1,128\(a2\)
 580:	fff02483          	lw	s1,-1\(zero\)

0000000000000584 <or>:
 584:	00806033          	or	zero,zero,s0
 588:	0104e4b3          	or	s1,s1,a6
 58c:	0080e433          	or	s0,ra,s0
 590:	00056533          	or	a0,a0,zero
 594:	8fc1                	or	a5,a5,s0
 596:	0083e3b3          	or	t2,t2,s0
 59a:	0107e833          	or	a6,a5,a6
 59e:	8cc1                	or	s1,s1,s0
 5a0:	0094e533          	or	a0,s1,s1
 5a4:	8e4d                	or	a2,a2,a1
 5a6:	8ed5                	or	a3,a3,a3
 5a8:	8c41                	or	s0,s0,s0
 5aa:	00b564b3          	or	s1,a0,a1
 5ae:	0087e5b3          	or	a1,a5,s0
 5b2:	00f5e633          	or	a2,a1,a5
 5b6:	003060b3          	or	ra,zero,gp

00000000000005ba <sw>:
 5ba:	04502023          	sw	t0,64\(zero\) # 40 <j\+0x28>
 5be:	08cf2023          	sw	a2,128\(t5\)
 5c2:	fec12e23          	sw	a2,-4\(sp\)
 5c6:	fe912fa3          	sw	s1,-1\(sp\)
 5ca:	c02e                	sw	a1,0\(sp\)
 5cc:	de3a                	sw	a4,60\(sp\)
 5ce:	079127a3          	sw	s9,111\(sp\)
 5d2:	df86                	sw	ra,252\(sp\)
 5d4:	10912023          	sw	s1,256\(sp\)
 5d8:	11612223          	sw	s6,260\(sp\)
 5dc:	41f12023          	sw	t6,1024\(sp\)
 5e0:	e004a623          	sw	zero,-500\(s1\)
 5e4:	0604a023          	sw	zero,96\(s1\)
 5e8:	04902023          	sw	s1,64\(zero\) # 40 <j\+0x28>
 5ec:	00cc2023          	sw	a2,0\(s8\)
 5f0:	0317a823          	sw	a7,48\(a5\)
 5f4:	fe952e23          	sw	s1,-4\(a0\)
 5f8:	c210                	sw	a2,0\(a2\)
 5fa:	00d7a0a3          	sw	a3,1\(a5\)
 5fe:	cda8                	sw	a0,88\(a1\)
 600:	04a4ada3          	sw	a0,91\(s1\)
 604:	dd70                	sw	a2,124\(a0\)
 606:	08962023          	sw	s1,128\(a2\)
 60a:	fe902fa3          	sw	s1,-1\(zero\)

000000000000060e <xor>:
 60e:	00804033          	xor	zero,zero,s0
 612:	0104c4b3          	xor	s1,s1,a6
 616:	0080c433          	xor	s0,ra,s0
 61a:	00054533          	xor	a0,a0,zero
 61e:	8fa1                	xor	a5,a5,s0
 620:	0083c3b3          	xor	t2,t2,s0
 624:	0107c833          	xor	a6,a5,a6
 628:	8ca1                	xor	s1,s1,s0
 62a:	8e2d                	xor	a2,a2,a1
 62c:	8eb5                	xor	a3,a3,a3
 62e:	8c21                	xor	s0,s0,s0
 630:	00b544b3          	xor	s1,a0,a1
 634:	0087c5b3          	xor	a1,a5,s0
 638:	00f5c633          	xor	a2,a1,a5
 63c:	003040b3          	xor	ra,zero,gp

0000000000000640 <ld>:
 640:	00013003          	ld	zero,0\(sp\)
 644:	02013003          	ld	zero,32\(sp\)
 648:	08003283          	ld	t0,128\(zero\) # 80 <beqz\+0x8>
 64c:	100f3603          	ld	a2,256\(t5\)
 650:	ff813603          	ld	a2,-8\(sp\)
 654:	fff13483          	ld	s1,-1\(sp\)
 658:	6582                	ld	a1,0\(sp\)
 65a:	7766                	ld	a4,120\(sp\)
 65c:	06f13c83          	ld	s9,111\(sp\)
 660:	70fe                	ld	ra,504\(sp\)
 662:	20013483          	ld	s1,512\(sp\)
 666:	20813b03          	ld	s6,520\(sp\)
 66a:	c184b003          	ld	zero,-1000\(s1\)
 66e:	0c04b003          	ld	zero,192\(s1\)
 672:	08003483          	ld	s1,128\(zero\) # 80 <beqz\+0x8>
 676:	000c3603          	ld	a2,0\(s8\)
 67a:	0607b883          	ld	a7,96\(a5\)
 67e:	ff853483          	ld	s1,-8\(a0\)
 682:	6210                	ld	a2,0\(a2\)
 684:	0017b683          	ld	a3,1\(a5\)
 688:	79c8                	ld	a0,176\(a1\)
 68a:	05b4b503          	ld	a0,91\(s1\)
 68e:	7d70                	ld	a2,248\(a0\)
 690:	10063483          	ld	s1,256\(a2\)
 694:	fff03483          	ld	s1,-1\(zero\)

0000000000000698 <sd>:
 698:	08503023          	sd	t0,128\(zero\) # 80 <beqz\+0x8>
 69c:	10cf3023          	sd	a2,256\(t5\)
 6a0:	fec13c23          	sd	a2,-8\(sp\)
 6a4:	fe913fa3          	sd	s1,-1\(sp\)
 6a8:	e02e                	sd	a1,0\(sp\)
 6aa:	fcba                	sd	a4,120\(sp\)
 6ac:	079137a3          	sd	s9,111\(sp\)
 6b0:	ff86                	sd	ra,504\(sp\)
 6b2:	20913023          	sd	s1,512\(sp\)
 6b6:	21613423          	sd	s6,520\(sp\)
 6ba:	c004bc23          	sd	zero,-1000\(s1\)
 6be:	0c04b023          	sd	zero,192\(s1\)
 6c2:	08903023          	sd	s1,128\(zero\) # 80 <beqz\+0x8>
 6c6:	00cc3023          	sd	a2,0\(s8\)
 6ca:	0717b023          	sd	a7,96\(a5\)
 6ce:	fe953c23          	sd	s1,-8\(a0\)
 6d2:	e210                	sd	a2,0\(a2\)
 6d4:	00d7b0a3          	sd	a3,1\(a5\)
 6d8:	f9c8                	sd	a0,176\(a1\)
 6da:	04a4bda3          	sd	a0,91\(s1\)
 6de:	fd70                	sd	a2,248\(a0\)
 6e0:	10963023          	sd	s1,256\(a2\)
 6e4:	fe903fa3          	sd	s1,-1\(zero\)

00000000000006e8 <sext_w>:
 6e8:	0000001b          	sext\.w	zero,zero
 6ec:	2081                	sext\.w	ra,ra
 6ee:	2f81                	sext\.w	t6,t6

00000000000006f0 <addiw>:
 6f0:	ff10001b          	addiw	zero,zero,-15
 6f4:	0170001b          	addiw	zero,zero,23
 6f8:	209d                	addiw	ra,ra,7
 6fa:	3605                	addiw	a2,a2,-31
 6fc:	ff42019b          	addiw	gp,tp,-12
 700:	0004049b          	sext\.w	s1,s0
 704:	2e85                	addiw	t4,t4,1
 706:	f1c0809b          	addiw	ra,ra,-228
 70a:	fdf1819b          	addiw	gp,gp,-33
 70e:	3581                	addiw	a1,a1,-32
 710:	3485                	addiw	s1,s1,-31
 712:	3761                	addiw	a4,a4,-8
 714:	3bfd                	addiw	s7,s7,-1
 716:	2581                	sext\.w	a1,a1
 718:	24d9                	addiw	s1,s1,22
 71a:	257d                	addiw	a0,a0,31
 71c:	0209899b          	addiw	s3,s3,32
 720:	0370801b          	addiw	zero,ra,55
 724:	f9d0049b          	addiw	s1,zero,-99

0000000000000728 <addw>:
 728:	0080003b          	addw	zero,zero,s0
 72c:	010484bb          	addw	s1,s1,a6
 730:	0080843b          	addw	s0,ra,s0
 734:	0005053b          	addw	a0,a0,zero
 738:	9fa1                	addw	a5,a5,s0
 73a:	008383bb          	addw	t2,t2,s0
 73e:	0107883b          	addw	a6,a5,a6
 742:	9ca1                	addw	s1,s1,s0
 744:	9e2d                	addw	a2,a2,a1
 746:	9eb5                	addw	a3,a3,a3
 748:	9c21                	addw	s0,s0,s0
 74a:	00b504bb          	addw	s1,a0,a1
 74e:	008785bb          	addw	a1,a5,s0
 752:	00f5863b          	addw	a2,a1,a5
 756:	003000bb          	addw	ra,zero,gp
 75a:	ff10001b          	addiw	zero,zero,-15
 75e:	0170001b          	addiw	zero,zero,23
 762:	209d                	addiw	ra,ra,7
 764:	3605                	addiw	a2,a2,-31
 766:	ff42019b          	addiw	gp,tp,-12
 76a:	0004049b          	sext\.w	s1,s0
 76e:	2e85                	addiw	t4,t4,1
 770:	f1c0809b          	addiw	ra,ra,-228
 774:	fdf1819b          	addiw	gp,gp,-33
 778:	3581                	addiw	a1,a1,-32
 77a:	3485                	addiw	s1,s1,-31
 77c:	3761                	addiw	a4,a4,-8
 77e:	3bfd                	addiw	s7,s7,-1
 780:	2b81                	sext\.w	s7,s7
 782:	24d9                	addiw	s1,s1,22
 784:	257d                	addiw	a0,a0,31
 786:	0209899b          	addiw	s3,s3,32
 78a:	0370801b          	addiw	zero,ra,55
 78e:	f9d0049b          	addiw	s1,zero,-99

0000000000000792 <subw>:
 792:	4080003b          	negw	zero,s0
 796:	410484bb          	subw	s1,s1,a6
 79a:	4080843b          	subw	s0,ra,s0
 79e:	4005053b          	subw	a0,a0,zero
 7a2:	40f407bb          	subw	a5,s0,a5
 7a6:	408383bb          	subw	t2,t2,s0
 7aa:	4107883b          	subw	a6,a5,a6
 7ae:	9c81                	subw	s1,s1,s0
 7b0:	40c5863b          	subw	a2,a1,a2
 7b4:	9e95                	subw	a3,a3,a3
 7b6:	9c01                	subw	s0,s0,s0
 7b8:	40b504bb          	subw	s1,a0,a1
 7bc:	408785bb          	subw	a1,a5,s0
 7c0:	40f5863b          	subw	a2,a1,a5
 7c4:	403000bb          	negw	ra,gp
