// OoT3D decomp @ 00343840  name=FUN_00343840  size=20

void FUN_00343840(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;

  *(undefined4 *)(param_3 + 0x1b0) = param_1;
  uVar1 = DAT_00343854;
  *(undefined4 *)(param_3 + 0x1b4) = param_2;
  *(undefined4 *)(param_3 + 0x1b8) = uVar1;
  return;
}
