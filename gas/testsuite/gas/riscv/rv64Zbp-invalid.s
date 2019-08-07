# RUN: not llvm-mc -triple riscv64 -mattr=+b,bp < %s 2>&1 | FileCheck %s

# Too few operands
grevw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
greviw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
shflw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
# Too few operands
unshflw t0, t1 # CHECK: :[[@LINE]]:1: error: too few operands for instruction
