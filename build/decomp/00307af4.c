// OoT3D decomp @ 00307af4  name=FUN_00307af4  size=44

void FUN_00307af4(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  FUN_0034338c(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  return;
}
