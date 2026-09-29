// OoT3D decomp @ 00222a04  name=FUN_00222a04  size=84

void FUN_00222a04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00222a58;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_00222a5c,DAT_00222a60,DAT_00222a5c,param_2,param_1,7);
  return;
}
