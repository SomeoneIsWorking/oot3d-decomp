// OoT3D decomp @ 004c89c4  name=FUN_004c89c4  size=224

void FUN_004c89c4(float *param_1,float *param_2,float *param_3)

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

  iVar2 = DAT_004c8aac;
  pfVar1 = DAT_004c8aa8;
  fVar9 = DAT_004c8aa4;
  fVar5 = (*param_2 + param_2[3]) * DAT_004c8aa4;
  *DAT_004c8aa8 = fVar5;
  fVar6 = (param_2[1] + param_2[4]) * fVar9;
  pfVar1[1] = fVar6;
  fVar9 = (param_2[2] + param_2[5]) * fVar9;
  pfVar1[2] = fVar9;
  fVar3 = *param_1;
  pfVar1[3] = fVar3;
  fVar7 = param_1[1];
  pfVar1[4] = fVar7;
  fVar8 = param_1[2];
  pfVar1[5] = fVar8;
  fVar4 = SQRT((fVar3 - fVar5) * (fVar3 - fVar5) + (fVar7 - fVar6) * (fVar7 - fVar6) +
               (fVar8 - fVar9) * (fVar8 - fVar9));
  if ((int)ABS(fVar4) < iVar2) {
    *param_3 = fVar3;
    param_3[1] = pfVar1[4];
    fVar9 = pfVar1[5];
  }
  else {
    fVar4 = param_1[3] / fVar4;
    *param_3 = fVar3 + (fVar5 - fVar3) * fVar4;
    param_3[1] = pfVar1[4] + (fVar6 - fVar7) * fVar4;
    fVar9 = pfVar1[5] + (fVar9 - fVar8) * fVar4;
  }
  param_3[2] = fVar9;
  return;
}
