// OoT3D decomp @ 00159f64  name=FUN_00159f64  size=2252

void FUN_00159f64(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short *psVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  uint in_fpscr;
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
  float fVar30;
  float fVar31;

  fVar20 = DAT_0015a304;
  psVar6 = DAT_0015a300;
  if (((*(uint *)(DAT_0015a300 + 2) & 1) == 0) &&
     (iVar9 = FUN_003679b4(DAT_0015a300 + 2), pfVar7 = DAT_0015a308, iVar9 != 0)) {
    *DAT_0015a308 = fVar20;
    pfVar7[1] = fVar20;
    pfVar7[2] = fVar20;
  }
  uVar11 = DAT_0015a324;
  fVar25 = DAT_0015a314;
  iVar9 = DAT_0015a310;
  iVar15 = *(int *)(DAT_0015a30c + param_2);
  uVar10 = (uint)*(ushort *)(param_2 + 0x104);
  bVar16 = uVar10 != 0x55;
  if (!bVar16) {
    uVar10 = *(uint *)(DAT_0015a310 + 0x4e8);
  }
  if (bVar16 || uVar10 != 7) goto LAB_0015a138;
  uVar13 = *(undefined4 *)(param_2 + 0x1bc);
  uVar14 = *(undefined4 *)(param_2 + 0x1c0);
  fVar29 = *(float *)(param_1 + 0x16ac);
  fVar26 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x16a4);
  fVar17 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x16a8);
  fVar21 = *(float *)(param_2 + 0x1c0);
  *(float *)(param_1 + 0x16a4) = *(float *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x16a8) = uVar13;
  *(undefined4 *)(param_1 + 0x16ac) = uVar14;
  fVar21 = fVar21 - fVar29;
  fVar17 = SQRT(fVar26 * fVar26 + fVar17 * fVar17 + fVar21 * fVar21) * DAT_0015a318;
  if (0x3f800000 < (int)fVar17) {
    fVar17 = fVar25;
  }
  if (0x3f400000 < (int)ABS(*(float *)(param_1 + 0x18b8) - fVar17)) {
    fVar17 = fVar20;
  }
  FUN_0036ef10(DAT_0015a320 + fVar17 * DAT_0015a31c,DAT_0015a308,uVar11);
  iVar12 = DAT_0015a328;
  *(float *)(param_1 + 0x18b8) = fVar17;
  sVar5 = *(short *)(iVar12 + param_2);
  uVar11 = DAT_0015a334;
  if (sVar5 != 0x393) {
    if (sVar5 == 0x42e) {
      FUN_00371af0(DAT_0015a33c,DAT_0015a338,10);
      goto LAB_0015a138;
    }
    uVar11 = DAT_0015a340;
    if (sVar5 != 0x564) {
      if (sVar5 == 0x567) {
        FUN_0037547c(DAT_0015a344,0,4,DAT_0015a330,DAT_0015a330,DAT_0015a32c);
      }
      goto LAB_0015a138;
    }
  }
  FUN_0037547c(uVar11,0,4,DAT_0015a330,DAT_0015a330,DAT_0015a32c);
LAB_0015a138:
  bVar3 = *(byte *)(param_2 + 0x3271);
  if (bVar3 < 0x40) {
    iVar12 = *DAT_0015a348;
    bVar16 = iVar12 == 0xee;
    if (bVar16) {
      iVar12 = *(int *)(iVar9 + 0x4e8);
    }
    if ((!bVar16 || iVar12 != 4) || bVar3 != 0) {
      *(byte *)(param_2 + 0x3271) = bVar3 + 0x10;
    }
  }
  fVar26 = DAT_0015a364;
  fVar21 = DAT_0015a360;
  uVar13 = DAT_0015a35c;
  fVar17 = DAT_0015a358;
  fVar25 = DAT_0015a354;
  uVar11 = DAT_0015a350;
  fVar30 = *(float *)(param_2 + 0x1c4) - *(float *)(param_2 + 0x1b8);
  uVar10 = 0;
  fVar22 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1bc);
  fVar29 = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c0);
  fVar27 = DAT_0015a314 / SQRT(fVar30 * fVar30 + fVar22 * fVar22 + fVar29 * fVar29);
  if (*(char *)(param_2 + 0x3271) != '\0') {
    do {
      iVar9 = param_1 + uVar10 * 0x54;
      cVar4 = *(char *)(iVar9 + 0x1a4);
      if (cVar4 == '\0') {
        fVar25 = fVar22 * fVar27 * DAT_0015a368;
        fVar20 = fVar29 * fVar27 * DAT_0015a368;
        fVar17 = *(float *)(param_2 + 0x1bc);
        fVar21 = *(float *)(param_2 + 0x1c0);
        *(float *)(iVar9 + 0x1c0) = *(float *)(param_2 + 0x1b8) + fVar30 * fVar27 * DAT_0015a368;
        *(float *)(iVar9 + 0x1c4) = fVar17 + fVar25;
        *(float *)(iVar9 + 0x1c8) = fVar21 + fVar20;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (cVar4 == '\x01' || cVar4 == '\x02') {
        fVar28 = fVar30 * fVar27 * DAT_0015a368;
        fVar23 = fVar22 * fVar27 * DAT_0015a368;
        fVar18 = fVar29 * fVar27 * DAT_0015a368;
        *(short *)(iVar9 + 0x1e0) = *(short *)(iVar9 + 0x1e0) + 1;
        fVar28 = *(float *)(param_2 + 0x1b8) + fVar28;
        fVar23 = *(float *)(param_2 + 0x1bc) + fVar23;
        fVar24 = *(float *)(param_2 + 0x1c0);
        *(undefined4 *)(iVar9 + 0x1b4) = *(undefined4 *)(iVar9 + 0x1a8);
        *(undefined4 *)(iVar9 + 0x1b8) = *(undefined4 *)(iVar9 + 0x1ac);
        *(undefined4 *)(iVar9 + 0x1bc) = *(undefined4 *)(iVar9 + 0x1b0);
        fVar24 = fVar24 + fVar18;
        bVar16 = *(float *)(iVar15 + 0x60) + *(float *)(iVar15 + 100) + *(float *)(iVar15 + 0x68) !=
                 -4.0;
        if (bVar16) {
          *(undefined2 *)(iVar9 + 500) = 0;
        }
        else {
          *(short *)(iVar9 + 500) = *(short *)(iVar9 + 500) + 1;
        }
        uVar14 = DAT_0015ab54;
        if (*(char *)(iVar9 + 0x1a4) == '\x01') {
          if ((((int)uVar10 < 0x20) && (!bVar16)) &&
             (fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015a720 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_0015a724 / fVar18 + fVar17) < (int)(uint)*(ushort *)(iVar9 + 500))) {
            *(undefined2 *)(iVar9 + 500) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          FUN_0036e168(uVar13,uVar13,DAT_0015a73c,DAT_0015a738,iVar9 + 0x1e8);
          FUN_0036e168(*(undefined4 *)(iVar9 + 0x1dc),fVar17,uVar11,DAT_0015a740,iVar9 + 0x1d8);
          fVar18 = (float)FUN_003727f0(*(undefined4 *)(iVar9 + 0x1cc));
          piVar8 = DAT_0015a720;
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015a720 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1a8) =
               *(float *)(iVar9 + 0x1a8) + fVar18 * *(float *)(iVar9 + 0x1d8) * fVar19 * fVar25;
          fVar18 = (float)FUN_003727f0(*(undefined4 *)(iVar9 + 0x1d0));
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1ac) =
               *(float *)(iVar9 + 0x1ac) + fVar18 * *(float *)(iVar9 + 0x1d8) * fVar19 * fVar25;
          fVar18 = (float)FUN_003727f0(*(undefined4 *)(iVar9 + 0x1d4));
          uVar1 = (uVar10 << 0x1d) >> 0x1e;
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1b0) =
               *(float *)(iVar9 + 0x1b0) + fVar18 * *(float *)(iVar9 + 0x1d8) * fVar19 * fVar25;
          if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          if (uVar1 == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1cc) = *(float *)(iVar9 + 0x1cc) + fVar18 * fVar20 * fVar25;
          fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1d0) = *(float *)(iVar9 + 0x1d0) + fVar18 * fVar20 * fVar25;
          fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(float *)(iVar9 + 0x1d4) = *(float *)(iVar9 + 0x1d4) + fVar18 * fVar20 * fVar25;
LAB_0015aa34:
          if (*(char *)(iVar9 + 0x1a4) != '\x02') goto LAB_0015aa40;
        }
        else {
          if (*(char *)(iVar9 + 0x1a4) == '\x02') {
            if ((bVar16) ||
               (fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015a720 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3),
               (int)(DAT_0015ab50 / fVar18 + fVar17) < (int)(uint)*(ushort *)(iVar9 + 500))) {
              *(undefined2 *)(iVar9 + 500) = 0;
              *(undefined1 *)(iVar9 + 0x1a4) = 1;
              *(undefined4 *)(iVar9 + 0x1d8) = uVar14;
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            if (((int)*psVar6 & uVar10) == 0) {
              FUN_0036e168(DAT_0015ab5c,uVar13,DAT_0015a73c,DAT_0015a738,iVar9 + 0x1e8);
              uVar13 = DAT_0015ab60;
              FUN_0036e168(*(undefined4 *)(iVar15 + 0x28),fVar17,DAT_0015ab60,uVar11,iVar9 + 0x1c0);
              FUN_0036e168(*(float *)(iVar15 + 0x2c) + fVar21,fVar17,uVar13,uVar11,iVar9 + 0x1c4);
              FUN_0036e168(*(undefined4 *)(iVar15 + 0x30),fVar17,uVar13,uVar11,iVar9 + 0x1c8);
              fVar20 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar9 + 0x1e2) + -0x8000));
              uVar13 = DAT_0015ab64;
              fVar25 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)(iVar9 + 0x1ee),
                                         (byte)(in_fpscr >> 0x15) & 3);
              FUN_0036e168(fVar20 * fVar25,fVar17,DAT_0015ab64,uVar11,iVar9 + 0x1a8);
              fVar20 = (float)FUN_00338f60((int)(short)(*(short *)(iVar9 + 0x1e2) + -0x8000));
              fVar25 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)(iVar9 + 0x1ee),
                                         (byte)(in_fpscr >> 0x15) & 3);
              FUN_0036e168(fVar20 * fVar25,fVar17,uVar13,uVar11,iVar9 + 0x1b0);
              *(short *)(iVar9 + 0x1e2) = *(short *)(iVar9 + 0x1e2) + *(short *)(iVar9 + 0x1ec);
              fVar20 = (float)FUN_003727f0(*(undefined4 *)(iVar9 + 0x1d0));
              *(float *)(iVar9 + 0x1ac) = fVar20 + *(float *)(iVar9 + 0x1ac);
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            FUN_0036e168(uVar13,uVar13,DAT_0015a73c,DAT_0015a738,iVar9 + 0x1e8);
            FUN_0036e168(DAT_0015ab54,fVar17,uVar13,DAT_0015ab68,iVar9 + 0x1d8);
            *(float *)(iVar9 + 0x1a8) =
                 *(float *)(iVar9 + 0x160) + (*(float *)(iVar9 + 0x16c) - *(float *)(iVar9 + 0x1c0))
            ;
            *(float *)(iVar9 + 0x1ac) =
                 *(float *)(iVar9 + 0x164) + (*(float *)(iVar9 + 0x170) - *(float *)(iVar9 + 0x1c4))
            ;
            *(float *)(iVar9 + 0x1b0) =
                 *(float *)(iVar9 + 0x168) + (*(float *)(iVar9 + 0x174) - *(float *)(iVar9 + 0x1c8))
            ;
            goto LAB_0015aa34;
          }
LAB_0015aa40:
          iVar12 = DAT_0015ab70;
          fVar18 = DAT_0015ab6c;
          fVar19 = (*(float *)(iVar9 + 0x1c0) + *(float *)(iVar9 + 0x1a8)) - fVar28;
          uVar1 = in_fpscr & 0xfffffff;
          uVar2 = uVar1 | (uint)(fVar19 < DAT_0015ab6c) << 0x1f |
                  (uint)(fVar19 == DAT_0015ab6c) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar19) || NAN(DAT_0015ab6c)) << 0x1c;
          bVar3 = (byte)(uVar2 >> 0x18);
          if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (in_fpscr = uVar1 | (uint)(fVar26 <= fVar19) << 0x1d, SUB41(in_fpscr >> 0x1d,0))) {
            fVar31 = (*(float *)(iVar9 + 0x1c4) + *(float *)(iVar9 + 0x1ac)) - fVar23;
            uVar2 = uVar1 | (uint)(fVar31 < DAT_0015ab6c) << 0x1f |
                    (uint)(fVar31 == DAT_0015ab6c) << 0x1e;
            in_fpscr = uVar2 | (uint)(NAN(fVar31) || NAN(DAT_0015ab6c)) << 0x1c;
            bVar3 = (byte)(uVar2 >> 0x18);
            if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
               (in_fpscr = uVar1 | (uint)(fVar26 <= fVar31) << 0x1d, SUB41(in_fpscr >> 0x1d,0))) {
              fVar31 = (*(float *)(iVar9 + 0x1c8) + *(float *)(iVar9 + 0x1b0)) - fVar24;
              uVar2 = uVar1 | (uint)(fVar31 < DAT_0015ab6c) << 0x1f |
                      (uint)(fVar31 == DAT_0015ab6c) << 0x1e;
              in_fpscr = uVar2 | (uint)(NAN(fVar31) || NAN(DAT_0015ab6c)) << 0x1c;
              bVar3 = (byte)(uVar2 >> 0x18);
              if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
                 (in_fpscr = uVar1 | (uint)(fVar26 <= fVar31) << 0x1d, SUB41(in_fpscr >> 0x1d,0)))
              goto LAB_0015abc4;
            }
          }
          if (DAT_0015ab6c < fVar19) {
            *(float *)(iVar9 + 0x1c0) = fVar28 - DAT_0015ab6c;
            *(float *)(iVar9 + 0x1a8) = fVar20;
          }
          if ((*(float *)(iVar9 + 0x1c0) + *(float *)(iVar9 + 0x1a8)) - fVar28 < fVar26) {
            *(float *)(iVar9 + 0x1c0) = fVar28 + fVar18;
            *(float *)(iVar9 + 0x1a8) = fVar20;
          }
          fVar28 = DAT_0015ab74;
          if (iVar12 < (int)((*(float *)(iVar9 + 0x1c4) + *(float *)(iVar9 + 0x1ac)) - fVar23)) {
            *(float *)(iVar9 + 0x1c4) = fVar23 - fVar21;
            *(float *)(iVar9 + 0x1ac) = fVar20;
          }
          if ((uint)fVar28 <
              (uint)((*(float *)(iVar9 + 0x1c4) + *(float *)(iVar9 + 0x1ac)) - fVar23)) {
            *(float *)(iVar9 + 0x1c4) = fVar23 + fVar21;
            *(float *)(iVar9 + 0x1ac) = fVar20;
          }
          if (fVar18 < (*(float *)(iVar9 + 0x1c8) + *(float *)(iVar9 + 0x1b0)) - fVar24) {
            *(float *)(iVar9 + 0x1c8) = fVar24 - fVar18;
            *(float *)(iVar9 + 0x1b0) = fVar20;
          }
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(fVar26 <=
                           (*(float *)(iVar9 + 0x1c8) + *(float *)(iVar9 + 0x1b0)) - fVar24) << 0x1d
          ;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            *(float *)(iVar9 + 0x1c8) = fVar24 + fVar18;
            *(float *)(iVar9 + 0x1b0) = fVar20;
          }
        }
LAB_0015abc4:
        *(short *)(iVar9 + 0x1f6) = *(short *)(iVar9 + 0x1f6) + 1;
      }
      else if (cVar4 == '\x03') {
        *(undefined1 *)(iVar9 + 0x1a4) = 0;
      }
      uVar10 = (uint)(short)((short)uVar10 + 1);
    } while ((int)uVar10 < (int)(uint)*(byte *)(param_2 + 0x3271));
  }
  return;
}
