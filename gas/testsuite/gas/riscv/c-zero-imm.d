#as:
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <.text>:
[ 	]+0:[ 	]+4501[ 	]+li[ 	]+a0,0
[ 	]+2:[ 	]+4581[ 	]+li[ 	]+a1,0
[ 	]+4:[ 	]+8a01[ 	]+andi[ 	]+a2,a2,0
[ 	]+6:[ 	]+8a81[ 	]+andi[ 	]+a3,a3,0
[ 	]+8:[ 	]+0001[ 	]+nop
[ 	]+a:[ 	]+0781[ 	]+addi[ 	]+a5,a5,0
[ 	]+c:[ 	]+0682[ 	]+c.slli64[ 	]+a3
[ 	]+e:[ 	]+8301[ 	]+c.srli64[ 	]+a4
[ 	]+10:[ 	]+8781[ 	]+c.srai64[ 	]+a5
#...
