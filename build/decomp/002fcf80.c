// OoT3D decomp @ 002fcf80  name=FUN_002fcf80  size=712

void FUN_002fcf80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  undefined4 uVar13;

  iVar3 = DAT_002fd254;
  iVar4 = DAT_002fd250;
  iVar2 = DAT_002fd24c;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (DAT_002fd248 < param_2) {
    param_2 = DAT_002fd248;
  }
  iVar1 = (int)((ulonglong)((longlong)DAT_002fd24c * (longlong)param_2) >> 0x20);
  iVar1 = (iVar1 >> 0xe) - (iVar1 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar1) >> 0x20);
  iVar6 = (iVar5 >> 2) - (iVar5 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar1) >> 0x20);
  iVar1 = iVar1 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -10;
  uVar13 = VectorSignedToFloat(iVar6 * 0xc,(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = (int)((ulonglong)((longlong)DAT_002fd254 * (longlong)param_2) >> 0x20);
  uVar7 = (iVar5 >> 6) - (iVar5 >> 0x1f);
  iVar5 = (int)((longlong)(int)uVar7 * (longlong)DAT_002fd258 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar5 = uVar7 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x3c;
  iVar8 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar5) >> 0x20);
  iVar12 = (iVar8 >> 2) - (iVar8 >> 0x1f);
  iVar8 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar5) >> 0x20);
  iVar5 = iVar5 + ((iVar8 >> 2) - (iVar8 >> 0x1f)) * -10;
  iVar8 = (int)((ulonglong)((longlong)DAT_002fd254 * (longlong)param_2) >> 0x20);
  iVar8 = param_2 + ((iVar8 >> 6) - (iVar8 >> 0x1f)) * -1000;
  iVar9 = (int)((ulonglong)((longlong)(DAT_002fd254 * 5) * (longlong)iVar8) >> 0x20);
  iVar8 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar8) >> 0x20);
  iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f);
  iVar10 = (int)((ulonglong)((longlong)DAT_002fd250 * (longlong)iVar8) >> 0x20);
  iVar11 = param_1 + 0x918;
  *(undefined4 *)(*(int *)(param_1 + 0x1078) + 0x98) = uVar13;
  uVar13 = VectorSignedToFloat(iVar1 * 0xc,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x107c) + 0x98) = uVar13;
  uVar13 = VectorSignedToFloat(iVar12 * 0xc,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x1084) + 0x98) = uVar13;
  uVar13 = VectorSignedToFloat(iVar5 * 0xc,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x1088) + 0x98) = uVar13;
  uVar13 = VectorSignedToFloat(((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0xc,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x1090) + 0x98) = uVar13;
  uVar13 = VectorSignedToFloat((iVar8 + ((iVar10 >> 2) - (iVar10 >> 0x1f)) * -10) * 0xc,
                               (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x1094) + 0x98) = uVar13;
  iVar2 = (int)((ulonglong)((longlong)iVar2 * (longlong)*(int *)(param_1 + 0x14)) >> 0x20);
  iVar2 = (iVar2 >> 0xe) - (iVar2 >> 0x1f);
  iVar10 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20);
  iVar9 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20);
  iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)*(int *)(param_1 + 0x14)) >> 0x20);
  uVar7 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  iVar3 = (int)((longlong)(int)uVar7 * (longlong)DAT_002fd258 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar3 = uVar7 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * -0x3c;
  iVar8 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20);
  iVar4 = (int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20);
  if (*(char *)(param_1 + 8) == '\0') {
    if ((iVar10 >> 2) - (iVar10 >> 0x1f) != iVar6) {
      FUN_00307840(iVar11,0,0xd2,0x20,1);
    }
    if (iVar2 + ((iVar9 >> 2) - (iVar9 >> 0x1f)) * -10 != iVar1) {
      FUN_00307840(iVar11,0,0xd3,0x20,1);
    }
    if ((iVar8 >> 2) - (iVar8 >> 0x1f) != iVar12) {
      FUN_00307840(iVar11,0,0xd5,0x20,1);
    }
    if (iVar3 + ((iVar4 >> 2) - (iVar4 >> 0x1f)) * -10 != iVar5) {
      FUN_00307840(iVar11,0,0xd6,0x20,1);
    }
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}
