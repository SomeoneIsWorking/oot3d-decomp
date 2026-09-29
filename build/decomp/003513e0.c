// OoT3D decomp @ 003513e0  name=FUN_003513e0  size=28

void FUN_003513e0(undefined4 param_1,int param_2,int param_3)

{
  *(int *)(param_2 + 0x12b8) = param_3;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x800000;
  *(int *)(param_3 + 0x128) = param_2;
  return;
}
