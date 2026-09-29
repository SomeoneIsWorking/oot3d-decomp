// OoT3D decomp @ 002de690  name=FUN_002de690  size=36

void FUN_002de690(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;

  *(undefined4 *)(param_4 + 0x10) = param_1;
  *(undefined4 *)(param_4 + 0x14) = param_2;
  uVar1 = DAT_002de6b4;
  *(undefined4 *)(param_4 + 0x18) = param_3;
  *(undefined4 *)(param_4 + 0x1c) = uVar1;
  *(byte *)(param_4 + 0x1d8) = *(byte *)(param_4 + 0x1d8) | 4;
  return;
}
