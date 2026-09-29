// OoT3D decomp @ 0049fa38  name=FUN_0049fa38  size=32

void FUN_0049fa38(int param_1)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(float *)(param_1 + 0x10) = -*(float *)(param_1 + 0x10);
  return;
}
