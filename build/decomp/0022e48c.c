// OoT3D decomp @ 0022e48c  name=FUN_0022e48c  size=80

void FUN_0022e48c(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_0022e4dc;
  FUN_00370734(param_1 + 0x1a4);
  FUN_0033292c(param_1);
  fVar1 = DAT_0022e4e0;
  if (DAT_0022e4e0 <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xdb8) = 3;
    *(float *)(param_1 + 0xc4) = fVar1;
  }
  return;
}
