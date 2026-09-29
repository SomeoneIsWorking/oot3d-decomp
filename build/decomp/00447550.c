// OoT3D decomp @ 00447550  name=FUN_00447550  size=344

void FUN_00447550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;

  iVar5 = *DAT_004476a8;
  if (*(char *)(iVar5 + 0x5c4) == '\0') {
    FUN_002eaff4();
  }
  else {
    FUN_002e6124();
  }
  if (param_7 == 0 || param_8 == 0) {
    return;
  }
  iVar2 = param_1 - DAT_004476ac;
  if (param_1 != DAT_004476ac) {
    if (param_1 < DAT_004476ac) {
      if (param_1 == 0xde1) {
        if (*(int *)(iVar5 + *(int *)(iVar5 + 0x58) * 4 + 0x5c) == 0) {
          piVar4 = (int *)*DAT_004476b0;
        }
        else {
          piVar4 = *(int **)(*DAT_004476b0 + *(int *)(iVar5 + 0x58) * 4 + 0x810);
        }
        FUN_002e5e38(*piVar4,*piVar4 + 0x34,param_3,param_4,param_5,param_6,param_7,param_8);
        goto LAB_0044763c;
      }
      if (param_1 != 0x8515 && param_1 != 0x8516) {
        return;
      }
    }
    else if ((iVar2 != 1 && iVar2 != 2) && iVar2 != 3) {
      return;
    }
  }
  if (*(int *)(iVar5 + *(int *)(iVar5 + 0x58) * 4 + 0x68) == 0) {
    iVar2 = *(int *)(*DAT_004476b0 + 4);
  }
  else {
    iVar2 = **(int **)(*DAT_004476b0 + *(int *)(iVar5 + 0x58) * 4 + 0x81c);
  }
  FUN_002e5e38(iVar2,DAT_004476b4 + iVar2 + param_1 * 0x44,param_3,param_4,param_5,param_6,param_7,
               param_8);
LAB_0044763c:
  uVar3 = *(int *)(iVar5 + 0x58) + 10;
  uVar1 = uVar3 >> 5;
  *(uint *)(iVar5 + uVar1 * 4) = *(uint *)(iVar5 + uVar1 * 4) | 1 << (uVar3 & 0x1f);
  return;
}
