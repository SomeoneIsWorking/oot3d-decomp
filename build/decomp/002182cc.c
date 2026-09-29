// OoT3D decomp @ 002182cc  name=FUN_002182cc  size=172

undefined4 FUN_002182cc(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  fVar1 = DAT_00218378;
  if (param_2 == 1) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xfea),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar2 * DAT_00218378,param_3,1);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xfe8),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar2 * fVar1,param_3,1);
  }
  else if (param_2 == 2) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xff0),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar2 * DAT_00218378,param_3,1);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xfee),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar2 * fVar1,param_3,1);
  }
  return 0;
}
