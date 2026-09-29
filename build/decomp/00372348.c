// OoT3D decomp @ 00372348  name=FUN_00372348  size=108

float FUN_00372348(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar3 = *param_2 - *param_1;
  fVar1 = SQRT(fVar3 * fVar3 + (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
               (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]));
  fVar2 = fVar1;
  if ((ABS(fVar1) < DAT_003723b4) && (fVar2 = DAT_003723b4, fVar1 < DAT_003723b8)) {
    fVar2 = DAT_003723bc;
  }
  return fVar3 / fVar2;
}
