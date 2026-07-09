// OoT3D decomp @ 0033d14c  name=FUN_0033d14c  size=40

void FUN_0033d14c(int param_1,int param_2,undefined4 *param_3)

{
  param_1 = param_1 + param_2 * 0x60;
  *(undefined4 *)(param_1 + 200) = *param_3;
  *(undefined4 *)(param_1 + 0xcc) = param_3[1];
  *(undefined4 *)(param_1 + 0xd0) = param_3[2];
  return;
}

