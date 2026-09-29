// OoT3D decomp @ 00334af8  name=FUN_00334af8  size=168

float FUN_00334af8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar1 = DAT_00334ba0;
  fVar5 = *param_2 - *param_1;
  fVar6 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar2 = SQRT(fVar4);
  if (fVar2 != DAT_00334ba0 || fVar6 != DAT_00334ba0) {
    FUN_003696ec(fVar2,fVar6);
  }
  if (fVar5 != fVar1 || fVar3 != fVar1) {
    FUN_003696ec(fVar5,fVar3);
  }
  return SQRT(fVar4 + fVar6 * fVar6);
}
