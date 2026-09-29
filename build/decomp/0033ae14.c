// OoT3D decomp @ 0033ae14  name=FUN_0033ae14  size=264

void FUN_0033ae14(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar2 = DAT_0033af20;
  pfVar1 = DAT_0033af1c;
  fVar6 = *param_2 - *param_1;
  fVar5 = *param_3 - *param_1;
  fVar3 = param_2[1] - param_1[1];
  fVar8 = param_3[1] - param_1[1];
  fVar9 = param_3[2] - param_1[2];
  fVar7 = param_2[2] - param_1[2];
  fVar4 = fVar3 * fVar9 - fVar7 * fVar8;
  *DAT_0033af1c = fVar4;
  fVar7 = fVar7 * fVar5 - fVar6 * fVar9;
  pfVar1[1] = fVar7;
  fVar5 = fVar6 * fVar8 - fVar3 * fVar5;
  pfVar1[2] = fVar5;
  fVar3 = DAT_0033af28;
  fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar5 * fVar5);
  if (iVar2 <= (int)ABS(fVar5)) {
    fVar5 = DAT_0033af24 / fVar5;
    *param_4 = fVar4 * fVar5;
    *param_5 = pfVar1[1] * fVar5;
    fVar3 = pfVar1[2];
    *param_6 = fVar3 * fVar5;
    *param_7 = -(*param_4 * *param_1 + *param_5 * param_1[1] + fVar3 * fVar5 * param_1[2]);
    return;
  }
  *param_7 = DAT_0033af28;
  *param_6 = fVar3;
  *param_5 = fVar3;
  *param_4 = fVar3;
  return;
}
