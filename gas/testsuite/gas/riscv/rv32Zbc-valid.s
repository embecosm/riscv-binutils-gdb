# With B extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip carry-less multiply extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+bc -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+bc < %s \
# RUN:     | llvm-objdump -mattr=+bc -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: clmul t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x12,0x73,0x0a]
clmul t0, t1, t2
# CHECK-ASM-AND-OBJ: clmulr t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x22,0x73,0x0a]
clmulr t0, t1, t2
# CHECK-ASM-AND-OBJ: clmulh t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x32,0x73,0x0a]
clmulh t0, t1, t2
