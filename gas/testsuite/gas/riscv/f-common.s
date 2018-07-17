	.text
	.global flw
flw:
	flw f0,0(x0)
	flw f6,2(x0)
	flw f6,0(x2)
	flw f0,6(x2)
	flw f7,3(x5)
	flw f31,31(x31)
	flw f19,27(x1)

	.text
	.global fsw
fsw:
	fsw f0,0(x0)
	fsw f0,23(x15)
	fsw f12,0(x3)
	fsw f19,27(x0)
	fsw f8,8(x8)
	fsw f7,31(x5)
	fsw f31,3(x1)
	fsw f19,27(x31)

	.text
	.global fmadd.s
fmadd.s:
	fmadd.s f0,f0,f0,f0
	fmadd.s f7,f5,f4,f3
	fmadd.s f31,f31,f31,f31
	fmadd.s f19,f1,f7,f27
	fmadd.s f3,f5,f5,f23
	fmadd.s f5,f5,f4,f3
	fmadd.s f31,f3,f5,f5
	fmadd.s f19,f2,f0,f27

	.text
	.global fmsub.s
fmsub.s:
	fmsub.s f0,f0,f0,f0
	fmsub.s f7,f5,f4,f3
	fmsub.s f31,f31,f31,f31
	fmsub.s f19,f1,f7,f27
	fmsub.s f3,f5,f5,f23
	fmsub.s f5,f5,f4,f3
	fmsub.s f31,f3,f5,f5
	fmsub.s f19,f2,f0,f27

	.text
	.global fnmsub.s
fnmsub.s:
	fnmsub.s f0,f0,f0,f0
	fnmsub.s f7,f5,f4,f3
	fnmsub.s f31,f31,f31,f31
	fnmsub.s f19,f1,f7,f27
	fnmsub.s f3,f5,f5,f23
	fnmsub.s f5,f5,f4,f3
	fnmsub.s f31,f3,f5,f5
	fnmsub.s f19,f2,f0,f27

	.text
	.global fnmadd.s
fnmadd.s:
	fnmadd.s f0,f0,f0,f0
	fnmadd.s f7,f5,f4,f3
	fnmadd.s f31,f31,f31,f31
	fnmadd.s f19,f1,f7,f27
	fnmadd.s f3,f5,f5,f23
	fnmadd.s f5,f5,f4,f3
	fnmadd.s f31,f3,f5,f5
	fnmadd.s f19,f2,f0,f27

	.text
	.global fadd.s
fadd.s:
	fadd.s f1,f2,f8
	fadd.s f9,f10,f11
	fadd.s f12,f13,f14
	fadd.s f15,f16,f17
	fadd.s f18,f20,f21
	fadd.s f22,f23,f24
	fadd.s f25,f26,f28
	fadd.s f29,f30,f31

	.text
	.global fsub.s
fsub.s:
	fsub.s f0,f0,f0
	fsub.s f7,f5,f4
	fsub.s f31,f31,f31
	fsub.s f19,f1,f27
	fsub.s f3,f5,f5
	fsub.s f5,f5,f3
	fsub.s f31,f3,f5
	fsub.s f19,f0,f27

	.text
	.global fmul.s
fmul.s:
	fmul.s f0,f0,f0
	fmul.s f7,f5,f4
	fmul.s f31,f31,f31
	fmul.s f19,f1,f27
	fmul.s f3,f5,f5
	fmul.s f5,f5,f3
	fmul.s f31,f3,f5
	fmul.s f19,f0,f27

	.text
	.global fdiv.s
fdiv.s:
	fdiv.s f0,f0,f0
	fdiv.s f7,f5,f4
	fdiv.s f31,f31,f31
	fdiv.s f19,f1,f27
	fdiv.s f3,f5,f5
	fdiv.s f5,f5,f3
	fdiv.s f31,f3,f5
	fdiv.s f19,f0,f27

	.text
	.global fsgnj.s
fsgnj.s:
	fsgnj.s f19,f15,f30
	fsgnj.s f7,f5,f3
	fsgnj.s f14,f1,f27
	fsgnj.s f9,f0,f3
	fsgnj.s f0,f25,f13
	fsgnj.s f10,f1,f0
	# pseudo
	fsgnj.s f0,f0,f0
	fsgnj.s f27,f23,f23
	fsgnj.s f31,f31,f31
	fsgnj.s f1,f10,f10
	fsgnj.s f7,f3,f3
	fsgnj.s f0,f1,f1

	.text
	.global fsgnjn.s
fsgnjn.s:
	fsgnjn.s f19,f15,f30
	fsgnjn.s f7,f5,f3
	fsgnjn.s f14,f1,f27
	fsgnjn.s f9,f0,f3
	fsgnjn.s f0,f25,f13
	fsgnjn.s f10,f1,f0
	# pseudo
	fsgnjn.s f0,f0,f0
	fsgnjn.s f27,f23,f23
	fsgnjn.s f31,f31,f31
	fsgnjn.s f1,f10,f10
	fsgnjn.s f7,f3,f3
	fsgnjn.s f0,f1,f1

	.text
	.global fsgnjx.s
fsgnjx.s:
	fsgnjx.s f19,f15,f30
	fsgnjx.s f7,f5,f3
	fsgnjx.s f14,f1,f27
	fsgnjx.s f9,f0,f3
	fsgnjx.s f0,f25,f13
	fsgnjx.s f10,f1,f0
	# pseudo
	fsgnjx.s f0,f0,f0
	fsgnjx.s f27,f23,f23
	fsgnjx.s f31,f31,f31
	fsgnjx.s f1,f10,f10
	fsgnjx.s f7,f3,f3
	fsgnjx.s f0,f1,f1

	.text
	.global fmin.s
fmin.s:
	fmin.s f0,f0,f0
	fmin.s f7,f5,f4
	fmin.s f31,f31,f31
	fmin.s f19,f1,f27
	fmin.s f3,f5,f5
	fmin.s f5,f5,f3
	fmin.s f31,f3,f5
	fmin.s f19,f0,f27

	.text
	.global fmax.s
fmax.s:
	fmax.s f0,f0,f0
	fmax.s f7,f5,f4
	fmax.s f31,f31,f31
	fmax.s f19,f1,f27
	fmax.s f3,f5,f5
	fmax.s f5,f5,f3
	fmax.s f31,f3,f5
	fmax.s f19,f0,f27

	.text
	.global feq.s
feq.s:
	feq.s x0,f0,f0
	feq.s x7,f5,f4
	feq.s x31,f31,f31
	feq.s x19,f1,f27
	feq.s x3,f5,f5
	feq.s x5,f5,f3
	feq.s x31,f3,f5
	feq.s x0,f19,f27

	.text
	.global flt.s
flt.s:
	flt.s x0,f0,f0
	flt.s x7,f5,f4
	flt.s x31,f31,f31
	flt.s x19,f1,f27
	flt.s x3,f5,f5
	flt.s x5,f5,f3
	flt.s x31,f3,f5
	flt.s x0,f19,f27

	.text
	.global fle.s
fle.s:
	fle.s x0,f0,f0
	fle.s x7,f5,f4
	fle.s x31,f31,f31
	fle.s x19,f1,f27
	fle.s x3,f5,f5
	fle.s x5,f5,f3
	fle.s x31,f3,f5
	fle.s x0,f19,f27

	.text
	.global fsqrt.s
fsqrt.s:
	fsqrt.s f0,f0
	fsqrt.s f7,f5
	fsqrt.s f31,f31
	fsqrt.s f1,f27
	fsqrt.s f5,f5
	fsqrt.s f5,f3
	fsqrt.s f31,f5
	fsqrt.s f0,f7

	.text
	.global fcvt.w.s
fcvt.w.s:
	fcvt.w.s x0,f0
	fcvt.w.s x7,f5
	fcvt.w.s x31,f31
	fcvt.w.s x1,f27
	fcvt.w.s x5,f5
	fcvt.w.s x5,f3
	fcvt.w.s x31,f5
	fcvt.w.s x0,f7

	.text
	.global fcvt.wu.s
fcvt.wu.s:
	fcvt.wu.s x0,f0
	fcvt.wu.s x7,f5
	fcvt.wu.s x31,f31
	fcvt.wu.s x1,f27
	fcvt.wu.s x5,f5
	fcvt.wu.s x5,f3
	fcvt.wu.s x31,f5
	fcvt.wu.s x0,f7

	.text
	.global fmv.x.w
fmv.x.w:
	fmv.x.s x0,f0
	fmv.x.s x7,f5
	fmv.x.s x31,f31
	fmv.x.s x1,f27
	fmv.x.s x5,f5
	fmv.x.s x5,f3
	fmv.x.s x31,f5
	fmv.x.s x0,f7

	.text
	.global fclass.s
fclass.s:
	fclass.s x0,f0
	fclass.s x7,f5
	fclass.s x31,f31
	fclass.s x1,f27
	fclass.s x5,f5
	fclass.s x5,f3
	fclass.s x31,f5
	fclass.s x0,f7

	.text
	.global fcvt.s.w
fcvt.s.w:
	fcvt.s.w f0,x0
	fcvt.s.w f7,x5
	fcvt.s.w f31,x31
	fcvt.s.w f1,x27
	fcvt.s.w f5,x5
	fcvt.s.w f5,x3
	fcvt.s.w f31,x5
	fcvt.s.w f0,x7

	.text
	.global fcvt.s.wu
fcvt.s.wu:
	fcvt.s.wu f0,x0
	fcvt.s.wu f7,x5
	fcvt.s.wu f31,x31
	fcvt.s.wu f1,x27
	fcvt.s.wu f5,x5
	fcvt.s.wu f5,x3
	fcvt.s.wu f31,x5
	fcvt.s.wu f0,x7

	.text
	.global fmv.w.x
fmv.w.x:
	fmv.s.x f0,x0
	fmv.s.x f7,x5
	fmv.s.x f31,x31
	fmv.s.x f1,x27
	fmv.s.x f5,x5
	fmv.s.x f5,x3
	fmv.s.x f31,x5
	fmv.s.x f0,x7

	.text
	.global fcvt.l.s
fcvt.l.s:
	fcvt.l.s x0,f0
	fcvt.l.s x7,f5
	fcvt.l.s x31,f31
	fcvt.l.s x1,f27
	fcvt.l.s x5,f5
	fcvt.l.s x5,f3
	fcvt.l.s x31,f5
	fcvt.l.s x0,f7

	.text
	.global fcvt.lu.s
fcvt.lu.s:
	fcvt.lu.s x0,f0
	fcvt.lu.s x7,f5
	fcvt.lu.s x31,f31
	fcvt.lu.s x1,f27
	fcvt.lu.s x5,f5
	fcvt.lu.s x5,f3
	fcvt.lu.s x31,f5
	fcvt.lu.s x0,f7

	.text
	.global fcvt.s.l
fcvt.s.l:
	fcvt.s.l f0,x0
	fcvt.s.l f7,x5
	fcvt.s.l f31,x31
	fcvt.s.l f1,x27
	fcvt.s.l f5,x5
	fcvt.s.l f5,x3
	fcvt.s.l f31,x5
	fcvt.s.l f0,x7

	.text
	.global fcvt.s.lu
fcvt.s.lu:
	fcvt.s.lu f0,x0
	fcvt.s.lu f7,x5
	fcvt.s.lu f31,x31
	fcvt.s.lu f1,x27
	fcvt.s.lu f5,x5
	fcvt.s.lu f5,x3
	fcvt.s.lu f31,x5
	fcvt.s.lu f0,x7


