// OoT3D decomp @ 0036c648  name=FUN_0036c648  size=60

void FUN_0036c648(float param_1,int param_2)

{
  float fVar1;

  fVar1 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x34));
  *(float *)(param_2 + 0x6c) = fVar1 * param_1;
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x34));
  *(float *)(param_2 + 100) = -fVar1 * param_1;
  return;
}
