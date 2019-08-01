#as: -march=rv64gb
#objdump: -dr

.*:[ 	]+file format .*


Disassembly of section .text:

0+000 <target>:
[ 	]+0:[ 	]+20511093[ 	]+sloi[ 	]+ra,sp,0x5
[ 	]+4:[ 	]+20515093[ 	]+sroi[ 	]+ra,sp,0x5
[ 	]+8:[ 	]+60515093[ 	]+rori[ 	]+ra,sp,0x5
[ 	]+c:[ 	]+28511093[ 	]+sbseti[ 	]+ra,sp,0x5
[ 	]+10:[ 	]+48511093[ 	]+sbclri[ 	]+ra,sp,0x5
[ 	]+14:[ 	]+68511093[ 	]+sbinvi[ 	]+ra,sp,0x5
[ 	]+18:[ 	]+48515093[ 	]+sbexti[ 	]+ra,sp,0x5
[ 	]+1c:[ 	]+1c515093[ 	]+fsri[ 	]+ra,sp,gp,0x5
[ 	]+20:[ 	]+2051109b[ 	]+sloiw[ 	]+ra,sp,0x5
[ 	]+24:[ 	]+2051509b[ 	]+sroiw[ 	]+ra,sp,0x5
[ 	]+28:[ 	]+6051509b[ 	]+roriw[ 	]+ra,sp,0x5
[ 	]+2c:[ 	]+2851109b[ 	]+sbsetiw[ 	]+ra,sp,0x5
[ 	]+30:[ 	]+4851109b[ 	]+sbclriw[ 	]+ra,sp,0x5
[ 	]+34:[ 	]+6851109b[ 	]+sbinviw[ 	]+ra,sp,0x5
[ 	]+38:[ 	]+1c51509b[ 	]+fsriw[ 	]+ra,sp,gp,0x5