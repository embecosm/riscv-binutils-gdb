#ifndef RISCV_CUSTOM_CPUALL_H
#define RISCV_CUSTOM_CPUALL_H

#if XLEN == 32
#include "cpuall32.h"
#elif XLEN == 64
#include "cpuall32.h"
#else
#error XLEN not defined, or not 32 or 64 bits
#endif

#endif /* RISCV_CUSTOM_CPUALL_H */
