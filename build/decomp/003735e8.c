// OoT3D decomp @ 003735e8  name=FUN_003735e8  size=268

void FUN_003735e8(float param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = DAT_003736f8;
  fVar1 = DAT_003736f4;
  if (param_3 == 1) {
    if (param_1 != DAT_003736f4) {
      fVar1 = (float)FUN_003727f0(param_1);
      fVar2 = (float)FUN_00372674(param_1);
      fVar4 = *param_2;
      *param_2 = fVar4 * fVar2 - param_2[2] * fVar1;
      param_2[2] = fVar4 * fVar1 + param_2[2] * fVar2;
      fVar4 = param_2[4];
      param_2[4] = fVar4 * fVar2 - param_2[6] * fVar1;
      param_2[6] = fVar4 * fVar1 + param_2[6] * fVar2;
      fVar4 = param_2[8];
      param_2[8] = fVar4 * fVar2 - param_2[10] * fVar1;
      param_2[10] = fVar4 * fVar1 + param_2[10] * fVar2;
    }
    return;
  }
  fVar4 = DAT_003736f8;
  fVar3 = DAT_003736f4;
  if (param_1 != DAT_003736f4) {
    fVar3 = (float)FUN_003727f0(param_1);
    fVar4 = (float)FUN_00372674(param_1);
  }
  *param_2 = fVar4;
  param_2[1] = fVar1;
  param_2[2] = fVar3;
  param_2[3] = fVar1;
  param_2[5] = fVar2;
  param_2[4] = fVar1;
  param_2[6] = fVar1;
  param_2[7] = fVar1;
  param_2[8] = -fVar3;
  param_2[9] = fVar1;
  param_2[10] = fVar4;
  param_2[0xb] = fVar1;
  return;
}

