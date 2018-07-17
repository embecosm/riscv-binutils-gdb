#as: -march=rv64ia
#objdump: -dr
#name: a-common

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <lr\.w>:
   0:	1000a12f          	lr\.w	sp,\(ra\)
   4:	100522af          	lr\.w	t0,\(a0\)
   8:	100fa02f          	lr\.w	zero,\(t6\)
   c:	10002faf          	lr\.w	t6,\(zero\)

0000000000000010 <lr\.w\.aq>:
  10:	1400a12f          	lr\.w\.aq	sp,\(ra\)
  14:	140522af          	lr\.w\.aq	t0,\(a0\)
  18:	140fa02f          	lr\.w\.aq	zero,\(t6\)
  1c:	14002faf          	lr\.w\.aq	t6,\(zero\)

0000000000000020 <lr\.w\.rl>:
  20:	1200a12f          	lr\.w\.rl	sp,\(ra\)
  24:	120522af          	lr\.w\.rl	t0,\(a0\)
  28:	120fa02f          	lr\.w\.rl	zero,\(t6\)
  2c:	12002faf          	lr\.w\.rl	t6,\(zero\)

0000000000000030 <lr\.w\.aqrl>:
  30:	1600a12f          	lr\.w\.aqrl	sp,\(ra\)
  34:	160522af          	lr\.w\.aqrl	t0,\(a0\)
  38:	160fa02f          	lr\.w\.aqrl	zero,\(t6\)
  3c:	16002faf          	lr\.w\.aqrl	t6,\(zero\)

0000000000000040 <sc\.w>:
  40:	1840a12f          	sc\.w	sp,tp,\(ra\)
  44:	18c5252f          	sc\.w	a0,a2,\(a0\)
  48:	180fa02f          	sc\.w	zero,zero,\(t6\)
  4c:	19f02faf          	sc\.w	t6,t6,\(zero\)

0000000000000050 <sc\.w\.aq>:
  50:	1c40a12f          	sc\.w\.aq	sp,tp,\(ra\)
  54:	1cc5252f          	sc\.w\.aq	a0,a2,\(a0\)
  58:	1c0fa02f          	sc\.w\.aq	zero,zero,\(t6\)
  5c:	1df02faf          	sc\.w\.aq	t6,t6,\(zero\)

0000000000000060 <sc\.w\.rl>:
  60:	1a40a12f          	sc\.w\.rl	sp,tp,\(ra\)
  64:	1ac5252f          	sc\.w\.rl	a0,a2,\(a0\)
  68:	1a0fa02f          	sc\.w\.rl	zero,zero,\(t6\)
  6c:	1bf02faf          	sc\.w\.rl	t6,t6,\(zero\)

0000000000000070 <sc\.w\.aqrl>:
  70:	1e40a12f          	sc\.w\.aqrl	sp,tp,\(ra\)
  74:	1ec5252f          	sc\.w\.aqrl	a0,a2,\(a0\)
  78:	1e0fa02f          	sc\.w\.aqrl	zero,zero,\(t6\)
  7c:	1ff02faf          	sc\.w\.aqrl	t6,t6,\(zero\)

0000000000000080 <amoswap\.w>:
  80:	0840a12f          	amoswap\.w	sp,tp,\(ra\)
  84:	085522af          	amoswap\.w	t0,t0,\(a0\)
  88:	080fa02f          	amoswap\.w	zero,zero,\(t6\)
  8c:	09f02faf          	amoswap\.w	t6,t6,\(zero\)

0000000000000090 <amoswap\.w\.aq>:
  90:	0c40a12f          	amoswap\.w\.aq	sp,tp,\(ra\)
  94:	0c5522af          	amoswap\.w\.aq	t0,t0,\(a0\)
  98:	0c0fa02f          	amoswap\.w\.aq	zero,zero,\(t6\)
  9c:	0df02faf          	amoswap\.w\.aq	t6,t6,\(zero\)

00000000000000a0 <amoswap\.w\.rl>:
  a0:	0a40a12f          	amoswap\.w\.rl	sp,tp,\(ra\)
  a4:	0a05202f          	amoswap\.w\.rl	zero,zero,\(a0\)
  a8:	0a0fa02f          	amoswap\.w\.rl	zero,zero,\(t6\)
  ac:	0bf02faf          	amoswap\.w\.rl	t6,t6,\(zero\)

00000000000000b0 <amoswap\.w\.aqrl>:
  b0:	0e40a12f          	amoswap\.w\.aqrl	sp,tp,\(ra\)
  b4:	0e5522af          	amoswap\.w\.aqrl	t0,t0,\(a0\)
  b8:	0e0fa02f          	amoswap\.w\.aqrl	zero,zero,\(t6\)
  bc:	0ff02faf          	amoswap\.w\.aqrl	t6,t6,\(zero\)

00000000000000c0 <amoadd\.w>:
  c0:	0040a12f          	amoadd\.w	sp,tp,\(ra\)
  c4:	005522af          	amoadd\.w	t0,t0,\(a0\)
  c8:	000fa02f          	amoadd\.w	zero,zero,\(t6\)
  cc:	01f02faf          	amoadd\.w	t6,t6,\(zero\)

00000000000000d0 <amoadd\.w\.aq>:
  d0:	0440a12f          	amoadd\.w\.aq	sp,tp,\(ra\)
  d4:	045522af          	amoadd\.w\.aq	t0,t0,\(a0\)
  d8:	040fa02f          	amoadd\.w\.aq	zero,zero,\(t6\)
  dc:	05f02faf          	amoadd\.w\.aq	t6,t6,\(zero\)

00000000000000e0 <amoadd\.w\.rl>:
  e0:	0240a12f          	amoadd\.w\.rl	sp,tp,\(ra\)
  e4:	0205202f          	amoadd\.w\.rl	zero,zero,\(a0\)
  e8:	020fa02f          	amoadd\.w\.rl	zero,zero,\(t6\)
  ec:	03f02faf          	amoadd\.w\.rl	t6,t6,\(zero\)

00000000000000f0 <amoadd\.w\.aqrl>:
  f0:	0640a12f          	amoadd\.w\.aqrl	sp,tp,\(ra\)
  f4:	065522af          	amoadd\.w\.aqrl	t0,t0,\(a0\)
  f8:	060fa02f          	amoadd\.w\.aqrl	zero,zero,\(t6\)
  fc:	07f02faf          	amoadd\.w\.aqrl	t6,t6,\(zero\)

0000000000000100 <amoxor\.w>:
 100:	2040a12f          	amoxor\.w	sp,tp,\(ra\)
 104:	205522af          	amoxor\.w	t0,t0,\(a0\)
 108:	200fa02f          	amoxor\.w	zero,zero,\(t6\)
 10c:	21f02faf          	amoxor\.w	t6,t6,\(zero\)

0000000000000110 <amoxor\.w\.aq>:
 110:	2440a12f          	amoxor\.w\.aq	sp,tp,\(ra\)
 114:	245522af          	amoxor\.w\.aq	t0,t0,\(a0\)
 118:	240fa02f          	amoxor\.w\.aq	zero,zero,\(t6\)
 11c:	25f02faf          	amoxor\.w\.aq	t6,t6,\(zero\)

0000000000000120 <amoxor\.w\.rl>:
 120:	2240a12f          	amoxor\.w\.rl	sp,tp,\(ra\)
 124:	2205202f          	amoxor\.w\.rl	zero,zero,\(a0\)
 128:	220fa02f          	amoxor\.w\.rl	zero,zero,\(t6\)
 12c:	23f02faf          	amoxor\.w\.rl	t6,t6,\(zero\)

0000000000000130 <amoxor\.w\.aqrl>:
 130:	2640a12f          	amoxor\.w\.aqrl	sp,tp,\(ra\)
 134:	265522af          	amoxor\.w\.aqrl	t0,t0,\(a0\)
 138:	260fa02f          	amoxor\.w\.aqrl	zero,zero,\(t6\)
 13c:	27f02faf          	amoxor\.w\.aqrl	t6,t6,\(zero\)

0000000000000140 <amoand\.w>:
 140:	6040a12f          	amoand\.w	sp,tp,\(ra\)
 144:	605522af          	amoand\.w	t0,t0,\(a0\)
 148:	600fa02f          	amoand\.w	zero,zero,\(t6\)
 14c:	61f02faf          	amoand\.w	t6,t6,\(zero\)

0000000000000150 <amoand\.w\.aq>:
 150:	6440a12f          	amoand\.w\.aq	sp,tp,\(ra\)
 154:	645522af          	amoand\.w\.aq	t0,t0,\(a0\)
 158:	640fa02f          	amoand\.w\.aq	zero,zero,\(t6\)
 15c:	65f02faf          	amoand\.w\.aq	t6,t6,\(zero\)

0000000000000160 <amoand\.w\.rl>:
 160:	6240a12f          	amoand\.w\.rl	sp,tp,\(ra\)
 164:	6205202f          	amoand\.w\.rl	zero,zero,\(a0\)
 168:	620fa02f          	amoand\.w\.rl	zero,zero,\(t6\)
 16c:	63f02faf          	amoand\.w\.rl	t6,t6,\(zero\)

0000000000000170 <amoand\.w\.aqrl>:
 170:	6640a12f          	amoand\.w\.aqrl	sp,tp,\(ra\)
 174:	665522af          	amoand\.w\.aqrl	t0,t0,\(a0\)
 178:	660fa02f          	amoand\.w\.aqrl	zero,zero,\(t6\)
 17c:	67f02faf          	amoand\.w\.aqrl	t6,t6,\(zero\)

0000000000000180 <amoor\.w>:
 180:	4040a12f          	amoor\.w	sp,tp,\(ra\)
 184:	405522af          	amoor\.w	t0,t0,\(a0\)
 188:	400fa02f          	amoor\.w	zero,zero,\(t6\)
 18c:	41f02faf          	amoor\.w	t6,t6,\(zero\)

0000000000000190 <amoor\.w\.aq>:
 190:	4440a12f          	amoor\.w\.aq	sp,tp,\(ra\)
 194:	445522af          	amoor\.w\.aq	t0,t0,\(a0\)
 198:	440fa02f          	amoor\.w\.aq	zero,zero,\(t6\)
 19c:	45f02faf          	amoor\.w\.aq	t6,t6,\(zero\)

00000000000001a0 <amoor\.w\.rl>:
 1a0:	4240a12f          	amoor\.w\.rl	sp,tp,\(ra\)
 1a4:	4205202f          	amoor\.w\.rl	zero,zero,\(a0\)
 1a8:	420fa02f          	amoor\.w\.rl	zero,zero,\(t6\)
 1ac:	43f02faf          	amoor\.w\.rl	t6,t6,\(zero\)

00000000000001b0 <amoor\.w\.aqrl>:
 1b0:	4640a12f          	amoor\.w\.aqrl	sp,tp,\(ra\)
 1b4:	465522af          	amoor\.w\.aqrl	t0,t0,\(a0\)
 1b8:	460fa02f          	amoor\.w\.aqrl	zero,zero,\(t6\)
 1bc:	47f02faf          	amoor\.w\.aqrl	t6,t6,\(zero\)

00000000000001c0 <amomin\.w>:
 1c0:	8040a12f          	amomin\.w	sp,tp,\(ra\)
 1c4:	805522af          	amomin\.w	t0,t0,\(a0\)
 1c8:	800fa02f          	amomin\.w	zero,zero,\(t6\)
 1cc:	81f02faf          	amomin\.w	t6,t6,\(zero\)

00000000000001d0 <amomin\.w\.aq>:
 1d0:	8440a12f          	amomin\.w\.aq	sp,tp,\(ra\)
 1d4:	845522af          	amomin\.w\.aq	t0,t0,\(a0\)
 1d8:	840fa02f          	amomin\.w\.aq	zero,zero,\(t6\)
 1dc:	85f02faf          	amomin\.w\.aq	t6,t6,\(zero\)

00000000000001e0 <amomin\.w\.rl>:
 1e0:	8240a12f          	amomin\.w\.rl	sp,tp,\(ra\)
 1e4:	8205202f          	amomin\.w\.rl	zero,zero,\(a0\)
 1e8:	820fa02f          	amomin\.w\.rl	zero,zero,\(t6\)
 1ec:	83f02faf          	amomin\.w\.rl	t6,t6,\(zero\)

00000000000001f0 <amomin\.w\.aqrl>:
 1f0:	8640a12f          	amomin\.w\.aqrl	sp,tp,\(ra\)
 1f4:	865522af          	amomin\.w\.aqrl	t0,t0,\(a0\)
 1f8:	860fa02f          	amomin\.w\.aqrl	zero,zero,\(t6\)
 1fc:	87f02faf          	amomin\.w\.aqrl	t6,t6,\(zero\)

0000000000000200 <amomax\.w>:
 200:	a040a12f          	amomax\.w	sp,tp,\(ra\)
 204:	a05522af          	amomax\.w	t0,t0,\(a0\)
 208:	a00fa02f          	amomax\.w	zero,zero,\(t6\)
 20c:	a1f02faf          	amomax\.w	t6,t6,\(zero\)

0000000000000210 <amomax\.w\.aq>:
 210:	a440a12f          	amomax\.w\.aq	sp,tp,\(ra\)
 214:	a45522af          	amomax\.w\.aq	t0,t0,\(a0\)
 218:	a40fa02f          	amomax\.w\.aq	zero,zero,\(t6\)
 21c:	a5f02faf          	amomax\.w\.aq	t6,t6,\(zero\)

0000000000000220 <amomax\.w\.rl>:
 220:	a240a12f          	amomax\.w\.rl	sp,tp,\(ra\)
 224:	a205202f          	amomax\.w\.rl	zero,zero,\(a0\)
 228:	a20fa02f          	amomax\.w\.rl	zero,zero,\(t6\)
 22c:	a3f02faf          	amomax\.w\.rl	t6,t6,\(zero\)

0000000000000230 <amomax\.w\.aqrl>:
 230:	a640a12f          	amomax\.w\.aqrl	sp,tp,\(ra\)
 234:	a65522af          	amomax\.w\.aqrl	t0,t0,\(a0\)
 238:	a60fa02f          	amomax\.w\.aqrl	zero,zero,\(t6\)
 23c:	a7f02faf          	amomax\.w\.aqrl	t6,t6,\(zero\)

0000000000000240 <amominu\.w>:
 240:	c040a12f          	amominu\.w	sp,tp,\(ra\)
 244:	c05522af          	amominu\.w	t0,t0,\(a0\)
 248:	c00fa02f          	amominu\.w	zero,zero,\(t6\)
 24c:	c1f02faf          	amominu\.w	t6,t6,\(zero\)

0000000000000250 <amominu\.w\.aq>:
 250:	c440a12f          	amominu\.w\.aq	sp,tp,\(ra\)
 254:	c45522af          	amominu\.w\.aq	t0,t0,\(a0\)
 258:	c40fa02f          	amominu\.w\.aq	zero,zero,\(t6\)
 25c:	c5f02faf          	amominu\.w\.aq	t6,t6,\(zero\)

0000000000000260 <amominu\.w\.rl>:
 260:	c240a12f          	amominu\.w\.rl	sp,tp,\(ra\)
 264:	c205202f          	amominu\.w\.rl	zero,zero,\(a0\)
 268:	c20fa02f          	amominu\.w\.rl	zero,zero,\(t6\)
 26c:	c3f02faf          	amominu\.w\.rl	t6,t6,\(zero\)

0000000000000270 <amominu\.w\.aqrl>:
 270:	c640a12f          	amominu\.w\.aqrl	sp,tp,\(ra\)
 274:	c65522af          	amominu\.w\.aqrl	t0,t0,\(a0\)
 278:	c60fa02f          	amominu\.w\.aqrl	zero,zero,\(t6\)
 27c:	c7f02faf          	amominu\.w\.aqrl	t6,t6,\(zero\)

0000000000000280 <amomaxu\.w>:
 280:	e040a12f          	amomaxu\.w	sp,tp,\(ra\)
 284:	e05522af          	amomaxu\.w	t0,t0,\(a0\)
 288:	e00fa02f          	amomaxu\.w	zero,zero,\(t6\)
 28c:	e1f02faf          	amomaxu\.w	t6,t6,\(zero\)

0000000000000290 <amomaxu\.w\.aq>:
 290:	e440a12f          	amomaxu\.w\.aq	sp,tp,\(ra\)
 294:	e45522af          	amomaxu\.w\.aq	t0,t0,\(a0\)
 298:	e40fa02f          	amomaxu\.w\.aq	zero,zero,\(t6\)
 29c:	e5f02faf          	amomaxu\.w\.aq	t6,t6,\(zero\)

00000000000002a0 <amomaxu\.w\.rl>:
 2a0:	e240a12f          	amomaxu\.w\.rl	sp,tp,\(ra\)
 2a4:	e205202f          	amomaxu\.w\.rl	zero,zero,\(a0\)
 2a8:	e20fa02f          	amomaxu\.w\.rl	zero,zero,\(t6\)
 2ac:	e3f02faf          	amomaxu\.w\.rl	t6,t6,\(zero\)

00000000000002b0 <amomaxu\.w\.aqrl>:
 2b0:	e640a12f          	amomaxu\.w\.aqrl	sp,tp,\(ra\)
 2b4:	e65522af          	amomaxu\.w\.aqrl	t0,t0,\(a0\)
 2b8:	e60fa02f          	amomaxu\.w\.aqrl	zero,zero,\(t6\)
 2bc:	e7f02faf          	amomaxu\.w\.aqrl	t6,t6,\(zero\)

00000000000002c0 <lr\.d>:
 2c0:	1000b12f          	lr\.d	sp,\(ra\)
 2c4:	100532af          	lr\.d	t0,\(a0\)
 2c8:	100fb02f          	lr\.d	zero,\(t6\)
 2cc:	10003faf          	lr\.d	t6,\(zero\)

00000000000002d0 <lr\.d\.aq>:
 2d0:	1400b12f          	lr\.d\.aq	sp,\(ra\)
 2d4:	140532af          	lr\.d\.aq	t0,\(a0\)
 2d8:	140fb02f          	lr\.d\.aq	zero,\(t6\)
 2dc:	14003faf          	lr\.d\.aq	t6,\(zero\)

00000000000002e0 <lr\.d\.rl>:
 2e0:	1200b12f          	lr\.d\.rl	sp,\(ra\)
 2e4:	120532af          	lr\.d\.rl	t0,\(a0\)
 2e8:	120fb02f          	lr\.d\.rl	zero,\(t6\)
 2ec:	12003faf          	lr\.d\.rl	t6,\(zero\)

00000000000002f0 <lr\.d\.aqrl>:
 2f0:	1600b12f          	lr\.d\.aqrl	sp,\(ra\)
 2f4:	160532af          	lr\.d\.aqrl	t0,\(a0\)
 2f8:	160fb02f          	lr\.d\.aqrl	zero,\(t6\)
 2fc:	16003faf          	lr\.d\.aqrl	t6,\(zero\)

0000000000000300 <sc\.d>:
 300:	1840b12f          	sc\.d	sp,tp,\(ra\)
 304:	18c5352f          	sc\.d	a0,a2,\(a0\)
 308:	180fb02f          	sc\.d	zero,zero,\(t6\)
 30c:	19f03faf          	sc\.d	t6,t6,\(zero\)

0000000000000310 <sc\.d\.aq>:
 310:	1c40b12f          	sc\.d\.aq	sp,tp,\(ra\)
 314:	1cc5352f          	sc\.d\.aq	a0,a2,\(a0\)
 318:	1c0fb02f          	sc\.d\.aq	zero,zero,\(t6\)
 31c:	1df03faf          	sc\.d\.aq	t6,t6,\(zero\)

0000000000000320 <sc\.d\.rl>:
 320:	1a40b12f          	sc\.d\.rl	sp,tp,\(ra\)
 324:	1ac5352f          	sc\.d\.rl	a0,a2,\(a0\)
 328:	1a0fb02f          	sc\.d\.rl	zero,zero,\(t6\)
 32c:	1bf03faf          	sc\.d\.rl	t6,t6,\(zero\)

0000000000000330 <sc\.d\.aqrl>:
 330:	1e40b12f          	sc\.d\.aqrl	sp,tp,\(ra\)
 334:	1ec5352f          	sc\.d\.aqrl	a0,a2,\(a0\)
 338:	1e0fb02f          	sc\.d\.aqrl	zero,zero,\(t6\)
 33c:	1ff03faf          	sc\.d\.aqrl	t6,t6,\(zero\)

0000000000000340 <amoswap\.d>:
 340:	0840b12f          	amoswap\.d	sp,tp,\(ra\)
 344:	085532af          	amoswap\.d	t0,t0,\(a0\)
 348:	080fb02f          	amoswap\.d	zero,zero,\(t6\)
 34c:	09f03faf          	amoswap\.d	t6,t6,\(zero\)

0000000000000350 <amoswap\.d\.aq>:
 350:	0c40b12f          	amoswap\.d\.aq	sp,tp,\(ra\)
 354:	0c5532af          	amoswap\.d\.aq	t0,t0,\(a0\)
 358:	0c0fb02f          	amoswap\.d\.aq	zero,zero,\(t6\)
 35c:	0df03faf          	amoswap\.d\.aq	t6,t6,\(zero\)

0000000000000360 <amoswap\.d\.rl>:
 360:	0a40b12f          	amoswap\.d\.rl	sp,tp,\(ra\)
 364:	0a05302f          	amoswap\.d\.rl	zero,zero,\(a0\)
 368:	0a0fb02f          	amoswap\.d\.rl	zero,zero,\(t6\)
 36c:	0bf03faf          	amoswap\.d\.rl	t6,t6,\(zero\)

0000000000000370 <amoswap\.d\.aqrl>:
 370:	0e40b12f          	amoswap\.d\.aqrl	sp,tp,\(ra\)
 374:	0e5532af          	amoswap\.d\.aqrl	t0,t0,\(a0\)
 378:	0e0fb02f          	amoswap\.d\.aqrl	zero,zero,\(t6\)
 37c:	0ff03faf          	amoswap\.d\.aqrl	t6,t6,\(zero\)

0000000000000380 <amoadd\.d>:
 380:	0040b12f          	amoadd\.d	sp,tp,\(ra\)
 384:	005532af          	amoadd\.d	t0,t0,\(a0\)
 388:	000fb02f          	amoadd\.d	zero,zero,\(t6\)
 38c:	01f03faf          	amoadd\.d	t6,t6,\(zero\)

0000000000000390 <amoadd\.d\.aq>:
 390:	0440b12f          	amoadd\.d\.aq	sp,tp,\(ra\)
 394:	045532af          	amoadd\.d\.aq	t0,t0,\(a0\)
 398:	040fb02f          	amoadd\.d\.aq	zero,zero,\(t6\)
 39c:	05f03faf          	amoadd\.d\.aq	t6,t6,\(zero\)

00000000000003a0 <amoadd\.d\.rl>:
 3a0:	0240b12f          	amoadd\.d\.rl	sp,tp,\(ra\)
 3a4:	0205302f          	amoadd\.d\.rl	zero,zero,\(a0\)
 3a8:	020fb02f          	amoadd\.d\.rl	zero,zero,\(t6\)
 3ac:	03f03faf          	amoadd\.d\.rl	t6,t6,\(zero\)

00000000000003b0 <amoadd\.d\.aqrl>:
 3b0:	0640b12f          	amoadd\.d\.aqrl	sp,tp,\(ra\)
 3b4:	065532af          	amoadd\.d\.aqrl	t0,t0,\(a0\)
 3b8:	060fb02f          	amoadd\.d\.aqrl	zero,zero,\(t6\)
 3bc:	07f03faf          	amoadd\.d\.aqrl	t6,t6,\(zero\)

00000000000003c0 <amoxor\.d>:
 3c0:	2040b12f          	amoxor\.d	sp,tp,\(ra\)
 3c4:	205532af          	amoxor\.d	t0,t0,\(a0\)
 3c8:	200fb02f          	amoxor\.d	zero,zero,\(t6\)
 3cc:	21f03faf          	amoxor\.d	t6,t6,\(zero\)

00000000000003d0 <amoxor\.d\.aq>:
 3d0:	2440b12f          	amoxor\.d\.aq	sp,tp,\(ra\)
 3d4:	245532af          	amoxor\.d\.aq	t0,t0,\(a0\)
 3d8:	240fb02f          	amoxor\.d\.aq	zero,zero,\(t6\)
 3dc:	25f03faf          	amoxor\.d\.aq	t6,t6,\(zero\)

00000000000003e0 <amoxor\.d\.rl>:
 3e0:	2240b12f          	amoxor\.d\.rl	sp,tp,\(ra\)
 3e4:	2205302f          	amoxor\.d\.rl	zero,zero,\(a0\)
 3e8:	220fb02f          	amoxor\.d\.rl	zero,zero,\(t6\)
 3ec:	23f03faf          	amoxor\.d\.rl	t6,t6,\(zero\)

00000000000003f0 <amoxor\.d\.aqrl>:
 3f0:	2640b12f          	amoxor\.d\.aqrl	sp,tp,\(ra\)
 3f4:	265532af          	amoxor\.d\.aqrl	t0,t0,\(a0\)
 3f8:	260fb02f          	amoxor\.d\.aqrl	zero,zero,\(t6\)
 3fc:	27f03faf          	amoxor\.d\.aqrl	t6,t6,\(zero\)

0000000000000400 <amoand\.d>:
 400:	6040b12f          	amoand\.d	sp,tp,\(ra\)
 404:	605532af          	amoand\.d	t0,t0,\(a0\)
 408:	600fb02f          	amoand\.d	zero,zero,\(t6\)
 40c:	61f03faf          	amoand\.d	t6,t6,\(zero\)

0000000000000410 <amoand\.d\.aq>:
 410:	6440b12f          	amoand\.d\.aq	sp,tp,\(ra\)
 414:	645532af          	amoand\.d\.aq	t0,t0,\(a0\)
 418:	640fb02f          	amoand\.d\.aq	zero,zero,\(t6\)
 41c:	65f03faf          	amoand\.d\.aq	t6,t6,\(zero\)

0000000000000420 <amoand\.d\.rl>:
 420:	6240b12f          	amoand\.d\.rl	sp,tp,\(ra\)
 424:	6205302f          	amoand\.d\.rl	zero,zero,\(a0\)
 428:	620fb02f          	amoand\.d\.rl	zero,zero,\(t6\)
 42c:	63f03faf          	amoand\.d\.rl	t6,t6,\(zero\)

0000000000000430 <amoand\.d\.aqrl>:
 430:	6640b12f          	amoand\.d\.aqrl	sp,tp,\(ra\)
 434:	665532af          	amoand\.d\.aqrl	t0,t0,\(a0\)
 438:	660fb02f          	amoand\.d\.aqrl	zero,zero,\(t6\)
 43c:	67f03faf          	amoand\.d\.aqrl	t6,t6,\(zero\)

0000000000000440 <amoor\.d>:
 440:	4040b12f          	amoor\.d	sp,tp,\(ra\)
 444:	405532af          	amoor\.d	t0,t0,\(a0\)
 448:	400fb02f          	amoor\.d	zero,zero,\(t6\)
 44c:	41f03faf          	amoor\.d	t6,t6,\(zero\)

0000000000000450 <amoor\.d\.aq>:
 450:	4440b12f          	amoor\.d\.aq	sp,tp,\(ra\)
 454:	445532af          	amoor\.d\.aq	t0,t0,\(a0\)
 458:	440fb02f          	amoor\.d\.aq	zero,zero,\(t6\)
 45c:	45f03faf          	amoor\.d\.aq	t6,t6,\(zero\)

0000000000000460 <amoor\.d\.rl>:
 460:	4240b12f          	amoor\.d\.rl	sp,tp,\(ra\)
 464:	4205302f          	amoor\.d\.rl	zero,zero,\(a0\)
 468:	420fb02f          	amoor\.d\.rl	zero,zero,\(t6\)
 46c:	43f03faf          	amoor\.d\.rl	t6,t6,\(zero\)

0000000000000470 <amoor\.d\.aqrl>:
 470:	4640b12f          	amoor\.d\.aqrl	sp,tp,\(ra\)
 474:	465532af          	amoor\.d\.aqrl	t0,t0,\(a0\)
 478:	460fb02f          	amoor\.d\.aqrl	zero,zero,\(t6\)
 47c:	47f03faf          	amoor\.d\.aqrl	t6,t6,\(zero\)

0000000000000480 <amomin\.d>:
 480:	8040b12f          	amomin\.d	sp,tp,\(ra\)
 484:	805532af          	amomin\.d	t0,t0,\(a0\)
 488:	800fb02f          	amomin\.d	zero,zero,\(t6\)
 48c:	81f03faf          	amomin\.d	t6,t6,\(zero\)

0000000000000490 <amomin\.d\.aq>:
 490:	8440b12f          	amomin\.d\.aq	sp,tp,\(ra\)
 494:	845532af          	amomin\.d\.aq	t0,t0,\(a0\)
 498:	840fb02f          	amomin\.d\.aq	zero,zero,\(t6\)
 49c:	85f03faf          	amomin\.d\.aq	t6,t6,\(zero\)

00000000000004a0 <amomin\.d\.rl>:
 4a0:	8240b12f          	amomin\.d\.rl	sp,tp,\(ra\)
 4a4:	8205302f          	amomin\.d\.rl	zero,zero,\(a0\)
 4a8:	820fb02f          	amomin\.d\.rl	zero,zero,\(t6\)
 4ac:	83f03faf          	amomin\.d\.rl	t6,t6,\(zero\)

00000000000004b0 <amomin\.d\.aqrl>:
 4b0:	8640b12f          	amomin\.d\.aqrl	sp,tp,\(ra\)
 4b4:	865532af          	amomin\.d\.aqrl	t0,t0,\(a0\)
 4b8:	860fb02f          	amomin\.d\.aqrl	zero,zero,\(t6\)
 4bc:	87f03faf          	amomin\.d\.aqrl	t6,t6,\(zero\)

00000000000004c0 <amomax\.d>:
 4c0:	a040b12f          	amomax\.d	sp,tp,\(ra\)
 4c4:	a05532af          	amomax\.d	t0,t0,\(a0\)
 4c8:	a00fb02f          	amomax\.d	zero,zero,\(t6\)
 4cc:	a1f03faf          	amomax\.d	t6,t6,\(zero\)

00000000000004d0 <amomax\.d\.aq>:
 4d0:	a440b12f          	amomax\.d\.aq	sp,tp,\(ra\)
 4d4:	a45532af          	amomax\.d\.aq	t0,t0,\(a0\)
 4d8:	a40fb02f          	amomax\.d\.aq	zero,zero,\(t6\)
 4dc:	a5f03faf          	amomax\.d\.aq	t6,t6,\(zero\)

00000000000004e0 <amomax\.d\.rl>:
 4e0:	a240b12f          	amomax\.d\.rl	sp,tp,\(ra\)
 4e4:	a205302f          	amomax\.d\.rl	zero,zero,\(a0\)
 4e8:	a20fb02f          	amomax\.d\.rl	zero,zero,\(t6\)
 4ec:	a3f03faf          	amomax\.d\.rl	t6,t6,\(zero\)

00000000000004f0 <amomax\.d\.aqrl>:
 4f0:	a640b12f          	amomax\.d\.aqrl	sp,tp,\(ra\)
 4f4:	a65532af          	amomax\.d\.aqrl	t0,t0,\(a0\)
 4f8:	a60fb02f          	amomax\.d\.aqrl	zero,zero,\(t6\)
 4fc:	a7f03faf          	amomax\.d\.aqrl	t6,t6,\(zero\)

0000000000000500 <amominu\.d>:
 500:	c040b12f          	amominu\.d	sp,tp,\(ra\)
 504:	c05532af          	amominu\.d	t0,t0,\(a0\)
 508:	c00fb02f          	amominu\.d	zero,zero,\(t6\)
 50c:	c1f03faf          	amominu\.d	t6,t6,\(zero\)

0000000000000510 <amominu\.d\.aq>:
 510:	c440b12f          	amominu\.d\.aq	sp,tp,\(ra\)
 514:	c45532af          	amominu\.d\.aq	t0,t0,\(a0\)
 518:	c40fb02f          	amominu\.d\.aq	zero,zero,\(t6\)
 51c:	c5f03faf          	amominu\.d\.aq	t6,t6,\(zero\)

0000000000000520 <amominu\.d\.rl>:
 520:	c240b12f          	amominu\.d\.rl	sp,tp,\(ra\)
 524:	c205302f          	amominu\.d\.rl	zero,zero,\(a0\)
 528:	c20fb02f          	amominu\.d\.rl	zero,zero,\(t6\)
 52c:	c3f03faf          	amominu\.d\.rl	t6,t6,\(zero\)

0000000000000530 <amominu\.d\.aqrl>:
 530:	c640b12f          	amominu\.d\.aqrl	sp,tp,\(ra\)
 534:	c65532af          	amominu\.d\.aqrl	t0,t0,\(a0\)
 538:	c60fb02f          	amominu\.d\.aqrl	zero,zero,\(t6\)
 53c:	c7f03faf          	amominu\.d\.aqrl	t6,t6,\(zero\)

0000000000000540 <amomaxu\.d>:
 540:	e040b12f          	amomaxu\.d	sp,tp,\(ra\)
 544:	e05532af          	amomaxu\.d	t0,t0,\(a0\)
 548:	e00fb02f          	amomaxu\.d	zero,zero,\(t6\)
 54c:	e1f03faf          	amomaxu\.d	t6,t6,\(zero\)

0000000000000550 <amomaxu\.d\.aq>:
 550:	e440b12f          	amomaxu\.d\.aq	sp,tp,\(ra\)
 554:	e45532af          	amomaxu\.d\.aq	t0,t0,\(a0\)
 558:	e40fb02f          	amomaxu\.d\.aq	zero,zero,\(t6\)
 55c:	e5f03faf          	amomaxu\.d\.aq	t6,t6,\(zero\)

0000000000000560 <amomaxu\.d\.rl>:
 560:	e240b12f          	amomaxu\.d\.rl	sp,tp,\(ra\)
 564:	e205302f          	amomaxu\.d\.rl	zero,zero,\(a0\)
 568:	e20fb02f          	amomaxu\.d\.rl	zero,zero,\(t6\)
 56c:	e3f03faf          	amomaxu\.d\.rl	t6,t6,\(zero\)

0000000000000570 <amomaxu\.d\.aqrl>:
 570:	e640b12f          	amomaxu\.d\.aqrl	sp,tp,\(ra\)
 574:	e65532af          	amomaxu\.d\.aqrl	t0,t0,\(a0\)
 578:	e60fb02f          	amomaxu\.d\.aqrl	zero,zero,\(t6\)
 57c:	e7f03faf          	amomaxu\.d\.aqrl	t6,t6,\(zero\)
