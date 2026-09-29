// OoT3D decomp @ 00208f18  name=FUN_00208f18  size=104

undefined4 FUN_00208f18(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0033b384(param_2,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(uint *)(DAT_00208f80 + param_1) & 0x2000000) == 0) {
    iVar1 = FUN_0033b1c8(param_1,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    FUN_0035d27c(param_1,DAT_00208f84);
  }
  return 0;
}
