// OoT3D decomp @ 00372a60  name=FUN_00372a60  size=32

void FUN_00372a60(int param_1)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(float *)(param_1 + 0x40) = -*(float *)(param_1 + 0x40);
  return;
}
