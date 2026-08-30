// OoT3D decomp @ 0040c744  name=FUN_0040c744  size=648

void FUN_0040c744(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  iVar5 = iRam0040c9dc;
  fVar4 = fRam0040c9d8;
  iVar3 = iRam0040c9d4;
  fVar2 = fRam0040c9d0;
  fVar1 = fRam0040c9cc;
  iVar7 = 0;
  if (0 < *(int *)(**(int **)(param_1 + 4) + 8)) {
    do {
      puVar11 = (undefined4 *)(param_2 + iVar7 * 0x24);
      pfVar6 = (float *)(*(int *)(param_1 + 0x10) + iVar7 * 0x30);
      fVar12 = ABS((float)puVar11[4] * fVar1);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= (float)puVar11[5] * fVar1) << 0x1d;
      fVar13 = ABS((float)puVar11[5] * fVar1);
      for (fVar14 = ABS((float)puVar11[3] * fVar1); iVar3 <= (int)fVar14; fVar14 = fVar14 - fVar4) {
      }
      for (; iVar3 <= (int)fVar12; fVar12 = fVar12 - fVar4) {
      }
      for (; iVar3 <= (int)fVar13; fVar13 = fVar13 - fVar4) {
      }
      uVar15 = VectorFloatToUnsigned(fVar14,3);
      uVar16 = VectorFloatToUnsigned(fVar12,3);
      uVar17 = VectorFloatToUnsigned(fVar13,3);
      fVar20 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar9 = (float *)(iVar5 + (uVar15 & 0xff) * 0x10);
      fVar22 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar10 = (float *)(iVar5 + (uVar16 & 0xff) * 0x10);
      fVar19 = *pfVar9 + (fVar14 - fVar18) * pfVar9[2];
      fVar21 = pfVar9[1] + (fVar14 - fVar18) * pfVar9[3];
      pfVar9 = (float *)(iVar5 + (uVar17 & 0xff) * 0x10);
      fVar18 = *pfVar10 + (fVar12 - fVar20) * pfVar10[2];
      fVar12 = pfVar10[1] + (fVar12 - fVar20) * pfVar10[3];
      fVar14 = *pfVar9 + (fVar13 - fVar22) * pfVar9[2];
      if ((float)puVar11[3] * fVar1 < fVar2) {
        fVar19 = -fVar19;
      }
      fVar13 = pfVar9[1] + (fVar13 - fVar22) * pfVar9[3];
      if ((float)puVar11[4] * fVar1 < fVar2) {
        fVar18 = -fVar18;
      }
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar14 = -fVar14;
      }
      *pfVar6 = fVar13 * fVar12;
      pfVar6[4] = fVar14 * fVar12;
      pfVar6[9] = fVar19 * fVar12;
      pfVar6[10] = fVar21 * fVar12;
      pfVar6[1] = fVar19 * fVar13 * fVar18 - fVar21 * fVar14;
      pfVar6[6] = fVar21 * fVar14 * fVar18 - fVar19 * fVar13;
      pfVar6[2] = fVar19 * fVar14 + fVar21 * fVar13 * fVar18;
      pfVar6[5] = fVar21 * fVar13 + fVar19 * fVar14 * fVar18;
      pfVar6[8] = -fVar18;
      pfVar6[3] = 0.0;
      pfVar6[7] = 0.0;
      pfVar6[0xb] = 0.0;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7 * 0x30 + 0xc) = *puVar11;
      iVar8 = iVar7 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7 * 0x30 + 0x1c) = puVar11[1];
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7 * 0x30 + 0x2c) = puVar11[2];
      iVar7 = iVar8;
    } while (iVar8 < *(int *)(**(int **)(param_1 + 4) + 8));
  }
  return;
}
