// OoT3D decomp @ 003ae93c  name=FUN_003ae93c  size=176

void FUN_003ae93c(int param_1,int param_2)

{
  int iVar1;

  FUN_0037378c(DAT_003ae9ec,param_2,param_1 + 0x28,2,0xfa,0x14,1);
  iVar1 = (int)((ulonglong)((longlong)DAT_003ae9f0 * (longlong)*(int *)(param_2 + 0xf8)) >> 0x20);
  iVar1 = *(int *)(param_2 + 0xf8) + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -0x12;
  if (iVar1 == 0 || iVar1 == 9) {
    FUN_00375bcc(param_1,DAT_003ae9f4);
  }
  if ((int)*(float *)(param_1 + 0x6c) < DAT_003ae9f8) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_003ae9fc;
  }
  FUN_00376864(param_1);
  if (*(short *)(DAT_003aea00 + param_1) != 0) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
