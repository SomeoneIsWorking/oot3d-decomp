// OoT3D decomp @ 00378ab8  name=FUN_00378ab8  size=80

undefined4 FUN_00378ab8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint in_fpscr;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (param_2 == 0) {
    local_10 = DAT_00378b08;
    local_c = DAT_00378b08;
    local_8 = VectorSignedToFloat((int)*(short *)(param_4 + 0x7e0),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00372070(param_3,param_3,&local_10);
  }
  return 0;
}
