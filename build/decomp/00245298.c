// OoT3D decomp @ 00245298  name=FUN_00245298  size=72

void FUN_00245298(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_002452e0;
  FUN_00370734(param_1 + 0x1a4);
  fVar1 = DAT_002452e4;
  if (DAT_002452e4 <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0x3fc) = 3;
    *(float *)(param_1 + 0xc4) = fVar1;
  }
  return;
}
