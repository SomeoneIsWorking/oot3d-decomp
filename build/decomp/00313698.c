// OoT3D decomp @ 00313698  name=FUN_00313698  size=76

void FUN_00313698(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0xc) * 0x10 + 0x14) = param_2;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0xc) * 0x10 + 0x18) = param_5;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0xc) * 0x10 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0xc) * 0x10 + 0x20) = param_4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}
