#as: -march=rv32gb
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+40f7f7b3[ 	]+andn a5,a5,a5
[ 	]+4:[ 	]+40f7e7b3[ 	]+orn a5,a5,a5
[ 	]+8:[ 	]+40f7c7b3[ 	]+xnor a5,a5,a5