// OoT3D decomp @ 0036e10c  name=FUN_0036e10c  size=52

void FUN_0036e10c(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;

  fVar2 = *param_2 - *(float *)(param_1 + 0x28);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x30);
  FUN_003758b0(SQRT(fVar2 * fVar2 + fVar1 * fVar1),*(float *)(param_1 + 0x2c) - param_2[1]);
  return;
}
