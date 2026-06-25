// OoT3D decomp @ 002d2fc4  name=FUN_002d2fc4  size=136

undefined4 FUN_002d2fc4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_002dbd08(&uStack_10,param_1 + 5);
  if (param_1[10] < 1) {
    FUN_002c4464(&uStack_10);
    return 0;
  }
  *param_2 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  FUN_00339384(param_1[9] + 1,param_1[8]);
  param_1[9] = extraout_r1;
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    FUN_002c44cc(param_1 + 3,1);
  }
  FUN_002c4464(&uStack_10);
  return 1;
}

