// OoT3D decomp @ 00382360  name=FUN_00382360  size=416

void FUN_00382360(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_4c [48];

  iVar4 = (int)*(short *)(param_1 + 0x1be);
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 0x1c2) = 0x30;
    return;
  }
  if (iVar4 < 0x41) {
    if (iVar4 < 0x11) {
      sVar2 = (short)(iVar4 << 3);
      goto LAB_003823f0;
    }
    fVar7 = (float)FUN_00338f60((int)(short)(iVar4 << 0xc));
    sVar2 = (short)(int)(DAT_00382504 + fVar7 * DAT_00382500);
    *(short *)(param_1 + 0x1c0) = sVar2;
    if (sVar2 < 0x80) goto LAB_003823f4;
  }
  else if (*(short *)(param_1 + 0x1c0) < 0x78) {
    sVar2 = *(short *)(param_1 + 0x1c0) + 8;
LAB_003823f0:
    *(short *)(param_1 + 0x1c0) = sVar2;
    goto LAB_003823f4;
  }
  *(undefined2 *)(param_1 + 0x1c0) = 0x7f;
LAB_003823f4:
  uVar3 = (ushort)*(byte *)(DAT_00382508 + 0xe);
  bVar5 = uVar3 == 1;
  if (bVar5) {
    uVar3 = *(ushort *)(param_2 + 0x104);
  }
  bVar6 = bVar5 && uVar3 == 9;
  if (bVar5 && uVar3 == 9) {
    bVar6 = *(char *)(param_1 + 3) == '\x01';
  }
  if ((!bVar6) || (*(short *)(param_1 + 0x1c2) < 1)) {
    FUN_00372224(auStack_4c,param_1 + 0x148);
    uVar1 = DAT_00382514;
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar4 = *(int *)(param_1 + 0x1c8);
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      uVar8 = DAT_0038250c;
      if (*(char *)(DAT_00382510 + param_2) != '\0') {
        FUN_00357ed4(param_2,param_1 + 0x1d0,DAT_00382518,param_1);
        uVar8 = uVar1;
      }
      uVar1 = DAT_0038251c;
      if (*(int *)(param_1 + 0x1c8) == 0) {
        return;
      }
      FUN_003695cc(DAT_0038251c,DAT_0038251c,DAT_0038251c,uVar8,*(int *)(param_1 + 0x1c8),0,4,2);
      FUN_003695cc(uVar1,uVar1,uVar1,uVar8,*(undefined4 *)(param_1 + 0x1c8),1,4,2);
      iVar4 = *(int *)(param_1 + 0x1c8);
    }
    *(undefined1 *)(iVar4 + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c8),auStack_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c8),0);
  }
  return;
}
