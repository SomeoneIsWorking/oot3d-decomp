// OoT3D decomp @ 00378308  name=FUN_00378308  size=156

undefined4 FUN_00378308(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  fVar1 = DAT_003783a4;
  if (param_2 == 0xe) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xa18),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar2 * DAT_003783a4,param_3,1);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xa16),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar2 * fVar1,param_3,1);
  }
  if (param_2 - 0x29U < 5) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + (param_2 + -0x29) * 2 + 0xa4e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar2 * fVar1,param_3,1);
  }
  return 0;
}
