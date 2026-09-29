// OoT3D decomp @ 00284508  name=FUN_00284508  size=88

void FUN_00284508(int param_1)

{
  float fVar1;

  FUN_00370734(param_1 + 0x1e0);
  fVar1 = DAT_00284568;
  if ((int)*(float *)(param_1 + 0x58) < DAT_00284560) {
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + DAT_00284564;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  FUN_0035f090(param_1);
  return;
}
