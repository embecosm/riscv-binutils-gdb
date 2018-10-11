#ifndef RISCV_CUSTOM_ARCH_H
#define RISCV_CUSTOM_ARCH_H

#if XLEN == 32
#include "arch32.h"
#elif XLEN == 64
#include "arch64.h"
#else
#error XLEN not defined, or not 32 or 64 bits
#endif

#endif /* RISCV_CUSTOM_ARCH_H */
