// OoT3D decomp @ 004a1d44  name=FUN_004a1d44  size=84

undefined4 FUN_004a1d44(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;

  uStack_10 = param_4;
  FUN_0030af40(&uStack_10,param_1 + 5);
  if (0 < param_1[10]) {
    *param_2 = *(undefined4 *)(*param_1 + param_1[9] * 4);
    FUN_0030aedc(&uStack_10);
    return 1;
  }
  FUN_0030aedc(&uStack_10);
  return 0;
}
