// OoT3D decomp @ 0040bcb0  name=FUN_0040bcb0  size=64

void FUN_0040bcb0(int *param_1)

{
  if (param_1[0x24c] != 0) {
    FUN_00305830();
    (**(code **)(*param_1 + 0x10))(param_1,param_1[0x24c]);
    param_1[0x24c] = 0;
  }
  param_1[0x24d] = -1;
  return;
}
