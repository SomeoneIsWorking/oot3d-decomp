// OoT3D decomp @ 0011348c  name=FUN_0011348c  size=260

undefined4 FUN_0011348c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;

  fVar1 = DAT_00113590;
  if (param_2 == 0) {
    FUN_003735e8((*(float *)(param_4 + 0x1754) + DAT_0011359c) * DAT_00113590,param_3,1);
  }
  else if (param_2 == 1) {
    FUN_00371234(*(float *)(param_4 + 0x1764) * DAT_00113590,param_3,1);
    FUN_003735e8(*(float *)(param_4 + 0x1760) * fVar1,param_3,1);
  }
  else if (param_2 == 2) {
    FUN_00371234(*(float *)(param_4 + 6000) * DAT_00113590,param_3,1);
    FUN_003735e8(*(float *)(param_4 + 0x176c) * fVar1,param_3,1);
  }
  if (param_2 - 1U < 3) {
    if (*(short *)(DAT_00113594 + param_4) < param_2) {
      FUN_0036932c();
    }
    else {
      FUN_0037266c(*(undefined4 *)(param_4 + 0x2d4),*(undefined1 *)(DAT_00113598 + param_2 + -1));
    }
  }
  return 0;
}
