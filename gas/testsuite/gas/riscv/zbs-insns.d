#as: -march=rv64iZbs
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+28f797b3[ 	]+sbset[ 	]+a5,a5,a5
[ 	]+4:[ 	]+48f797b3[ 	]+sbclr[ 	]+a5,a5,a5
[ 	]+8:[ 	]+68f797b3[ 	]+sbinv[ 	]+a5,a5,a5
[ 	]+c:[ 	]+48f7d7b3[ 	]+sbext[ 	]+a5,a5,a5
[ 	]+10:[ 	]+28579793[ 	]+sbseti[ 	]+a5,a5,0x5
[ 	]+14:[ 	]+48579793[ 	]+sbclri[ 	]+a5,a5,0x5
[ 	]+18:[ 	]+68579793[ 	]+sbinvi[ 	]+a5,a5,0x5
[ 	]+1c:[ 	]+4857d793[ 	]+sbexti[ 	]+a5,a5,0x5