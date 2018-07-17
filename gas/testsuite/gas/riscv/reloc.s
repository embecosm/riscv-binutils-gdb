 .data
foodata: .word 42
 .text
footext:
	.text
	.global jalr
jalr:
	jalr a3,%lo(global_symbol)(zero)
	jalr t6,%lo(global_symbol)(t6)
	jalr ra,%lo(global_symbol)(ra)
	jalr a5,%lo(global_symbol)(a6)
	jalr a3,%pcrel_lo(global_symbol)(zero)
	jalr t6,%pcrel_lo(global_symbol)(t6)
	jalr ra,%pcrel_lo(global_symbol)(ra)
	jalr a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lb
lb:
	lb a3,%lo(global_symbol)(zero)
	lb t6,%lo(global_symbol)(t6)
	lb ra,%lo(global_symbol)(ra)
	lb a5,%lo(global_symbol)(a6)
	lb a3,%pcrel_lo(global_symbol)(zero)
	lb t6,%pcrel_lo(global_symbol)(t6)
	lb ra,%pcrel_lo(global_symbol)(ra)
	lb a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lh
lh:
	lh a3,%lo(global_symbol)(zero)
	lh t6,%lo(global_symbol)(t6)
	lh ra,%lo(global_symbol)(ra)
	lh a5,%lo(global_symbol)(a6)
	lh a3,%pcrel_lo(global_symbol)(zero)
	lh t6,%pcrel_lo(global_symbol)(t6)
	lh ra,%pcrel_lo(global_symbol)(ra)
	lh a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lw
lw:
	lw a3,%lo(global_symbol)(zero)
	lw t6,%lo(global_symbol)(t6)
	lw ra,%lo(global_symbol)(ra)
	lw a5,%lo(global_symbol)(a6)
	lw a3,%pcrel_lo(global_symbol)(zero)
	lw t6,%pcrel_lo(global_symbol)(t6)
	lw ra,%pcrel_lo(global_symbol)(ra)
	lw a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lbu
lbu:
	lbu a3,%lo(global_symbol)(zero)
	lbu t6,%lo(global_symbol)(t6)
	lbu ra,%lo(global_symbol)(ra)
	lbu a5,%lo(global_symbol)(a6)
	lbu a3,%pcrel_lo(global_symbol)(zero)
	lbu t6,%pcrel_lo(global_symbol)(t6)
	lbu ra,%pcrel_lo(global_symbol)(ra)
	lbu a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lhu
lhu:
	lhu a3,%lo(global_symbol)(zero)
	lhu t6,%lo(global_symbol)(t6)
	lhu ra,%lo(global_symbol)(ra)
	lhu a5,%lo(global_symbol)(a6)
	lhu a3,%pcrel_lo(global_symbol)(zero)
	lhu t6,%pcrel_lo(global_symbol)(t6)
	lhu ra,%pcrel_lo(global_symbol)(ra)
	lhu a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global lwu
lwu:
	lwu a3,%lo(global_symbol)(zero)
	lwu t6,%lo(global_symbol)(t6)
	lwu ra,%lo(global_symbol)(ra)
	lwu a5,%lo(global_symbol)(a6)
	lwu a3,%pcrel_lo(global_symbol)(zero)
	lwu t6,%pcrel_lo(global_symbol)(t6)
	lwu ra,%pcrel_lo(global_symbol)(ra)
	lwu a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global addi
addi:
	addi a3,zero,%lo(global_symbol)
	addi t6,t6,%lo(global_symbol)
	addi ra,ra,%lo(global_symbol)
	addi a5,a6,%lo(global_symbol)
	addi a3,zero,%pcrel_lo(global_symbol)
	addi t6,t6,%pcrel_lo(global_symbol)
	addi ra,ra,%pcrel_lo(global_symbol)
	addi a5,a6,%pcrel_lo(global_symbol)
	.text
	.global slti
slti:
	slti a3,zero,%lo(global_symbol)
	slti t6,t6,%lo(global_symbol)
	slti ra,ra,%lo(global_symbol)
	slti a5,a6,%lo(global_symbol)
	slti a3,zero,%pcrel_lo(global_symbol)
	slti t6,t6,%pcrel_lo(global_symbol)
	slti ra,ra,%pcrel_lo(global_symbol)
	slti a5,a6,%pcrel_lo(global_symbol)
	.text
	.global sltiu
sltiu:
	sltiu a3,zero,%lo(global_symbol)
	sltiu t6,t6,%lo(global_symbol)
	sltiu ra,ra,%lo(global_symbol)
	sltiu a5,a6,%lo(global_symbol)
	sltiu a3,zero,%pcrel_lo(global_symbol)
	sltiu t6,t6,%pcrel_lo(global_symbol)
	sltiu ra,ra,%pcrel_lo(global_symbol)
	sltiu a5,a6,%pcrel_lo(global_symbol)
	.text
	.global xori
xori:
	xori a3,zero,%lo(global_symbol)
	xori t6,t6,%lo(global_symbol)
	xori ra,ra,%lo(global_symbol)
	xori a5,a6,%lo(global_symbol)
	xori a3,zero,%pcrel_lo(global_symbol)
	xori t6,t6,%pcrel_lo(global_symbol)
	xori ra,ra,%pcrel_lo(global_symbol)
	xori a5,a6,%pcrel_lo(global_symbol)
	.text
	.global ori
ori:
	ori a3,zero,%lo(global_symbol)
	ori t6,t6,%lo(global_symbol)
	ori ra,ra,%lo(global_symbol)
	ori a5,a6,%lo(global_symbol)
	ori a3,zero,%pcrel_lo(global_symbol)
	ori t6,t6,%pcrel_lo(global_symbol)
	ori ra,ra,%pcrel_lo(global_symbol)
	ori a5,a6,%pcrel_lo(global_symbol)
	.text
	.global andi
andi:
	andi a3,zero,%lo(global_symbol)
	andi t6,t6,%lo(global_symbol)
	andi ra,ra,%lo(global_symbol)
	andi a5,a6,%lo(global_symbol)
	andi a3,zero,%pcrel_lo(global_symbol)
	andi t6,t6,%pcrel_lo(global_symbol)
	andi ra,ra,%pcrel_lo(global_symbol)
	andi a5,a6,%pcrel_lo(global_symbol)
	.text
	.global ld
ld:
	ld a3,%lo(global_symbol)(zero)
	ld t6,%lo(global_symbol)(t6)
	ld ra,%lo(global_symbol)(ra)
	ld a5,%lo(global_symbol)(a6)
	ld a3,%pcrel_lo(global_symbol)(zero)
	ld t6,%pcrel_lo(global_symbol)(t6)
	ld ra,%pcrel_lo(global_symbol)(ra)
	ld a5,%pcrel_lo(global_symbol)(a6)
	.text
	.global addiw
addiw:
	addiw a3,zero,%lo(global_symbol)
	addiw t6,t6,%lo(global_symbol)
	addiw ra,ra,%lo(global_symbol)
	addiw a5,a6,%lo(global_symbol)
	addiw a3,zero,%pcrel_lo(global_symbol)
	addiw t6,t6,%pcrel_lo(global_symbol)
	addiw ra,ra,%pcrel_lo(global_symbol)
	addiw a5,a6,%pcrel_lo(global_symbol)
	.text
	.global lui
lui:
	lui zero,%hi(global_symbol)
	lui t6,%hi(global_symbol)
	lui ra,%hi(global_symbol)
	lui a5,%hi(global_symbol)
	lui zero,%pcrel_hi(global_symbol)
	lui t6,%pcrel_hi(global_symbol)
	lui ra,%pcrel_hi(global_symbol)
	lui a5,%pcrel_hi(global_symbol)
	lui zero,%tls_ie_pcrel_hi(global_symbol)
	lui t6,%tls_ie_pcrel_hi(global_symbol)
	lui ra,%tls_ie_pcrel_hi(global_symbol)
	lui a5,%tls_ie_pcrel_hi(global_symbol)
	lui zero,%tls_gd_pcrel_hi(global_symbol)
	lui t6,%tls_gd_pcrel_hi(global_symbol)
	lui ra,%tls_gd_pcrel_hi(global_symbol)
	lui a5,%tls_gd_pcrel_hi(global_symbol)
	lui zero,%tprel_hi(global_symbol)
	lui t6,%tprel_hi(global_symbol)
	lui ra,%tprel_hi(global_symbol)
	lui a5,%tprel_hi(global_symbol)
	.text
	.global auipc
auipc:
	auipc zero,%hi(global_symbol)
	auipc t6,%hi(global_symbol)
	auipc ra,%hi(global_symbol)
	auipc a5,%hi(global_symbol)
	auipc zero,%pcrel_hi(global_symbol)
	auipc t6,%pcrel_hi(global_symbol)
	auipc ra,%pcrel_hi(global_symbol)
	auipc a5,%pcrel_hi(global_symbol)
	auipc zero,%tls_ie_pcrel_hi(global_symbol)
	auipc t6,%tls_ie_pcrel_hi(global_symbol)
	auipc ra,%tls_ie_pcrel_hi(global_symbol)
	auipc a5,%tls_ie_pcrel_hi(global_symbol)
	auipc zero,%tls_gd_pcrel_hi(global_symbol)
	auipc t6,%tls_gd_pcrel_hi(global_symbol)
	auipc ra,%tls_gd_pcrel_hi(global_symbol)
	auipc a5,%tls_gd_pcrel_hi(global_symbol)
	auipc zero,%tprel_hi(global_symbol)
	auipc t6,%tprel_hi(global_symbol)
	auipc ra,%tprel_hi(global_symbol)
	auipc a5,%tprel_hi(global_symbol)
