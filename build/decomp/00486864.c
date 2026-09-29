// OoT3D decomp @ 00486864  name=FUN_00486864  size=296

float FUN_00486864(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;

  uVar3 = 0;
  iVar1 = DAT_0048698c - param_1;
  if (0xbff < iVar1) {
    iVar2 = (int)((ulonglong)((longlong)DAT_00486990 * (longlong)iVar1) >> 0x20);
    uVar3 = -((iVar2 >> 9) - (iVar2 >> 0x1f));
    iVar1 = (int)((ulonglong)((longlong)DAT_00486990 * (longlong)iVar1) >> 0x20);
    param_1 = param_1 + ((iVar1 >> 9) - (iVar1 >> 0x1f)) * 0xc00;
  }
  iVar1 = (int)((ulonglong)((longlong)DAT_00486990 * (longlong)-param_1) >> 0x20);
  iVar1 = (iVar1 >> 9) - (iVar1 >> 0x1f);
  if (iVar1 != 0 && -1 < -iVar1) {
    iVar1 = (int)((ulonglong)((longlong)DAT_00486990 * (longlong)param_1) >> 0x20);
    uVar3 = uVar3 + ((iVar1 >> 9) - (iVar1 >> 0x1f));
    iVar1 = (int)((ulonglong)((longlong)DAT_00486990 * (longlong)param_1) >> 0x20);
    param_1 = param_1 + ((iVar1 >> 9) - (iVar1 >> 0x1f)) * -0xc00;
  }
  iVar1 = (int)(param_1 + ((uint)(param_1 >> 0x1f) >> 0x18)) >> 8;
  param_1 = param_1 + iVar1 * -0x100;
  fVar4 = DAT_00486994;
  if (0 < (int)uVar3) {
    if ((uVar3 & 1) != 0) {
      fVar4 = DAT_00486998;
    }
    for (iVar2 = (int)uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar4 = fVar4 * DAT_00486998 * DAT_00486998;
    }
    uVar3 = 0;
  }
  if (uVar3 != 0 && -1 < (int)-uVar3) {
    if ((uVar3 & 1) != 0) {
      fVar4 = fVar4 * DAT_0048699c;
    }
    for (iVar2 = (int)-uVar3 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar4 = fVar4 * DAT_0048699c * DAT_0048699c;
    }
  }
  if (iVar1 != 0) {
    fVar4 = *(float *)(DAT_004869a0 + iVar1 * 4) * fVar4;
  }
  if (param_1 != 0) {
    fVar4 = *(float *)(DAT_004869a4 + param_1 * 4) * fVar4;
  }
  return fVar4;
}
