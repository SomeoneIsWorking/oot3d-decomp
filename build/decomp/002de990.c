// OoT3D decomp @ 002de990  name=FUN_002de990  size=456

void FUN_002de990(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_2c [4];
  undefined4 local_28;
  
  iVar7 = *piRam002deb58;
  FUN_002bae40(param_7,&local_28,local_2c);
  uVar8 = param_1 & 0xffff;
  uVar6 = param_1 & 0xffff0000;
  if ((param_1 & 0xff000000) == 0) {
    if (param_9 == 0) {
      uVar1 = 0x2000000;
    }
    else {
      uVar1 = 0x1000000;
    }
    uVar6 = uVar6 | uVar1;
  }
  if ((uVar6 & 0xff0000) == 0) {
    if (param_9 == 0) {
      uVar1 = 0x30000;
    }
    else {
      uVar1 = 0x10000;
    }
    uVar6 = uVar6 | uVar1;
  }
  iVar5 = -param_2;
  iVar2 = uVar8 - uRam002deb5c;
  if (uVar8 != uRam002deb5c) {
    if ((int)uVar8 < (int)uRam002deb5c) {
      if (uVar8 == 0xde1) {
        if (*(int *)(iVar7 + *(int *)(iVar7 + 0x58) * 4 + 0x5c) == 0) {
          piVar3 = (int *)*piRam002deb60;
        }
        else {
          piVar3 = *(int **)(*piRam002deb60 + *(int *)(iVar7 + 0x58) * 4 + 0x810);
        }
        iVar2 = *piVar3;
        if (param_2 == 0) {
          iVar5 = 1;
        }
        iVar4 = iVar2 + 0x34;
        goto LAB_002deac8;
      }
      if (uVar8 != 0x8515 && uVar8 != 0x8516) {
        return;
      }
    }
    else if ((iVar2 != 1 && iVar2 != 2) && iVar2 != 3) {
      return;
    }
  }
  if (*(int *)(iVar7 + *(int *)(iVar7 + 0x58) * 4 + 0x68) == 0) {
    iVar2 = *(int *)(*piRam002deb60 + 4);
  }
  else {
    iVar2 = **(int **)(*piRam002deb60 + *(int *)(iVar7 + 0x58) * 4 + 0x81c);
  }
  iVar4 = iRam002deb64 + iVar2 + uVar8 * 0x44;
  if (param_2 == 0) {
    iVar5 = 1;
  }
LAB_002deac8:
  FUN_002ba45c(iVar2,iVar4,iVar5,param_4,param_5,local_28,param_8,param_9,0,local_2c[0],uVar6);
  uVar8 = *(int *)(iVar7 + 0x58) + 10;
  uVar6 = uVar8 >> 5;
  *(uint *)(iVar7 + uVar6 * 4) = *(uint *)(iVar7 + uVar6 * 4) | 1 << (uVar8 & 0x1f);
  return;
}

