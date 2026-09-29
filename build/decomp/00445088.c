// OoT3D decomp @ 00445088  name=FUN_00445088  size=464

void FUN_00445088(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  undefined4 uVar11;

  uVar6 = DAT_00445290;
  uVar5 = DAT_0044528c;
  uVar4 = DAT_00445274;
  uVar3 = DAT_00445270;
  uVar11 = DAT_00445268;
  uVar2 = DAT_00445264;
  uVar10 = DAT_00445260;
  iVar1 = DAT_00445258;
  iVar8 = *(int *)(DAT_00445258 + 0x10);
  uVar7 = *(undefined4 *)(DAT_00445258 + 0x34);
  if (iVar8 == 3) {
    uVar10 = VectorSignedToFloat(*(int *)(DAT_00445258 + 0x14) * 0x34 + 0x2c,
                                 (byte)(in_fpscr >> 0x15) & 3);
    FUN_002f7af4(DAT_0044525c,uVar10,uVar7);
    FUN_002f79b4(uVar2,*(undefined4 *)(iVar1 + 0x34));
    return;
  }
  if (iVar8 != 8 && iVar8 != 10) {
    if (iVar8 == 0xe) {
      uVar11 = VectorSignedToFloat(*(int *)(DAT_00445258 + 0x1c) * 0x3c + 0x34,
                                   (byte)(in_fpscr >> 0x15) & 3);
      FUN_002f7af4(DAT_0044525c,uVar11,uVar7);
      FUN_002f79b4(uVar2,uVar10,*(undefined4 *)(iVar1 + 0x34));
      return;
    }
    iVar9 = *(int *)(DAT_00445258 + 0x20);
    if ((iVar8 != 0x11 && iVar8 != 0x16) &&
       (iVar9 = *(int *)(DAT_00445258 + 0x24), iVar8 != 0x25 && iVar8 != 0x29)) {
      FUN_002f7af4(DAT_00445294,DAT_00445290,uVar7);
      FUN_002f79b4(uVar6,uVar6,*(undefined4 *)(iVar1 + 0x34));
      return;
    }
    uVar10 = VectorSignedToFloat(iVar9 * 0x80 + 0x20,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f7af4(uVar10,DAT_00445268,uVar7);
    FUN_002f79b4(uVar11,uVar5,*(undefined4 *)(iVar1 + 0x34));
    return;
  }
  iVar8 = *(int *)(DAT_00445258 + 0x18);
  if (iVar8 == 0) {
    FUN_002f7af4(DAT_00445280,DAT_0044527c,uVar7);
    FUN_002f79b4(uVar11,DAT_00445284,*(undefined4 *)(iVar1 + 0x34));
    return;
  }
  if (iVar8 != 1) {
    if (iVar8 == 2) {
      FUN_002f7af4(DAT_00445278,DAT_0044526c,uVar7);
      FUN_002f79b4(uVar4,uVar3,*(undefined4 *)(iVar1 + 0x34));
      return;
    }
    return;
  }
  FUN_002f7af4(DAT_00445288,DAT_0044526c,uVar7);
  FUN_002f79b4(uVar4,uVar3,*(undefined4 *)(iVar1 + 0x34));
  return;
}
