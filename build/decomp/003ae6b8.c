// OoT3D decomp @ 003ae6b8  name=FUN_003ae6b8  size=168

void FUN_003ae6b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036bc98();
  uVar1 = DAT_003ae764;
  if (iVar2 == 0) {
    *(short *)(DAT_003ae76c + param_1) = (short)DAT_003ae768;
    uVar1 = DAT_003ae774;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601)
       && (*(int *)(param_1 + 0x98) < DAT_003ae770)) {
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
      FUN_0036bb28(uVar1,param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xbac) = DAT_003ae760;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
  }
  if (DAT_003ae778 < (int)*(float *)(param_1 + 0xcc)) {
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - DAT_003ae77c;
  }
  return;
}
