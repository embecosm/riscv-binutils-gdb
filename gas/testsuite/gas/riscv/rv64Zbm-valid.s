# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip matix extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bm -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bm < %s \
# RUN:     | llvm-objdump -mattr=+bm -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: bmator t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x62,0x73,0x08]
bmator t0, t1, t2
# CHECK-ASM-AND-OBJ: bmatxor t0, t1, t2
# CHECK-ASM: encoding: [0xb3,0x72,0x73,0x08]
bmatxor t0, t1, t2
# CHECK-ASM-AND-OBJ: bmatflip t0, t1
# CHECK-ASM: encoding: [0x93,0x12,0x33,0x60]
bmatflip t0, t1
