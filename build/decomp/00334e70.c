// OoT3D decomp @ 00334e70  name=FUN_00334e70  size=300

void FUN_00334e70(float *param_1,undefined2 *param_2,int param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar3 = (float)FUN_003696ec(-param_1[8],SQRT(*param_1 * *param_1 + param_1[4] * param_1[4]));
  fVar2 = DAT_00334f9c;
  sVar1 = (short)(int)(fVar3 * DAT_00334f9c);
  param_2[1] = sVar1;
  if (sVar1 == 0x4000 || sVar1 == -0x4000) {
    *param_2 = 0;
    fVar3 = (float)FUN_003696ec(-param_1[1],param_1[5]);
    param_2[2] = (short)(int)(fVar3 * fVar2);
    return;
  }
  fVar3 = (float)FUN_003696ec(param_1[4],*param_1);
  param_2[2] = (short)(int)(fVar3 * fVar2);
  if (param_3 == 0) {
    fVar3 = (float)FUN_003696ec(param_1[9],param_1[10]);
    *param_2 = (short)(int)(fVar3 * fVar2);
    return;
  }
  fVar3 = param_1[9];
  fVar4 = param_1[10];
  fVar3 = (float)FUN_003696ec(fVar3 / SQRT(param_1[1] * param_1[1] + param_1[5] * param_1[5] +
                                           fVar3 * fVar3),
                              fVar4 / SQRT(param_1[2] * param_1[2] + param_1[6] * param_1[6] +
                                           fVar4 * fVar4));
  *param_2 = (short)(int)(fVar3 * fVar2);
  return;
}
