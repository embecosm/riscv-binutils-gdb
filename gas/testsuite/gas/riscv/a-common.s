	.text
	.global lr.w
lr.w:
	lr.w x2, (x1)
	lr.w t0, (a0)
	lr.w x0, (x31)
	lr.w x31, (x0)

	.text
	.global lr.w.aq
lr.w.aq:
	lr.w.aq x2, (x1)
	lr.w.aq t0, (a0)
	lr.w.aq x0, (x31)
	lr.w.aq x31, (x0)

	.text
	.global lr.w.rl
lr.w.rl:
	lr.w.rl x2, (x1)
	lr.w.rl t0, (a0)
	lr.w.rl x0, (x31)
	lr.w.rl x31, (x0)

	.text
	.global lr.w.aqrl
lr.w.aqrl:
	lr.w.aqrl x2, (x1)
	lr.w.aqrl t0, (a0)
	lr.w.aqrl x0, (x31)
	lr.w.aqrl x31, (x0)

	.text
	.global sc.w
sc.w:
	sc.w x2, x4, (x1)
	sc.w a0, a2, (a0)
	sc.w x0, x0, (x31)
	sc.w x31, x31, (x0)

	.text
	.global sc.w.aq
sc.w.aq:
	sc.w.aq x2, x4, (x1)
	sc.w.aq a0, a2, (a0)
	sc.w.aq x0, x0, (x31)
	sc.w.aq x31, x31, (x0)

	.text
	.global sc.w.rl
sc.w.rl:
	sc.w.rl x2, x4, (x1)
	sc.w.rl a0, a2, (a0)
	sc.w.rl x0, x0, (x31)
	sc.w.rl x31, x31, (x0)

	.text
	.global sc.w.aqrl
sc.w.aqrl:
	sc.w.aqrl x2, x4, (x1)
	sc.w.aqrl a0, a2, (a0)
	sc.w.aqrl x0, x0, (x31)
	sc.w.aqrl x31, x31, (x0)

	.text
	.global amoswap.w
amoswap.w:
	amoswap.w x2, x4, (x1)
	amoswap.w t0, t0, (a0)
	amoswap.w x0, x0, (x31)
	amoswap.w x31, x31, (x0)

	.text
	.global amoswap.w.aq
amoswap.w.aq:
	amoswap.w.aq x2, x4, (x1)
	amoswap.w.aq t0, t0, (a0)
	amoswap.w.aq x0, x0, (x31)
	amoswap.w.aq x31, x31, (x0)

	.text
	.global amoswap.w.rl
amoswap.w.rl:
	amoswap.w.rl x2, x4, (x1)
	amoswap.w.rl x0, x0, (a0)
	amoswap.w.rl x0, x0, (x31)
	amoswap.w.rl x31, x31, (x0)

	.text
	.global amoswap.w.aqrl
amoswap.w.aqrl:
	amoswap.w.aqrl x2, x4, (x1)
	amoswap.w.aqrl t0, t0, (a0)
	amoswap.w.aqrl x0, x0, (x31)
	amoswap.w.aqrl x31, x31, (x0)

	.text
	.global amoadd.w
amoadd.w:
	amoadd.w x2, x4, (x1)
	amoadd.w t0, t0, (a0)
	amoadd.w x0, x0, (x31)
	amoadd.w x31, x31, (x0)

	.text
	.global amoadd.w.aq
amoadd.w.aq:
	amoadd.w.aq x2, x4, (x1)
	amoadd.w.aq t0, t0, (a0)
	amoadd.w.aq x0, x0, (x31)
	amoadd.w.aq x31, x31, (x0)

	.text
	.global amoadd.w.rl
amoadd.w.rl:
	amoadd.w.rl x2, x4, (x1)
	amoadd.w.rl x0, x0, (a0)
	amoadd.w.rl x0, x0, (x31)
	amoadd.w.rl x31, x31, (x0)

	.text
	.global amoadd.w.aqrl
amoadd.w.aqrl:
	amoadd.w.aqrl x2, x4, (x1)
	amoadd.w.aqrl t0, t0, (a0)
	amoadd.w.aqrl x0, x0, (x31)
	amoadd.w.aqrl x31, x31, (x0)

	.text
	.global amoxor.w
amoxor.w:
	amoxor.w x2, x4, (x1)
	amoxor.w t0, t0, (a0)
	amoxor.w x0, x0, (x31)
	amoxor.w x31, x31, (x0)

	.text
	.global amoxor.w.aq
amoxor.w.aq:
	amoxor.w.aq x2, x4, (x1)
	amoxor.w.aq t0, t0, (a0)
	amoxor.w.aq x0, x0, (x31)
	amoxor.w.aq x31, x31, (x0)

	.text
	.global amoxor.w.rl
amoxor.w.rl:
	amoxor.w.rl x2,x4,(x1)
	amoxor.w.rl x0, x0, (a0)
	amoxor.w.rl x0, x0, (x31)
	amoxor.w.rl x31, x31, (x0)

	.text
	.global amoxor.w.aqrl
amoxor.w.aqrl:
	amoxor.w.aqrl x2, x4, (x1)
	amoxor.w.aqrl t0, t0, (a0)
	amoxor.w.aqrl x0, x0, (x31)
	amoxor.w.aqrl x31, x31, (x0)

	.text
	.global amoand.w
amoand.w:
	amoand.w x2, x4, (x1)
	amoand.w t0, t0, (a0)
	amoand.w x0, x0, (x31)
	amoand.w x31, x31, (x0)

	.text
	.global amoand.w.aq
amoand.w.aq:
	amoand.w.aq x2, x4, (x1)
	amoand.w.aq t0, t0, (a0)
	amoand.w.aq x0, x0, (x31)
	amoand.w.aq x31, x31, (x0)

	.text
	.global amoand.w.rl
amoand.w.rl:
	amoand.w.rl x2,x4,(x1)
	amoand.w.rl x0, x0, (a0)
	amoand.w.rl x0, x0, (x31)
	amoand.w.rl x31, x31, (x0)

	.text
	.global amoand.w.aqrl
amoand.w.aqrl:
	amoand.w.aqrl x2, x4, (x1)
	amoand.w.aqrl t0, t0, (a0)
	amoand.w.aqrl x0, x0, (x31)
	amoand.w.aqrl x31, x31, (x0)

	.text
	.global amoor.w
amoor.w:
	amoor.w x2, x4, (x1)
	amoor.w t0, t0, (a0)
	amoor.w x0, x0, (x31)
	amoor.w x31, x31, (x0)

	.text
	.global amoor.w.aq
amoor.w.aq:
	amoor.w.aq x2, x4, (x1)
	amoor.w.aq t0, t0, (a0)
	amoor.w.aq x0, x0, (x31)
	amoor.w.aq x31, x31, (x0)

	.text
	.global amoor.w.rl
amoor.w.rl:
	amoor.w.rl x2, x4, (x1)
	amoor.w.rl x0, x0, (a0)
	amoor.w.rl x0, x0, (x31)
	amoor.w.rl x31, x31, (x0)

	.text
	.global amoor.w.aqrl
amoor.w.aqrl:
	amoor.w.aqrl x2, x4, (x1)
	amoor.w.aqrl t0, t0, (a0)
	amoor.w.aqrl x0, x0, (x31)
	amoor.w.aqrl x31, x31, (x0)

	.text
	.global amomin.w
amomin.w:
	amomin.w x2, x4, (x1)
	amomin.w t0, t0, (a0)
	amomin.w x0, x0, (x31)
	amomin.w x31, x31, (x0)

	.text
	.global amomin.w.aq
amomin.w.aq:
	amomin.w.aq x2, x4, (x1)
	amomin.w.aq t0, t0, (a0)
	amomin.w.aq x0, x0, (x31)
	amomin.w.aq x31, x31, (x0)

	.text
	.global amomin.w.rl
amomin.w.rl:
	amomin.w.rl x2, x4, (x1)
	amomin.w.rl x0, x0, (a0)
	amomin.w.rl x0, x0, (x31)
	amomin.w.rl x31, x31, (x0)

	.text
	.global amomin.w.aqrl
amomin.w.aqrl:
	amomin.w.aqrl x2, x4, (x1)
	amomin.w.aqrl t0, t0, (a0)
	amomin.w.aqrl x0, x0, (x31)
	amomin.w.aqrl x31, x31, (x0)

	.text
	.global amomax.w
amomax.w:
	amomax.w x2, x4, (x1)
	amomax.w t0, t0, (a0)
	amomax.w x0, x0, (x31)
	amomax.w x31, x31, (x0)

	.text
	.global amomax.w.aq
amomax.w.aq:
	amomax.w.aq x2, x4, (x1)
	amomax.w.aq t0, t0, (a0)
	amomax.w.aq x0, x0, (x31)
	amomax.w.aq x31, x31, (x0)

	.text
	.global amomax.w.rl
amomax.w.rl:
	amomax.w.rl x2, x4, (x1)
	amomax.w.rl x0, x0, (a0)
	amomax.w.rl x0, x0, (x31)
	amomax.w.rl x31, x31, (x0)

	.text
	.global amomax.w.aqrl
amomax.w.aqrl:
	amomax.w.aqrl x2, x4, (x1)
	amomax.w.aqrl t0, t0, (a0)
	amomax.w.aqrl x0, x0, (x31)
	amomax.w.aqrl x31, x31, (x0)

	.text
	.global amominu.w
amominu.w:
	amominu.w x2, x4, (x1)
	amominu.w t0, t0, (a0)
	amominu.w x0, x0, (x31)
	amominu.w x31, x31, (x0)

	.text
	.global amominu.w.aq
amominu.w.aq:
	amominu.w.aq x2, x4, (x1)
	amominu.w.aq t0, t0, (a0)
	amominu.w.aq x0, x0, (x31)
	amominu.w.aq x31, x31, (x0)

	.text
	.global amominu.w.rl
amominu.w.rl:
	amominu.w.rl x2, x4, (x1)
	amominu.w.rl x0, x0, (a0)
	amominu.w.rl x0, x0, (x31)
	amominu.w.rl x31, x31, (x0)

	.text
	.global amominu.w.aqrl
amominu.w.aqrl:
	amominu.w.aqrl x2, x4, (x1)
	amominu.w.aqrl t0, t0, (a0)
	amominu.w.aqrl x0, x0, (x31)
	amominu.w.aqrl x31, x31, (x0)

	.text
	.global amomaxu.w
amomaxu.w:
	amomaxu.w x2, x4, (x1)
	amomaxu.w t0, t0, (a0)
	amomaxu.w x0, x0, (x31)
	amomaxu.w x31, x31, (x0)

	.text
	.global amomaxu.w.aq
amomaxu.w.aq:
	amomaxu.w.aq x2,x4,(x1)
	amomaxu.w.aq t0, t0, (a0)
	amomaxu.w.aq x0, x0, (x31)
	amomaxu.w.aq x31, x31, (x0)

	.text
	.global amomaxu.w.rl
amomaxu.w.rl:
	amomaxu.w.rl x2,x4,(x1)
	amomaxu.w.rl x0, x0, (a0)
	amomaxu.w.rl x0, x0, (x31)
	amomaxu.w.rl x31, x31, (x0)

	.text
	.global amomaxu.w.aqrl
amomaxu.w.aqrl:
	amomaxu.w.aqrl x2,x4,(x1)
	amomaxu.w.aqrl t0, t0, (a0)
	amomaxu.w.aqrl x0, x0, (x31)
	amomaxu.w.aqrl x31, x31, (x0)

	.text
	.global lr.d
lr.d:
	lr.d x2, (x1)
	lr.d t0, (a0)
	lr.d x0, (x31)
	lr.d x31, (x0)

	.text
	.global lr.d.aq
lr.d.aq:
	lr.d.aq x2, (x1)
	lr.d.aq t0, (a0)
	lr.d.aq x0, (x31)
	lr.d.aq x31, (x0)

	.text
	.global lr.d.rl
lr.d.rl:
	lr.d.rl x2, (x1)
	lr.d.rl t0, (a0)
	lr.d.rl x0, (x31)
	lr.d.rl x31, (x0)

	.text
	.global lr.d.aqrl
lr.d.aqrl:
	lr.d.aqrl x2, (x1)
	lr.d.aqrl t0, (a0)
	lr.d.aqrl x0, (x31)
	lr.d.aqrl x31, (x0)

	.text
	.global sc.d
sc.d:
	sc.d x2, x4, (x1)
	sc.d a0, a2, (a0)
	sc.d x0, x0, (x31)
	sc.d x31, x31, (x0)

	.text
	.global sc.d.aq
sc.d.aq:
	sc.d.aq x2, x4, (x1)
	sc.d.aq a0, a2, (a0)
	sc.d.aq x0, x0, (x31)
	sc.d.aq x31, x31, (x0)

	.text
	.global sc.d.rl
sc.d.rl:
	sc.d.rl x2, x4, (x1)
	sc.d.rl a0, a2, (a0)
	sc.d.rl x0, x0, (x31)
	sc.d.rl x31, x31, (x0)

	.text
	.global sc.d.aqrl
sc.d.aqrl:
	sc.d.aqrl x2, x4, (x1)
	sc.d.aqrl a0, a2, (a0)
	sc.d.aqrl x0, x0, (x31)
	sc.d.aqrl x31, x31, (x0)

	.text
	.global amoswap.d
amoswap.d:
	amoswap.d x2, x4, (x1)
	amoswap.d t0, t0, (a0)
	amoswap.d x0, x0, (x31)
	amoswap.d x31, x31, (x0)

	.text
	.global amoswap.d.aq
amoswap.d.aq:
	amoswap.d.aq x2, x4, (x1)
	amoswap.d.aq t0, t0, (a0)
	amoswap.d.aq x0, x0, (x31)
	amoswap.d.aq x31, x31, (x0)

	.text
	.global amoswap.d.rl
amoswap.d.rl:
	amoswap.d.rl x2, x4, (x1)
	amoswap.d.rl x0, x0, (a0)
	amoswap.d.rl x0, x0, (x31)
	amoswap.d.rl x31, x31, (x0)

	.text
	.global amoswap.d.aqrl
amoswap.d.aqrl:
	amoswap.d.aqrl x2, x4, (x1)
	amoswap.d.aqrl t0, t0, (a0)
	amoswap.d.aqrl x0, x0, (x31)
	amoswap.d.aqrl x31, x31, (x0)

	.text
	.global amoadd.d
amoadd.d:
	amoadd.d x2, x4, (x1)
	amoadd.d t0, t0, (a0)
	amoadd.d x0, x0, (x31)
	amoadd.d x31, x31, (x0)

	.text
	.global amoadd.d.aq
amoadd.d.aq:
	amoadd.d.aq x2, x4, (x1)
	amoadd.d.aq t0, t0, (a0)
	amoadd.d.aq x0, x0, (x31)
	amoadd.d.aq x31, x31, (x0)

	.text
	.global amoadd.d.rl
amoadd.d.rl:
	amoadd.d.rl x2, x4, (x1)
	amoadd.d.rl x0, x0, (a0)
	amoadd.d.rl x0, x0, (x31)
	amoadd.d.rl x31, x31, (x0)

	.text
	.global amoadd.d.aqrl
amoadd.d.aqrl:
	amoadd.d.aqrl x2, x4, (x1)
	amoadd.d.aqrl t0, t0, (a0)
	amoadd.d.aqrl x0, x0, (x31)
	amoadd.d.aqrl x31, x31, (x0)

	.text
	.global amoxor.d
amoxor.d:
	amoxor.d x2, x4, (x1)
	amoxor.d t0, t0, (a0)
	amoxor.d x0, x0, (x31)
	amoxor.d x31, x31, (x0)

	.text
	.global amoxor.d.aq
amoxor.d.aq:
	amoxor.d.aq x2, x4, (x1)
	amoxor.d.aq t0, t0, (a0)
	amoxor.d.aq x0, x0, (x31)
	amoxor.d.aq x31, x31, (x0)

	.text
	.global amoxor.d.rl
amoxor.d.rl:
	amoxor.d.rl x2, x4, (x1)
	amoxor.d.rl x0, x0, (a0)
	amoxor.d.rl x0, x0, (x31)
	amoxor.d.rl x31, x31, (x0)

	.text
	.global amoxor.d.aqrl
amoxor.d.aqrl:
	amoxor.d.aqrl x2, x4, (x1)
	amoxor.d.aqrl t0, t0, (a0)
	amoxor.d.aqrl x0, x0, (x31)
	amoxor.d.aqrl x31, x31, (x0)

	.text
	.global amoand.d
amoand.d:
	amoand.d x2, x4, (x1)
	amoand.d t0, t0, (a0)
	amoand.d x0, x0, (x31)
	amoand.d x31, x31, (x0)

	.text
	.global amoand.d.aq
amoand.d.aq:
	amoand.d.aq x2, x4, (x1)
	amoand.d.aq t0, t0, (a0)
	amoand.d.aq x0, x0, (x31)
	amoand.d.aq x31, x31, (x0)

	.text
	.global amoand.d.rl
amoand.d.rl:
	amoand.d.rl x2, x4, (x1)
	amoand.d.rl x0, x0, (a0)
	amoand.d.rl x0, x0, (x31)
	amoand.d.rl x31, x31, (x0)

	.text
	.global amoand.d.aqrl
amoand.d.aqrl:
	amoand.d.aqrl x2, x4, (x1)
	amoand.d.aqrl t0, t0, (a0)
	amoand.d.aqrl x0, x0, (x31)
	amoand.d.aqrl x31, x31, (x0)

	.text
	.global amoor.d
amoor.d:
	amoor.d x2, x4, (x1)
	amoor.d t0, t0, (a0)
	amoor.d x0, x0, (x31)
	amoor.d x31, x31, (x0)

	.text
	.global amoor.d.aq
amoor.d.aq:
	amoor.d.aq x2, x4, (x1)
	amoor.d.aq t0, t0, (a0)
	amoor.d.aq x0, x0, (x31)
	amoor.d.aq x31, x31, (x0)

	.text
	.global amoor.d.rl
amoor.d.rl:
	amoor.d.rl x2, x4, (x1)
	amoor.d.rl x0, x0, (a0)
	amoor.d.rl x0, x0, (x31)
	amoor.d.rl x31, x31, (x0)

	.text
	.global amoor.d.aqrl
amoor.d.aqrl:
	amoor.d.aqrl x2, x4, (x1)
	amoor.d.aqrl t0, t0, (a0)
	amoor.d.aqrl x0, x0, (x31)
	amoor.d.aqrl x31, x31, (x0)

	.text
	.global amomin.d
amomin.d:
	amomin.d x2, x4, (x1)
	amomin.d t0, t0, (a0)
	amomin.d x0, x0, (x31)
	amomin.d x31, x31, (x0)

	.text
	.global amomin.d.aq
amomin.d.aq:
	amomin.d.aq x2, x4, (x1)
	amomin.d.aq t0, t0, (a0)
	amomin.d.aq x0, x0, (x31)
	amomin.d.aq x31, x31, (x0)

	.text
	.global amomin.d.rl
amomin.d.rl:
	amomin.d.rl x2, x4, (x1)
	amomin.d.rl x0, x0, (a0)
	amomin.d.rl x0, x0, (x31)
	amomin.d.rl x31, x31, (x0)

	.text
	.global amomin.d.aqrl
amomin.d.aqrl:
	amomin.d.aqrl x2, x4, (x1)
	amomin.d.aqrl t0, t0, (a0)
	amomin.d.aqrl x0, x0, (x31)
	amomin.d.aqrl x31, x31, (x0)

	.text
	.global amomax.d
amomax.d:
	amomax.d x2, x4, (x1)
	amomax.d t0, t0, (a0)
	amomax.d x0, x0, (x31)
	amomax.d x31, x31, (x0)

	.text
	.global amomax.d.aq
amomax.d.aq:
	amomax.d.aq x2, x4, (x1)
	amomax.d.aq t0, t0, (a0)
	amomax.d.aq x0, x0, (x31)
	amomax.d.aq x31, x31, (x0)

	.text
	.global amomax.d.rl
amomax.d.rl:
	amomax.d.rl x2, x4, (x1)
	amomax.d.rl x0, x0, (a0)
	amomax.d.rl x0, x0, (x31)
	amomax.d.rl x31, x31, (x0)

	.text
	.global amomax.d.aqrl
amomax.d.aqrl:
	amomax.d.aqrl x2, x4, (x1)
	amomax.d.aqrl t0, t0, (a0)
	amomax.d.aqrl x0, x0, (x31)
	amomax.d.aqrl x31, x31, (x0)

	.text
	.global amominu.d
amominu.d:
	amominu.d x2, x4, (x1)
	amominu.d t0, t0, (a0)
	amominu.d x0, x0, (x31)
	amominu.d x31, x31, (x0)

	.text
	.global amominu.d.aq
amominu.d.aq:
	amominu.d.aq x2, x4, (x1)
	amominu.d.aq t0, t0, (a0)
	amominu.d.aq x0, x0, (x31)
	amominu.d.aq x31, x31, (x0)

	.text
	.global amominu.d.rl
amominu.d.rl:
	amominu.d.rl x2, x4, (x1)
	amominu.d.rl x0, x0, (a0)
	amominu.d.rl x0, x0, (x31)
	amominu.d.rl x31, x31, (x0)

	.text
	.global amominu.d.aqrl
amominu.d.aqrl:
	amominu.d.aqrl x2, x4, (x1)
	amominu.d.aqrl t0, t0, (a0)
	amominu.d.aqrl x0, x0, (x31)
	amominu.d.aqrl x31, x31, (x0)

	.text
	.global amomaxu.d
amomaxu.d:
	amomaxu.d x2, x4, (x1)
	amomaxu.d t0, t0, (a0)
	amomaxu.d x0, x0, (x31)
	amomaxu.d x31, x31, (x0)

	.text
	.global amomaxu.d.aq
amomaxu.d.aq:
	amomaxu.d.aq x2, x4, (x1)
	amomaxu.d.aq t0, t0, (a0)
	amomaxu.d.aq x0, x0, (x31)
	amomaxu.d.aq x31, x31, (x0)

	.text
	.global amomaxu.d.rl
amomaxu.d.rl:
	amomaxu.d.rl x2, x4, (x1)
	amomaxu.d.rl x0, x0, (a0)
	amomaxu.d.rl x0, x0, (x31)
	amomaxu.d.rl x31, x31, (x0)

	.text
	.global amomaxu.d.aqrl
amomaxu.d.aqrl:
	amomaxu.d.aqrl x2, x4, (x1)
	amomaxu.d.aqrl t0, t0, (a0)
	amomaxu.d.aqrl x0, x0, (x31)
	amomaxu.d.aqrl x31, x31, (x0)
