// OoT3D decomp @ 002eed7c  name=FUN_002eed7c  size=248

int FUN_002eed7c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar1 = param_1 - 2000;
  if (param_2 < 3) {
    param_2 = param_2 + 9;
    uVar1 = param_1 - 0x7d1;
  }
  else {
    param_2 = param_2 + -3;
  }
  iVar2 = 1;
  if (-1 < (int)uVar1) goto LAB_002eedf4;
  iVar2 = (int)((ulonglong)((longlong)DAT_002eee74 * (longlong)(int)uVar1) >> 0x20);
  if (uVar1 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * -400 != 0) {
    iVar4 = (int)((ulonglong)((longlong)DAT_002eee74 * (longlong)(int)uVar1) >> 0x20);
    iVar2 = 0;
    if (uVar1 + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * -100 == 0) goto LAB_002eedf4;
    if ((uVar1 & 3) != 0) {
      iVar2 = 0;
      goto LAB_002eedf4;
    }
  }
  iVar2 = 1;
LAB_002eedf4:
  iVar4 = (int)((ulonglong)((longlong)DAT_002eee74 * (longlong)(int)uVar1) >> 0x20);
  iVar5 = ((iVar4 >> 5) - (iVar4 >> 0x1f)) * DAT_002eee78;
  iVar4 = (int)((ulonglong)((longlong)DAT_002eee74 * (longlong)(int)uVar1) >> 0x20);
  iVar4 = (uVar1 + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * -100) * DAT_002eee7c;
  iVar3 = (int)((ulonglong)((longlong)DAT_002eee80 * (longlong)(param_2 * 0x99 + 2)) >> 0x20);
  return ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2) +
         ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) + ((iVar3 >> 1) - (iVar3 >> 0x1f)) +
         param_3 + iVar2 + 0x3a;
}
