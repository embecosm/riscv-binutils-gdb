#as: -march=rv32i -mabi=ilp32
#objdump: -dr

.*:     file format elf32-littleriscv


Disassembly of section .text:

0+000 <.text>:
[ 	]+0:[ 	]+00100513[ 	]+li[ 	]+a0,1
[ 	]+4:[ 	]+00001537[ 	]+lui[ 	]+a0,0x1
[ 	]+8:[ 	]+00001537[ 	]+lui[ 	]+a0,0x1
[ 	]+c:[ 	]+00150513[ 	]+addi[ 	]+a0,a0,1 # 0x00000001
[ 	]+10:[ 	]+00001537[ 	]+lui[ 	]+a0,0x1
[ 	]+14:[ 	]+fff50513[ 	]+addi[ 	]+a0,a0,-1 # 0xffffffff
[ 	]+18:[ 	]+80000537[ 	]+lui[ 	]+a0,0x80000
[ 	]+1c:[ 	]+fff50513[ 	]+addi[ 	]+a0,a0,-1 # 0xffffffff
[ 	]+20:[ 	]+00000513[ 	]+li[ 	]+a0,0
[ 	]+24:[ 	]+fff00513[ 	]+li[ 	]+a0,-1
