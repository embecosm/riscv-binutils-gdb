#as: -march=rv64i
#objdump: -dr
#name: relax

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <branch>:
       0:	2c000863          	beqz	zero,2d0 <\.L0>
			0: R_RISCV_BRANCH	\.L0
	\.\.\.

00000000000002d0 <\.L0>:
     2d0:	002f1063          	bne	t5,sp,2d0 <\.L0>
			2d0: R_RISCV_BRANCH	\.L0
	\.\.\.
     7a8:	b2f4c4e3          	blt	s1,a5,2d0 <\.L0>
			7a8: R_RISCV_BRANCH	\.L0
     7ac:	0030d263          	ble	gp,ra,7b0 <\.L1>
			7ac: R_RISCV_BRANCH	\.L1

00000000000007b0 <\.L1>:
     7b0:	00cd7463          	bleu	a2,s10,7b8 <\.L2>
     7b4:	0000106f          	j	17b4 <\.L3>
			7b4: R_RISCV_JAL	\.L3

00000000000007b8 <\.L2>:
	\.\.\.

00000000000017b4 <\.L3>:
    17b4:	80017263          	bleu	zero,sp,7b8 <\.L2>
			17b4: R_RISCV_BRANCH	\.L2
    17b8:	0057d463          	ble	t0,a5,17c0 <\.L4>
    17bc:	0040106f          	j	27c0 <\.L5>
			17bc: R_RISCV_JAL	\.L5

00000000000017c0 <\.L4>:
	\.\.\.

00000000000027c0 <\.L5>:
    27c0:	8010d063          	ble	ra,ra,17c0 <\.L4>
			27c0: R_RISCV_BRANCH	\.L4

00000000000027c4 <branch_if_zero>:
    27c4:	10028a63          	beqz	t0,28d8 <\.Llemon>
			27c4: R_RISCV_BRANCH	\.Llemon
	\.\.\.

00000000000028d8 <\.Llemon>:
    28d8:	00039063          	bnez	t2,28d8 <\.Llemon>
			28d8: R_RISCV_BRANCH	\.Llemon
	\.\.\.
    38dc:	01704463          	bgtz	s7,38e4 <\.Llemon\+0x100c>
    38e0:	1a91406f          	j	18288 <branch_range>
			38e0: R_RISCV_JAL	\.Laubergine
	\.\.\.
   17aa0:	7c07d863          	bgez	a5,18270 <\.Lpotato>
			17aa0: R_RISCV_BRANCH	\.Lpotato
	\.\.\.

0000000000018270 <\.Lpotato>:
   18270:	00025463          	bgez	tp,18278 <\.Lpotato\+0x8>
   18274:	e64ea06f          	j	28d8 <\.Llemon>
			18274: R_RISCV_JAL	\.Llemon
   18278:	00005463          	blez	zero,18280 <\.Lpotato\+0x10>
   1827c:	d85e706f          	j	0 <branch>
			1827c: R_RISCV_JAL	\.Lbranch_if_zero
	\.\.\.

0000000000018288 <branch_range>:
   18288:	00828263          	beq	t0,s0,1828c <\.Lapple>
			18288: R_RISCV_BRANCH	\.Lapple

000000000001828c <\.Lapple>:
   1828c:	00609063          	bne	ra,t1,1828c <\.Lapple>
			1828c: R_RISCV_BRANCH	\.Lapple
   18290:	0017d463          	ble	ra,a5,18298 <\.Lapple\+0xc>
   18294:	0040106f          	j	19298 <\.Lbanana>
			18294: R_RISCV_JAL	\.Lbanana
	\.\.\.

0000000000019298 <\.Lbanana>:
   19298:	004d4463          	blt	s10,tp,192a0 <\.Lbanana\+0x8>
   1929c:	0000106f          	j	1a29c <\.Lcabbage>
			1929c: R_RISCV_JAL	\.Lcabbage
	\.\.\.

000000000001a29c <\.Lcabbage>:
   1a29c:	0134f463          	bleu	s3,s1,1a2a4 <\.Lcabbage\+0x8>
   1a2a0:	7fd0006f          	j	1b29c <\.Ldairy>
			1a2a0: R_RISCV_JAL	\.Ldairy
	\.\.\.

000000000001b29c <\.Ldairy>:
	\.\.\.
   1c2a0:	01f5e463          	bltu	a1,t6,1c2a8 <\.Lelephant>
   1c2a4:	ff9fe06f          	j	1b29c <\.Ldairy>
			1c2a4: R_RISCV_JAL	\.Ldairy

000000000001c2a8 <\.Lelephant>:
	\.\.\.
   1d2a8:	80e14063          	blt	sp,a4,1c2a8 <\.Lelephant>
			1d2a8: R_RISCV_BRANCH	\.Lelephant

000000000001d2ac <\.Lfrantic>:
	\.\.\.
   1e2a8:	80078263          	beqz	a5,1d2ac <\.Lfrantic>
			1e2a8: R_RISCV_BRANCH	\.Lfrantic

000000000001e2ac <\.Lgnome>:
	\.\.\.
   1f2a4:	80004463          	bltz	zero,1e2ac <\.Lgnome>
			1f2a4: R_RISCV_BRANCH	\.Lgnome

000000000001f2a8 <branch_across_section>:
   1f2a8:	01d48463          	beq	s1,t4,1f2b0 <branch_to_weak>
   1f2ac:	d55e006f          	j	0 <branch>
			1f2ac: R_RISCV_JAL	branch_target

000000000001f2b0 <branch_to_weak>:
   1f2b0:	00728463          	beq	t0,t2,1f2b8 <branch_to_weak\+0x8>
   1f2b4:	0140006f          	j	1f2c8 <weak_target>
			1f2b4: R_RISCV_JAL	weak_target
	\.\.\.

000000000001f2c8 <weak_target>:
   1f2c8:	00000013          	nop

000000000001f2cc <branch_interesting_exprs>:
   1f2cc:	006c6063          	bltu	s8,t1,1f2cc <branch_interesting_exprs>
			1f2cc: R_RISCV_BRANCH	\.L0 
   1f2d0:	01f67463          	bleu	t6,a2,1f2d8 <\.L0 \+0x4>
			1f2d0: R_RISCV_BRANCH	branch_interesting_exprs\+0xc

000000000001f2d4 <\.L0 >:
   1f2d4:	01028863          	beq	t0,a6,1f2e4 <\.L0 \+0x10>
			1f2d4: R_RISCV_BRANCH	\.L0 \+0x10
