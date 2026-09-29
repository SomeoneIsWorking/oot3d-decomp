// OoT3D decomp @ 00215344  name=FUN_00215344  size=1028

void FUN_00215344(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_a8 [27];
  undefined4 local_3c;
  int local_38;

  local_38 = param_2;
  if (*(int *)(DAT_002156dc + 8) < DAT_002156e0) {
    if (*(int *)(DAT_002156dc + 4) != 0) goto LAB_002153b4;
    *(undefined1 *)(param_1 + 0x200) = 2;
    *(undefined1 *)(param_1 + 0x1ff) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x200) = 0;
    *(undefined1 *)(param_1 + 0x1ff) = 1;
  }
  fVar1 = DAT_002156e8;
  if ((*(uint *)(DAT_002156dc + 0xbc) & *DAT_002156e4) != 0) {
    FUN_00372d4c(DAT_002156e8,DAT_002156e8,param_1 + 0xbc,0);
    local_3c = FUN_00372f38(param_1,param_2,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x208,0,0xffffffff,param_1 + 0x28c,param_1 + 0x328,3);
    FUN_00350820(local_a8,DAT_002156ec,0x24,3);
    FUN_0048ba78(*(undefined4 *)(param_1 + 0x230),local_a8);
    iVar5 = DAT_002156fc;
    fVar4 = DAT_002156f8;
    iVar3 = DAT_002156f4;
    fVar2 = DAT_002156f0;
    iVar9 = 0;
    do {
      iVar11 = param_1 + iVar9 * 0x34;
      fVar14 = ABS(local_a8[iVar9 * 9 + 4] * fVar2);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar1 <= local_a8[iVar9 * 9 + 5] * fVar2) << 0x1d;
      fVar15 = ABS(local_a8[iVar9 * 9 + 5] * fVar2);
      for (fVar16 = ABS(local_a8[iVar9 * 9 + 3] * fVar2); iVar3 <= (int)fVar16;
          fVar16 = fVar16 - fVar4) {
      }
      for (; iVar3 <= (int)fVar14; fVar14 = fVar14 - fVar4) {
      }
      for (; iVar3 <= (int)fVar15; fVar15 = fVar15 - fVar4) {
      }
      uVar17 = VectorFloatToUnsigned(fVar16,3);
      uVar18 = VectorFloatToUnsigned(fVar14,3);
      uVar19 = VectorFloatToUnsigned(fVar15,3);
      fVar22 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar12 = (float *)(iVar5 + (uVar17 & 0xff) * 0x10);
      fVar24 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar13 = (float *)(iVar5 + (uVar18 & 0xff) * 0x10);
      fVar21 = *pfVar12 + (fVar16 - fVar20) * pfVar12[2];
      fVar23 = pfVar12[1] + (fVar16 - fVar20) * pfVar12[3];
      pfVar12 = (float *)(iVar5 + (uVar19 & 0xff) * 0x10);
      fVar20 = pfVar13[1] + (fVar14 - fVar22) * pfVar13[3];
      fVar14 = *pfVar13 + (fVar14 - fVar22) * pfVar13[2];
      fVar16 = *pfVar12 + (fVar15 - fVar24) * pfVar12[2];
      if (local_a8[iVar9 * 9 + 3] * fVar2 < fVar1) {
        fVar21 = -fVar21;
      }
      fVar15 = pfVar12[1] + (fVar15 - fVar24) * pfVar12[3];
      if (local_a8[iVar9 * 9 + 4] * fVar2 < fVar1) {
        fVar14 = -fVar14;
      }
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar16 = -fVar16;
      }
      *(float *)(iVar11 + 0x28c) = fVar15 * fVar20;
      *(float *)(iVar11 + 0x29c) = fVar16 * fVar20;
      *(float *)(iVar11 + 0x2b0) = fVar21 * fVar20;
      *(float *)(iVar11 + 0x2b4) = fVar23 * fVar20;
      *(float *)(iVar11 + 0x290) = fVar21 * fVar15 * fVar14 - fVar23 * fVar16;
      *(float *)(iVar11 + 0x2a4) = fVar23 * fVar16 * fVar14 - fVar21 * fVar15;
      *(float *)(iVar11 + 0x294) = fVar21 * fVar16 + fVar23 * fVar15 * fVar14;
      *(float *)(iVar11 + 0x2a0) = fVar23 * fVar15 + fVar21 * fVar16 * fVar14;
      *(float *)(iVar11 + 0x2ac) = -fVar14;
      *(undefined4 *)(iVar11 + 0x298) = 0;
      *(undefined4 *)(iVar11 + 0x2a8) = 0;
      *(undefined4 *)(iVar11 + 0x2b8) = 0;
      iVar10 = iVar9 + 1;
      *(float *)(iVar11 + 0x298) = local_a8[iVar9 * 9];
      *(float *)(iVar11 + 0x2a8) = local_a8[iVar9 * 9 + 1];
      *(float *)(iVar11 + 0x2b8) = local_a8[iVar9 * 9 + 2];
      iVar9 = iVar10;
    } while (iVar10 < 3);
    uVar8 = FUN_00372f0c(local_3c,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x230) + 0xc),uVar8);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x230) + 0xc) + 0x10) = 1;
    if ((*(short *)(local_38 + 0x104) == 0x55) && (*(int *)(DAT_002156dc + 8) == 0xfff8)) {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x230),1);
    }
    else {
      FUN_0037266c(*(undefined4 *)(param_1 + 0x230),1);
    }
    *(undefined4 *)(param_1 + 0x50) = DAT_0021576c;
    FUN_00353dd0(param_2,param_1 + 0x1a4);
    piVar6 = DAT_00215770;
    *DAT_00215770 = param_1;
    FUN_00149298(param_2,param_1 + 0x1a4,piVar6);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    uVar7 = FUN_001cf740(local_38,0xf);
    uVar8 = DAT_00215778;
    *(undefined2 *)(DAT_00215774 + param_1) = uVar7;
    FUN_0037572c(uVar8,param_1);
    return;
  }
LAB_002153b4:
  FUN_00374428(param_1);
  return;
}
