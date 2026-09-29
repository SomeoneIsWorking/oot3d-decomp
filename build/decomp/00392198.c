// OoT3D decomp @ 00392198  name=FUN_00392198  size=96

void FUN_00392198(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_003921f8;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  fVar1 = DAT_003921fc;
  if (DAT_003921fc <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xbbc) = 0x12;
    *(float *)(param_1 + 0xc4) = fVar1;
    if (*(int *)(param_1 + 0xbd0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xbd0) + 0x4cc) = 1;
    }
  }
  return;
}
