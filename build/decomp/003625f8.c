// OoT3D decomp @ 003625f8  name=FUN_003625f8  size=260

float * FUN_003625f8(float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_14;
  float local_10;
  
  FUN_0036c258(param_1 * DAT_003626fc * DAT_00362700 * DAT_003626fc,&local_10,&local_14);
  fVar1 = DAT_00362708;
  fVar6 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar2 = DAT_00362704 - local_14;
  fVar5 = DAT_00362704 / SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar6 = fVar6 * fVar5;
  fVar3 = fVar3 * fVar5;
  fVar4 = fVar4 * fVar5;
  fVar8 = fVar2 * fVar6 * fVar3;
  fVar7 = fVar2 * fVar6 * fVar4;
  *param_2 = local_14 + fVar2 * fVar6 * fVar6;
  fVar5 = fVar2 * fVar3 * fVar4;
  param_2[1] = fVar8 - local_10 * fVar4;
  param_2[2] = fVar7 + local_10 * fVar3;
  param_2[3] = fVar1;
  param_2[4] = fVar8 + local_10 * fVar4;
  param_2[5] = local_14 + fVar2 * fVar3 * fVar3;
  param_2[6] = fVar5 - local_10 * fVar6;
  param_2[7] = fVar1;
  param_2[8] = fVar7 - local_10 * fVar3;
  param_2[9] = fVar5 + local_10 * fVar6;
  param_2[10] = local_14 + fVar2 * fVar4 * fVar4;
  param_2[0xb] = fVar1;
  return param_2;
}

