// OoT3D decomp @ 001bfb74  name=FUN_001bfb74  size=1572

void FUN_001bfb74(float *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  undefined2 uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_64;
  undefined4 local_60;
  float fStack_5c;
  int local_58;

  fVar11 = DAT_001bfec0;
  fVar10 = DAT_001bfebc;
  fVar9 = DAT_001bfeb8;
  fVar8 = DAT_001bfeb4;
  fVar7 = DAT_001bfeb0;
  fVar6 = DAT_001bfeac;
  iVar5 = DAT_001bfea8;
  fVar4 = DAT_001bfe9c;
  fVar18 = DAT_001bfe98;
  sVar17 = 0;
  local_58 = param_2 + 0x28a0;
  do {
    fVar23 = DAT_001bfec8;
    piVar12 = DAT_001bfec4;
    bVar3 = *(byte *)(param_1 + 9);
    if (bVar3 != 0) {
      bVar14 = *(char *)((int)param_1 + 0x25) + 1;
      *(byte *)((int)param_1 + 0x25) = bVar14;
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar19 = *param_1 + param_1[3] * fVar19 * fVar23;
      *param_1 = fVar19;
      iVar15 = *piVar12;
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar20 = param_1[1] + param_1[4] * fVar20 * fVar23;
      param_1[1] = fVar20;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar21 = param_1[2] + param_1[5] * fVar22 * fVar23;
      param_1[2] = fVar21;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar22 = param_1[4] + param_1[7] * fVar22 * fVar23;
      param_1[4] = fVar22;
      iVar16 = DAT_001c02f8;
      if (bVar3 == 1) {
        FUN_00373500(param_1[0xd],DAT_001bfecc,param_1[0xe],param_1 + 0xc);
        if (*(short *)(param_1 + 0xb) == 0) {
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar1 = *(short *)((int)param_1 + 0x2a) +
                  (short)(int)(fVar10 + fVar19 * DAT_001bfed0 * fVar23);
          *(short *)((int)param_1 + 0x2a) = sVar1;
          if (*(short *)((int)param_1 + 0x2e) <= sVar1) {
            *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2e);
            uVar13 = 1;
LAB_001c02bc:
            *(undefined2 *)(param_1 + 0xb) = uVar13;
          }
        }
        else {
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar1 = *(short *)((int)param_1 + 0x2a) -
                  (short)(int)(fVar10 + fVar19 * DAT_001bfed4 * fVar23);
          *(short *)((int)param_1 + 0x2a) = sVar1;
joined_r0x001bfdfc:
          if (sVar1 < 1) {
LAB_001c00d0:
            *(undefined1 *)(param_1 + 9) = 0;
          }
        }
      }
      else {
        if (bVar3 == 3) {
          FUN_00373500(param_1[0xd],fVar9,fVar9,param_1 + 0xc);
          iVar16 = *piVar12;
          fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          sVar1 = *(short *)((int)param_1 + 0x2a) - (short)(int)(fVar10 + fVar19 * fVar7 * fVar23);
          *(short *)((int)param_1 + 0x2a) = sVar1;
          fVar19 = DAT_001bfed8;
          fVar20 = param_1[1];
          fVar22 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar22 = fVar22 - DAT_001bfed8;
          uVar2 = in_fpscr & 0xfffffff | (uint)(fVar20 < fVar22) << 0x1f |
                  (uint)(fVar20 == fVar22) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar20) || NAN(fVar22)) << 0x1c;
          bVar3 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            param_1[7] = fVar18;
            param_1[4] = fVar18;
            fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)((int)param_1 + 0x2a) =
                 sVar1 - (short)(int)(fVar10 + fVar20 * fVar19 * fVar23);
          }
          sVar1 = *(short *)((int)param_1 + 0x2a);
          goto joined_r0x001bfdfc;
        }
        if (bVar3 == 4) {
          fVar23 = DAT_001bfedc;
          if (*(short *)(param_1 + 0xb) == 0) {
            fVar23 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
          }
          uVar2 = in_fpscr & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f;
          in_fpscr = uVar2 | (uint)(NAN(fVar20) || NAN(fVar23)) << 0x1c;
          if ((byte)(uVar2 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            *(undefined1 *)(param_1 + 9) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
        }
        else if (bVar3 == 2) {
          if ((uint)DAT_001c02e0 < (uint)fVar22) {
            param_1[4] = fVar4;
            param_1[7] = fVar18;
          }
          fVar23 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar23) << 0x1e |
                     (uint)(fVar23 <= fVar20) << 0x1d;
          bVar3 = (byte)(in_fpscr >> 0x18);
          if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
            *(undefined1 *)(param_1 + 9) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
        }
        else if (bVar3 == 5) {
          iVar16 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
          fVar23 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar23 <= fVar20) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar23 = fVar19 * fVar19 + fVar21 * fVar21;
            if ((int)fVar23 <= iVar5) {
              fVar18 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
              param_1[1] = fVar18 + DAT_001c02e8;
              *(undefined1 *)((int)param_1 + 0x25) = 0;
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            fVar19 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
            param_1[1] = fVar19 + (SQRT(fVar23) - fVar8) * DAT_001c02e4;
            *(char *)((int)param_1 + 0x25) = (char)*(undefined2 *)(iVar15 + 0x9f6) + '\x02';
            *(undefined1 *)(param_1 + 9) = 8;
            fVar23 = (float)VectorSignedToFloat(*(short *)(iVar15 + 0x9f8) + 0x1e,
                                                (byte)(in_fpscr >> 0x15) & 3);
            param_1[0xc] = fVar23 * fVar6;
            fVar23 = DAT_001c02ec[1];
            fVar19 = DAT_001c02ec[2];
            param_1[3] = *DAT_001c02ec;
            param_1[4] = fVar23;
            param_1[5] = fVar19;
          }
        }
        else if (bVar3 < 7) {
          if (bVar3 == 6) {
            param_1[0xc] = DAT_001c02f4;
            FUN_00370084(iVar16 + 2,0,0x14,100);
            FUN_00370084(iVar16,0,0x14,100);
            FUN_00370084(iVar16 + 4,DAT_001c02fc,0x14,100);
            fVar20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar19 = param_1[1];
            fVar20 = (fVar20 + (SQRT(*param_1 * *param_1 + param_1[2] * param_1[2]) - fVar8) *
                               DAT_001c0300) - fVar7;
            uVar2 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar20) << 0x1f |
                    (uint)(fVar19 == fVar20) << 0x1e;
            in_fpscr = uVar2 | (uint)(NAN(fVar19) || NAN(fVar20)) << 0x1c;
            bVar3 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              param_1[1] = fVar19 - fVar20 * fVar9 * fVar23;
            }
            if ((*(byte *)((int)param_1 + 0x25) & 0xf) == 0) {
              local_64 = *param_1;
              fStack_5c = param_1[2];
              local_60 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                     0x28) + 2),
                                             (byte)(in_fpscr >> 0x15) & 3);
              FUN_00368b98(DAT_001c0304,fVar11,0,*(undefined4 *)(param_2 + 0x5c28),&local_64,0x96,
                           0x5a);
            }
            fVar23 = DAT_001c0308;
            if (-1 < *(short *)(param_1 + 0xb)) {
              *(short *)(param_1 + 0xb) = *(short *)(param_1 + 0xb) + 1;
            }
            fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if ((int)(fVar23 / fVar19 + fVar10) == (int)*(short *)(param_1 + 0xb)) {
              FUN_00367c7c(param_2,DAT_001c030c,0);
            }
            fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar12 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if ((((int)(fVar11 / fVar23 + fVar10) <= (int)*(short *)(param_1 + 0xb)) &&
                (iVar16 = FUN_003769d8(local_58), iVar16 == 5)) &&
               ((iVar16 = FUN_00346964(param_2), iVar16 != 0 ||
                (iVar16 = FUN_003769d8(local_58), iVar16 == 0)))) {
              FUN_003725e0(param_2);
              FUN_00376a60(0xffffffce);
              uVar13 = 0xffff;
              goto LAB_001c02bc;
            }
          }
        }
        else {
          fVar19 = (float)VectorSignedToFloat(*(short *)(DAT_001c02f0 + iVar15) + 0x1e,
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          param_1[0xc] = param_1[0xc] + fVar19 * fVar6 * fVar20 * fVar23;
          if (5 < bVar14) goto LAB_001c00d0;
        }
      }
    }
    sVar17 = sVar17 + 1;
    param_1 = param_1 + 0x10;
    if (0x81 < sVar17) {
      return;
    }
  } while( true );
}
