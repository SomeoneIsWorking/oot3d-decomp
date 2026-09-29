// OoT3D decomp @ 00490d40  name=FUN_00490d40  size=124

undefined4 FUN_00490d40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 uStack_10;

  uStack_10 = param_4;
  FUN_002dbd08(&uStack_10,param_1 + 5);
  if ((uint)param_1[8] <= (uint)param_1[10]) {
    FUN_002c4464(&uStack_10);
    return 0;
  }
  FUN_00339384(param_1[10] + param_1[9]);
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_002c44cc(param_1 + 1,1);
  }
  FUN_002c4464(&uStack_10);
  return 1;
}
