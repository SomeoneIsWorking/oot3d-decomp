// OoT3D decomp @ 002441ac  name=FUN_002441ac  size=84

void FUN_002441ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00244200;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_00244204,DAT_00244208,DAT_00244204,param_2,param_1,7);
  return;
}
