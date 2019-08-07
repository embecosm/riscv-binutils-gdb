# RUN: not llvm-mc -triple riscv64 -mattr=+b,bb,bp < %s 2>&1 | FileCheck %s

# Too few operands
rolw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
rorw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
roriw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
packw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
