// OoT3D decomp @ 0036fc20  name=FUN_0036fc20  size=124

void FUN_0036fc20(float param_1,float param_2,float *param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0036fc9c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0036fc9c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar2 * param_2 * DAT_0036fca0;
  fVar1 = *param_3;
  fVar2 = fVar1 * fVar4 * param_1 * DAT_0036fca0;
  if ((int)ABS(fVar1) < DAT_0036fca4) {
    fVar2 = fVar1;
  }
  fVar4 = fVar3;
  if ((fVar3 < fVar2) || (fVar4 = -fVar3, fVar2 < -fVar3)) {
    fVar2 = fVar4;
  }
  *param_3 = fVar1 - fVar2;
  return;
}
