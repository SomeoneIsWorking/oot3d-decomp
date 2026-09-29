// OoT3D decomp @ 0021fa04  name=FUN_0021fa04  size=128

undefined4 FUN_0021fa04(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0033b384(param_2,param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(DAT_0021fa84 + param_1) & 0x2000000) == 0) {
      iVar1 = FUN_0033b1c8(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    else {
      FUN_0035d27c(param_1,DAT_0021fa88);
    }
    iVar1 = FUN_0036b4ec(param_1 + 0x1764,param_2);
    if (iVar1 != 0) {
      FUN_0035d27c(param_1,DAT_0021fa8c);
    }
  }
  return 1;
}
