// OoT3D decomp @ 002db998  name=FUN_002db998  size=528

undefined4
FUN_002db998(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,undefined4 param_7,char *param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 *param_12,uint param_13,int *param_14)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_r3;
  undefined4 uVar10;
  bool bVar11;
  undefined4 local_100 [18];
  undefined4 local_b8 [33];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *local_28;

  iStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_002e68ac();
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc1c) = param_10;
  *(undefined4 *)(param_1 + 0xc20) = param_11;
  local_100[0] = 0x100;
  FUN_002e76b8(param_1 + 0xc24,param_1,0x100);
  if (param_14 != (int *)0x0) {
    (**(code **)*param_14)(param_14,param_1 + 0xc24);
    uVar2 = (**(code **)(*param_14 + 4))(param_14);
    *(undefined1 *)(param_1 + 0xe3c) = uVar2;
  }
  if (param_12 != (undefined4 *)0x0) {
    FUN_00343280(local_100,0xcc);
    if (param_13 != 0) {
      uVar3 = param_13 & 1;
      bVar11 = uVar3 == 1;
      uVar10 = extraout_r3;
      if (bVar11) {
        uVar10 = *param_12;
      }
      uVar6 = (uint)bVar11;
      if (bVar11) {
        local_b8[0] = uVar10;
      }
      for (; uVar3 < param_13; uVar3 = uVar3 + 2) {
        iVar5 = uVar6 + 1;
        local_b8[uVar6] = param_12[uVar6];
        uVar6 = uVar6 + 2;
        local_b8[iVar5] = param_12[iVar5];
      }
    }
    FUN_00371738(param_1 + 0xd18,local_100,0xcc);
  }
  uVar10 = DAT_002dbba8;
  iVar9 = 0;
  iVar5 = 0x100;
  pcVar4 = local_28;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0x28;
    if (cVar1 != '\0') {
      iVar9 = iVar9 + 1;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (param_6 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar7 = 0x100;
    pcVar4 = param_6;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 0x2c;
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (param_8 == (char *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = 0x100;
    pcVar4 = param_8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 0x2c;
      if (cVar1 != '\0') {
        iVar7 = iVar7 + 1;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar5 = iVar9 * 0x394 + (iVar5 + iVar7) * 0xb4;
  *(int *)(param_1 + 0x10) = iVar5;
  uVar10 = thunk_FUN_0035010c(iVar5,uVar10);
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_00455f18(param_1,local_28,param_5);
  FUN_002d2974(param_1,param_6,param_7,0);
  FUN_002d2974(param_1,param_8,param_9,1);
  return 1;
}
