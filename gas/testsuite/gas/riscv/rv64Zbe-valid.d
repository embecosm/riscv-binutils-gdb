#as: -march=rv64iZbe
#objdump: -dr
#source: rv64Zbe-valid.s

.*:[ 	]+file format .*


Disassembly of section .text:

00000000 <.text>:
[ 	]+0:[ 	]+087322b3[ 	]+bdepw[ 	]+t0,t1,t2
[ 	]+4:[ 	]+087362b3[ 	]+bextw[ 	]+t0,t1,t2