// OoT3D decomp @ 00407c1c  name=FUN_00407c1c  size=32

void FUN_00407c1c(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = param_2;
  if (*(int *)(param_1 + 0xfc) < param_2) {
    param_2 = *(int *)(param_1 + 0xfc);
  }
  *(int *)(param_1 + 0xf8) = param_2;
  return;
}
