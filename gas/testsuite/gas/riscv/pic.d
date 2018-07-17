#as: -march=rv64i
#objdump: -dr
#name: pic

.*: +file format .*


Disassembly of section \.text:

0000000000000000 <la>:
   0:	00000017          	auipc	zero,0x0
			0: R_RISCV_GOT_HI20	apple
   4:	00003003          	ld	zero,0\(zero\) # 0 <la>
			4: R_RISCV_PCREL_LO12_I	\.L0 
			4: R_RISCV_RELAX	\*ABS\*

0000000000000008 <\.L0 >:
   8:	00000117          	auipc	sp,0x0
			8: R_RISCV_GOT_HI20	banana\+0x7b
   c:	00013103          	ld	sp,0\(sp\) # 8 <\.L0 >
			c: R_RISCV_PCREL_LO12_I	\.L0 
			c: R_RISCV_RELAX	\*ABS\*

0000000000000010 <\.L0 >:
  10:	00000d97          	auipc	s11,0x0
			10: R_RISCV_GOT_HI20	\.text
  14:	000dbd83          	ld	s11,0\(s11\) # 10 <\.L0 >
			14: R_RISCV_PCREL_LO12_I	\.L0 
			14: R_RISCV_RELAX	\*ABS\*

0000000000000018 <\.L0 >:
  18:	00000097          	auipc	ra,0x0
			18: R_RISCV_GOT_HI20	\.text\+0x1f4
  1c:	0000b083          	ld	ra,0\(ra\) # 18 <\.L0 >
			1c: R_RISCV_PCREL_LO12_I	\.L0 
			1c: R_RISCV_RELAX	\*ABS\*
