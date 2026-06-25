// OoT3D decomp @ 004a209c  name=FUN_004a209c  size=1768

undefined4
FUN_004a209c(float param_1,int param_2,int *param_3,int param_4,float *param_5_00,float *param_5,
            float *param_6,ushort **param_7)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  short *psVar11;
  uint in_fpscr;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  undefined4 local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar6 = DAT_004a2448;
  iVar5 = DAT_004a2444;
  fVar4 = DAT_004a2440;
  iVar3 = DAT_004a243c;
  local_78 = 0;
  if (*(short *)(param_2 + 2) == -1) {
    return 0;
  }
  local_70 = *param_6;
  fStack_6c = param_6[1];
  local_68 = param_6[2];
  iVar10 = *(int *)(*param_3 + 0x18);
  iVar8 = *(int *)(*param_3 + 0x1c);
  psVar11 = (short *)(param_3[0x12] + (uint)*(ushort *)(param_2 + 2) * 4);
  do {
    fVar15 = param_6[1];
    puVar9 = (ushort *)(iVar8 + *psVar11 * 0x14);
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[1] & 0xffff1fff) * 6 + 2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar14 = in_fpscr & 0xfffffff;
    in_fpscr = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[2] & 0xffff1fff) * 6 + 2)
                                          ,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (uint)puVar9[3] * 6 + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        in_fpscr = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) break;
      }
    }
    fVar21 = (float)VectorSignedToFloat((int)(short)puVar9[5],(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = fVar21 * fVar6;
    fVar15 = (float)VectorSignedToFloat((int)(short)puVar9[6],(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat((int)(short)puVar9[7],(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 * fVar6;
    fVar17 = (float)FUN_00357b30(fVar21,fVar15 * fVar6,fVar16,*(undefined4 *)(puVar9 + 8),&local_70)
    ;
    fVar15 = local_70;
    fVar18 = ABS(fVar17);
    uVar14 = in_fpscr & 0xfffffff;
    uVar12 = uVar14 | (uint)(fVar18 < param_1) << 0x1f | (uint)(fVar18 == param_1) << 0x1e;
    in_fpscr = uVar12 | (uint)(NAN(fVar18) || NAN(param_1)) << 0x1c;
    bVar2 = (byte)(uVar12 >> 0x18);
    if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (((uint)puVar9[1] & param_4 << 0xd) == 0)) {
      fVar18 = fVar4 / SQRT(fVar21 * fVar21 + fVar16 * fVar16);
      fVar24 = ABS(fVar16) * fVar18;
      if ((int)fVar24 < iVar5) {
        uVar1 = psVar11[1];
      }
      else {
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[1] & 0xffff1fff) * 6 +
                                                           4),(byte)(in_fpscr >> 0x15) & 3);
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[2] & 0xffff1fff) * 6 +
                                                           4),(byte)(in_fpscr >> 0x15) & 3);
        uVar12 = uVar14 | (uint)(fVar19 < fVar22) << 0x1f | (uint)(fVar19 == fVar22) << 0x1e;
        uVar13 = uVar12 | (uint)(NAN(fVar19) || NAN(fVar22)) << 0x1c;
        bVar2 = (byte)(uVar12 >> 0x18);
        fVar20 = fVar22;
        if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) &&
           (uVar13 = uVar14 | (uint)(fVar22 <= fVar19) << 0x1d, fVar20 = fVar19,
           !SUB41(uVar13 >> 0x1d,0))) {
          fVar19 = fVar22;
        }
        fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (uint)puVar9[3] * 6 + 4),
                                            (byte)(uVar13 >> 0x15) & 3);
        uVar14 = uVar13 & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f |
                 (uint)(fVar20 == fVar23) << 0x1e;
        bVar2 = (byte)(uVar14 >> 0x18);
        fVar22 = fVar23;
        if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar20) || NAN(fVar23))) &&
           (uVar14 = uVar13 & 0xfffffff | (uint)(fVar23 <= fVar19) << 0x1d, fVar22 = fVar20,
           !SUB41(uVar14 >> 0x1d,0))) {
          fVar19 = fVar23;
        }
        fVar19 = fVar19 + param_1;
        in_fpscr = uVar14 & 0xfffffff | (uint)(fVar22 - param_1 <= local_68) << 0x1d;
        if ((SUB41(in_fpscr >> 0x1d,0)) &&
           (uVar14 = uVar14 & 0xfffffff | (uint)(local_68 < fVar19) << 0x1f |
                     (uint)(local_68 == fVar19) << 0x1e,
           in_fpscr = uVar14 | (uint)(NAN(local_68) || NAN(fVar19)) << 0x1c,
           bVar2 = (byte)(uVar14 >> 0x18),
           (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar23 = param_6[1];
          FUN_002bfcb4(puVar9,iVar10,DAT_004a243c);
          fVar20 = (float)VectorSignedToFloat((int)(short)puVar9[5],(byte)(in_fpscr >> 0x15) & 3);
          fVar19 = (float)VectorSignedToFloat((int)(short)puVar9[6],(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = (float)VectorSignedToFloat((int)(short)puVar9[7],(byte)(in_fpscr >> 0x15) & 3);
          iVar7 = FUN_002be430(fVar20 * fVar6,fVar19 * fVar6,fVar22 * fVar6,
                               *(undefined4 *)(puVar9 + 8),fVar15,fVar23,DAT_004a243c,iVar3 + 0xc,
                               iVar3 + 0x18,&local_74);
          if (iVar7 != 0) {
            fVar24 = param_1 / fVar24;
            fVar15 = ABS(local_74 - local_68);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar24) << 0x1e |
                       (uint)(fVar24 <= fVar15) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) &&
               ((int)((local_74 - local_68) * fVar16) <= DAT_004a244c)) {
              fVar18 = (param_1 - fVar17) * fVar18;
              local_70 = local_70 + fVar18 * fVar21;
              local_68 = local_68 + fVar18 * fVar16;
              if ((*param_7 == (ushort *)0x0) ||
                 ((*(uint *)(*(int *)(*param_3 + 0x20) + (uint)**param_7 * 8 + 4) & 0x8000000) == 0)
                 ) {
                *param_7 = puVar9;
              }
              local_78 = 1;
            }
          }
          uVar1 = psVar11[1];
        }
        else {
          uVar1 = psVar11[1];
        }
      }
    }
    else {
      uVar1 = psVar11[1];
    }
    if (uVar1 == 0xffff) break;
    psVar11 = (short *)(param_3[0x12] + (uint)uVar1 * 4);
  } while( true );
  iVar3 = DAT_004a2798;
  psVar11 = (short *)(param_3[0x12] + (uint)*(ushort *)(param_2 + 2) * 4);
  do {
    fVar15 = param_6[1];
    puVar9 = (ushort *)(iVar8 + *psVar11 * 0x14);
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[1] & 0xffff1fff) * 6 + 2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar14 = in_fpscr & 0xfffffff;
    uVar12 = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
    if (!SUB41(uVar12 >> 0x1d,0)) {
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[2] & 0xffff1fff) * 6 + 2)
                                          ,(byte)(uVar12 >> 0x15) & 3);
      uVar12 = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
      if (!SUB41(uVar12 >> 0x1d,0)) {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (uint)puVar9[3] * 6 + 2),
                                            (byte)(uVar12 >> 0x15) & 3);
        uVar12 = uVar14 | (uint)(fVar21 <= fVar15) << 0x1d;
        if (!SUB41(uVar12 >> 0x1d,0)) {
LAB_004a2778:
          *param_5_00 = local_70;
          *param_5 = local_68;
          return local_78;
        }
      }
    }
    fVar21 = (float)VectorSignedToFloat((int)(short)puVar9[5],(byte)(uVar12 >> 0x15) & 3);
    fVar21 = fVar21 * fVar6;
    fVar15 = (float)VectorSignedToFloat((int)(short)puVar9[6],(byte)(uVar12 >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat((int)(short)puVar9[7],(byte)(uVar12 >> 0x15) & 3);
    fVar16 = fVar16 * fVar6;
    fVar17 = (float)FUN_00357b30(fVar21,fVar15 * fVar6,fVar16,*(undefined4 *)(puVar9 + 8),&local_70)
    ;
    fVar15 = local_68;
    fVar18 = ABS(fVar17);
    uVar12 = uVar12 & 0xfffffff;
    uVar14 = uVar12 | (uint)(fVar18 < param_1) << 0x1f | (uint)(fVar18 == param_1) << 0x1e;
    in_fpscr = uVar14 | (uint)(NAN(fVar18) || NAN(param_1)) << 0x1c;
    bVar2 = (byte)(uVar14 >> 0x18);
    if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (((uint)puVar9[1] & param_4 << 0xd) == 0)) {
      fVar18 = fVar4 / SQRT(fVar21 * fVar21 + fVar16 * fVar16);
      fVar24 = ABS(fVar21) * fVar18;
      if ((int)fVar24 < iVar5) {
        uVar1 = psVar11[1];
      }
      else {
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[1] & 0xffff1fff) * 6),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (puVar9[2] & 0xffff1fff) * 6),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar14 = uVar12 | (uint)(fVar19 < fVar22) << 0x1f | (uint)(fVar19 == fVar22) << 0x1e;
        uVar13 = uVar14 | (uint)(NAN(fVar19) || NAN(fVar22)) << 0x1c;
        bVar2 = (byte)(uVar14 >> 0x18);
        fVar20 = fVar22;
        if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) &&
           (uVar13 = uVar12 | (uint)(fVar22 <= fVar19) << 0x1d, fVar20 = fVar19,
           !SUB41(uVar13 >> 0x1d,0))) {
          fVar19 = fVar22;
        }
        fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + (uint)puVar9[3] * 6),
                                            (byte)(uVar13 >> 0x15) & 3);
        uVar14 = uVar13 & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f |
                 (uint)(fVar20 == fVar23) << 0x1e;
        bVar2 = (byte)(uVar14 >> 0x18);
        fVar22 = fVar23;
        if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar20) || NAN(fVar23))) &&
           (uVar14 = uVar13 & 0xfffffff | (uint)(fVar23 <= fVar19) << 0x1d, fVar22 = fVar20,
           !SUB41(uVar14 >> 0x1d,0))) {
          fVar19 = fVar23;
        }
        fVar19 = fVar19 + param_1;
        in_fpscr = uVar14 & 0xfffffff | (uint)(fVar22 - param_1 <= local_70) << 0x1d;
        if ((SUB41(in_fpscr >> 0x1d,0)) &&
           (uVar14 = uVar14 & 0xfffffff | (uint)(local_70 < fVar19) << 0x1f |
                     (uint)(local_70 == fVar19) << 0x1e,
           in_fpscr = uVar14 | (uint)(NAN(local_70) || NAN(fVar19)) << 0x1c,
           bVar2 = (byte)(uVar14 >> 0x18),
           (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar23 = param_6[1];
          FUN_002bfcb4(puVar9,iVar10,DAT_004a2798);
          fVar20 = (float)VectorSignedToFloat((int)(short)puVar9[5],(byte)(in_fpscr >> 0x15) & 3);
          fVar19 = (float)VectorSignedToFloat((int)(short)puVar9[6],(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = (float)VectorSignedToFloat((int)(short)puVar9[7],(byte)(in_fpscr >> 0x15) & 3);
          iVar7 = FUN_002be39c(fVar20 * fVar6,fVar19 * fVar6,fVar22 * fVar6,
                               *(undefined4 *)(puVar9 + 8),fVar23,fVar15,DAT_004a2798,iVar3 + 0xc,
                               iVar3 + 0x18,&local_74);
          if (iVar7 != 0) {
            fVar24 = param_1 / fVar24;
            fVar15 = ABS(local_74 - local_70);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar24) << 0x1e |
                       (uint)(fVar24 <= fVar15) << 0x1d;
            bVar2 = (byte)(in_fpscr >> 0x18);
            if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) &&
               ((int)((local_74 - local_70) * fVar21) <= DAT_004a244c)) {
              fVar18 = (param_1 - fVar17) * fVar18;
              local_70 = local_70 + fVar18 * fVar21;
              local_68 = local_68 + fVar18 * fVar16;
              if ((*param_7 == (ushort *)0x0) ||
                 ((*(uint *)(*(int *)(*param_3 + 0x20) + (uint)**param_7 * 8 + 4) & 0x8000000) == 0)
                 ) {
                *param_7 = puVar9;
              }
              local_78 = 1;
            }
          }
          uVar1 = psVar11[1];
        }
        else {
          uVar1 = psVar11[1];
        }
      }
    }
    else {
      uVar1 = psVar11[1];
    }
    if (uVar1 == 0xffff) goto LAB_004a2778;
    psVar11 = (short *)(param_3[0x12] + (uint)uVar1 * 4);
  } while( true );
}

