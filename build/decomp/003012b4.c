// OoT3D decomp @ 003012b4  name=FUN_003012b4  size=76

int FUN_003012b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00343280(param_1,0x48);
  if (param_3 != 0) {
    *(int *)(param_1 + 0x50) = param_3;
  }
  FUN_002ff8e0(param_1,param_2,param_4);
  return param_1;
}
