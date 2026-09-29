// OoT3D decomp @ 002c82d4  name=FUN_002c82d4  size=276

float * FUN_002c82d4(float param_1,float *param_2,float *param_3)

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
  float local_14;
  float local_10;

  FUN_0036c258(param_1 * DAT_002c83e8 * DAT_002c83ec * DAT_002c83e8,&local_10,&local_14);
  fVar2 = DAT_002c83f4;
  fVar1 = DAT_002c83f0;
  fVar7 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar3 = DAT_002c83f0 - local_14;
  fVar6 = DAT_002c83f0 / SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar7 = fVar7 * fVar6;
  fVar4 = fVar4 * fVar6;
  fVar5 = fVar5 * fVar6;
  fVar8 = fVar3 * fVar7 * fVar4;
  fVar9 = fVar3 * fVar7 * fVar5;
  *param_2 = local_14 + fVar3 * fVar7 * fVar7;
  fVar6 = fVar3 * fVar4 * fVar5;
  param_2[1] = fVar8 - local_10 * fVar5;
  param_2[2] = fVar9 + local_10 * fVar4;
  param_2[3] = fVar2;
  param_2[4] = fVar8 + local_10 * fVar5;
  param_2[5] = local_14 + fVar3 * fVar4 * fVar4;
  param_2[6] = fVar6 - local_10 * fVar7;
  param_2[7] = fVar2;
  param_2[8] = fVar9 - local_10 * fVar4;
  param_2[9] = fVar6 + local_10 * fVar7;
  param_2[10] = local_14 + fVar3 * fVar5 * fVar5;
  param_2[0xb] = fVar2;
  param_2[0xc] = fVar2;
  param_2[0xd] = fVar2;
  param_2[0xe] = fVar2;
  param_2[0xf] = fVar1;
  return param_2;
}
