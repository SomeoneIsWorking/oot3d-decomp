// OoT3D decomp @ 00357eac  name=FUN_00357eac  size=40

float FUN_00357eac(int param_1,int param_2)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}
