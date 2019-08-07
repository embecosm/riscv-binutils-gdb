# With B extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -mattr=+b -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip base extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bb -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bb < %s \
# RUN:     | llvm-objdump -mattr=+bb -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# With Bitmanip permutation extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bp -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bp < %s \
# RUN:     | llvm-objdump -mattr=+bp -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: rolw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x60]
rolw t0, t1, t2
# CHECK-ASM-AND-OBJ: rorw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x52,0x73,0x60]
rorw t0, t1, t2
# CHECK-ASM-AND-OBJ: roriw  t0, t1, 31
# CHECK-ASM: encoding: [0x9b,0x52,0xf3,0x61]
roriw	t0, t1, 31
# CHECK-ASM-AND-OBJ: roriw  t0, t1, 0
# CHECK-ASM: encoding: [0x9b,0x52,0x03,0x60]
roriw	t0, t1, 0
# CHECK-ASM-AND-OBJ: packw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x42,0x73,0x08]
packw	t0, t1, t2
