// OoT3D decomp @ 0036ab8c  name=FUN_0036ab8c  size=120

bool FUN_0036ab8c(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar4 = param_2[1];
  fVar7 = param_2[2];
  fVar3 = *param_2;
  fVar8 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar6 * fVar6) *
          SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7);
  bVar1 = (int)ABS(fVar8) < DAT_0036ac04;
  if (bVar1) {
    *param_3 = DAT_0036ac08;
  }
  else {
    *param_3 = (fVar2 * fVar3 + fVar5 * fVar4 + fVar6 * fVar7) / fVar8;
  }
  return bVar1;
}
