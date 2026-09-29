// OoT3D decomp @ 002c0d20  name=FUN_002c0d20  size=64

undefined4 FUN_002c0d20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;

  if (param_1 == 0) {
    uVar1 = 1;
    *param_3 = 0;
  }
  else {
    iVar2 = FUN_002bfffc(*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      uVar1 = 0xe;
      *param_3 = 0;
    }
    else {
      *param_3 = *(undefined4 *)(iVar2 + 0x58);
      uVar1 = 0;
    }
  }
  return uVar1;
}
