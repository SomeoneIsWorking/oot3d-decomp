// OoT3D decomp @ 0016fb2c  name=FUN_0016fb2c  size=68

undefined4 FUN_0016fb2c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  short local_c [4];

  if (param_2 == 0xf) {
    local_c[0] = -*(short *)(DAT_0016fb70 + param_4);
    local_c[1] = 0;
    local_c[2] = 0;
    FUN_0034df48(param_3,local_c);
  }
  return 0;
}
