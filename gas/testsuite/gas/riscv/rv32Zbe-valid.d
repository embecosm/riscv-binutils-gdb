#as: -march=rv32iZbe
#objdump: -dr
#source: rv32Zbe-valid.s

.*:[ 	]+file format .*


Disassembly of section .text:

00000000 <.text>:
[ 	]+0:[ 	]+087322b3[ 	]+bdep[ 	]+t0,t1,t2
[ 	]+4:[ 	]+087362b3[ 	]+bext[ 	]+t0,t1,t2