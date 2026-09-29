// OoT3D decomp @ 00243f54  name=FUN_00243f54  size=72

void FUN_00243f54(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_00243f9c;
  FUN_00370734(param_1 + 0x1a4);
  fVar1 = DAT_00243fa0;
  if (DAT_00243fa0 <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0x3fc) = 3;
    *(float *)(param_1 + 0xc4) = fVar1;
  }
  return;
}
