// OoT3D decomp @ 0035dd04  name=FUN_0035dd04  size=56

float FUN_0035dd04(int param_1)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(*(int *)(DAT_0035dd3c + 4) + 0x28) - *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(*(int *)(DAT_0035dd3c + 4) + 0x30) - *(float *)(param_1 + 0x30);
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) + DAT_0035dd40;
}
