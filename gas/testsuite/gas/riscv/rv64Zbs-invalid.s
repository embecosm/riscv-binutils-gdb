# RUN: not llvm-mc -triple riscv64 -mattr=+b,bs < %s 2>&1 | FileCheck %s

# Too few operands
sbsetw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbclrw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbinvw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbextw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbsetiw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbclriw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
sbinviw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
