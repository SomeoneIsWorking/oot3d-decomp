// OoT3D decomp @ 00353fd4  name=FUN_00353fd4  size=60

void FUN_00353fd4(int param_1,int param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00354010 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  FUN_003532c0(param_2 + 0x10,param_3);
  return;
}
