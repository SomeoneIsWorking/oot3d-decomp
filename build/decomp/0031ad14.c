// OoT3D decomp @ 0031ad14  name=FUN_0031ad14  size=548

void FUN_0031ad14(float param_1,int *param_2,int param_3,float *param_4,int *param_5,int param_6,
                 float *param_7)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  iVar6 = *param_5;
  iVar8 = *param_2;
  param_2[3] = iVar6;
  *(byte *)((int)param_2 + 0x12) = *(byte *)((int)param_2 + 0x12) | 2;
  *(byte *)(param_3 + 0x17) = *(byte *)(param_3 + 0x17) | 2;
  if ((*(byte *)((int)param_5 + 0x13) & 8) != 0) {
    *(byte *)((int)param_2 + 0x13) = *(byte *)((int)param_2 + 0x13) | 1;
  }
  param_5[3] = iVar8;
  *(byte *)((int)param_5 + 0x12) = *(byte *)((int)param_5 + 0x12) | 2;
  *(byte *)(param_6 + 0x17) = *(byte *)(param_6 + 0x17) | 2;
  if ((*(byte *)((int)param_2 + 0x13) & 8) != 0) {
    *(byte *)((int)param_5 + 0x13) = *(byte *)((int)param_5 + 0x13) | 1;
  }
  if (iVar8 == 0 || iVar6 == 0) {
    return;
  }
  bVar1 = *(byte *)((int)param_2 + 0x12);
  bVar9 = (bVar1 & 4) != 0;
  if (!bVar9) {
    bVar1 = *(byte *)((int)param_5 + 0x12);
  }
  if (bVar9 || (bVar1 & 4) != 0) {
    return;
  }
  uVar7 = (uint)*(byte *)(iVar8 + 0xb6);
  if (uVar7 == 0xff) {
    iVar4 = 0;
  }
  else if (uVar7 == 0xfe) {
    iVar4 = 1;
  }
  else {
    iVar4 = 2;
  }
  uVar5 = (uint)*(byte *)(iVar6 + 0xb6);
  if (uVar5 == 0xff) {
    iVar3 = 0;
  }
  else if (uVar5 == 0xfe) {
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
  }
  fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = ABS(fVar14 + fVar13);
  fVar2 = fVar14 + fVar13;
  if ((int)fVar10 < DAT_0031af38) {
    fVar13 = DAT_0031af3c;
    fVar2 = DAT_0031af40;
  }
  fVar16 = *param_7 - *param_4;
  if ((int)fVar10 < DAT_0031af38) {
    fVar14 = fVar13;
  }
  fVar10 = param_7[2] - param_4[2];
  fVar15 = SQRT(fVar16 * fVar16 + fVar10 * fVar10);
  if (iVar4 == 0) {
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    fVar11 = DAT_0031af3c;
    fVar12 = DAT_0031af44;
    if (iVar4 != 1) {
      if (iVar3 == 2) {
        fVar11 = fVar13 * (DAT_0031af3c / fVar2);
        fVar12 = fVar14 * (DAT_0031af3c / fVar2);
      }
      goto LAB_0031ae98;
    }
    if ((iVar3 == 0) || (fVar11 = DAT_0031af48, fVar12 = DAT_0031af48, iVar3 == 1))
    goto LAB_0031ae98;
  }
  fVar11 = DAT_0031af44;
  fVar12 = DAT_0031af3c;
LAB_0031ae98:
  if (DAT_0031af38 <= (int)ABS(fVar15)) {
    param_1 = param_1 / fVar15;
    fVar16 = fVar16 * param_1;
    fVar10 = fVar10 * param_1;
    *(float *)(iVar8 + 0xa4) = *(float *)(iVar8 + 0xa4) - fVar16 * fVar11;
    *(float *)(iVar8 + 0xac) = *(float *)(iVar8 + 0xac) - fVar10 * fVar11;
    *(float *)(iVar6 + 0xa4) = *(float *)(iVar6 + 0xa4) + fVar16 * fVar12;
    *(float *)(iVar6 + 0xac) = *(float *)(iVar6 + 0xac) + fVar10 * fVar12;
    return;
  }
  if (param_1 == DAT_0031af44) {
    *(float *)(iVar8 + 0xa4) = *(float *)(iVar8 + 0xa4) - fVar11;
    *(float *)(iVar6 + 0xa4) = *(float *)(iVar6 + 0xa4) + fVar12;
    return;
  }
  *(float *)(iVar8 + 0xa4) = *(float *)(iVar8 + 0xa4) - param_1 * fVar11;
  *(float *)(iVar6 + 0xa4) = *(float *)(iVar6 + 0xa4) + param_1 * fVar12;
  return;
}
