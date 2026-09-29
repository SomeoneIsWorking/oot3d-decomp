// OoT3D decomp @ 00340404  name=FUN_00340404  size=108

float FUN_00340404(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar2 = *param_2;
  fVar7 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4) *
          SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar6 * fVar6);
  if ((int)ABS(fVar7) < DAT_00340470) {
    return DAT_00340474;
  }
  return (fVar1 * fVar2 + fVar3 * fVar5 + fVar4 * fVar6) / fVar7;
}
