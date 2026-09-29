// OoT3D decomp @ 00372aa8  name=FUN_00372aa8  size=156

undefined4 FUN_00372aa8(short *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  iVar2 = (int)*param_1;
  if (param_3 == 0) {
    if (iVar2 == param_2) {
      return 1;
    }
  }
  else {
    if (param_2 < iVar2) {
      param_3 = -param_3;
    }
    if (param_2 < iVar2) {
      param_3 = (int)(short)param_3;
    }
    fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00372b44 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (param_3 < 1) {
      fVar3 = fVar4 * fVar3 * DAT_00372b48 - DAT_00372b4c;
    }
    else {
      fVar3 = DAT_00372b4c + fVar4 * fVar3 * DAT_00372b48;
    }
    sVar1 = *param_1 + (short)(int)fVar3;
    *param_1 = sVar1;
    if (-1 < (sVar1 - param_2) * (int)(short)(int)fVar3) {
      *param_1 = (short)param_2;
      return 1;
    }
  }
  return 0;
}
