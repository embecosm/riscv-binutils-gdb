# With Bitmanip permutation extension:
# RUN: llvm-mc %s -triple=riscv64 -mattr=+bp -show-encoding \
# RUN:     | FileCheck -check-prefixes=CHECK-ASM,CHECK-ASM-AND-OBJ %s
# RUN: llvm-mc -filetype=obj -triple=riscv64 -mattr=+bp < %s \
# RUN:     | llvm-objdump -mattr=+bp -d -r - \
# RUN:     | FileCheck -check-prefixes=CHECK-OBJ,CHECK-ASM-AND-OBJ %s

# CHECK-ASM-AND-OBJ: grevw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x40]
grevw t0, t1, t2
# CHECK-ASM-AND-OBJ: greviw  t0, t1, 31
# CHECK-ASM: encoding: [0x9b,0x12,0xf3,0x41]
greviw	t0, t1, 31
# CHECK-ASM-AND-OBJ: greviw  t0, t1, 0
# CHECK-ASM: encoding: [0x9b,0x12,0x03,0x40]
greviw	t0, t1, 0
# CHECK-ASM-AND-OBJ: shflw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x12,0x73,0x08]
shflw	t0, t1, t2
# CHECK-ASM-AND-OBJ: unshflw t0, t1, t2
# CHECK-ASM: encoding: [0xbb,0x52,0x73,0x08]
unshflw	t0, t1, t2
