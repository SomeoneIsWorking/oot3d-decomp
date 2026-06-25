// OoT3D decomp @ 00370378  name=FUN_00370378  size=144

undefined4 FUN_00370378(short *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  sVar1 = *param_1;
  if (param_3 == 0) {
    if (sVar1 == param_2) {
      return 1;
    }
  }
  else {
    sVar2 = (short)param_2;
    if (0 < (short)(sVar1 - sVar2)) {
      param_3 = -param_3;
    }
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00370408 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (0 < (short)(sVar1 - sVar2)) {
      param_3 = (int)(short)param_3;
    }
    fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = sVar1 + (short)(int)(fVar4 * fVar3 * DAT_0037040c);
    *param_1 = sVar1;
    if (-1 < (int)(short)(sVar1 - sVar2) * (int)(short)param_3) {
      *param_1 = sVar2;
      return 1;
    }
  }
  return 0;
}

