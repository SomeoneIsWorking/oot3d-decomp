// OoT3D decomp @ 00454acc  name=FUN_00454acc  size=416

uint FUN_00454acc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = *(int *)(DAT_00454c80 + 8);
  iVar2 = *(int *)(DAT_00454c80 + 0x14);
  uVar3 = *(uint *)(DAT_00454c80 + 0x10);
  uVar1 = 0;
  if (iVar4 < 2) {
    if (uVar3 < 10) {
      uVar1 = uVar3 * 5 + iVar2;
    }
    else if (uVar3 == 0xffffffff) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          return DAT_00454c88;
        }
        if (iVar2 == 2) {
          return DAT_00454c8c;
        }
        if (iVar2 == 3) {
          return DAT_00454c90;
        }
        if (iVar2 == 4) {
          uVar1 = 0x3ec;
        }
        return uVar1;
      }
      uVar1 = 1000;
    }
    else if (uVar3 == 10) {
      if (iVar2 == 0) {
        return 0x32;
      }
      if (iVar2 == 1 || iVar2 == 2) {
        return DAT_00454c84;
      }
      if (iVar2 == 3 || iVar2 == 4) {
        return DAT_00454c84 + 1;
      }
    }
  }
  else {
    if (iVar4 == 2) {
      switch(iVar2) {
      case 0:
        return uVar3;
      case 1:
        if (uVar3 != 10) {
          return uVar3 + 0xc;
        }
        break;
      case 2:
        if (uVar3 != 9) {
          uVar1 = uVar3 + 0x16;
          if (uVar3 == 0xffffffff) {
            uVar1 = DAT_00454c94;
          }
          return uVar1;
        }
        break;
      case 3:
        uVar1 = uVar3 + 0x1f;
        if (uVar3 == 0xffffffff) {
          uVar1 = 0x3f0;
        }
        return uVar1;
      case 4:
        return uVar3 + 0x29;
      default:
        goto switchD_00454bc8_default;
      }
      return DAT_00454c84;
    }
    if (iVar4 == 3) {
      if (uVar3 == 10) {
        if (iVar2 == 1 || iVar2 == 2) {
          return DAT_00454c84;
        }
        if (iVar2 == 3 || iVar2 == 4) {
          return DAT_00454c84 + 1;
        }
      }
      return iVar2 * 0xb + uVar3 + 1;
    }
  }
switchD_00454bc8_default:
  return uVar1;
}
