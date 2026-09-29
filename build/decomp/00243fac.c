// OoT3D decomp @ 00243fac  name=FUN_00243fac  size=92

void FUN_00243fac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00244008;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_0033398c(param_1);
  FUN_00376340(DAT_0024400c,DAT_00244010,DAT_0024400c,param_2,param_1,7);
  return;
}
