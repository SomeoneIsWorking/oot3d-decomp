// OoT3D decomp @ 002c4250  name=FUN_002c4250  size=216

void FUN_002c4250(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_2c;
  
  fVar3 = DAT_002c4334;
  fVar2 = DAT_002c4330;
  fVar1 = DAT_002c432c;
  fVar6 = DAT_002c4328;
  fVar7 = *param_2 * *param_2 + param_2[2] * param_2[2];
  if (SQRT(fVar7) == DAT_002c4328 && param_2[1] == DAT_002c4328) {
    local_2c = 0.0;
  }
  else {
    fVar5 = (float)FUN_003696ec();
    local_2c = (float)((int)(fVar3 + fVar5 * fVar1 * fVar2) & 0xffff);
  }
  fVar5 = param_2[1];
  bVar4 = *param_2 == fVar6;
  if (bVar4) {
    bVar4 = param_2[2] == fVar6;
  }
  if (!bVar4) {
    fVar6 = (float)FUN_003696ec(*param_2,param_2[2]);
    local_2c = (float)CONCAT22((short)(int)(fVar3 + fVar6 * fVar1 * fVar2),local_2c._0_2_);
  }
  *param_1 = SQRT(fVar7 + fVar5 * fVar5);
  param_1[1] = local_2c;
  return;
}

