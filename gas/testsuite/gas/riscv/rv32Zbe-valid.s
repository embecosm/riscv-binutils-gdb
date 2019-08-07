# With B extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip extract/deposit extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+be -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+be < %s \
# RUN:     | llvm-objdump -mattr=+be -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: bdep t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x32,0x73,0x08]
bdep t0, t1, t2
# CHECK-ASM-AND-OBJ: bext t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x42,0x73,0x08]
bext t0, t1, t2
