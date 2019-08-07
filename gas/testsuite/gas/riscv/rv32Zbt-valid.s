# With B extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip ternary extension:
# RUN: llvm-mc %s -triple=riscv32 -mattr=+bt -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv32 -mattr=+bt < %s \
# RUN:     | llvm-objdump -mattr=+bt -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: cmix t0, t1, t2, t3
# CHECK-ASM: encoding: [0xb3,0x92,0x63,0xe6]
cmix t0, t1, t2, t3
# CHECK-ASM-AND-OBJ: cmov t0, t1, t2, t3
# CHECK-ASM: encoding: [0xb3,0xd2,0x63,0xe6]
cmov t0, t1, t2, t3
# CHECK-ASM-AND-OBJ: fsl t0, t1, t2, t3
# CHECK-ASM: encoding: [0xb3,0x12,0xc3,0x3d]
fsl t0, t1, t2, t3
# CHECK-ASM-AND-OBJ: fsr t0, t1, t2, t3
# CHECK-ASM: encoding: [0xb3,0x52,0xc3,0x3d]
fsr t0, t1, t2, t3
