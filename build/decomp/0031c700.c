// OoT3D decomp @ 0031c700  name=FUN_0031c700  size=208

float FUN_0031c700(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar2 = *param_5;
  if (fVar2 != param_1) {
    fVar3 = param_1 - fVar2;
    fVar1 = fVar3 * param_2;
    if ((int)ABS(fVar3) < iRam0031c7d0) {
      fVar1 = fVar3;
    }
    if ((param_4 <= fVar1) || (fVar3 = -param_4, fVar1 <= fVar3)) {
      if (param_3 < fVar1) {
        fVar1 = param_3;
      }
      if (fVar1 < -param_3) {
        fVar1 = -param_3;
      }
      *param_5 = fVar2 + fVar1;
    }
    else {
      if (fVar1 < param_4) {
        fVar2 = fVar2 + param_4;
        *param_5 = fVar2;
        if (param_1 < fVar2) {
          fVar2 = param_1;
        }
        *param_5 = fVar2;
        fVar1 = param_4;
      }
      if (fVar3 < fVar1) {
        fVar3 = *param_5 + fVar3;
        *param_5 = fVar3;
        if (fVar3 <= param_1) {
          fVar3 = param_1;
        }
        *param_5 = fVar3;
      }
    }
  }
  return ABS(param_1 - *param_5);
}
