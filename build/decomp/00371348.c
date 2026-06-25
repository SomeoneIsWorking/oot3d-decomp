// OoT3D decomp @ 00371348  name=FUN_00371348  size=176

void FUN_00371348(float param_1,float param_2,float param_3,float *param_4,int param_5)

{
  float fVar1;
  
  fVar1 = DAT_003713f8;
  if (param_5 == 1) {
    *param_4 = *param_4 * param_1;
    param_4[4] = param_4[4] * param_1;
    param_4[8] = param_4[8] * param_1;
    param_4[1] = param_4[1] * param_2;
    param_4[5] = param_4[5] * param_2;
    param_4[9] = param_4[9] * param_2;
    param_4[2] = param_4[2] * param_3;
    param_4[6] = param_4[6] * param_3;
    param_4[10] = param_4[10] * param_3;
    return;
  }
  param_4[1] = DAT_003713f8;
  param_4[2] = fVar1;
  param_4[3] = fVar1;
  param_4[4] = fVar1;
  param_4[6] = fVar1;
  param_4[7] = fVar1;
  param_4[8] = fVar1;
  param_4[9] = fVar1;
  param_4[0xb] = fVar1;
  *param_4 = param_1;
  param_4[5] = param_2;
  param_4[10] = param_3;
  return;
}

