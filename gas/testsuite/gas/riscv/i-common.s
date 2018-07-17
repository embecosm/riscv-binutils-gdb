 .data
foodata: .word 42
 .text
footext:
	.text
	.global lui
lui:
	lui zero,0
	lui t6,1048575
	lui a6,524288
	lui a5,524287
	lui ra,1
	lui a1,945045
	lui s0,1023912
	lui a1,649584
	.text
	.global auipc
auipc:
	auipc zero,0
	auipc t6,1048575
	auipc a6,524288
	auipc a5,524287
	auipc ra,1
	auipc a5,994946
	auipc t3,189309
	auipc s4,862735
	.text
	.global jal
jal:
	jal zero,0
	jal t6,-1
	jal a6,-524288
	jal a5,524287
	jal ra,1
	jal t3,-382361
	jal gp,99145
	jal s10,134386
	.text
	.global jalr
jalr:
	jalr zero,0(zero)
	jalr t6,-1(t6)
	jalr a6,-2048(a6)
	jalr a5,2047(a5)
	jalr ra,1(ra)
	jalr a4,-1208(t0)
	jalr a6,121(s11)
	jalr a7,1500(a4)
	.text
	.global beq
beq:
	beq zero,zero,0
	beq t6,t6,-1
	beq a6,a6,-2048
	beq a5,a5,2047
	beq ra,ra,1
	beq t4,s10,-1174
	beq a4,a5,464
	beq s4,s3,-1808
	.text
	.global bne
bne:
	bne zero,zero,0
	bne t6,t6,-1
	bne a6,a6,-2048
	bne a5,a5,2047
	bne ra,ra,1
	bne tp,s11,1948
	bne s2,t5,1344
	bne tp,t0,-5
	.text
	.global blt
blt:
	blt zero,zero,0
	blt t6,t6,-1
	blt a6,a6,-2048
	blt a5,a5,2047
	blt ra,ra,1
	blt a4,s9,2039
	blt a6,a7,-732
	blt s8,s10,-728
	.text
	.global bge
bge:
	bge zero,zero,0
	bge t6,t6,-1
	bge a6,a6,-2048
	bge a5,a5,2047
	bge ra,ra,1
	bge t3,s7,-374
	bge a6,s3,-628
	bge t3,a6,-1078
	.text
	.global bltu
bltu:
	bltu zero,zero,0
	bltu t6,t6,-1
	bltu a6,a6,-2048
	bltu a5,a5,2047
	bltu ra,ra,1
	bltu s3,s4,280
	bltu s10,sp,-131
	bltu t4,s10,-218
	.text
	.global bgeu
bgeu:
	bgeu zero,zero,0
	bgeu t6,t6,-1
	bgeu a6,a6,-2048
	bgeu a5,a5,2047
	bgeu ra,ra,1
	bgeu s1,t2,-1332
	bgeu s9,t2,-41
	bgeu t1,t2,1976
	.text
	.global lb
lb:
	lb zero,0(zero)
	lb t6,-1(s0)
	lb t1,-2048(zero)
	lb a4,2047(a6)
	lb zero,1(s10)
	lb gp,-91(s6)
	lb s9,-1877(t2)
	lb t6,-277(s5)
	.text
	.global lh
lh:
	lh zero,0(zero)
	lh t6,-1(t6)
	lh a6,-2048(a6)
	lh a5,2047(a5)
	lh ra,1(ra)
	lh a7,-50(s5)
	lh zero,-1100(s2)
	lh ra,-776(ra)
	.text
	.global lw
lw:
	lw zero,0(zero)
	lw t6,-1(t6)
	lw a6,-2048(a6)
	lw a5,2047(a5)
	lw ra,1(ra)
	lw a4,1680(t6)
	lw s0,1722(zero)
	lw s7,-1320(s3)
	.text
	.global lbu
lbu:
	lbu zero,0(zero)
	lbu t6,-1(t6)
	lbu a6,-2048(a6)
	lbu a5,2047(a5)
	lbu ra,1(ra)
	lbu a5,-214(s1)
	lbu gp,1109(ra)
	lbu a2,-1439(s10)
	.text
	.global lhu
lhu:
	lhu zero,0(zero)
	lhu t6,-1(t6)
	lhu a6,-2048(a6)
	lhu a5,2047(a5)
	lhu ra,1(ra)
	lhu s6,-1942(a6)
	lhu t1,1090(s1)
	lhu s0,1063(t0)
	.text
	.global sb
sb:
	sb zero,0(zero)
	sb t6,-1(t6)
	sb a6,-2048(a6)
	sb a5,2047(a5)
	sb ra,1(ra)
	sb s8,365(tp)
	sb a0,1979(t2)
	sb t4,622(t1)
	.text
	.global sh
sh:
	sh zero,0(zero)
	sh t6,-1(t6)
	sh a6,-2048(a6)
	sh a5,2047(a5)
	sh ra,1(ra)
	sh s4,-332(t4)
	sh a5,261(s5)
	sh t6,1429(t3)
	.text
	.global sw
sw:
	sw zero,0(zero)
	sw t6,-1(t6)
	sw a6,-2048(a6)
	sw a5,2047(a5)
	sw ra,1(ra)
	sw zero,-240(a0)
	sw a5,2046(tp)
	sw a7,1356(a0)
	.text
	.global addi
addi:
	addi zero,zero,0
	addi t6,t6,-1
	addi a6,a6,-2048
	addi a5,a5,2047
	addi ra,ra,1
	addi tp,a6,-558
	addi s2,a4,-98
	addi a0,zero,667
	.text
	.global slti
slti:
	slti zero,zero,0
	slti t6,t6,-1
	slti a6,a6,-2048
	slti a5,a5,2047
	slti ra,ra,1
	slti s9,t3,673
	slti s2,s1,-352
	slti s5,s9,-84
	.text
	.global sltiu
sltiu:
	sltiu zero,zero,0
	sltiu t6,t6,-1
	sltiu a6,a6,-2048
	sltiu a5,a5,2047
	sltiu ra,ra,1
	sltiu t6,a7,-1201
	sltiu a5,a4,693
	sltiu a6,s0,1441
	.text
	.global xori
xori:
	xori zero,zero,0
	xori t6,t6,-1
	xori a6,a6,-2048
	xori a5,a5,2047
	xori ra,ra,1
	xori t2,s11,1523
	xori t5,a6,735
	xori a4,s8,2012
	.text
	.global ori
ori:
	ori zero,zero,0
	ori t6,t6,-1
	ori a6,a6,-2048
	ori a5,a5,2047
	ori ra,ra,1
	ori s3,zero,-1842
	ori a3,zero,-1111
	ori s9,a3,1961
	.text
	.global andi
andi:
	andi zero,zero,0
	andi t6,t6,-1
	andi a6,a6,-2048
	andi a5,a5,2047
	andi ra,ra,1
	andi a3,gp,-1
	andi sp,s2,1941
	andi t5,t1,473
	.text
	.global slli_shift5
slli_shift5:
	slli zero,zero,0
	slli t6,t6,31
	slli a6,a6,16
	slli a5,a5,15
	slli ra,ra,1
	slli t4,s2,27
	slli s11,t4,3
	slli s10,zero,10
	.text
	.global srli_shift5
srli_shift5:
	srli zero,zero,0
	srli t6,t6,31
	srli a6,a6,16
	srli a5,a5,15
	srli ra,ra,1
	srli s7,a5,24
	srli a6,a5,19
	srli a1,a4,29
	.text
	.global srai_shift5
srai_shift5:
	srai zero,zero,0
	srai t6,t6,31
	srai a6,a6,16
	srai a5,a5,15
	srai ra,ra,1
	srai s2,t1,4
	srai sp,a6,17
	srai a2,t0,17
	.text
	.global add
add:
	add zero,zero,zero
	add t6,t6,t6
	add a6,a6,a6
	add a5,a5,a5
	add ra,ra,ra
	add a6,t6,s5
	add a3,s5,t1
	add zero,a1,t4
	.text
	.global sub
sub:
	sub zero,zero,zero
	sub t6,t6,t6
	sub a6,a6,a6
	sub a5,a5,a5
	sub ra,ra,ra
	sub t4,a0,s2
	sub s2,s6,s7
	sub t2,tp,s7
	.text
	.global sll
sll:
	sll zero,zero,zero
	sll t6,t6,t6
	sll a6,a6,a6
	sll a5,a5,a5
	sll ra,ra,ra
	sll a0,s8,a5
	sll a1,tp,s2
	sll s10,a4,zero
	.text
	.global slt
slt:
	slt zero,zero,zero
	slt t6,t6,t6
	slt a6,a6,a6
	slt a5,a5,a5
	slt ra,ra,ra
	slt t5,t2,s3
	slt s3,sp,s10
	slt t6,s9,a7
	.text
	.global sltu
sltu:
	sltu zero,zero,zero
	sltu t6,t6,t6
	sltu a6,a6,a6
	sltu a5,a5,a5
	sltu ra,ra,ra
	sltu t2,s3,t4
	sltu gp,a7,a7
	sltu a0,sp,t6
	.text
	.global xor
xor:
	xor zero,zero,zero
	xor t6,t6,t6
	xor a6,a6,a6
	xor a5,a5,a5
	xor ra,ra,ra
	xor s6,tp,t0
	xor t5,s4,s10
	xor t0,a7,s0
	.text
	.global srl
srl:
	srl zero,zero,zero
	srl t6,t6,t6
	srl a6,a6,a6
	srl a5,a5,a5
	srl ra,ra,ra
	srl s2,t1,tp
	srl t4,zero,s2
	srl s10,s8,s0
	.text
	.global sra
sra:
	sra zero,zero,zero
	sra t6,t6,t6
	sra a6,a6,a6
	sra a5,a5,a5
	sra ra,ra,ra
	sra s0,s5,t4
	sra s11,gp,a7
	sra s9,a3,s10
	.text
	.global or
or:
	or zero,zero,zero
	or t6,t6,t6
	or a6,a6,a6
	or a5,a5,a5
	or ra,ra,ra
	or ra,s2,a1
	or a4,s2,a7
	or a4,a6,zero
	.text
	.global and
and:
	and zero,zero,zero
	and t6,t6,t6
	and a6,a6,a6
	and a5,a5,a5
	and ra,ra,ra
	and s10,t2,t6
	and sp,s2,s4
	and sp,t3,t0
	.text
	.global fence
fence:
	fence ,
	fence iorw,iorw
	fence i,i
	fence orw,orw
	fence w,w
	fence o,ow
	fence ow,iw
	fence r,io
	.text
	.global fence_i
fence_i:
	fence.i
	.text
	.global ecall
ecall:
	ecall
	.text
	.global ebreak
ebreak:
	ebreak
	.text
	.global csrrw
csrrw:
	csrrw zero,fflags,zero
	csrrw t6,fflags,t6
	csrrw a6,fflags,a6
	csrrw a5,fflags,a5
	csrrw ra,fflags,ra
	csrrw t4,fflags,a4
	csrrw sp,fflags,a6
	csrrw a4,fflags,gp
	.text
	.global csrrs
csrrs:
	csrrs zero,fflags,zero
	csrrs t6,fflags,t6
	csrrs a6,fflags,a6
	csrrs a5,fflags,a5
	csrrs ra,fflags,ra
	csrrs t1,fflags,s7
	csrrs s2,fflags,t5
	csrrs s11,fflags,t0
	.text
	.global csrrc
csrrc:
	csrrc zero,fflags,zero
	csrrc t6,fflags,t6
	csrrc a6,fflags,a6
	csrrc a5,fflags,a5
	csrrc ra,fflags,ra
	csrrc t0,fflags,t6
	csrrc a6,fflags,s4
	csrrc s6,fflags,s11
	.text
	.global csrrwi
csrrwi:
	csrrwi zero,fflags,0
	csrrwi t6,fflags,31
	csrrwi a6,fflags,16
	csrrwi a5,fflags,15
	csrrwi ra,fflags,1
	csrrwi zero,fflags,13
	csrrwi s9,fflags,29
	csrrwi s2,fflags,29
	.text
	.global csrrsi
csrrsi:
	csrrsi zero,fflags,0
	csrrsi t6,fflags,31
	csrrsi a6,fflags,16
	csrrsi a5,fflags,15
	csrrsi ra,fflags,1
	csrrsi s8,fflags,20
	csrrsi a6,fflags,21
	csrrsi s11,fflags,29
	.text
	.global csrrci
csrrci:
	csrrci zero,fflags,0
	csrrci t6,fflags,31
	csrrci a6,fflags,16
	csrrci a5,fflags,15
	csrrci ra,fflags,1
	csrrci t6,fflags,9
	csrrci a1,fflags,28
	csrrci t1,fflags,16
	.text
	.global lwu
lwu:
	lwu zero,0(zero)
	lwu t6,-1(t6)
	lwu a6,-2048(a6)
	lwu a5,2047(a5)
	lwu ra,1(ra)
	lwu t5,-1889(s5)
	lwu gp,851(t0)
	lwu s0,610(a4)
	.text
	.global ld
ld:
	ld zero,0(zero)
	ld t6,-1(t6)
	ld a6,-2048(a6)
	ld a5,2047(a5)
	ld ra,1(ra)
	ld s6,932(s6)
	ld a3,165(s4)
	ld a2,163(a3)
	.text
	.global sd
sd:
	sd zero,0(zero)
	sd t6,-1(t6)
	sd a6,-2048(a6)
	sd a5,2047(a5)
	sd ra,1(ra)
	sd t5,-517(a5)
	sd t1,-514(gp)
	sd s3,1043(t0)
	.text
	.global slli_shift6
slli_shift6:
	slli zero,zero,0
	slli t6,t6,63
	slli a6,a6,32
	slli a5,a5,31
	slli ra,ra,1
	slli t6,t0,1
	slli t5,s2,44
	slli t0,a7,37
	.text
	.global srli_shift6
srli_shift6:
	srli zero,zero,0
	srli t6,t6,63
	srli a6,a6,32
	srli a5,a5,31
	srli ra,ra,1
	srli s1,s7,26
	srli s9,a5,17
	srli s9,s8,35
	.text
	.global srai_shift6
srai_shift6:
	srai zero,zero,0
	srai t6,t6,63
	srai a6,a6,32
	srai a5,a5,31
	srai ra,ra,1
	srai t5,s9,46
	srai zero,a2,34
	srai a3,t0,18
	.text
	.global addiw
addiw:
	addiw zero,zero,0
	addiw t6,t6,-1
	addiw a6,a6,-2048
	addiw a5,a5,2047
	addiw ra,ra,1
	addiw s2,a5,1025
	addiw tp,t1,-230
	addiw a7,t4,457
	.text
	.global slliw_shift5
slliw_shift5:
	slliw zero,zero,0
	slliw t6,t6,31
	slliw a6,a6,16
	slliw a5,a5,15
	slliw ra,ra,1
	slliw s8,s1,17
	slliw a0,zero,9
	slliw s9,s7,19
	.text
	.global srliw_shift5
srliw_shift5:
	srliw zero,zero,0
	srliw t6,t6,31
	srliw a6,a6,16
	srliw a5,a5,15
	srliw ra,ra,1
	srliw s6,a3,26
	srliw s5,t3,18
	srliw a3,s6,12
	.text
	.global sraiw_shift5
sraiw_shift5:
	sraiw zero,zero,0
	sraiw t6,t6,31
	sraiw a6,a6,16
	sraiw a5,a5,15
	sraiw ra,ra,1
	sraiw s1,a5,5
	sraiw a3,a0,28
	sraiw ra,t5,1
	.text
	.global addw
addw:
	addw zero,zero,zero
	addw t6,t6,t6
	addw a6,a6,a6
	addw a5,a5,a5
	addw ra,ra,ra
	addw s2,t4,s1
	addw s11,t3,a2
	addw s2,t0,t3
	.text
	.global subw
subw:
	subw zero,zero,zero
	subw t6,t6,t6
	subw a6,a6,a6
	subw a5,a5,a5
	subw ra,ra,ra
	subw a3,t1,s5
	subw s10,s1,s2
	subw s10,a0,a2
	.text
	.global sllw
sllw:
	sllw zero,zero,zero
	sllw t6,t6,t6
	sllw a6,a6,a6
	sllw a5,a5,a5
	sllw ra,ra,ra
	sllw s1,t1,s2
	sllw s9,zero,t5
	sllw s2,s11,s0
	.text
	.global srlw
srlw:
	srlw zero,zero,zero
	srlw t6,t6,t6
	srlw a6,a6,a6
	srlw a5,a5,a5
	srlw ra,ra,ra
	srlw t1,s6,a1
	srlw s4,s4,ra
	srlw t0,s7,a6
	.text
	.global sraw
sraw:
	sraw zero,zero,zero
	sraw t6,t6,t6
	sraw a6,a6,a6
	sraw a5,a5,a5
	sraw ra,ra,ra
	sraw zero,gp,s11
	sraw t3,a3,t6
	sraw s4,sp,gp
  .text
  .global uret
uret:
  uret
  .text
  .global sret
sret:
  sret
  .text
  .global hret
hret:
  hret
  .text
  .global mret
mret:
  mret
  .text
  .global dret
dret:
  dret
  .text
  .global wfi
wfi:
  wfi
  .text
  .global sfence_vm
sfence_vm:
  sfence.vm zero
  sfence.vm gp
  sfence.vm x5
  sfence.vm s11
  sfence.vm t2
  sfence.vm x31
  .text
  .global sfence_vma
sfence_vma:
  sfence.vma zero,zero
  sfence.vma zero,t5
  sfence.vma s7,a5
  sfence.vma x17,ra
  sfence.vma a6,s10
  sfence.vma x31,t1
  .text
  .global csr_abs
csr_abs:
  csrrw a4,0x7c1,gp
  csrrs s11,0x7c1,t0
  csrrc s6,0x7c1,s11
  csrrwi s2,0x7c1,29
  csrrsi s11,0x7c1,29
  csrrci t1,0x7c1,16
