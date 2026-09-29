// OoT3D decomp @ 00245240  name=FUN_00245240  size=80

void FUN_00245240(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_00245290;
  FUN_00370734(param_1 + 0x1a4);
  FUN_00330710(param_1);
  fVar1 = DAT_00245294;
  if (DAT_00245294 <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xbb4) = 3;
    *(float *)(param_1 + 0xc4) = fVar1;
  }
  return;
}
