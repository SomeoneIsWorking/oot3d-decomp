// OoT3D decomp @ 00262bf0  name=FUN_00262bf0  size=92

void FUN_00262bf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00262c4c;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_0033398c(param_1);
  FUN_00376340(DAT_00262c50,DAT_00262c54,DAT_00262c50,param_2,param_1,7);
  return;
}
