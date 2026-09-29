// OoT3D decomp @ 0024446c  name=FUN_0024446c  size=92

void FUN_0024446c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_002444c8;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_0033398c(param_1);
  FUN_00376340(DAT_002444cc,DAT_002444d0,DAT_002444cc,param_2,param_1,7);
  return;
}
