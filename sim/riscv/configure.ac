dnl Process this file with autoconf to produce a configure script.
AC_PREREQ(2.64)dnl
AC_INIT(Makefile.in)
sinclude(../common/acinclude.m4)

SIM_AC_COMMON

SIM_AC_OPTION_ENDIAN(LITTLE)
SIM_AC_OPTION_ALIGNMENT(NONSTRICT_ALIGNMENT)
SIM_AC_OPTION_SCACHE(16384)
SIM_AC_OPTION_DEFAULT_MODEL([riscv])
SIM_AC_OPTION_CGEN_MAINT

dnl For now, just one simulator is built for the appropriate xlen
dnl In future we might be able to do something more clever to generate
dnl both a 32-bit and 64-bit simulator and then bundle them together
case ${target} in
  riscv64*) riscv_xlen=64 ;;
  *)        riscv_xlen=32 ;;
esac
AC_SUBST(riscv_xlen)

SIM_AC_OUTPUT
