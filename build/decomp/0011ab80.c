// OoT3D decomp @ 0011ab80  name=FUN_0011ab80  size=420

void FUN_0011ab80(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_0011ad28,DAT_0011ad24,param_1 + 0x6c);
  uVar4 = DAT_0011ad34;
  uVar3 = DAT_0011ad30;
  uVar2 = DAT_0011ad2c;
  if (*(short *)(param_1 + 0x26e) != 0) {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x240);
  bVar7 = sVar1 < 0;
  if (sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 0x242);
    bVar7 = sVar1 == 0;
    if (bVar7) {
      sVar1 = *(short *)(param_1 + 0x244);
    }
    if (bVar7 && sVar1 == 0) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,0);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar4,DAT_0011ad38,param_1 + 0x1a4,0);
      uVar2 = DAT_0011ad44;
      *(undefined4 *)(param_1 + 0x1050) = DAT_0011ad3c;
      *(undefined4 *)(param_1 + 0x1054) = DAT_0011ad40;
      *(undefined4 *)(param_1 + 0x22c) = uVar2;
      *(undefined2 *)(param_1 + 0x26e) = 0x69;
      return;
    }
  }
  else {
    if (bVar7) {
      sVar1 = *(short *)(param_1 + 0x242);
    }
    bVar8 = bVar7 && sVar1 < 0;
    if (bVar7 && sVar1 < 0) {
      bVar8 = *(short *)(param_1 + 0x244) < 0;
    }
    if (bVar8) {
      FUN_00375c08(DAT_0011ad30,DAT_0011ad2c,DAT_0011ad2c,DAT_0011ad48,param_1 + 0x1a4,5,2);
      uVar3 = DAT_0011ad4c;
      *(undefined4 *)(param_1 + 0x1050) = uVar4;
      *(undefined4 *)(param_1 + 0x1054) = uVar4;
      *(undefined4 *)(param_1 + 0x22c) = uVar3;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      uVar3 = DAT_0011ad50;
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      return;
    }
  }
  iVar5 = 0;
  do {
    if (*(short *)(param_1 + iVar5 * 2 + 0x240) == 0) {
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,0xe);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar2,uVar6,DAT_0011ad54,param_1 + 0x1a4,0xe,0);
      uVar2 = DAT_0011ad5c;
      *(undefined4 *)(param_1 + 0x1050) = DAT_0011ad58;
      *(undefined4 *)(param_1 + 0x1054) = uVar4;
      *(undefined4 *)(param_1 + 0x22c) = uVar2;
      *(undefined2 *)(param_1 + 0x24e) = 0;
      return;
    }
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 3);
  FUN_001c603c(param_1);
  return;
}
