// OoT3D decomp @ 00359020  name=FUN_00359020  size=416

byte FUN_00359020(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;

  bVar1 = *param_1;
  bVar2 = bVar1 & 0x1e;
  if ((bVar1 & 0x1e) == 0) {
    uVar3 = (uint)*(ushort *)(DAT_003591c0 + ((param_1[1] & 0xf0) >> 3) + 0xeec) &
            1 << (param_1[1] & 0xf) & 0xffffU;
joined_r0x0035910c:
    if (uVar3 != 0) {
LAB_003590d8:
      bVar2 = 0;
      goto LAB_003590dc;
    }
  }
  else {
    if (bVar2 == 2) {
      uVar3 = *(uint *)(DAT_003591c4 + (uint)param_1[1] * 4 + -0x1d0) &
              (uint)*(byte *)((uint)*(ushort *)(DAT_003591cc + 0x92) + DAT_003591d0);
      goto joined_r0x0035910c;
    }
    if (bVar2 != 4) {
      if (bVar2 != 6) {
        return 0;
      }
      bVar2 = param_1[1];
      uVar3 = bVar2 & 0xf0;
      if (uVar3 == 0x20) {
        uVar3 = *(uint *)(DAT_003591c4 + (uint)param_1[3] * 4 + -0x150) &
                *(uint *)(DAT_003591c0 + 0xbc);
        goto joined_r0x0035910c;
      }
      if (uVar3 < 0x21) {
        if ((bVar2 & 0xf0) == 0) {
          if ((int)(*(uint *)(DAT_003591c0 + 0xb8) & *(uint *)(DAT_003591dc + 8)) >>
              *(sbyte *)(DAT_003591e0 + 2) == (bVar2 & 0xf)) goto LAB_003590d8;
          goto LAB_003590d0;
        }
        if (uVar3 != 0x10) {
          return 0;
        }
        uVar3 = (uint)*(ushort *)(DAT_003591c0 + 0xb6) &
                *(int *)(DAT_003591c4 + (uint)param_1[3] * 4 + -0x110) <<
                *(sbyte *)(DAT_003591c8 + 3);
        goto joined_r0x0035910c;
      }
      if (uVar3 == 0x30) {
        uVar3 = *(uint *)(DAT_003591c4 + (uint)param_1[3] * 4 + -0x198) &
                *(uint *)(DAT_003591c0 + 0xbc);
        goto joined_r0x0035910c;
      }
      if (uVar3 != 0x40) {
        return 0;
      }
      if (*(char *)(DAT_003591c0 + 0x4e) == '\0') goto LAB_003590d0;
      goto LAB_003590d8;
    }
    if (*(byte *)((uint)*(byte *)(DAT_003591d4 + (uint)param_1[1]) + DAT_003591d8) == param_1[3])
    goto LAB_003590d8;
  }
LAB_003590d0:
  bVar2 = 1;
LAB_003590dc:
  return bVar2 ^ bVar1 & 1;
}
