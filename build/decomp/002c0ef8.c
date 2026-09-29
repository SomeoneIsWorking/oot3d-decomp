// OoT3D decomp @ 002c0ef8  name=FUN_002c0ef8  size=248

undefined4 FUN_002c0ef8(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_004a0f1c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0x46) {
    return 0xc;
  }
  if (iVar1 < 0x47) {
    if (iVar1 != 0x41) {
      if (0x41 < iVar1) {
        if (iVar1 == 0x42) {
          return 5;
        }
        if (iVar1 != 0x43) {
          if (iVar1 == 0x44) {
            return 9;
          }
          if (iVar1 != 0x45) {
            return 4;
          }
        }
switchD_002c0fa0_caseD_49:
        return 6;
      }
      if (iVar1 == 2) {
        return 0x10;
      }
      if (iVar1 < 3) {
        uVar2 = 0;
        if (iVar1 != 0) {
          if (iVar1 != 1) {
            return 4;
          }
          uVar2 = 3;
        }
        return uVar2;
      }
      if (iVar1 == 3) {
        return 0x11;
      }
      if (iVar1 == 0x40) {
        return 1;
      }
    }
  }
  else if (iVar1 < 0x4c) {
    switch(iVar1) {
    case 0x47:
      return 0xe;
    case 0x48:
      return 0xf;
    case 0x49:
      goto switchD_002c0fa0_caseD_49;
    }
  }
  return 4;
}
