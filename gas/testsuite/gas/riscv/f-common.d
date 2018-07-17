#as: -march=rv64if
#objdump: -dr
#name: f-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <flw>:
   0:	00002007          	flw	ft0,0\(zero\) # 0 <flw>
   4:	00202307          	flw	ft6,2\(zero\) # 2 <flw\+0x2>
   8:	00012307          	flw	ft6,0\(sp\)
   c:	00612007          	flw	ft0,6\(sp\)
  10:	0032a387          	flw	ft7,3\(t0\)
  14:	01ffaf87          	flw	ft11,31\(t6\)
  18:	01b0a987          	flw	fs3,27\(ra\)

000000000000001c <fsw>:
  1c:	00002027          	fsw	ft0,0\(zero\) # 0 <flw>
  20:	0007aba7          	fsw	ft0,23\(a5\)
  24:	00c1a027          	fsw	fa2,0\(gp\)
  28:	01302da7          	fsw	fs3,27\(zero\) # 1b <flw\+0x1b>
  2c:	00842427          	fsw	fs0,8\(s0\)
  30:	0072afa7          	fsw	ft7,31\(t0\)
  34:	01f0a1a7          	fsw	ft11,3\(ra\)
  38:	013fada7          	fsw	fs3,27\(t6\)

000000000000003c <fmadd\.s>:
  3c:	00007043          	fmadd\.s	ft0,ft0,ft0,ft0
  40:	1842f3c3          	fmadd\.s	ft7,ft5,ft4,ft3
  44:	f9ffffc3          	fmadd\.s	ft11,ft11,ft11,ft11
  48:	d870f9c3          	fmadd\.s	fs3,ft1,ft7,fs11
  4c:	b852f1c3          	fmadd\.s	ft3,ft5,ft5,fs7
  50:	1842f2c3          	fmadd\.s	ft5,ft5,ft4,ft3
  54:	2851ffc3          	fmadd\.s	ft11,ft3,ft5,ft5
  58:	d80179c3          	fmadd\.s	fs3,ft2,ft0,fs11

000000000000005c <fmsub\.s>:
  5c:	00007047          	fmsub\.s	ft0,ft0,ft0,ft0
  60:	1842f3c7          	fmsub\.s	ft7,ft5,ft4,ft3
  64:	f9ffffc7          	fmsub\.s	ft11,ft11,ft11,ft11
  68:	d870f9c7          	fmsub\.s	fs3,ft1,ft7,fs11
  6c:	b852f1c7          	fmsub\.s	ft3,ft5,ft5,fs7
  70:	1842f2c7          	fmsub\.s	ft5,ft5,ft4,ft3
  74:	2851ffc7          	fmsub\.s	ft11,ft3,ft5,ft5
  78:	d80179c7          	fmsub\.s	fs3,ft2,ft0,fs11

000000000000007c <fnmsub\.s>:
  7c:	0000704b          	fnmsub\.s	ft0,ft0,ft0,ft0
  80:	1842f3cb          	fnmsub\.s	ft7,ft5,ft4,ft3
  84:	f9ffffcb          	fnmsub\.s	ft11,ft11,ft11,ft11
  88:	d870f9cb          	fnmsub\.s	fs3,ft1,ft7,fs11
  8c:	b852f1cb          	fnmsub\.s	ft3,ft5,ft5,fs7
  90:	1842f2cb          	fnmsub\.s	ft5,ft5,ft4,ft3
  94:	2851ffcb          	fnmsub\.s	ft11,ft3,ft5,ft5
  98:	d80179cb          	fnmsub\.s	fs3,ft2,ft0,fs11

000000000000009c <fnmadd\.s>:
  9c:	0000704f          	fnmadd\.s	ft0,ft0,ft0,ft0
  a0:	1842f3cf          	fnmadd\.s	ft7,ft5,ft4,ft3
  a4:	f9ffffcf          	fnmadd\.s	ft11,ft11,ft11,ft11
  a8:	d870f9cf          	fnmadd\.s	fs3,ft1,ft7,fs11
  ac:	b852f1cf          	fnmadd\.s	ft3,ft5,ft5,fs7
  b0:	1842f2cf          	fnmadd\.s	ft5,ft5,ft4,ft3
  b4:	2851ffcf          	fnmadd\.s	ft11,ft3,ft5,ft5
  b8:	d80179cf          	fnmadd\.s	fs3,ft2,ft0,fs11

00000000000000bc <fadd\.s>:
  bc:	008170d3          	fadd\.s	ft1,ft2,fs0
  c0:	00b574d3          	fadd\.s	fs1,fa0,fa1
  c4:	00e6f653          	fadd\.s	fa2,fa3,fa4
  c8:	011877d3          	fadd\.s	fa5,fa6,fa7
  cc:	015a7953          	fadd\.s	fs2,fs4,fs5
  d0:	018bfb53          	fadd\.s	fs6,fs7,fs8
  d4:	01cd7cd3          	fadd\.s	fs9,fs10,ft8
  d8:	01ff7ed3          	fadd\.s	ft9,ft10,ft11

00000000000000dc <fsub\.s>:
  dc:	08007053          	fsub\.s	ft0,ft0,ft0
  e0:	0842f3d3          	fsub\.s	ft7,ft5,ft4
  e4:	09ffffd3          	fsub\.s	ft11,ft11,ft11
  e8:	09b0f9d3          	fsub\.s	fs3,ft1,fs11
  ec:	0852f1d3          	fsub\.s	ft3,ft5,ft5
  f0:	0832f2d3          	fsub\.s	ft5,ft5,ft3
  f4:	0851ffd3          	fsub\.s	ft11,ft3,ft5
  f8:	09b079d3          	fsub\.s	fs3,ft0,fs11

00000000000000fc <fmul\.s>:
  fc:	10007053          	fmul\.s	ft0,ft0,ft0
 100:	1042f3d3          	fmul\.s	ft7,ft5,ft4
 104:	11ffffd3          	fmul\.s	ft11,ft11,ft11
 108:	11b0f9d3          	fmul\.s	fs3,ft1,fs11
 10c:	1052f1d3          	fmul\.s	ft3,ft5,ft5
 110:	1032f2d3          	fmul\.s	ft5,ft5,ft3
 114:	1051ffd3          	fmul\.s	ft11,ft3,ft5
 118:	11b079d3          	fmul\.s	fs3,ft0,fs11

000000000000011c <fdiv\.s>:
 11c:	18007053          	fdiv\.s	ft0,ft0,ft0
 120:	1842f3d3          	fdiv\.s	ft7,ft5,ft4
 124:	19ffffd3          	fdiv\.s	ft11,ft11,ft11
 128:	19b0f9d3          	fdiv\.s	fs3,ft1,fs11
 12c:	1852f1d3          	fdiv\.s	ft3,ft5,ft5
 130:	1832f2d3          	fdiv\.s	ft5,ft5,ft3
 134:	1851ffd3          	fdiv\.s	ft11,ft3,ft5
 138:	19b079d3          	fdiv\.s	fs3,ft0,fs11

000000000000013c <fsgnj\.s>:
 13c:	21e789d3          	fsgnj\.s	fs3,fa5,ft10
 140:	203283d3          	fsgnj\.s	ft7,ft5,ft3
 144:	21b08753          	fsgnj\.s	fa4,ft1,fs11
 148:	203004d3          	fsgnj\.s	fs1,ft0,ft3
 14c:	20dc8053          	fsgnj\.s	ft0,fs9,fa3
 150:	20008553          	fsgnj\.s	fa0,ft1,ft0
 154:	20000053          	fmv\.s	ft0,ft0
 158:	217b8dd3          	fmv\.s	fs11,fs7
 15c:	21ff8fd3          	fmv\.s	ft11,ft11
 160:	20a500d3          	fmv\.s	ft1,fa0
 164:	203183d3          	fmv\.s	ft7,ft3
 168:	20108053          	fmv\.s	ft0,ft1

000000000000016c <fsgnjn\.s>:
 16c:	21e799d3          	fsgnjn\.s	fs3,fa5,ft10
 170:	203293d3          	fsgnjn\.s	ft7,ft5,ft3
 174:	21b09753          	fsgnjn\.s	fa4,ft1,fs11
 178:	203014d3          	fsgnjn\.s	fs1,ft0,ft3
 17c:	20dc9053          	fsgnjn\.s	ft0,fs9,fa3
 180:	20009553          	fsgnjn\.s	fa0,ft1,ft0
 184:	20001053          	fneg\.s	ft0,ft0
 188:	217b9dd3          	fneg\.s	fs11,fs7
 18c:	21ff9fd3          	fneg\.s	ft11,ft11
 190:	20a510d3          	fneg\.s	ft1,fa0
 194:	203193d3          	fneg\.s	ft7,ft3
 198:	20109053          	fneg\.s	ft0,ft1

000000000000019c <fsgnjx\.s>:
 19c:	21e7a9d3          	fsgnjx\.s	fs3,fa5,ft10
 1a0:	2032a3d3          	fsgnjx\.s	ft7,ft5,ft3
 1a4:	21b0a753          	fsgnjx\.s	fa4,ft1,fs11
 1a8:	203024d3          	fsgnjx\.s	fs1,ft0,ft3
 1ac:	20dca053          	fsgnjx\.s	ft0,fs9,fa3
 1b0:	2000a553          	fsgnjx\.s	fa0,ft1,ft0
 1b4:	20002053          	fabs\.s	ft0,ft0
 1b8:	217badd3          	fabs\.s	fs11,fs7
 1bc:	21ffafd3          	fabs\.s	ft11,ft11
 1c0:	20a520d3          	fabs\.s	ft1,fa0
 1c4:	2031a3d3          	fabs\.s	ft7,ft3
 1c8:	2010a053          	fabs\.s	ft0,ft1

00000000000001cc <fmin\.s>:
 1cc:	28000053          	fmin\.s	ft0,ft0,ft0
 1d0:	284283d3          	fmin\.s	ft7,ft5,ft4
 1d4:	29ff8fd3          	fmin\.s	ft11,ft11,ft11
 1d8:	29b089d3          	fmin\.s	fs3,ft1,fs11
 1dc:	285281d3          	fmin\.s	ft3,ft5,ft5
 1e0:	283282d3          	fmin\.s	ft5,ft5,ft3
 1e4:	28518fd3          	fmin\.s	ft11,ft3,ft5
 1e8:	29b009d3          	fmin\.s	fs3,ft0,fs11

00000000000001ec <fmax\.s>:
 1ec:	28001053          	fmax\.s	ft0,ft0,ft0
 1f0:	284293d3          	fmax\.s	ft7,ft5,ft4
 1f4:	29ff9fd3          	fmax\.s	ft11,ft11,ft11
 1f8:	29b099d3          	fmax\.s	fs3,ft1,fs11
 1fc:	285291d3          	fmax\.s	ft3,ft5,ft5
 200:	283292d3          	fmax\.s	ft5,ft5,ft3
 204:	28519fd3          	fmax\.s	ft11,ft3,ft5
 208:	29b019d3          	fmax\.s	fs3,ft0,fs11

000000000000020c <feq\.s>:
 20c:	a0002053          	feq\.s	zero,ft0,ft0
 210:	a042a3d3          	feq\.s	t2,ft5,ft4
 214:	a1ffafd3          	feq\.s	t6,ft11,ft11
 218:	a1b0a9d3          	feq\.s	s3,ft1,fs11
 21c:	a052a1d3          	feq\.s	gp,ft5,ft5
 220:	a032a2d3          	feq\.s	t0,ft5,ft3
 224:	a051afd3          	feq\.s	t6,ft3,ft5
 228:	a1b9a053          	feq\.s	zero,fs3,fs11

000000000000022c <flt\.s>:
 22c:	a0001053          	flt\.s	zero,ft0,ft0
 230:	a04293d3          	flt\.s	t2,ft5,ft4
 234:	a1ff9fd3          	flt\.s	t6,ft11,ft11
 238:	a1b099d3          	flt\.s	s3,ft1,fs11
 23c:	a05291d3          	flt\.s	gp,ft5,ft5
 240:	a03292d3          	flt\.s	t0,ft5,ft3
 244:	a0519fd3          	flt\.s	t6,ft3,ft5
 248:	a1b99053          	flt\.s	zero,fs3,fs11

000000000000024c <fle\.s>:
 24c:	a0000053          	fle\.s	zero,ft0,ft0
 250:	a04283d3          	fle\.s	t2,ft5,ft4
 254:	a1ff8fd3          	fle\.s	t6,ft11,ft11
 258:	a1b089d3          	fle\.s	s3,ft1,fs11
 25c:	a05281d3          	fle\.s	gp,ft5,ft5
 260:	a03282d3          	fle\.s	t0,ft5,ft3
 264:	a0518fd3          	fle\.s	t6,ft3,ft5
 268:	a1b98053          	fle\.s	zero,fs3,fs11

000000000000026c <fsqrt\.s>:
 26c:	58007053          	fsqrt\.s	ft0,ft0
 270:	5802f3d3          	fsqrt\.s	ft7,ft5
 274:	580fffd3          	fsqrt\.s	ft11,ft11
 278:	580df0d3          	fsqrt\.s	ft1,fs11
 27c:	5802f2d3          	fsqrt\.s	ft5,ft5
 280:	5801f2d3          	fsqrt\.s	ft5,ft3
 284:	5802ffd3          	fsqrt\.s	ft11,ft5
 288:	5803f053          	fsqrt\.s	ft0,ft7

000000000000028c <fcvt\.w\.s>:
 28c:	c0007053          	fcvt\.w\.s	zero,ft0
 290:	c002f3d3          	fcvt\.w\.s	t2,ft5
 294:	c00fffd3          	fcvt\.w\.s	t6,ft11
 298:	c00df0d3          	fcvt\.w\.s	ra,fs11
 29c:	c002f2d3          	fcvt\.w\.s	t0,ft5
 2a0:	c001f2d3          	fcvt\.w\.s	t0,ft3
 2a4:	c002ffd3          	fcvt\.w\.s	t6,ft5
 2a8:	c003f053          	fcvt\.w\.s	zero,ft7

00000000000002ac <fcvt\.wu\.s>:
 2ac:	c0107053          	fcvt\.wu\.s	zero,ft0
 2b0:	c012f3d3          	fcvt\.wu\.s	t2,ft5
 2b4:	c01fffd3          	fcvt\.wu\.s	t6,ft11
 2b8:	c01df0d3          	fcvt\.wu\.s	ra,fs11
 2bc:	c012f2d3          	fcvt\.wu\.s	t0,ft5
 2c0:	c011f2d3          	fcvt\.wu\.s	t0,ft3
 2c4:	c012ffd3          	fcvt\.wu\.s	t6,ft5
 2c8:	c013f053          	fcvt\.wu\.s	zero,ft7

00000000000002cc <fmv\.x\.w>:
 2cc:	e0000053          	fmv\.x\.w	zero,ft0
 2d0:	e00283d3          	fmv\.x\.w	t2,ft5
 2d4:	e00f8fd3          	fmv\.x\.w	t6,ft11
 2d8:	e00d80d3          	fmv\.x\.w	ra,fs11
 2dc:	e00282d3          	fmv\.x\.w	t0,ft5
 2e0:	e00182d3          	fmv\.x\.w	t0,ft3
 2e4:	e0028fd3          	fmv\.x\.w	t6,ft5
 2e8:	e0038053          	fmv\.x\.w	zero,ft7

00000000000002ec <fclass\.s>:
 2ec:	e0001053          	fclass\.s	zero,ft0
 2f0:	e00293d3          	fclass\.s	t2,ft5
 2f4:	e00f9fd3          	fclass\.s	t6,ft11
 2f8:	e00d90d3          	fclass\.s	ra,fs11
 2fc:	e00292d3          	fclass\.s	t0,ft5
 300:	e00192d3          	fclass\.s	t0,ft3
 304:	e0029fd3          	fclass\.s	t6,ft5
 308:	e0039053          	fclass\.s	zero,ft7

000000000000030c <fcvt\.s\.w>:
 30c:	d0007053          	fcvt\.s\.w	ft0,zero
 310:	d002f3d3          	fcvt\.s\.w	ft7,t0
 314:	d00fffd3          	fcvt\.s\.w	ft11,t6
 318:	d00df0d3          	fcvt\.s\.w	ft1,s11
 31c:	d002f2d3          	fcvt\.s\.w	ft5,t0
 320:	d001f2d3          	fcvt\.s\.w	ft5,gp
 324:	d002ffd3          	fcvt\.s\.w	ft11,t0
 328:	d003f053          	fcvt\.s\.w	ft0,t2

000000000000032c <fcvt\.s\.wu>:
 32c:	d0107053          	fcvt\.s\.wu	ft0,zero
 330:	d012f3d3          	fcvt\.s\.wu	ft7,t0
 334:	d01fffd3          	fcvt\.s\.wu	ft11,t6
 338:	d01df0d3          	fcvt\.s\.wu	ft1,s11
 33c:	d012f2d3          	fcvt\.s\.wu	ft5,t0
 340:	d011f2d3          	fcvt\.s\.wu	ft5,gp
 344:	d012ffd3          	fcvt\.s\.wu	ft11,t0
 348:	d013f053          	fcvt\.s\.wu	ft0,t2

000000000000034c <fmv\.w\.x>:
 34c:	f0000053          	fmv\.w\.x	ft0,zero
 350:	f00283d3          	fmv\.w\.x	ft7,t0
 354:	f00f8fd3          	fmv\.w\.x	ft11,t6
 358:	f00d80d3          	fmv\.w\.x	ft1,s11
 35c:	f00282d3          	fmv\.w\.x	ft5,t0
 360:	f00182d3          	fmv\.w\.x	ft5,gp
 364:	f0028fd3          	fmv\.w\.x	ft11,t0
 368:	f0038053          	fmv\.w\.x	ft0,t2

000000000000036c <fcvt\.l\.s>:
 36c:	c0207053          	fcvt\.l\.s	zero,ft0
 370:	c022f3d3          	fcvt\.l\.s	t2,ft5
 374:	c02fffd3          	fcvt\.l\.s	t6,ft11
 378:	c02df0d3          	fcvt\.l\.s	ra,fs11
 37c:	c022f2d3          	fcvt\.l\.s	t0,ft5
 380:	c021f2d3          	fcvt\.l\.s	t0,ft3
 384:	c022ffd3          	fcvt\.l\.s	t6,ft5
 388:	c023f053          	fcvt\.l\.s	zero,ft7

000000000000038c <fcvt\.lu\.s>:
 38c:	c0307053          	fcvt\.lu\.s	zero,ft0
 390:	c032f3d3          	fcvt\.lu\.s	t2,ft5
 394:	c03fffd3          	fcvt\.lu\.s	t6,ft11
 398:	c03df0d3          	fcvt\.lu\.s	ra,fs11
 39c:	c032f2d3          	fcvt\.lu\.s	t0,ft5
 3a0:	c031f2d3          	fcvt\.lu\.s	t0,ft3
 3a4:	c032ffd3          	fcvt\.lu\.s	t6,ft5
 3a8:	c033f053          	fcvt\.lu\.s	zero,ft7

00000000000003ac <fcvt\.s\.l>:
 3ac:	d0207053          	fcvt\.s\.l	ft0,zero
 3b0:	d022f3d3          	fcvt\.s\.l	ft7,t0
 3b4:	d02fffd3          	fcvt\.s\.l	ft11,t6
 3b8:	d02df0d3          	fcvt\.s\.l	ft1,s11
 3bc:	d022f2d3          	fcvt\.s\.l	ft5,t0
 3c0:	d021f2d3          	fcvt\.s\.l	ft5,gp
 3c4:	d022ffd3          	fcvt\.s\.l	ft11,t0
 3c8:	d023f053          	fcvt\.s\.l	ft0,t2

00000000000003cc <fcvt\.s\.lu>:
 3cc:	d0307053          	fcvt\.s\.lu	ft0,zero
 3d0:	d032f3d3          	fcvt\.s\.lu	ft7,t0
 3d4:	d03fffd3          	fcvt\.s\.lu	ft11,t6
 3d8:	d03df0d3          	fcvt\.s\.lu	ft1,s11
 3dc:	d032f2d3          	fcvt\.s\.lu	ft5,t0
 3e0:	d031f2d3          	fcvt\.s\.lu	ft5,gp
 3e4:	d032ffd3          	fcvt\.s\.lu	ft11,t0
 3e8:	d033f053          	fcvt\.s\.lu	ft0,t2
