// OoT3D decomp @ 0033bd9c  name=FUN_0033bd9c  size=188

void FUN_0033bd9c(int param_1)

{
  int *piVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x34));
  fVar2 = fVar2 * *(float *)(param_1 + 0x6c);
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x60) = fVar3 * fVar2;
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x34));
  *(float *)(param_1 + 100) = fVar3 * *(float *)(param_1 + 0x6c);
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  fVar3 = DAT_0033be5c;
  piVar1 = DAT_0033be58;
  fVar4 = fVar4 * fVar2;
  *(float *)(param_1 + 0x68) = fVar4;
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * fVar3;
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x60) * fVar2;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 100) * fVar2;
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xac) + fVar4 * fVar2;
  return;
}
