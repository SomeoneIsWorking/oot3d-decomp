// OoT3D decomp @ 002bded8  name=FUN_002bded8  size=1024

undefined4
FUN_002bded8(undefined4 param_1,ushort *param_2,int *param_3,int param_4,int param_5_00,
            float *param_5,float *param_6,float *param_7,int *param_8,float *param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  
  pfVar6 = DAT_002be2e0;
  fVar5 = DAT_002be2dc;
  fVar4 = DAT_002be2d8;
  local_68 = 0;
  local_58 = *(int *)(*param_3 + 0x1c);
  if (*param_2 == 0xffff) {
    return 0;
  }
  psVar11 = (short *)(param_3[0x12] + (uint)*param_2 * 4);
  do {
    iVar8 = (int)*psVar11;
    if (*(char *)(param_3[0x13] + iVar8) == '\x01') {
LAB_002bdf88:
      uVar3 = psVar11[1];
    }
    else {
      iVar12 = local_58 + iVar8 * 0x14;
      if ((((uint)*(ushort *)(iVar12 + 2) & param_4 << 0xd) != 0) ||
         ((param_5_00 != 0 && (((uint)*(ushort *)(iVar12 + 2) & param_5_00 << 0xd) == 0))))
      goto LAB_002bdf88;
      *(undefined *)(param_3[0x13] + iVar8) = 1;
      iVar8 = *(int *)(*param_3 + 0x18);
      iVar9 = *(short *)(iVar12 + 0xc) + -0x7fff;
      bVar15 = iVar9 != 0;
      if (bVar15) {
        iVar9 = *(short *)(iVar12 + 0xc) + 0x7f00;
      }
      if (bVar15 && iVar9 != -0xff) {
        iVar9 = (int)*(short *)(iVar8 + (*(ushort *)(iVar12 + 2) & 0xffff1fff) * 6 + 2);
        iVar10 = (int)*(short *)(iVar8 + (*(ushort *)(iVar12 + 4) & 0xffff1fff) * 6 + 2);
        if (iVar10 < iVar9) {
          iVar9 = iVar10;
        }
        iVar10 = (int)*(short *)(iVar8 + (uint)*(ushort *)(iVar12 + 6) * 6 + 2);
        if (iVar10 <= iVar9) {
          iVar9 = iVar10;
        }
      }
      else {
        iVar9 = (int)*(short *)(iVar8 + (*(ushort *)(iVar12 + 2) & 0xffff1fff) * 6 + 2);
      }
      fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = in_fpscr & 0xfffffff | (uint)(fVar16 <= param_5[1]) << 0x1d;
      bVar15 = SUB41(uVar2 >> 0x1d,0);
      if (!bVar15) {
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar16 <= param_6[1]) << 0x1d;
        bVar15 = SUB41(uVar2 >> 0x1d,0);
      }
      if (!bVar15) {
        return local_68;
      }
      fVar16 = *(float *)(iVar12 + 0x10);
      pfVar6[3] = fVar16;
      iVar9 = (int)*(short *)(iVar12 + 10);
      fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(uVar2 >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xc),(byte)(uVar2 >> 0x15) & 3);
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xe),(byte)(uVar2 >> 0x15) & 3);
      fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(uVar2 >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xc),(byte)(uVar2 >> 0x15) & 3);
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xe),(byte)(uVar2 >> 0x15) & 3);
      fVar17 = fVar16 + (fVar17 * *param_5 + fVar18 * param_5[1] + fVar20 * param_5[2]) * fVar5;
      uVar1 = uVar2 & 0xfffffff | (uint)(fVar17 < fVar4) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(fVar17) || NAN(fVar4)) << 0x1c;
      fVar16 = fVar16 + (fVar19 * *param_6 + fVar21 * param_6[1] + fVar22 * param_6[2]) * fVar5;
      bVar13 = (byte)(uVar1 >> 0x1f);
      bVar14 = (byte)(in_fpscr >> 0x1c) & 1;
      if (bVar13 == bVar14) {
        in_fpscr = uVar2 & 0xfffffff | (uint)(fVar16 < fVar4) << 0x1f |
                   (uint)(NAN(fVar16) || NAN(fVar4)) << 0x1c;
        bVar14 = (byte)(in_fpscr >> 0x18);
        bVar13 = bVar14 >> 7;
        bVar14 = bVar14 >> 4 & 1;
      }
      if (bVar13 != bVar14) {
        uVar2 = in_fpscr & 0xfffffff;
        in_fpscr = uVar2 | (uint)(fVar4 <= fVar17) << 0x1d;
        bVar15 = SUB41(in_fpscr >> 0x1d,0);
        if (!bVar15) {
          in_fpscr = uVar2 | (uint)(fVar4 <= fVar16) << 0x1d;
          bVar15 = SUB41(in_fpscr >> 0x1d,0);
        }
        if (bVar15) {
          bVar15 = true;
          if ((param_10 & 8) != 0) {
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 <= fVar17) << 0x1d;
            bVar15 = SUB41(in_fpscr >> 0x1d,0);
          }
          if (((bVar15) ||
              (uVar2 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar4) << 0x1f |
                       (uint)(fVar16 == fVar4) << 0x1e,
              in_fpscr = uVar2 | (uint)(NAN(fVar16) || NAN(fVar4)) << 0x1c,
              bVar13 = (byte)(uVar2 >> 0x18),
              (bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) &&
             (DAT_002be2e4 <= (int)ABS(fVar17 - fVar16))) {
            fVar18 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
            *pfVar6 = fVar18 * fVar5;
            fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xc),
                                                (byte)(in_fpscr >> 0x15) & 3);
            pfVar6[1] = fVar18 * fVar5;
            uVar7 = DAT_002be2e8;
            fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xe),
                                                (byte)(in_fpscr >> 0x15) & 3);
            pfVar6[2] = fVar18 * fVar5;
            FUN_002bfcb4(iVar12,iVar8,uVar7);
            FUN_002bde90(fVar17 / (fVar17 - fVar16),param_5,param_6,&local_64);
            if ((((0x3f000000 < (int)ABS(*pfVar6)) &&
                 (iVar8 = FUN_002bde48(local_60,local_5c,param_1,DAT_002be2e0 + -9,DAT_002be2e0 + -6
                                       ,DAT_002be2e0 + -3), iVar8 != 0)) ||
                ((0x3f000000 < (int)ABS(pfVar6[1]) &&
                 (iVar8 = FUN_002bde00(local_5c,local_64,param_1,DAT_002be2e0 + -9,DAT_002be2e0 + -6
                                       ,DAT_002be2e0 + -3), iVar8 != 0)))) ||
               ((0x3f000000 < (int)ABS(pfVar6[2]) &&
                (iVar8 = FUN_002bddb8(local_64,local_60,param_1,DAT_002be2e0 + -9,DAT_002be2e0 + -6,
                                      DAT_002be2e0 + -3), iVar8 != 0)))) {
              fVar16 = *param_9;
              fVar17 = (*param_5 - local_64) * (*param_5 - local_64) +
                       (param_5[1] - local_60) * (param_5[1] - local_60) +
                       (param_5[2] - local_5c) * (param_5[2] - local_5c);
              uVar2 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar17) << 0x1f |
                      (uint)(fVar16 == fVar17) << 0x1e;
              in_fpscr = uVar2 | (uint)(NAN(fVar16) || NAN(fVar17)) << 0x1c;
              bVar13 = (byte)(uVar2 >> 0x18);
              if (!(bool)(bVar13 >> 6 & 1) && bVar13 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                *param_9 = fVar17;
                *param_7 = local_64;
                param_7[1] = local_60;
                param_7[2] = local_5c;
                *param_6 = local_64;
                param_6[1] = local_60;
                param_6[2] = local_5c;
                *param_8 = iVar12;
                local_68 = 1;
              }
            }
          }
        }
      }
      uVar3 = psVar11[1];
    }
    if (uVar3 == 0xffff) {
      return local_68;
    }
    psVar11 = (short *)(param_3[0x12] + (uint)uVar3 * 4);
  } while( true );
}

