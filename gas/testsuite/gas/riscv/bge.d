#as:
#objdump: -d

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <foo>:
[ 	]+0:[ 	]+00c5d063[ 	]+bge[ 	]+a1,a2,0
[ 	]+4:[ 	]+feb65ee3[ 	]+bge[ 	]+a2,a1,-4
[ 	]+8:[ 	]+fec5fce3[ 	]+bgeu[ 	]+a1,a2,-8
[ 	]+c:[ 	]+feb67ae3[ 	]+bgeu[ 	]+a2,a1,-12
