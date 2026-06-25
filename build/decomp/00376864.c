// OoT3D decomp @ 00376864  name=FUN_00376864  size=204

void FUN_00376864(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x60) = fVar5 * *(float *)(param_1 + 0x6c);
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  fVar5 = DAT_00376934;
  piVar3 = DAT_00376930;
  fVar6 = fVar6 * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x68) = fVar6;
  iVar4 = *piVar3;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70) * fVar7 * fVar5;
  *(float *)(param_1 + 100) = fVar7;
  fVar5 = DAT_00376938;
  fVar8 = *(float *)(param_1 + 0x74);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f | (uint)(fVar7 == fVar8) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar7) || NAN(fVar8))) {
    fVar7 = fVar8;
  }
  *(float *)(param_1 + 100) = fVar7;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(uVar1 >> 0x15) & 3);
  fVar8 = fVar8 * fVar5;
  *(float *)(param_1 + 0x28) =
       *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x60) * fVar8;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xa8) + fVar7 * fVar8;
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xac) + fVar6 * fVar8;
  return;
}

