// OoT3D decomp @ 00298fa4  name=FUN_00298fa4  size=204

void FUN_00298fa4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  FUN_0033fdb4();
  FUN_0033f928(param_1,param_2);
  fVar5 = DAT_00299074;
  FUN_0036e168(*(undefined4 *)(param_1 + 0x1d4),DAT_00299078,param_1 + 0x1d8);
  uVar1 = DAT_0029907c;
  iVar3 = *(int *)(param_1 + 0x1c0) + -1;
  *(int *)(param_1 + 0x1c0) = iVar3;
  iVar4 = DAT_00299080;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x1d4) = uVar1;
    iVar4 = *(short *)(iVar4 + param_1) * 0x14;
    fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar4 < 1) {
      fVar5 = fVar6 * fVar5 * DAT_00299084 - DAT_00299084;
    }
    else {
      fVar5 = DAT_00299084 + fVar6 * fVar5 * DAT_00299084;
    }
    *(int *)(param_1 + 0x1c0) = (int)fVar5;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00299088;
  }
  iVar4 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  uVar2 = DAT_0029908c;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = uVar1;
    *(undefined4 *)(param_1 + 0x1d4) = uVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  }
  return;
}
