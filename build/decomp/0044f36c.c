// OoT3D decomp @ 0044f36c  name=FUN_0044f36c  size=696

uint FUN_0044f36c(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_234 [524];
  int local_28;

  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x5c08);
  iVar6 = 0;
  if (*(char *)(param_1 + 0x5c04) != '\0') {
    do {
      iVar7 = iVar9 + iVar6 * 0x44;
      uVar4 = *(uint *)(iVar7 + 0x40);
      if (uVar4 == 0) {
        uVar4 = FUN_00324fd0(iVar7);
        *(uint *)(iVar7 + 0x40) = uVar4;
      }
      if (uVar8 < uVar4) {
        uVar8 = uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0x5c04));
  }
  uVar8 = uVar8 + 0xf & 0xfffffff0;
  if (*(char *)(param_1 + 0x5b88) == '\0') {
    iVar6 = 1;
  }
  else {
    iVar6 = 3;
  }
  param_2[2000] = (byte)iVar6;
  uVar5 = FUN_0035010c(iVar6 * uVar8);
  *(undefined4 *)(param_2 + 0x7c4) = uVar5;
  iVar6 = 1;
  if (1 < param_2[2000]) {
    do {
      iVar9 = iVar6 + 1;
      *(uint *)(param_2 + iVar6 * 4 + 0x7c4) = *(int *)(param_2 + iVar6 * 4 + 0x7c0) + uVar8;
      iVar6 = iVar9;
    } while (iVar9 < (int)(uint)param_2[2000]);
  }
  uVar4 = (uint)param_2[2000];
  if (uVar4 < 3) {
    do {
      iVar6 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      pbVar1 = param_2 + iVar6 + 0x7c4;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
    } while ((int)uVar4 < 3);
  }
  iVar6 = DAT_0044f624;
  param_2[0x7d1] = 0;
  if (*(int *)(iVar6 + 0x4ec) < 1) {
    bVar2 = *(byte *)(*(int *)(param_1 + 0x5c18) + (uint)*(byte *)(param_1 + 0x5c02) * 2 + 1);
  }
  else {
    bVar2 = *(byte *)(DAT_0044f628 + *(int *)(iVar6 + 0x4ec) * 0x1c + 0x14e6);
  }
  iVar6 = *(int *)(param_2 + 0x7a8);
  if (iVar6 != 0) {
    FUN_003254f4(iVar6,param_1,iVar6);
    FUN_003254d8(param_1,param_2 + 0x3dc);
    FUN_00325430(param_1,param_2 + 0x3dc);
    param_2[0x3dc] = 0xff;
    local_28 = param_1 + 0x208c;
    param_2[0x7a8] = 0;
    param_2[0x7a9] = 0;
    param_2[0x7aa] = 0;
    param_2[0x7ab] = 0;
    FUN_00325354(param_1);
    FUN_0032525c(param_1,local_28);
    FUN_00325114(param_1,(int)(char)*param_2);
    if (0x12 < (int)*(short *)(param_1 + 0x104) - 0x51U) {
      FUN_003470b8(param_1);
    }
  }
  FUN_00371738(param_2 + 0x3dc,param_2,0x3dc);
  *param_2 = bVar2;
  param_2[0x3cc] = 0;
  param_2[0x3cd] = 0;
  param_2[0x3ce] = 0;
  param_2[0x3cf] = 0;
  param_2[6] = 0;
  FUN_00343280(param_2 + 8,0x3c0);
  param_2[0x7d1] = 1;
  iVar9 = *(int *)(param_1 + 0x5c08) + (uint)bVar2 * 0x44;
  iVar6 = *(int *)(iVar9 + 0x40);
  if (iVar6 == 0) {
    iVar6 = FUN_00324fd0(iVar9);
    *(int *)(iVar9 + 0x40) = iVar6;
  }
  if (param_2[0x7d2] == 0) {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7c4);
    param_2[0x7d2] = 1;
    param_2[0x3d4] = 0;
  }
  else if (param_2[0x7d3] == 0) {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7c8);
    param_2[0x7d3] = 1;
    param_2[0x3d4] = 1;
  }
  else if (param_2[0x7d4] == 0) {
    *(undefined4 *)(param_2 + 0x7b8) = *(undefined4 *)(param_2 + 0x7cc);
    param_2[0x7d4] = 1;
    param_2[0x3d4] = 2;
  }
  uVar5 = *(undefined4 *)(param_2 + 0x7b8);
  uVar3 = *(undefined2 *)(param_1 + 0x104);
  FUN_00324f44(auStack_234,*(int *)(param_1 + 0x5c08) + (uint)bVar2 * 0x44,DAT_0044f62c);
  uVar5 = FUN_00324eac(auStack_234,uVar5,iVar6,(int)CONCAT21(uVar3,bVar2) | 0x40000000,0);
  *(undefined4 *)(param_2 + 0x7bc) = uVar5;
  return uVar8;
}
