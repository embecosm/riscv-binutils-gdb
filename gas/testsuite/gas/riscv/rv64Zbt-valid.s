# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip ternary extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bt -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bt < %s \
# RUN:     | llvm-objdump -mattr=+bt -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: fslw  t0, t1, t2, t3
# CHECK-ASM: encoding: [0xbb,0x12,0xc3,0x3d]
fslw t0, t1, t2, t3
# CHECK-ASM-AND-OBJ: fsrw  t0, t1, t2, t3
# CHECK-ASM: encoding: [0xbb,0x52,0xc3,0x3d]
fsrw t0, t1, t2, t3
