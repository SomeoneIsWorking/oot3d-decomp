// OoT3D decomp @ 002d2ba8  name=FUN_002d2ba8  size=420

void FUN_002d2ba8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_2c [4];
  undefined4 local_28;

  iVar6 = *DAT_002d2d4c;
  FUN_002bae40(param_3,&local_28,local_2c);
  uVar5 = param_1 & 0xffff0000;
  if ((param_1 & 0xff000000) == 0) {
    uVar5 = uVar5 | 0x1000000;
  }
  param_1 = param_1 & 0xffff;
  if ((uVar5 & 0xff0000) == 0) {
    uVar5 = uVar5 | 0x10000;
  }
  iVar1 = param_1 - DAT_002d2d50;
  iVar4 = -param_2;
  if (param_1 != DAT_002d2d50) {
    if ((int)param_1 < (int)DAT_002d2d50) {
      if (param_1 == 0xde1) {
        if (*(int *)(iVar6 + *(int *)(iVar6 + 0x58) * 4 + 0x5c) == 0) {
          piVar3 = (int *)*DAT_002d2d54;
        }
        else {
          piVar3 = *(int **)(*DAT_002d2d54 + *(int *)(iVar6 + 0x58) * 4 + 0x810);
        }
        if (param_2 == 0) {
          iVar4 = 1;
        }
        FUN_002ba45c(*piVar3,*piVar3 + 0x34,iVar4,param_4,param_5,local_28,DAT_002d2d58,param_8,
                     param_7,local_2c[0],uVar5);
        goto LAB_002d2cbc;
      }
      if (param_1 != 0x8515 && param_1 != 0x8516) {
        return;
      }
    }
    else if ((iVar1 != 1 && iVar1 != 2) && iVar1 != 3) {
      return;
    }
  }
  if (*(int *)(iVar6 + *(int *)(iVar6 + 0x58) * 4 + 0x68) == 0) {
    iVar1 = *(int *)(*DAT_002d2d54 + 4);
  }
  else {
    iVar1 = **(int **)(*DAT_002d2d54 + *(int *)(iVar6 + 0x58) * 4 + 0x81c);
  }
  if (param_2 == 0) {
    iVar4 = 1;
  }
  FUN_002ba45c(iVar1,DAT_002d2d5c + iVar1 + param_1 * 0x44,iVar4,param_4,param_5,local_28,
               DAT_002d2d58,param_8,param_7,local_2c[0],uVar5);
LAB_002d2cbc:
  uVar2 = *(int *)(iVar6 + 0x58) + 10;
  uVar5 = uVar2 >> 5;
  *(uint *)(iVar6 + uVar5 * 4) = *(uint *)(iVar6 + uVar5 * 4) | 1 << (uVar2 & 0x1f);
  return;
}
