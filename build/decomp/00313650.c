// OoT3D decomp @ 00313650  name=FUN_00313650  size=72

void FUN_00313650(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xd4) = param_2;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xd8) = 0;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xdc) = 0;
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xe0) = 0x3f000000;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}
