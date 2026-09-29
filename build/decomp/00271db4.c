// OoT3D decomp @ 00271db4  name=FUN_00271db4  size=96

undefined4 FUN_00271db4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  fVar1 = DAT_00271e14;
  if (param_2 == 9) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x712),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar2 * DAT_00271e14,param_3,1);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x714),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar2 * fVar1,param_3,1);
  }
  return 0;
}
