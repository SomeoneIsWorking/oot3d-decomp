// OoT3D decomp @ 00363e64  name=FUN_00363e64  size=40

float FUN_00363e64(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;

  fVar2 = *param_2 - *(float *)(param_1 + 0x28);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x30);
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}
