# RUN: not llvm-mc -triple riscv64 -mattr=+b,bt < %s 2>&1 | FileCheck %s

# Too few operands
fslw t0, t1, t2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
fsrw t0, t1, t2 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
