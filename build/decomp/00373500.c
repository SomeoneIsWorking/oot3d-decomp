// OoT3D decomp @ 00373500  name=FUN_00373500  size=140

void FUN_00373500(float param_1,float param_2,float param_3,float *param_4)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = *param_4;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 == param_1) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    param_1 = param_1 - fVar4;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037358c + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037358c + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar3 = fVar3 * param_3 * DAT_00373590;
    fVar5 = param_1 * fVar5 * param_2 * DAT_00373590;
    if ((int)ABS(param_1) < DAT_00373594) {
      fVar5 = param_1;
    }
    if ((fVar5 <= fVar3) && (fVar2 = -fVar3, fVar3 = fVar5, fVar5 < fVar2)) {
      fVar3 = fVar2;
    }
    *param_4 = fVar4 + fVar3;
  }
  return;
}
