// OoT3D decomp @ 001ff8a8  name=FUN_001ff8a8  size=200

void FUN_001ff8a8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar2 = *(int *)(DAT_001ff970 + param_2);
  *(short *)(param_1 + 0x9aa) = *(short *)(param_1 + 0x9ac) << 1;
  fVar3 = (float)FUN_002cfca0();
  *(float *)(param_1 + 0x980) = fVar3 * *(float *)(param_1 + 0x9b8);
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x9aa));
  *(float *)(param_1 + 0x984) = fVar3 * *(float *)(param_1 + 0x9b4);
  fVar3 = (float)FUN_002cfca0((int)*(short *)(iVar2 + 0xbe));
  *(float *)(param_1 + 0x988) = -fVar3 * *(float *)(param_1 + 0x980);
  fVar4 = (float)FUN_00338f60((int)*(short *)(iVar2 + 0xbe));
  fVar3 = DAT_001ff978;
  piVar1 = DAT_001ff974;
  *(float *)(param_1 + 0x980) = fVar4 * *(float *)(param_1 + 0x980);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9b0),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x9b0) < 1) {
    fVar3 = fVar4 * fVar5 * fVar3 - DAT_001ff97c;
  }
  else {
    fVar3 = DAT_001ff97c + fVar4 * fVar5 * fVar3;
  }
  *(short *)(param_1 + 0x9ac) = (short)(int)fVar3 + *(short *)(param_1 + 0x9ac);
  return;
}
