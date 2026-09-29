// OoT3D decomp @ 00276370  name=FUN_00276370  size=52

void FUN_00276370(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x140) = 0;
  FUN_0036055c(param_1,param_2,DAT_002763a4,0);
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  return;
}
