#objdump: -dMintel
#source: intel-cmps.s
#name: x86 Intel cmps (32-bit object)

.*: +file format .*

Disassembly of section .text:

0+ <cmps>:
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	64 a6 *	cmps +BYTE PTR fs:\[esi\],(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a6 *	cmps(b *| +BYTE PTR (ds:)?\[esi\]),(BYTE PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	64 66 a7 *	cmps +WORD PTR fs:\[esi\],(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	66 a7 *	cmps(w *| +WORD PTR (ds:)?\[esi\]),(WORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	64 a7 *	cmps +DWORD PTR fs:?\[esi\],(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
[ 	]*[a-f0-9]+:	a7 *	cmps(d *| +DWORD PTR (ds:)?\[esi\]),(DWORD PTR )?es:\[edi\]
#pass
