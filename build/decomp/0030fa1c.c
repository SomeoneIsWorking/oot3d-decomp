// OoT3D decomp @ 0030fa1c  name=FUN_0030fa1c  size=860

void FUN_0030fa1c(float param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  if (((*DAT_0030fd78 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0030fd78), iVar4 != 0)) {
    FUN_00350820(DAT_0030fd80,DAT_0030fd7c,0x24,0x20);
  }
  FUN_0048ba78(*(undefined4 *)(param_2 + 0xc),DAT_0030fd80);
  uVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    uVar5 = FUN_0034807c(*(int *)(param_2 + 8),param_3);
  }
  fVar3 = DAT_0030fd8c;
  fVar2 = DAT_0030fd88;
  fVar1 = DAT_0030fd84;
  iVar4 = DAT_0030fd80;
  uVar12 = in_fpscr & 0xfffffff | (uint)(param_1 <= *(float *)(param_2 + 0x3c)) << 0x1d;
  uVar8 = 0;
  if (!SUB41(uVar12 >> 0x1d,0)) {
    param_1 = *(float *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  do {
    FUN_00347550(param_1,uVar5,0,iVar4,7);
    while( true ) {
      puVar9 = (undefined4 *)(iVar4 + uVar8 * 0x24);
      pfVar6 = (float *)(*(int *)(param_2 + 0x10) + uVar8 * 0x30);
      fVar13 = ABS((float)puVar9[4] * fVar3);
      uVar12 = uVar12 & 0xfffffff | (uint)(fVar1 <= (float)puVar9[5] * fVar3) << 0x1d;
      fVar14 = ABS((float)puVar9[5] * fVar3);
      for (fVar15 = ABS((float)puVar9[3] * fVar3); DAT_0030fd90 <= (int)fVar15;
          fVar15 = fVar15 - fVar2) {
      }
      for (; DAT_0030fd90 <= (int)fVar13; fVar13 = fVar13 - fVar2) {
      }
      for (; DAT_0030fd90 <= (int)fVar14; fVar14 = fVar14 - fVar2) {
      }
      uVar16 = VectorFloatToUnsigned(fVar15,3);
      uVar17 = VectorFloatToUnsigned(fVar13,3);
      uVar18 = VectorFloatToUnsigned(fVar14,3);
      pfVar10 = (float *)(DAT_0030fd94 + (uVar16 & 0xff) * 0x10);
      fVar22 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(uVar12 >> 0x15) & 3);
      fVar20 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(uVar12 >> 0x15) & 3);
      fVar19 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(uVar12 >> 0x15) & 3);
      fVar21 = pfVar10[1] + (fVar15 - fVar22) * pfVar10[3];
      pfVar11 = (float *)(DAT_0030fd94 + (uVar17 & 0xff) * 0x10);
      fVar22 = *pfVar10 + (fVar15 - fVar22) * pfVar10[2];
      pfVar10 = (float *)(DAT_0030fd94 + (uVar18 & 0xff) * 0x10);
      fVar15 = *pfVar11 + (fVar13 - fVar20) * pfVar11[2];
      fVar13 = pfVar11[1] + (fVar13 - fVar20) * pfVar11[3];
      if ((float)puVar9[3] * fVar3 < fVar1) {
        fVar22 = -fVar22;
      }
      fVar20 = *pfVar10 + (fVar14 - fVar19) * pfVar10[2];
      if ((float)puVar9[4] * fVar3 < fVar1) {
        fVar15 = -fVar15;
      }
      fVar14 = pfVar10[1] + (fVar14 - fVar19) * pfVar10[3];
      if (!SUB41(uVar12 >> 0x1d,0)) {
        fVar20 = -fVar20;
      }
      *pfVar6 = fVar14 * fVar13;
      pfVar6[4] = fVar20 * fVar13;
      pfVar6[9] = fVar22 * fVar13;
      pfVar6[10] = fVar21 * fVar13;
      pfVar6[1] = fVar22 * fVar14 * fVar15 - fVar21 * fVar20;
      pfVar6[6] = fVar21 * fVar20 * fVar15 - fVar22 * fVar14;
      pfVar6[2] = fVar22 * fVar20 + fVar21 * fVar14 * fVar15;
      pfVar6[5] = fVar21 * fVar14 + fVar22 * fVar20 * fVar15;
      pfVar6[8] = -fVar15;
      pfVar6[3] = 0.0;
      pfVar6[7] = 0.0;
      pfVar6[0xb] = 0.0;
      iVar7 = *(int *)(param_2 + 0x10) + uVar8 * 0x30;
      FUN_003283a0(iVar7,iVar7,puVar9 + 6);
      *(undefined4 *)(*(int *)(param_2 + 0x10) + uVar8 * 0x30 + 0xc) = *puVar9;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + uVar8 * 0x30 + 0x1c) = puVar9[1];
      iVar7 = uVar8 * 0x30;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar7 + 0x2c) = puVar9[2];
      if (*(uint *)(param_2 + 0x30) <= uVar8) {
        return;
      }
      if (uVar8 == 0) break;
      FUN_00347550(param_1,uVar5,uVar8,iVar4 + uVar8 * 0x24,6);
    }
  } while( true );
}
