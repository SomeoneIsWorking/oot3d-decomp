// OoT3D decomp @ 004235b8  name=FUN_004235b8  size=292

void FUN_004235b8(undefined4 param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  
  FUN_0034a80c(&local_3c,param_1);
  fVar2 = DAT_004236dc;
  *param_2 = local_30;
  param_2[1] = local_20;
  param_2[2] = local_10;
  *param_3 = local_3c;
  param_3[1] = local_2c;
  param_3[2] = local_1c;
  param_3[3] = local_38;
  param_3[4] = local_28;
  param_3[5] = local_18;
  param_3[6] = -local_34;
  param_3[7] = -local_24;
  param_3[8] = -local_14;
  fVar4 = fVar2 / SQRT(local_3c * local_3c + local_2c * local_2c + local_1c * local_1c);
  *param_3 = local_3c * fVar4;
  param_3[1] = local_2c * fVar4;
  param_3[2] = local_1c * fVar4;
  fVar4 = fVar2 / SQRT(local_38 * local_38 + local_28 * local_28 + local_18 * local_18);
  param_3[3] = local_38 * fVar4;
  param_3[4] = local_28 * fVar4;
  param_3[5] = local_18 * fVar4;
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar1 = param_3[8];
  fVar2 = fVar2 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  param_3[6] = fVar3 * fVar2;
  param_3[7] = fVar4 * fVar2;
  param_3[8] = fVar1 * fVar2;
  return;
}

