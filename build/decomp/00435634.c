// OoT3D decomp @ 00435634  name=FUN_00435634  size=1008

int FUN_00435634(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_7c [8];
  int local_74;
  int local_6c;
  int local_64;
  int local_5c;
  uint local_54;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;

  iVar1 = (**(code **)*param_2)(param_2,&local_28,0,0,auStack_50,0x28);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_28 != 0x28) {
    return DAT_00435a24;
  }
  iVar1 = 0;
  param_3 = param_3 * 0x10;
  if (param_7 == 0) {
LAB_00435718:
    uVar4 = param_3 + param_4 * 0x14 + iVar1;
  }
  else {
    uVar2 = (**(code **)*param_2)(param_2,&local_54,0,0,auStack_7c,0x28);
    uVar2 = uVar2 & 0x80000000;
    bVar9 = uVar2 == 0;
    uVar3 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_54;
    }
    uVar4 = 0xffffffff;
    if (uVar2 == 0) {
      bVar9 = uVar3 == 0x28;
    }
    if (bVar9) {
      iVar1 = local_74 + local_6c + local_64 + local_5c;
    }
    else {
      iVar1 = -1;
    }
    if (-1 < iVar1) goto LAB_00435718;
  }
  if (param_6 < uVar4) {
    return DAT_00435a28;
  }
  if (param_7 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(uint *)(param_1 + 0x5c) = local_48;
    *(undefined4 **)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 100) = local_4c;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x6c) = local_40;
    *(undefined4 **)(param_1 + 0x70) = param_2;
    *(undefined4 *)(param_1 + 0x74) = local_44;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(uint *)(param_1 + 0x7c) = local_38;
    *(undefined4 **)(param_1 + 0x80) = param_2;
    *(undefined4 *)(param_1 + 0x84) = local_3c;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x8c) = local_30;
    *(undefined4 **)(param_1 + 0x90) = param_2;
    *(undefined4 *)(param_1 + 0x94) = local_34;
LAB_004358f8:
    local_54 = param_1 + 0x78;
    *(int *)(param_1 + 0x14) = param_1 + 0x58;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0x24) = param_1 + 0x68;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x10) = local_48 >> 2;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x20) = local_40;
    *(uint *)(param_1 + 0x3c) = local_54;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = local_38 >> 2;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x4c) = param_1 + 0x88;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(int *)(param_1 + 0x48) = local_30;
    FUN_002ea7b0(param_1 + 0xa0,0x10,param_5,param_3,4,0);
    do {
      bVar9 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0xd0));
    } while (!bVar9);
    *(undefined4 *)(param_1 + 0xd0) = 1;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_002ea7b0(param_1 + 0xdc,0x14,param_5 + param_3,param_4 * 0x14,4,0);
    do {
      bVar9 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x10c));
    } while (!bVar9);
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 **)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0x98) = local_2c;
    return 0;
  }
  iVar1 = (**(code **)*param_2)(param_2,&local_28,0x28,0,param_5,local_48);
  if (-1 < iVar1) {
    iVar7 = local_28 + 0x28;
    iVar6 = local_48 + param_5;
    iVar1 = (**(code **)*param_2)(param_2,&local_28,iVar7,iVar7 >> 0x1f,iVar6,local_40);
    if (-1 < iVar1) {
      iVar7 = iVar7 + local_28;
      iVar8 = local_40 + iVar6;
      iVar1 = (**(code **)*param_2)(param_2,&local_28,iVar7,iVar7 >> 0x1f,iVar8,local_38);
      if (-1 < iVar1) {
        iVar5 = local_38 + iVar8;
        iVar1 = (**(code **)*param_2)
                          (param_2,&local_28,local_28 + iVar7,local_28 + iVar7 >> 0x1f,iVar5,
                           local_30);
        if (-1 < iVar1) {
          *(uint *)(param_1 + 0x5c) = local_48;
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(int *)(param_1 + 0x58) = param_5;
          *(undefined4 *)(param_1 + 0x70) = 0;
          param_5 = iVar5 + local_30;
          *(int *)(param_1 + 0x6c) = local_40;
          *(int *)(param_1 + 0x68) = iVar6;
          *(undefined4 *)(param_1 + 0x80) = 0;
          *(uint *)(param_1 + 0x7c) = local_38;
          *(int *)(param_1 + 0x78) = iVar8;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(int *)(param_1 + 0x88) = iVar5;
          *(int *)(param_1 + 0x8c) = local_30;
          goto LAB_004358f8;
        }
      }
    }
  }
  return iVar1;
}
