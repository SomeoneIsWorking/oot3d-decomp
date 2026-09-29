// OoT3D decomp @ 003679d0  name=FUN_003679d0  size=316

void FUN_003679d0(float param_1,float param_2,float param_3,float *param_4,short *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = (float)FUN_002cfca0((int)param_5[1]);
  fVar2 = (float)FUN_00338f60((int)param_5[1]);
  *param_4 = fVar2;
  param_4[8] = -fVar1;
  param_4[3] = param_1;
  param_4[7] = param_2;
  param_4[0xb] = param_3;
  fVar5 = DAT_00367b0c;
  if (*param_5 == 0) {
    param_4[10] = fVar2;
    param_4[2] = fVar1;
    param_4[1] = fVar5;
    param_4[9] = fVar5;
    fVar4 = DAT_00367b10;
    param_4[6] = fVar5;
  }
  else {
    fVar3 = (float)FUN_002cfca0();
    fVar4 = (float)FUN_00338f60((int)*param_5);
    param_4[10] = fVar2 * fVar4;
    param_4[9] = fVar2 * fVar3;
    param_4[2] = fVar1 * fVar4;
    param_4[1] = fVar1 * fVar3;
    param_4[6] = -fVar3;
  }
  param_4[5] = fVar4;
  if (param_5[2] != 0) {
    fVar5 = (float)FUN_002cfca0();
    fVar1 = (float)FUN_00338f60((int)param_5[2]);
    fVar2 = *param_4;
    *param_4 = fVar2 * fVar1 + param_4[1] * fVar5;
    param_4[1] = param_4[1] * fVar1 - fVar2 * fVar5;
    fVar2 = param_4[8];
    param_4[8] = fVar2 * fVar1 + param_4[9] * fVar5;
    param_4[9] = param_4[9] * fVar1 - fVar2 * fVar5;
    param_4[4] = param_4[5] * fVar5;
    param_4[5] = param_4[5] * fVar1;
    return;
  }
  param_4[4] = fVar5;
  return;
}
