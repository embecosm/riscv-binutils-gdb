#as: -march=rv32ic
#objdump: -dr
#name: c-relax

.*: +file format .*


Disassembly of section \.text:

00000000 <c_j>:
       0:	a009                	j	2 <\.L0>
			0: R_RISCV_RVC_JUMP	\.L0

00000002 <\.L0>:
       2:	a001                	j	2 <\.L0>
			2: R_RISCV_RVC_JUMP	\.L0
       4:	a4f9                	j	2d2 <\.L2>
			4: R_RISCV_RVC_JUMP	\.L2

00000006 <\.L1>:
	\.\.\.

000002d2 <\.L2>:
     2d2:	bb15                	j	6 <\.L1>
			2d2: R_RISCV_RVC_JUMP	\.L1
     2d4:	affd                	j	ad2 <\.L4>
			2d4: R_RISCV_RVC_JUMP	\.L4

000002d6 <\.L3>:
	\.\.\.

00000ad2 <\.L4>:
     ad2:	b011                	j	2d6 <\.L3>
			ad2: R_RISCV_RVC_JUMP	\.L3
     ad4:	0030006f          	j	12d6 <\.L6>
			ad4: R_RISCV_JAL	\.L6

00000ad8 <\.L5>:
	\.\.\.

000012d6 <\.L6>:
    12d6:	b009                	j	ad8 <\.L5>
			12d6: R_RISCV_RVC_JUMP	\.L5
    12d8:	0050006f          	j	1adc <\.L8>
			12d8: R_RISCV_JAL	\.L8

000012dc <\.L7>:
	\.\.\.

00001adc <\.L8>:
    1adc:	b001                	j	12dc <\.L7>
			1adc: R_RISCV_RVC_JUMP	\.L7
    1ade:	0070006f          	j	22e4 <\.L10>
			1ade: R_RISCV_JAL	\.L10

00001ae2 <\.L9>:
	\.\.\.

000022e4 <\.L10>:
    22e4:	ffeff06f          	j	1ae2 <\.L9>
			22e4: R_RISCV_JAL	\.L9

000022e8 <c_j_across_section>:
    22e8:	d19fd06f          	j	0 <c_j>
			22e8: R_RISCV_JAL	branch_target
	\.\.\.

0000230c <c_j_to_weak_symbol>:
    230c:	0240006f          	j	2330 <c_j_weak_target>
			230c: R_RISCV_JAL	c_j_weak_target
	\.\.\.

00002330 <c_j_weak_target>:
    2330:	0001                	nop

00002332 <c_j_interesting_exprs>:
    2332:	a001                	j	2332 <c_j_interesting_exprs>
			2332: R_RISCV_RVC_JUMP	\.L0 
    2334:	a009                	j	2336 <\.L0 >
			2334: R_RISCV_RVC_JUMP	c_j_interesting_exprs\+0x4

00002336 <\.L0 >:
    2336:	a801                	j	2346 <\.L12\+0x8>
			2336: R_RISCV_RVC_JUMP	\.L0 \+0x10

00002338 <c_beqz>:
    2338:	c009                	beqz	s0,233a <\.L11>
			2338: R_RISCV_RVC_BRANCH	\.L11

0000233a <\.L11>:
    233a:	c081                	beqz	s1,233a <\.L11>
			233a: R_RISCV_RVC_BRANCH	\.L11
    233c:	c129                	beqz	a0,237e <\.L13>
			233c: R_RISCV_RVC_BRANCH	\.L13

0000233e <\.L12>:
	\.\.\.

0000237e <\.L13>:
    237e:	d1e1                	beqz	a1,233e <\.L12>
			237e: R_RISCV_RVC_BRANCH	\.L12
    2380:	ce75                	beqz	a2,247c <\.L15>
			2380: R_RISCV_RVC_BRANCH	\.L15

00002382 <\.L14>:
	\.\.\.

0000247c <\.L15>:
    247c:	d299                	beqz	a3,2382 <\.L14>
			247c: R_RISCV_RVC_BRANCH	\.L14
    247e:	10070063          	beqz	a4,257e <\.L17>
			247e: R_RISCV_BRANCH	\.L17

00002482 <\.L16>:
	\.\.\.

0000257e <\.L17>:
    257e:	d391                	beqz	a5,2482 <\.L16>
			257e: R_RISCV_RVC_BRANCH	\.L16
    2580:	10040263          	beqz	s0,2684 <\.L19>
			2580: R_RISCV_BRANCH	\.L19

00002584 <\.L18>:
	\.\.\.

00002684 <\.L19>:
    2684:	d081                	beqz	s1,2584 <\.L18>
			2684: R_RISCV_RVC_BRANCH	\.L18
    2686:	10050363          	beqz	a0,278c <\.L21>
			2686: R_RISCV_BRANCH	\.L21

0000268a <\.L20>:
	\.\.\.

0000278c <\.L21>:
    278c:	ee058fe3          	beqz	a1,268a <\.L20>
			278c: R_RISCV_BRANCH	\.L20
    2790:	7e060ee3          	beqz	a2,378c <\.L23>
			2790: R_RISCV_BRANCH	\.L23

00002794 <\.L22>:
	\.\.\.

0000378c <\.L23>:
    378c:	80068463          	beqz	a3,2794 <\.L22>
			378c: R_RISCV_BRANCH	\.L22
    3790:	e319                	bnez	a4,3796 <\.L24>
    3792:	7ff0006f          	j	4790 <\.L25>
			3792: R_RISCV_JAL	\.L25

00003796 <\.L24>:
	\.\.\.

00004790 <\.L25>:
    4790:	80078363          	beqz	a5,3796 <\.L24>
			4790: R_RISCV_BRANCH	\.L24
    4794:	e019                	bnez	s0,479a <\.L26>
    4796:	0000106f          	j	5796 <\.L27>
			4796: R_RISCV_JAL	\.L27

0000479a <\.L26>:
	\.\.\.

00005796 <\.L27>:
    5796:	80048263          	beqz	s1,479a <\.L26>
			5796: R_RISCV_BRANCH	\.L26
    579a:	e119                	bnez	a0,57a0 <\.L28>
    579c:	0020106f          	j	679e <\.L29>
			579c: R_RISCV_JAL	\.L29

000057a0 <\.L28>:
	\.\.\.

0000679e <\.L29>:
    679e:	80058163          	beqz	a1,57a0 <\.L28>
			679e: R_RISCV_BRANCH	\.L28
    67a2:	e219                	bnez	a2,67a8 <\.L30>
    67a4:	0040106f          	j	77a8 <\.L31>
			67a4: R_RISCV_JAL	\.L31

000067a8 <\.L30>:
	\.\.\.

000077a8 <\.L31>:
    77a8:	80068063          	beqz	a3,67a8 <\.L30>
			77a8: R_RISCV_BRANCH	\.L30
    77ac:	e319                	bnez	a4,77b2 <\.L32>
    77ae:	0060106f          	j	87b4 <\.L33>
			77ae: R_RISCV_JAL	\.L33

000077b2 <\.L32>:
	\.\.\.

000087b4 <\.L33>:
    87b4:	e399                	bnez	a5,87ba <\.L33\+0x6>
    87b6:	ffdfe06f          	j	77b2 <\.L32>
			87b6: R_RISCV_JAL	\.L32
    87ba:	c019                	beqz	s0,87c0 <\.L34>
    87bc:	38c0106f          	j	9b48 <\.L35>
			87bc: R_RISCV_JAL	\.L35

000087c0 <\.L34>:
	\.\.\.

00009b48 <\.L35>:
    9b48:	c099                	beqz	s1,9b4e <c_beqz_across_section>
    9b4a:	c77fe06f          	j	87c0 <\.L34>
			9b4a: R_RISCV_JAL	\.L34

00009b4e <c_beqz_across_section>:
    9b4e:	00051463          	bnez	a0,9b56 <c_beqz_across_section\+0x8>
    9b52:	caef606f          	j	0 <c_j>
			9b52: R_RISCV_JAL	branch_target
	\.\.\.

00009b76 <c_beqz_to_weak_symbol>:
    9b76:	00061463          	bnez	a2,9b7e <c_beqz_to_weak_symbol\+0x8>
    9b7a:	0240006f          	j	9b9e <c_beqz_weak_target>
			9b7a: R_RISCV_JAL	c_beqz_weak_target
	\.\.\.

00009b9e <c_beqz_weak_target>:
    9b9e:	0001                	nop

00009ba0 <c_beqz_interesting_exprs>:
    9ba0:	c281                	beqz	a3,9ba0 <c_beqz_interesting_exprs>
			9ba0: R_RISCV_RVC_BRANCH	\.L0 
    9ba2:	c309                	beqz	a4,9ba4 <\.L0 >
			9ba2: R_RISCV_RVC_BRANCH	c_beqz_interesting_exprs\+0x4

00009ba4 <\.L0 >:
    9ba4:	cb81                	beqz	a5,9bb4 <\.L37\+0x8>
			9ba4: R_RISCV_RVC_BRANCH	\.L0 \+0x10

00009ba6 <c_jal>:
    9ba6:	2009                	jal	9ba8 <\.L36>
			9ba6: R_RISCV_RVC_JUMP	\.L36

00009ba8 <\.L36>:
    9ba8:	2001                	jal	9ba8 <\.L36>
			9ba8: R_RISCV_RVC_JUMP	\.L36
    9baa:	24f9                	jal	9e78 <\.L38>
			9baa: R_RISCV_RVC_JUMP	\.L38

00009bac <\.L37>:
	\.\.\.

00009e78 <\.L38>:
    9e78:	3b15                	jal	9bac <\.L37>
			9e78: R_RISCV_RVC_JUMP	\.L37
    9e7a:	001000ef          	jal	ra,a67a <\.L40>
			9e7a: R_RISCV_JAL	\.L40

00009e7e <\.L39>:
	\.\.\.

0000a67a <\.L40>:
    a67a:	3011                	jal	9e7e <\.L39>
			a67a: R_RISCV_RVC_JUMP	\.L39
    a67c:	003000ef          	jal	ra,ae7e <\.L42>
			a67c: R_RISCV_JAL	\.L42

0000a680 <\.L41>:
	\.\.\.

0000ae7e <\.L42>:
    ae7e:	3009                	jal	a680 <\.L41>
			ae7e: R_RISCV_RVC_JUMP	\.L41
    ae80:	005000ef          	jal	ra,b684 <\.L44>
			ae80: R_RISCV_JAL	\.L44

0000ae84 <\.L43>:
	\.\.\.

0000b684 <\.L44>:
    b684:	3001                	jal	ae84 <\.L43>
			b684: R_RISCV_RVC_JUMP	\.L43
    b686:	007000ef          	jal	ra,be8c <\.L46>
			b686: R_RISCV_JAL	\.L46

0000b68a <\.L45>:
	\.\.\.

0000be8c <\.L46>:
    be8c:	ffeff0ef          	jal	ra,b68a <\.L45>
			be8c: R_RISCV_JAL	\.L45

0000be90 <c_jal_across_section>:
    be90:	970f40ef          	jal	ra,0 <c_j>
			be90: R_RISCV_JAL	branch_target
	\.\.\.

0000beb4 <c_jal_to_weak_symbol>:
    beb4:	024000ef          	jal	ra,bed8 <c_jal_weak_target>
			beb4: R_RISCV_JAL	c_jal_weak_target
	\.\.\.

0000bed8 <c_jal_weak_target>:
    bed8:	0001                	nop

0000beda <c_jal_interesting_exprs>:
    beda:	2001                	jal	beda <c_jal_interesting_exprs>
			beda: R_RISCV_RVC_JUMP	\.L0 
    bedc:	2009                	jal	bede <\.L0 >
			bedc: R_RISCV_RVC_JUMP	c_jal_interesting_exprs\+0x4

0000bede <\.L0 >:
    bede:	2801                	jal	beee <\.L0 \+0x10>
			bede: R_RISCV_RVC_JUMP	\.L0 \+0x10
