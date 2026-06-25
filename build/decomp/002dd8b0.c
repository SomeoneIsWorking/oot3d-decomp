// OoT3D decomp @ 002dd8b0  name=FUN_002dd8b0  size=692

void FUN_002dd8b0(float param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_3c [4];
  
  iVar4 = DAT_002ddb90;
  fVar3 = DAT_002ddb80;
  fVar2 = DAT_002ddb7c;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002ddb64 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  param_1 = param_1 * fVar10 * DAT_002ddb68;
  fVar10 = DAT_002ddb70;
  if (((uint)param_1 <= (uint)DAT_002ddb6c) && (fVar10 = param_1, DAT_002ddb74 < (int)param_1)) {
    fVar10 = DAT_002ddb78;
  }
  bVar7 = *(char *)(param_2 + 0x1a7) == '\x02';
  if (bVar7) {
    bVar7 = (*(ushort *)(param_2 + 0x90) & 1) == 0;
  }
  if ((bVar7) && (*(char *)(param_2 + 0x227f) != '\0')) {
    FUN_0034a928(param_2,DAT_002ddb84);
  }
  else {
    local_3c[0] = *DAT_002ddb88;
    local_3c[1] = DAT_002ddb88[1];
    local_3c[2] = DAT_002ddb88[2];
    local_3c[3] = DAT_002ddb88[3];
    iVar6 = *(int *)(DAT_002ddb8c + 4);
    if (*(int *)(param_2 + 0x284) == 0x47 || *(int *)(param_2 + 0x284) == 0x4c) {
      uVar5 = FUN_003603c0(param_2 + 0x254,0x6c);
      fVar8 = local_3c[iVar6 * 2];
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar3) << 0x1e;
      fVar11 = (float)VectorSignedToFloat(uVar5,(byte)(uVar1 >> 0x15) & 3);
      if ((SUB41(uVar1 >> 0x1e,0)) &&
         (fVar10 != fVar3 && fVar10 < fVar3 == (NAN(fVar10) || NAN(fVar3)))) {
        fVar8 = fVar11;
      }
      fVar12 = *(float *)(param_2 + 0x2254) + fVar10;
      fVar8 = fVar12 - fVar8;
      fVar9 = fVar8 * fVar10;
      if ((fVar9 < fVar3 != (NAN(fVar9) || NAN(fVar3))) || (fVar3 <= (fVar8 - fVar10) * fVar10)) {
        fVar8 = local_3c[iVar6 * 2 + 1];
        if ((fVar8 == fVar3) && (fVar10 != fVar3 && fVar10 < fVar3 == (NAN(fVar10) || NAN(fVar3))))
        {
          fVar8 = fVar11;
        }
        fVar12 = fVar12 - fVar8;
        fVar8 = fVar12 * fVar10;
        if ((fVar8 < fVar3 != (NAN(fVar8) || NAN(fVar3))) || (fVar3 <= (fVar12 - fVar10) * fVar10))
        goto LAB_002ddb24;
      }
      FUN_002be2ec(*(undefined4 *)(param_2 + 0x221c),param_2);
      iVar6 = *(int *)(param_2 + 0x221c);
    }
    else {
      fVar11 = *(float *)(param_2 + 0x2254) + fVar10;
      fVar8 = fVar11 - DAT_002ddb94;
      fVar12 = fVar8 * fVar10;
      if (((fVar12 < DAT_002ddb80 != (NAN(fVar12) || NAN(DAT_002ddb80))) ||
          (DAT_002ddb80 <= (fVar8 - fVar10) * fVar10)) &&
         ((fVar11 = fVar11 - DAT_002ddb98, fVar8 = fVar11 * fVar10,
          fVar8 < DAT_002ddb80 != (NAN(fVar8) || NAN(DAT_002ddb80)) ||
          (DAT_002ddb80 <= (fVar11 - fVar10) * fVar10)))) goto LAB_002ddb24;
      FUN_002be2ec(*(undefined4 *)(param_2 + 0x221c),param_2);
      iVar6 = *(int *)(param_2 + 0x221c);
    }
    if (iVar4 < iVar6) {
      *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
    }
    FUN_002c1ec8(param_3,param_2);
  }
LAB_002ddb24:
  fVar10 = *(float *)(param_2 + 0x2254) + fVar10;
  *(float *)(param_2 + 0x2254) = fVar10;
  if (fVar10 < fVar3) {
    fVar10 = fVar10 + fVar2;
  }
  else {
    if ((int)fVar10 < DAT_002ddb9c) {
      return;
    }
    fVar10 = fVar10 - fVar2;
  }
  *(float *)(param_2 + 0x2254) = fVar10;
  return;
}

