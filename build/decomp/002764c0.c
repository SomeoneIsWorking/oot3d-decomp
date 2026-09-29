// OoT3D decomp @ 002764c0  name=FUN_002764c0  size=68

undefined4 FUN_002764c0(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0033b384(param_2,param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(DAT_00276504 + param_1) & 0x100) == 0) {
      return 0;
    }
    FUN_0032b45c(param_1,param_2);
  }
  return 1;
}
