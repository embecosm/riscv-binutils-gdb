# RUN: llvm-mc %s -triple=riscv64 -mattr=+b -riscv-no-aliases \
# RUN:     | FileCheck -check-prefixes=CHECK-S-OBJ-NOALIAS %s
# RUN: llvm-mc %s  -triple=riscv64 -mattr=+b \
# RUN:     | FileCheck -check-prefixes=CHECK-S-OBJ %s
# RUN: llvm-mc -filetype=obj -triple riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -d -r -riscv-no-aliases -mattr=+b - \
# RUN:     | FileCheck -check-prefixes=CHECK-S-OBJ-NOALIAS %s
# RUN: llvm-mc -filetype=obj -triple riscv64 -mattr=+b < %s \
# RUN:     | llvm-objdump -d -r -mattr=+b - \
# RUN:     | FileCheck -check-prefixes=CHECK-S-OBJ %s

# The following check prefixes are used in this test:
# CHECK-S-OBJ            Match both the .s and objdumped object output with
#                        aliases enabled
# CHECK-S-OBJ-NOALIAS    Match both the .s and objdumped object output with
#                        aliases disabled

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 31
# CHECK-S-OBJ: rev.w t0, t1
rev.w x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 15
# CHECK-S-OBJ: rev.h t0, t1
rev.h x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 7
# CHECK-S-OBJ: rev.b t0, t1
rev.b x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 3
# CHECK-S-OBJ: rev.n t0, t1
rev.n x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 1
# CHECK-S-OBJ: rev.p t0, t1
rev.p x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 30
# CHECK-S-OBJ: rev2.w t0, t1
rev2.w x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 14
# CHECK-S-OBJ: rev2.h t0, t1
rev2.h x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 6
# CHECK-S-OBJ: rev2.b t0, t1
rev2.b x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 2
# CHECK-S-OBJ: rev2.n t0, t1
rev2.n x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 28
# CHECK-S-OBJ: rev4.w t0, t1
rev4.w x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 12
# CHECK-S-OBJ: rev4.h t0, t1
rev4.h x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 4
# CHECK-S-OBJ: rev4.b t0, t1
rev4.b x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 24
# CHECK-S-OBJ: rev8.w t0, t1
rev8.w x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 8
# CHECK-S-OBJ: rev8.h t0, t1
rev8.h x5, x6

# CHECK-S-OBJ-NOALIAS: grevi t0, t1, 16
# CHECK-S-OBJ: rev16.w t0, t1
rev16.w x5, x6
