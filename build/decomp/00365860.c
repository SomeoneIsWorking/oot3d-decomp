// OoT3D decomp @ 00365860  name=FUN_00365860  size=88

void FUN_00365860(int param_1)

{
  float fVar1;
  float fVar2;

  fVar1 = (float)func_0x00338f60((int)*(short *)(param_1 + 0x34));
  fVar1 = fVar1 * *(float *)(param_1 + 0x6c);
  fVar2 = (float)func_0x002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x60) = fVar2 * fVar1;
  fVar2 = (float)func_0x002cfca0((int)*(short *)(param_1 + 0x34));
  *(float *)(param_1 + 100) = fVar2 * *(float *)(param_1 + 0x6c);
  fVar2 = (float)func_0x00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x68) = fVar2 * fVar1;
  return;
}
