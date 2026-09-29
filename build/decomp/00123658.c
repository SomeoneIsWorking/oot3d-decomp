// OoT3D decomp @ 00123658  name=FUN_00123658  size=188

void FUN_00123658(int param_1)

{
  short sVar1;

  FUN_003731e0(param_1 + 0x1d4);
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    sVar1 = *(short *)(param_1 + 0x92) + -0x8000;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x82);
  }
  *(short *)(param_1 + 0x5a0) = sVar1;
  FUN_00370084(param_1 + 0xbe,(int)sVar1,3,0xc00);
  FUN_00370084(param_1 + 0xbc,(int)*(short *)(param_1 + 0x59e),5,0x100);
  if ((*(short *)(param_1 + 0x59c) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x59c) + -1, *(short *)(param_1 + 0x59c) = sVar1, sVar1 != 0)) {
    return;
  }
  *(undefined2 *)(DAT_0036630c + param_1) = 0x96;
  FUN_003731e8(DAT_00366310,param_1 + 0x1d4);
  *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) | 1;
  *(undefined4 *)(param_1 + 0x598) = DAT_00366314;
  return;
}
