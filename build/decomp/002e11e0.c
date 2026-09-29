// OoT3D decomp @ 002e11e0  name=FUN_002e11e0  size=152

undefined4 FUN_002e11e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(DAT_002e1298 + 8);
  iVar3 = *(int *)(DAT_002e1298 + 0x40);
  switch(param_1) {
  case 0:
    if (iVar2 != 0) {
      return DAT_002e129c;
    }
    break;
  case 1:
    uVar1 = DAT_002e12a0;
    if (iVar2 == 0) {
      uVar1 = DAT_002e12a4;
    }
    return uVar1;
  case 2:
    uVar1 = DAT_002e12a8;
    if (iVar2 == 0) {
      uVar1 = DAT_002e12ac;
    }
    return uVar1;
  case 3:
    uVar1 = DAT_002e12b0;
    if (iVar2 == 0) {
      uVar1 = DAT_002e12b4;
    }
    return uVar1;
  case 4:
    uVar1 = DAT_002e12b8;
    if (iVar3 == 0) {
      uVar1 = DAT_002e12bc;
    }
    return uVar1;
  case 5:
    uVar1 = DAT_002e12c0;
    if (iVar3 == 0) {
      uVar1 = DAT_002e12c4;
    }
    return uVar1;
  case 6:
    uVar1 = DAT_002e12c8;
    if (iVar3 == 0) {
      uVar1 = DAT_002e12cc;
    }
    return uVar1;
  case 7:
    return DAT_002e12d0;
  }
  return DAT_002e12d4;
}
