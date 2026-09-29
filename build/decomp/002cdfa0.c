// OoT3D decomp @ 002cdfa0  name=FUN_002cdfa0  size=120

float FUN_002cdfa0(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *(float *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    fVar2 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = ((fVar1 - *(float *)(param_1 + 4)) * fVar2) / fVar3 + *(float *)(param_1 + 4);
  }
  fVar2 = *(float *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
    fVar3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = ((fVar2 - *(float *)(param_1 + 0x14)) * fVar3) / fVar4 + *(float *)(param_1 + 0x14);
  }
  return fVar2 * fVar1;
}
