// OoT3D decomp @ 00301164  name=FUN_00301164  size=164

void FUN_00301164(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = DAT_00301208;
  param_1[4] = param_2[0xb] / param_2[10];
  param_1[5] = param_2[0xb] / (param_2[10] - fVar1);
  fVar2 = param_2[0xb] / (*param_2 * param_2[10]);
  *param_1 = (param_2[2] - fVar1) * fVar2;
  param_1[1] = (param_2[2] + fVar1) * fVar2;
  fVar2 = param_2[0xb] / (param_2[5] * param_2[10]);
  param_1[3] = (param_2[6] + fVar1) * fVar2;
  param_1[2] = (param_2[6] - fVar1) * fVar2;
  return;
}
