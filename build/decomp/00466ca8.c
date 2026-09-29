// OoT3D decomp @ 00466ca8  name=FUN_00466ca8  size=80

int * FUN_00466ca8(int *param_1)

{
  if (*param_1 != 0) {
    FUN_002d2e04(param_1);
    FUN_0048a5a8(*param_1,3);
    FUN_002d2d60(*param_1);
    *param_1 = 0;
  }
  FUN_0030d538(param_1 + 1,param_1[2],param_1 + 2);
  return param_1;
}
