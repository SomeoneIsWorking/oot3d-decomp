// OoT3D decomp @ 0036e168  name=FUN_0036e168  size=276

float FUN_0036e168(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_5;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 == param_1) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    iVar2 = (int)*(short *)(*piRam0036e27c + 0x110);
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    fVar3 = fVar6 * param_4 * fRam0036e280;
    fVar6 = fVar7 * param_3 * fRam0036e280;
    fVar7 = param_1 - fVar4;
    fVar5 = fVar7 * fVar5 * param_2 * fRam0036e280;
    if ((int)ABS(fVar7) < iRam0036e284) {
      fVar5 = fVar7;
    }
    if ((fVar3 <= fVar5) || (fVar7 = -fVar3, fVar5 <= fVar7)) {
      if (fVar6 < fVar5) {
        fVar5 = fVar6;
      }
      if (fVar5 < -fVar6) {
        fVar5 = -fVar6;
      }
      *param_5 = fVar4 + fVar5;
    }
    else {
      if (fVar5 < fVar3) {
        fVar4 = fVar4 + fVar3;
        *param_5 = fVar4;
        if (param_1 < fVar4) {
          fVar4 = param_1;
        }
        *param_5 = fVar4;
        fVar5 = fVar3;
      }
      if (fVar7 < fVar5) {
        fVar7 = *param_5 + fVar7;
        *param_5 = fVar7;
        if (fVar7 <= param_1) {
          fVar7 = param_1;
        }
        *param_5 = fVar7;
      }
    }
  }
  return ABS(param_1 - *param_5);
}

