// OoT3D decomp @ 00287bd0  name=FUN_00287bd0  size=116

undefined4 FUN_00287bd0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  if (param_2 == 0) {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x23c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar1 * DAT_00287c44,param_3,1);
    local_18 = VectorSignedToFloat((int)*(short *)(param_4 + 0x23a),(byte)(in_fpscr >> 0x15) & 3);
    local_14 = DAT_00287c48;
    local_10 = DAT_00287c48;
    FUN_00372070(param_3,param_3,&local_18);
  }
  return 0;
}
