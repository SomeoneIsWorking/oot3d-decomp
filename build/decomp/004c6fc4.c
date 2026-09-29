// OoT3D decomp @ 004c6fc4  name=FUN_004c6fc4  size=68

void FUN_004c6fc4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036b4ec(param_1 + 0x254);
  if ((iVar1 != 0) && (*(short *)(DAT_004c7008 + param_1) == 0)) {
    FUN_0033f7ac(param_1,DAT_004c700c,param_2);
    return;
  }
  return;
}
