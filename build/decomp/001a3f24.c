// OoT3D decomp @ 001a3f24  name=FUN_001a3f24  size=984

/* WARNING: Removing unreachable block (ram,0x001a40e0) */
/* WARNING: Removing unreachable block (ram,0x001a4104) */

void FUN_001a3f24(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  uint extraout_r1;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;

  iVar1 = DAT_001a42fc;
  uVar8 = in_fpscr & 0xfffffff |
          (uint)(*(float *)(DAT_001a42fc + 0x20) <= *(float *)(param_1 + 0x98)) << 0x1d;
  if (!SUB41(uVar8 >> 0x1d,0)) {
    FUN_00368d94(*(short *)(param_1 + 0x1e0) + 1,*(undefined4 *)(DAT_001a42fc + 0x24));
    *(short *)(param_1 + 0x1e0) = (short)extraout_r1;
    uVar4 = DAT_001a431c;
    fVar3 = DAT_001a4318;
    fVar2 = DAT_001a4300;
    if ((extraout_r1 & 0xffff) == 0) {
      uVar30 = *(undefined4 *)(param_1 + 0x1e8);
      local_5c = DAT_001a4300;
      local_58 = DAT_001a4300;
      local_54 = DAT_001a4300;
      local_68 = DAT_001a4300;
      local_64 = DAT_001a4300;
      local_60 = DAT_001a4300;
      local_74 = DAT_001a4300;
      local_70 = DAT_001a4304;
      local_6c = DAT_001a4300;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(uVar8 >> 0x15) & 3)
      ;
      uVar8 = uVar8 & 0xfffffff | (uint)(DAT_001a4300 <= fVar10 * DAT_001a4308) << 0x1d;
      for (fVar10 = ABS(fVar10 * DAT_001a4308); fVar20 = DAT_001a4300, DAT_001a430c <= (int)fVar10;
          fVar10 = fVar10 - DAT_001a4310) {
      }
      for (; DAT_001a430c <= (int)fVar20; fVar20 = fVar20 - DAT_001a4310) {
      }
      uVar11 = VectorFloatToUnsigned(DAT_001a4300,3);
      uVar12 = VectorFloatToUnsigned(fVar10,3);
      uVar13 = VectorFloatToUnsigned(fVar20,3);
      fVar19 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar8 >> 0x15) & 3);
      fVar16 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar8 >> 0x15) & 3);
      pfVar5 = (float *)(DAT_001a4314 + (uVar11 & 0xff) * 0x10);
      fVar14 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar8 >> 0x15) & 3);
      pfVar6 = (float *)(DAT_001a4314 + (uVar12 & 0xff) * 0x10);
      fVar9 = *pfVar5 + (DAT_001a4300 - fVar19) * pfVar5[2];
      fVar17 = pfVar5[1] + (DAT_001a4300 - fVar19) * pfVar5[3];
      pfVar5 = (float *)(DAT_001a4314 + (uVar13 & 0xff) * 0x10);
      fVar19 = *pfVar6 + (fVar10 - fVar14) * pfVar6[2];
      fVar14 = pfVar6[1] + (fVar10 - fVar14) * pfVar6[3];
      fVar10 = *pfVar5 + (fVar20 - fVar16) * pfVar5[2];
      fVar20 = pfVar5[1] + (fVar20 - fVar16) * pfVar5[3];
      if (!SUB41(uVar8 >> 0x1d,0)) {
        fVar19 = -fVar19;
      }
      fVar29 = fVar17 * fVar14;
      fVar28 = fVar9 * fVar14;
      iVar7 = 0;
      fVar27 = -fVar19;
      fVar25 = fVar20 * fVar14;
      fVar14 = fVar10 * fVar14;
      fVar16 = fVar9 * fVar20 * fVar19 - fVar17 * fVar10;
      fVar26 = fVar9 * fVar10 + fVar17 * fVar20 * fVar19;
      fVar24 = fVar17 * fVar10 * fVar19 - fVar9 * fVar20;
      fVar10 = fVar17 * fVar20 + fVar9 * fVar10 * fVar19;
      if (0 < *(int *)(iVar1 + 0x28)) {
        do {
          local_5c = (float)FUN_003738a8(uVar30);
          local_5c = fVar2 + local_5c;
          local_54 = fVar2;
          local_58 = fVar2 + *(float *)(iVar1 + 0x2c);
          fVar20 = (float)FUN_003738a8(fVar3);
          local_74 = fVar20 * *(float *)(iVar1 + 0x30) * fVar3;
          fVar20 = (float)FUN_003738a8(uVar4);
          local_70 = *(float *)(iVar1 + 0x30) + fVar20 * *(float *)(iVar1 + 0x30);
          fVar20 = (float)FUN_00371e50(uVar4);
          fVar17 = *(float *)(iVar1 + 0x30) + fVar20 * *(float *)(iVar1 + 0x30);
          fVar23 = fVar14 * local_74;
          fVar15 = local_74 * *(float *)(iVar1 + 0x34);
          fVar18 = fVar17 * *(float *)(iVar1 + 0x34);
          fVar21 = fVar14 * local_5c;
          fVar22 = fVar27 * local_5c;
          fVar20 = fVar28 * local_58;
          fVar19 = fVar27 * local_74;
          fVar9 = fVar28 * local_70;
          local_74 = fVar25 * local_74 + fVar16 * local_70 + fVar26 * fVar17;
          local_70 = fVar23 + fVar10 * local_70 + fVar24 * fVar17;
          local_6c = fVar19 + fVar9 + fVar29 * fVar17;
          local_64 = fVar14 * fVar15 + fVar10 * fVar2 + fVar24 * fVar18;
          local_68 = fVar25 * fVar15 + fVar16 * fVar2 + fVar26 * fVar18;
          local_60 = fVar27 * fVar15 + fVar28 * fVar2 + fVar29 * fVar18;
          local_5c = fVar25 * local_5c + fVar16 * local_58 + fVar26 * local_54 +
                     *(float *)(param_1 + 0x28);
          local_58 = fVar21 + fVar10 * local_58 + fVar24 * local_54 + *(float *)(param_1 + 0x2c);
          local_54 = fVar22 + fVar20 + fVar29 * local_54 + *(float *)(param_1 + 0x30);
          FUN_00343798(param_2,&local_5c,&local_68,&local_74,DAT_001a4320 + -4,DAT_001a4320,
                       (int)(short)*(undefined4 *)(iVar1 + 0x44),
                       (int)(short)*(undefined4 *)(iVar1 + 0x48),
                       (int)(short)*(undefined4 *)(iVar1 + 0x38));
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar1 + 0x28));
      }
    }
  }
  return;
}
