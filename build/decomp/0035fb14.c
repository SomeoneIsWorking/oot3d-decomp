// OoT3D decomp @ 0035fb14  name=FUN_0035fb14  size=120

void FUN_0035fb14(int param_1)

{
  int *piVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x60) = fVar2 * *(float *)(param_1 + 0x6c);
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  fVar2 = DAT_0035fb90;
  piVar1 = DAT_0035fb8c;
  *(float *)(param_1 + 0x68) = fVar3 * *(float *)(param_1 + 0x6c);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70) * fVar3 * fVar2;
  *(float *)(param_1 + 100) = fVar2;
  fVar3 = *(float *)(param_1 + 0x74);
  if (fVar2 == fVar3 || fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 100) = fVar2;
  return;
}

