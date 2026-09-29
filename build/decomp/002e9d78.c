// OoT3D decomp @ 002e9d78  name=FUN_002e9d78  size=552

uint FUN_002e9d78(int param_1)

{
  int iVar1;
  uint uVar2;

  switch(param_1) {
  case 0:
  case 1:
  case 2:
    uVar2 = (uint)*(ushort *)(DAT_002ea014 + 0xb6) &
            *(int *)(DAT_002ea00c + param_1 * 4) << *DAT_002ea010;
    goto joined_r0x002e9e34;
  case 3:
  case 4:
  case 5:
    uVar2 = (uint)*(ushort *)(DAT_002ea014 + 0xb6) &
            *(int *)(DAT_002ea00c + (param_1 + -3) * 4) << DAT_002ea010[1];
joined_r0x002e9e34:
    if (uVar2 != 0) {
      return 1;
    }
    return 0;
  case 6:
  case 7:
  case 8:
    uVar2 = (uint)*(ushort *)(DAT_002ea014 + 0xb6) &
            *(int *)(DAT_002ea00c + (param_1 + -6) * 4) << DAT_002ea010[2];
    goto joined_r0x002e9ef8;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    uVar2 = *(uint *)(DAT_002ea00c + (param_1 + -9) * 4) & *(uint *)(DAT_002ea014 + 0xbc);
    goto joined_r0x002e9ef8;
  case 0xf:
  case 0x10:
  case 0x11:
    uVar2 = *(uint *)(DAT_002ea00c + (param_1 + -0xf) * 4 + 0x48) & *(uint *)(DAT_002ea014 + 0xbc);
    goto joined_r0x002e9ef8;
  case 0x12:
    if (*(char *)((uint)*(byte *)(DAT_002ea018 + 7) + DAT_002ea01c) == '\a') {
      uVar2 = 7;
    }
    else {
      uVar2 = (uint)*(byte *)((uint)*(byte *)(DAT_002ea018 + 8) + DAT_002ea01c);
      if (uVar2 != 8) {
        return 0;
      }
    }
    return uVar2;
  case 0x13:
  case 0x14:
    uVar2 = *(uint *)(DAT_002ea00c + (param_1 + -0x13) * 4 + 0x54) & *(uint *)(DAT_002ea014 + 0xbc);
joined_r0x002e9ef8:
    if (uVar2 != 0) {
      return 1;
    }
    break;
  case 0x15:
    if (*(short *)(DAT_002ea014 + 0xe8) != 0) {
      return 1;
    }
    return 0;
  case 0x16:
    if (*(int *)(DAT_002ea014 + 4) == 0) {
      iVar1 = (int)(*(uint *)(DAT_002ea014 + 0xb8) & *DAT_002ea020) >> *DAT_002ea024;
      if (iVar1 != 0) {
        return iVar1 + 0x49;
      }
    }
    else {
      iVar1 = (int)(*(uint *)(DAT_002ea014 + 0xb8) & DAT_002ea020[5]) >> DAT_002ea024[5];
      if (iVar1 != 0) {
        return iVar1 + 0x46;
      }
    }
    break;
  case 0x17:
    iVar1 = (int)(*(uint *)(DAT_002ea014 + 0xb8) & DAT_002ea020[1]) >> DAT_002ea024[1];
    if (iVar1 != 0) {
      return iVar1 + 0x4c;
    }
    break;
  case 0x18:
    iVar1 = (int)(*(uint *)(DAT_002ea014 + 0xb8) & DAT_002ea020[2]) >> DAT_002ea024[2];
    if (iVar1 != 0) {
      return iVar1 + 0x4f;
    }
    break;
  case 0x19:
    iVar1 = (int)(DAT_002ea020[3] & *(uint *)(DAT_002ea014 + 0xb8)) >> DAT_002ea024[3];
    if (iVar1 != 0) {
      return iVar1 + 0x52;
    }
    break;
  case 0x1a:
    return *(uint *)(DAT_002ea014 + 0xbc) >> 0x1c;
  }
  return 0;
}
