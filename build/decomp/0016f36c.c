// OoT3D decomp @ 0016f36c  name=FUN_0016f36c  size=96

undefined4 FUN_0016f36c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  fVar1 = DAT_0016f3cc;
  if (param_2 == 2) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x4e0),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar2 * DAT_0016f3cc,param_3,1);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x4d8),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar2 * fVar1,param_3,1);
  }
  return 0;
}
