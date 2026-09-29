// OoT3D decomp @ 003529d4  name=FUN_003529d4  size=200

undefined4 FUN_003529d4(short *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  sVar1 = *param_1;
  iVar2 = param_2 - sVar1;
  if (iVar2 < 0) {
    param_3 = (int)(short)-(short)param_3;
  }
  if (iVar2 < 0x8000) {
    if (iVar2 < -0x7fff) {
      param_3 = (int)(short)-(short)param_3;
      iVar2 = iVar2 + 0xffff;
    }
  }
  else {
    param_3 = (int)(short)-(short)param_3;
    iVar2 = iVar2 + -0xffff;
  }
  if (param_3 == 0) {
    if (sVar1 == param_2) {
      return 1;
    }
  }
  else {
    fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00352a9c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (param_3 < 1) {
      fVar3 = fVar4 * fVar3 * DAT_00352aa0 - DAT_00352aa4;
    }
    else {
      fVar3 = DAT_00352aa4 + fVar4 * fVar3 * DAT_00352aa0;
    }
    *param_1 = sVar1 + (short)(int)fVar3;
    if (iVar2 * (short)(int)fVar3 < 1) {
      *param_1 = (short)param_2;
      return 1;
    }
  }
  return 0;
}
