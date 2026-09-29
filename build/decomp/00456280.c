// OoT3D decomp @ 00456280  name=FUN_00456280  size=16

void FUN_00456280(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_00456290;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}
