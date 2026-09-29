// OoT3D decomp @ 0024433c  name=FUN_0024433c  size=84

void FUN_0024433c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00244390;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_00244394,DAT_00244398,DAT_00244394,param_2,param_1,7);
  return;
}
