// OoT3D decomp @ 003a7bf0  name=FUN_003a7bf0  size=72

void FUN_003a7bf0(int param_1)

{
  float fVar1;

  if (*(byte *)(param_1 + 0x1a8) < 6) {
    FUN_00374428(param_1);
  }
  else {
    *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) - 5;
  }
  fVar1 = DAT_003a7c38;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x20;
  FUN_0037572c(*(float *)(param_1 + 0x54) + fVar1,param_1);
  return;
}
