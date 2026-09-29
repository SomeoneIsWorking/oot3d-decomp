// OoT3D decomp @ 00495a7c  name=FUN_00495a7c  size=124

undefined4 FUN_00495a7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 uStack_10;

  uStack_10 = param_4;
  FUN_0030af40(&uStack_10,param_1 + 5);
  if ((uint)param_1[8] <= (uint)param_1[10]) {
    FUN_0030aedc(&uStack_10);
    return 0;
  }
  FUN_00339384(param_1[10] + param_1[9]);
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_002df318(param_1 + 1,1);
  }
  FUN_0030aedc(&uStack_10);
  return 1;
}
