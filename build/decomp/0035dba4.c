// OoT3D decomp @ 0035dba4  name=FUN_0035dba4  size=196

void FUN_0035dba4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar1 = DAT_0035dc70;
  fVar8 = *param_2;
  fVar4 = param_2[1];
  fVar9 = -*param_1;
  fVar6 = param_2[2];
  fVar7 = -param_1[1];
  fVar5 = -param_1[2];
  fVar2 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5) *
          SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar6 * fVar6);
  fVar3 = DAT_0035dc6c;
  if (DAT_0035dc68 <= (int)ABS(fVar2)) {
    fVar3 = (fVar9 * fVar8 + fVar7 * fVar4 + fVar5 * fVar6) / fVar2;
  }
  *param_3 = fVar9 + (fVar8 * fVar3 + *param_1) * DAT_0035dc70;
  param_3[1] = fVar7 + (fVar4 * fVar3 + param_1[1]) * fVar1;
  param_3[2] = fVar5 + (fVar6 * fVar3 + param_1[2]) * fVar1;
  return;
}
