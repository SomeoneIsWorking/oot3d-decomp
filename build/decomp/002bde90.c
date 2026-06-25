// OoT3D decomp @ 002bde90  name=FUN_002bde90  size=72

void FUN_002bde90(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar1 = param_3[1];
  fVar3 = param_3[2];
  *param_4 = *param_2 + (*param_3 - *param_2) * param_1;
  param_4[1] = param_2[1] + (fVar1 - fVar2) * param_1;
  param_4[2] = param_2[2] + (fVar3 - fVar4) * param_1;
  return;
}

