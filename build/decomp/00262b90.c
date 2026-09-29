// OoT3D decomp @ 00262b90  name=FUN_00262b90  size=84

void FUN_00262b90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00262be4;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_00262be8,DAT_00262bec,DAT_00262be8,param_2,param_1,7);
  return;
}
