// OoT3D decomp @ 00383778  name=FUN_00383778  size=60

void FUN_00383778(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1c) == 0xff) {
    FUN_00350b88(param_2,param_1 + 0x1b8);
    param_2 = param_1 + 0x228;
  }
  FUN_00357248(param_1 + 0x288,param_2);
  return;
}
