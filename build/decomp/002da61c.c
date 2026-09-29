// OoT3D decomp @ 002da61c  name=FUN_002da61c  size=376

void FUN_002da61c(int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;

  param_4 = param_4 + -0x3c;
  iVar4 = (int)((ulonglong)((longlong)DAT_002da794 * (longlong)param_4) >> 0x20);
  iVar4 = (iVar4 >> 0xf) - (iVar4 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_002da794 * (longlong)param_4) >> 0x20);
  uVar1 = ((iVar5 >> 0xf) - (iVar5 >> 0x1f)) * DAT_002da798 + param_4;
  bVar9 = (int)uVar1 < 0;
  if (bVar9) {
    uVar1 = uVar1 - DAT_002da798;
  }
  iVar5 = (int)((longlong)(int)uVar1 * (longlong)DAT_002da79c + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if (bVar9) {
    iVar4 = iVar4 + -1;
  }
  iVar2 = (iVar5 >> 0xf) - (iVar5 >> 0x1f);
  iVar5 = (int)((longlong)(int)uVar1 * (longlong)DAT_002da79c + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar5 = uVar1 + ((iVar5 >> 0xf) - (iVar5 >> 0x1f)) * DAT_002da7a0 * 4;
  iVar6 = (int)((ulonglong)((longlong)DAT_002da7a4 * (longlong)iVar5) >> 0x20);
  iVar7 = (int)((ulonglong)((longlong)DAT_002da7a4 * (longlong)iVar5) >> 0x20);
  uVar1 = ((iVar7 >> 7) - (iVar7 >> 0x1f)) * DAT_002da7a8 + iVar5;
  iVar5 = (int)((longlong)(int)uVar1 * (longlong)DAT_002da7ac + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar7 = (iVar5 >> 8) - (iVar5 >> 0x1f);
  iVar5 = (int)((longlong)(int)uVar1 * (longlong)DAT_002da7ac + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar3 = ((iVar5 >> 8) - (iVar5 >> 0x1f)) * -0x16d + uVar1;
  uVar1 = iVar3 * 5 + 2;
  iVar5 = (int)((longlong)(int)uVar1 * (longlong)DAT_002da7b0 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar6 = iVar4 * 400 + iVar2 * 100 + ((iVar6 >> 7) - (iVar6 >> 0x1f)) * 4 + iVar7;
  iVar4 = iVar6 + 2000;
  iVar8 = (iVar5 >> 7) - (iVar5 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_002da7b4 * (longlong)(iVar8 * 0x99 + 2)) >> 0x20);
  iVar5 = (iVar3 - ((iVar5 >> 1) - (iVar5 >> 0x1f))) + 1;
  if (iVar7 == 4 || iVar2 == 4) {
    iVar8 = 0xb;
    iVar5 = 0x1d;
    iVar4 = iVar6 + 1999;
  }
  else if (iVar8 < 10) {
    iVar8 = iVar8 + 3;
    goto LAB_002da774;
  }
  iVar8 = iVar8 + -9;
  iVar4 = iVar4 + 1;
LAB_002da774:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar4;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  return;
}
