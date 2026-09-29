// OoT3D decomp @ 00403cc8  name=FUN_00403cc8  size=824

undefined4
FUN_00403cc8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68 [11];
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;

  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  puStack_28 = param_4;
  local_38 = FUN_0030b8c8(*(undefined4 *)(param_1 + 0xa4),*param_3);
  local_3c = *param_4;
  local_68[10] = param_4[5];
  if (param_7 != (int *)0x0) {
    if (*param_7 != 0) {
      local_38 = *param_7;
    }
    FUN_0030b5cc(&local_90,local_38);
    if (param_7[1] != 0) {
      iVar2 = FUN_0040dcb4(&local_90,param_7[1],&local_3c);
      if (iVar2 == 0) {
        return 0xf;
      }
      local_3c = FUN_00408190(local_8c,local_3c,local_68 + 10);
    }
  }
  bVar1 = false;
  iVar2 = *(int *)(local_30 + 4);
  local_68[9] = 0;
  local_68[8] = 0xffffffff;
  FUN_00350820(local_68,DAT_00404000,8,4);
  local_68[8] = *(undefined4 *)(local_30 + 0x9c);
  local_68[9] = local_38;
  if (local_38 == 0) {
    if (iVar2 == 0) {
      return 5;
    }
    bVar1 = true;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  if (param_7 == (int *)0x0) {
    local_68[0] = param_4[1];
    local_68[2] = param_4[2];
    local_68[4] = param_4[3];
    local_68[6] = param_4[4];
  }
  else {
    local_68[0] = param_7[2];
    local_68[2] = param_7[3];
    local_68[4] = param_7[4];
    local_68[6] = param_7[5];
  }
  uVar6 = 0;
  do {
    local_88 = (int *)0xffffffff;
    iVar3 = FUN_0048be4c(*(undefined4 *)(param_1 + 4),local_68[uVar6 * 2],&local_88);
    if (iVar3 != 0) {
      iVar3 = FUN_0030b8c8(*(undefined4 *)(param_1 + 0xa4),local_88);
      local_68[uVar6 * 2 + 1] = iVar3;
      if (iVar3 == 0) {
        if (iVar2 == 0) {
          return 6;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0xa4);
        if (iVar4 != 0) {
          iVar4 = iVar4 + 0xc;
        }
        iVar3 = FUN_0030b500(iVar3,*(undefined4 *)(param_1 + 4),iVar4);
        if (iVar3 != 0) goto LAB_00403ec4;
        if (iVar2 == 0) {
          return 8;
        }
      }
      bVar1 = true;
      break;
    }
LAB_00403ec4:
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  FUN_004050d4(local_30,*(undefined4 *)(param_1 + 0x70),local_68[10],param_1 + 8);
  fVar7 = (float)VectorSignedToFloat(param_3[4],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0030b7e8(fVar7 * DAT_00404004,local_30);
  FUN_0030b790(local_30,*(undefined1 *)(param_3 + 5));
  FUN_0030c49c(local_30,*(undefined1 *)((int)param_3 + 0x15));
  FUN_00404d38(local_30,*(undefined1 *)(param_4 + 6));
  FUN_00404e58(local_30,(int)*(char *)((int)param_4 + 0x19));
  FUN_00405084(local_30,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (param_5 == 0) {
    local_80 = 1;
  }
  else {
    uVar5 = extraout_r1;
    if (param_5 != 1) {
      uVar5 = 0;
    }
    local_80 = 0;
    if (param_5 != 1) {
      param_6 = uVar5;
    }
  }
  local_84 = local_3c;
  local_7c = param_6;
  if (bVar1) {
    local_94 = *(undefined4 *)(param_1 + 4);
    local_90 = *(undefined4 *)(param_1 + 0xa4);
    local_8c = local_68 + 8;
    local_88 = local_68;
    iVar2 = FUN_00404d80(local_30,&local_94,&local_84);
    if (iVar2 == 0) {
      return 9;
    }
  }
  else {
    FUN_0030b5cc(&local_90,local_38);
    FUN_0040512c(local_30,local_8c,&local_84);
    FUN_00404abc(local_30,local_68);
  }
  return 0;
}
