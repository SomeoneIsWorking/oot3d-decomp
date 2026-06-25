// OoT3D decomp @ 00303db4  name=FUN_00303db4  size=40

void FUN_00303db4(int param_1,int param_2,undefined4 *param_3)

{
  param_1 = param_1 + param_2 * 0x10;
  *(undefined4 *)(param_1 + 0x5c) = *param_3;
  *(undefined4 *)(param_1 + 0x60) = param_3[1];
  *(undefined4 *)(param_1 + 100) = param_3[2];
  *(undefined4 *)(param_1 + 0x68) = param_3[3];
  return;
}

