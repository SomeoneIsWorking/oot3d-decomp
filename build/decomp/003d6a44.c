// OoT3D decomp @ 003d6a44  name=FUN_003d6a44  size=212

void FUN_003d6a44(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00364670(param_1,param_1 + 0xdfc,param_2,1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x54) == DAT_003d6b18) {
      FUN_00374444(param_2,param_1,param_1 + 0x28,0x10);
    }
    else if (DAT_003d6b1c < *(int *)(param_1 + 0x54)) {
      FUN_0036df58(param_2,param_1 + 0x28,2);
      FUN_0036df58(param_2,param_1 + 0x28,2);
      FUN_0036df58(param_2,param_1 + 0x28,2);
    }
    else {
      FUN_0036df58(param_2,param_1 + 0x28,1);
    }
    *(byte *)(param_1 + 0xdf3) = *(byte *)(param_1 + 0xdf3) | 8;
    FUN_00374428(param_1);
    return;
  }
  return;
}
