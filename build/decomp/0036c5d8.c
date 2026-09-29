// OoT3D decomp @ 0036c5d8  name=FUN_0036c5d8  size=112

void FUN_0036c5d8(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar3 = *param_3 - *(float *)(param_1 + 0x28);
  fVar4 = param_3[2] - *(float *)(param_1 + 0x30);
  *param_2 = fVar3 * fVar1 - fVar4 * fVar2;
  param_2[2] = fVar3 * fVar2 + fVar4 * fVar1;
  param_2[1] = param_3[1] - *(float *)(param_1 + 0x2c);
  return;
}
