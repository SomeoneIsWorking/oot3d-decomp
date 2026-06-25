// OoT3D decomp @ 002bfdb0  name=FUN_002bfdb0  size=460

int FUN_002bfdb0(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r8;
  undefined auStack_4c [12];
  int local_40;
  int iStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  iVar3 = DAT_002bff80;
  iVar8 = 0;
  uVar9 = 0;
  iVar6 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_1 == 0) {
    param_1 = DAT_002bff7c;
  }
  do {
    iVar7 = iVar3 + iVar6 * 0xa0;
    if (*(int *)(iVar7 + 0x84) == param_1) {
      iVar4 = *(int *)(iVar7 + 0x9c);
      iVar2 = iVar4;
      if (iVar4 != 0) {
        iVar2 = 1;
      }
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x9c);
      }
      if ((iVar2 != -1) && (iVar4 = FUN_002dd3f4(iVar2), local_30 == iVar4)) {
        if (uVar9 == 0) {
          FUN_00488374(*(undefined4 *)(*(int *)(DAT_002bff84 + 8) + 4),iVar2,auStack_4c);
          iVar8 = iVar7;
          unaff_r8 = local_40;
        }
        else {
          FUN_00488374(*(undefined4 *)(*(int *)(DAT_002bff84 + 8) + 4),iVar2,auStack_4c);
          if (local_40 < unaff_r8) {
            iVar8 = iVar7;
          }
        }
        uVar9 = uVar9 + 1 & 0xff;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x20);
  if (local_2c <= uVar9) {
    if (*(int *)(iVar8 + 0x9c) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar8 + 0x9c) + 0x9c);
    }
    if ((iVar6 != -1) &&
       (FUN_00488374(*(undefined4 *)(*(int *)(DAT_002bff84 + 8) + 4),iVar6,auStack_4c),
       local_40 <= local_28)) {
      if (*(int *)(iVar8 + 0x9c) != 0) {
        FUN_003102dc(*(int *)(iVar8 + 0x9c),0);
      }
      if (*(char *)(iVar8 + 0x99) == '\x01') {
        FUN_0033c950(0);
      }
    }
  }
  uVar1 = DAT_002bff88;
  uVar9 = 0;
  do {
    if (*(int *)(iVar3 + uVar9 * 0xa0 + 0x84) == 0) {
      iVar3 = iVar3 + uVar9 * 0xa0;
      *(undefined *)(iVar3 + 0x83) = 0;
      *(undefined4 *)(iVar3 + 0x88) = 0;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined4 *)(iVar3 + 0x94) = uVar1;
      *(undefined *)(iVar3 + 0x98) = 0;
      *(undefined *)(iVar3 + 0x99) = 0;
      *(undefined *)(iVar3 + 0x9a) = 0;
      iVar8 = DAT_002bff84;
      uVar9 = 1 << (uVar9 & 0xff);
      *(int *)(iVar3 + 0x84) = param_1;
      uVar5 = *(uint *)(iVar8 + 0x14);
      if (param_1 == 0) {
        uVar9 = uVar5 & ~uVar9;
      }
      else {
        uVar9 = uVar9 | uVar5;
      }
      *(uint *)(iVar8 + 0x14) = uVar9;
      return iVar3;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x20);
  return 0;
}

