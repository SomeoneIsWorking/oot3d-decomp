// OoT3D decomp @ 0035a4fc  name=FUN_0035a4fc  size=56

float FUN_0035a4fc(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar3 = *param_2 - *(float *)(param_1 + 0x28);
  fVar1 = param_2[1] - *(float *)(param_1 + 0x2c);
  fVar2 = param_2[2] - *(float *)(param_1 + 0x30);
  return SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
}
