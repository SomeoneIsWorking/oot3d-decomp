// OoT3D decomp @ 003306c4  name=FUN_003306c4  size=56

float FUN_003306c4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar3 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  return SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
}
