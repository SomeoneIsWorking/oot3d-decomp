// OoT3D decomp @ 00299bd8  name=FUN_00299bd8  size=48

void FUN_00299bd8(undefined4 param_1,int param_2)

{
  FUN_0036055c(param_1,param_2,DAT_00299c08,0);
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000000;
  *(undefined4 *)(param_2 + 0x140) = 0;
  return;
}
