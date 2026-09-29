// OoT3D decomp @ 00113378  name=FUN_00113378  size=260

undefined4 FUN_00113378(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;

  fVar1 = DAT_0011347c;
  if (param_2 == 0) {
    FUN_003735e8((*(float *)(param_4 + 0x1784) + DAT_00113488) * DAT_0011347c,param_3,1);
  }
  else if (param_2 == 1) {
    FUN_00371234(*(float *)(param_4 + 0x1794) * DAT_0011347c,param_3,1);
    FUN_003735e8(*(float *)(param_4 + 0x1790) * fVar1,param_3,1);
  }
  else if (param_2 == 2) {
    FUN_00371234(*(float *)(param_4 + 0x17a0) * DAT_0011347c,param_3,1);
    FUN_003735e8(*(float *)(param_4 + 0x179c) * fVar1,param_3,1);
  }
  if (param_2 - 1U < 3) {
    if (*(short *)(DAT_00113480 + param_4) < param_2) {
      FUN_0036932c();
    }
    else {
      FUN_0037266c(*(undefined4 *)(param_4 + 0x358),*(undefined1 *)(DAT_00113484 + param_2 + -1));
    }
  }
  return 0;
}
