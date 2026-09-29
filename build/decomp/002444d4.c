// OoT3D decomp @ 002444d4  name=FUN_002444d4  size=132

void FUN_002444d4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(DAT_00244558,param_2,param_1,param_1 + 0x1a4);
  FUN_0033398c(param_1);
  FUN_00376340(DAT_0024455c,DAT_00244560,DAT_0024455c,param_2,param_1,7);
  if (iVar1 != 0) {
    FUN_0033391c(DAT_00244564,param_1,0xd,0);
    return;
  }
  return;
}
