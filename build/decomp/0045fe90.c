// OoT3D decomp @ 0045fe90  name=FUN_0045fe90  size=1088

void FUN_0045fe90(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
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
  float local_c0;
  float local_8c;
  float local_88;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;

  uVar4 = DAT_004602a0;
  iVar3 = DAT_0046029c;
  fVar17 = DAT_00460298;
  fVar12 = DAT_00460280;
  fVar2 = DAT_0046027c;
  iVar11 = 0;
  do {
    uVar7 = in_fpscr & 0xfffffff;
    in_fpscr = uVar7 | (uint)(*(float *)(param_1 + 0x7f44) == fVar2) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      if (*(char *)(iVar3 + iVar11 * 0x20) == '\x02') {
LAB_004600f0:
        fVar16 = DAT_004602bc;
        iVar9 = iVar3 + iVar11 * 0x20;
        fVar13 = *(float *)(iVar9 + 0x10);
        fVar18 = *(float *)(iVar9 + 4);
        fVar21 = *(float *)(iVar9 + 8);
        fVar23 = *(float *)(iVar9 + 0xc);
        fVar19 = *(float *)(iVar9 + 0x14);
        fVar22 = *(float *)(iVar9 + 0x18);
        fVar14 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + 0x1c),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar14 = fVar14 * DAT_004602bc;
        uVar7 = uVar7 | (uint)(fVar14 == fVar2) << 0x1e;
        fVar15 = fVar12;
        local_68 = fVar2;
        if (!SUB41(uVar7 >> 0x1e,0)) {
          local_68 = (float)FUN_003727f0(fVar14);
          fVar15 = (float)FUN_00372674(fVar14);
        }
        local_8c = fVar12;
        local_88 = fVar2;
        fVar20 = -local_68;
        local_7c = fVar2;
        local_6c = fVar2;
        fVar14 = (float)VectorSignedToFloat((int)*(char *)(iVar9 + 0x1d),(byte)(uVar7 >> 0x15) & 3);
        fVar14 = fVar14 * fVar16;
        in_fpscr = uVar7 & 0xfffffff | (uint)(fVar14 == fVar2) << 0x1e;
        local_78 = fVar15;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar16 = (float)FUN_003727f0(fVar14);
          fVar14 = (float)FUN_00372674(fVar14);
          local_8c = fVar12 * fVar14 + fVar2 * fVar16;
          local_88 = fVar2 * fVar14 - fVar12 * fVar16;
          local_7c = fVar2 * fVar14 + fVar15 * fVar16;
          local_78 = fVar15 * fVar14 - fVar2 * fVar16;
          local_6c = fVar2 * fVar14 + local_68 * fVar16;
          local_68 = local_68 * fVar14 - fVar2 * fVar16;
        }
        iVar5 = param_1 + 0x3190 + iVar11 * 4;
        iVar6 = *(int *)(iVar5 + 0x224);
        *(float *)(iVar6 + 0x3c) = fVar13 + fVar18;
        *(float *)(iVar6 + 0x40) = fVar19 + fVar21;
        *(float *)(iVar6 + 0x44) = fVar22 + fVar23;
        iVar6 = *(int *)(iVar5 + 0x224);
        *(float *)(iVar6 + 0x54) = local_8c * fVar17;
        *(float *)(iVar6 + 0x58) = local_88 * fVar17;
        *(float *)(iVar6 + 0x5c) = fVar2 * fVar17;
        *(float *)(iVar6 + 0x60) = fVar2;
        *(float *)(iVar6 + 100) = local_7c * fVar17;
        *(float *)(iVar6 + 0x68) = local_78 * fVar17;
        *(float *)(iVar6 + 0x6c) = fVar20 * fVar17;
        *(float *)(iVar6 + 0x70) = fVar2;
        *(float *)(iVar6 + 0x74) = local_6c * fVar17;
        *(float *)(iVar6 + 0x78) = local_68 * fVar17;
        *(float *)(iVar6 + 0x7c) = fVar15 * fVar17;
        *(float *)(iVar6 + 0x80) = fVar2;
        fVar16 = DAT_00460470;
        uVar7 = (uint)*(byte *)(iVar9 + 0x1e);
        if (uVar7 < 4) {
          uVar10 = uVar7 & 3;
          local_c0 = fVar12;
        }
        else {
          uVar10 = 3;
          fVar15 = (float)VectorSignedToFloat(uVar7 - 4,(byte)(in_fpscr >> 0x15) & 3);
          local_c0 = fVar12 - fVar15 * DAT_0046046c;
        }
        iVar9 = *(int *)(iVar5 + 0x224);
        fVar15 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar9 + 0xf0) = uVar4;
        *(undefined4 *)(iVar9 + 0xf4) = uVar4;
        *(float *)(iVar9 + 0xf8) = fVar12;
        *(float *)(iVar9 + 0xfc) = local_c0;
        iVar9 = *(int *)(iVar5 + 0x224);
        *(undefined4 *)(iVar9 + 0x110) = 0x3f800000;
        *(undefined4 *)(iVar9 + 0x114) = 0;
        *(undefined4 *)(iVar9 + 0x118) = 0;
        *(float *)(iVar9 + 0x11c) = fVar15 * fVar16;
        *(undefined4 *)(iVar9 + 0x120) = 0;
        *(undefined4 *)(iVar9 + 0x124) = 0x3f800000;
        *(undefined4 *)(iVar9 + 0x128) = 0;
        *(float *)(iVar9 + 300) = fVar2;
        *(undefined4 *)(iVar9 + 0x130) = 0;
        *(undefined4 *)(iVar9 + 0x134) = 0;
        *(undefined4 *)(iVar9 + 0x138) = 0x3f800000;
        *(float *)(iVar9 + 0x13c) = fVar2;
        FUN_00371eac(*(undefined4 *)(iVar5 + 0x224),0);
      }
    }
    else {
      pcVar8 = (char *)(iVar3 + iVar11 * 0x20);
      cVar1 = *pcVar8;
      if (cVar1 == '\0') {
        fVar17 = *(float *)(param_1 + 0x1c4) - *(float *)(param_1 + 0x1b8);
        fVar12 = *(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x1c0);
        *(float *)(pcVar8 + 0x10) =
             *(float *)(param_1 + 0x1b8) +
             (fVar17 / SQRT(fVar17 * fVar17 + fVar2 * fVar2 + fVar12 * fVar12)) * DAT_004602a4;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (cVar1 == '\x01') {
        cVar1 = pcVar8[0x1f];
        pcVar8[0x1f] = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          *pcVar8 = '\x02';
          goto LAB_004600f0;
        }
      }
      else if (cVar1 == '\x02') {
        if ((byte)pcVar8[0x1e] < 0x40) {
          pcVar8[0x1e] = pcVar8[0x1e] + 1;
          goto LAB_004600f0;
        }
        *pcVar8 = -1;
      }
    }
    iVar11 = (int)(short)((short)iVar11 + 1);
    if (0xb < iVar11) {
      return;
    }
  } while( true );
}
