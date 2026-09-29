// OoT3D decomp @ 0042cb48  name=FUN_0042cb48  size=84

int FUN_0042cb48(undefined4 *param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;

  *param_1 = DAT_0042cb9c;
  FUN_00307538(param_1);
  param_1[7] = DAT_0042cba0;
  uVar2 = extraout_r1;
  if (param_1[8] != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
  }
  if (param_1[8] != 0 && uVar2 != 0) {
    FUN_0034fc68();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  iVar1 = FUN_00441f84(param_1 + 2);
  return iVar1 + -8;
}
