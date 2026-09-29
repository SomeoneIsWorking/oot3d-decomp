// OoT3D decomp @ 002f1444  name=FUN_002f1444  size=1480

void FUN_002f1444(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  byte *pbVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float afStack_b8 [20];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;

  local_64 = 0;
  local_68 = 0;
  if ((*(char *)(param_1 + 0x100) == '\x03') && (local_64 = param_1, param_1 != 0)) {
    local_68 = param_1 + 0x2ba4;
  }
  iVar13 = 0;
  FUN_00371738(afStack_b8,DAT_002f1890,0x50);
  iVar2 = DAT_002f1894;
  iVar15 = 0;
  if (param_3 != 0) {
    iVar7 = FUN_002e70d4();
    iVar8 = *(int *)(iVar2 + 0x48);
    if (iVar7 == 0) {
      iVar8 = iVar8 + 1;
      *(int *)(iVar2 + 0x48) = iVar8;
    }
    if (iVar8 < 9) {
      uVar9 = *(uint *)(iVar2 + 0x4c);
    }
    else {
      *(undefined4 *)(iVar2 + 0x48) = 0;
      uVar9 = *(uint *)(iVar2 + 0x4c) ^ 1;
      *(uint *)(iVar2 + 0x4c) = uVar9;
    }
    if (uVar9 != 0) {
      iVar15 = 400;
    }
  }
  uVar3 = DAT_002f189c;
  uVar20 = DAT_002f1898;
  FUN_002e70a8(*(undefined4 *)(iVar2 + 0x2c),0);
  fVar6 = DAT_002f18bc;
  fVar5 = DAT_002f18b8;
  fVar4 = DAT_002f18b4;
  fVar24 = DAT_002f18b0;
  fVar18 = DAT_002f18ac;
  fVar25 = DAT_002f18a8;
  local_5c = DAT_002f18a0 + param_2;
  pfVar14 = afStack_b8 + param_2 * 2;
  local_60 = param_2 * 3;
  if ((param_3 != 0 ||
       ((uint)*(byte *)(DAT_002f18a0 + param_2 + 0xc0) & *(uint *)(DAT_002f18a4 + 4)) != 0) &&
     (*(int *)(DAT_002f18c0 + param_2 * 4) == *(int *)(iVar2 + 0x38) + -3)) {
    iVar8 = DAT_002f18c4 + param_2 * 0xc;
    fVar21 = afStack_b8[param_2 * 2 + 1] + DAT_002f18b0 + *(float *)(iVar8 + 8) * DAT_002f18ac;
    if (*(char *)(DAT_002f18a0 + 0xe) == '\x01') {
      fVar23 = (float)VectorSignedToFloat(iVar15 + 0x140,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002e70a8(fVar23 - (*pfVar14 + *(float *)(iVar8 + 4) * DAT_002f18b4 + DAT_002f18a8),fVar21,
                   *(undefined4 *)(iVar2 + 0x2c),0);
    }
    else {
      fVar23 = (float)VectorSignedToFloat(iVar15 + 0x38,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002e70a8(((fVar23 + *(float *)(iVar8 + 4) * DAT_002f18b4) - DAT_002f18bc) + *pfVar14,
                   fVar21,*(undefined4 *)(iVar2 + 0x2c),0);
    }
  }
  FUN_0044c94c(*(undefined4 *)(iVar2 + 0x24));
  fVar21 = DAT_002f18c8;
  if (param_3 == 0) {
    iVar8 = 0;
    do {
      if (*(char *)(DAT_002f18a0 + 0xe) == '\x01') {
        psVar12 = *(short **)(*(int *)(DAT_002f18cc + param_2 * 4) + iVar8 * 4);
        iVar7 = *(int *)(*(int *)(DAT_002f18d0 + param_2 * 4) + iVar8 * 4);
      }
      else {
        psVar12 = *(short **)(*(int *)(DAT_002f18d4 + param_2 * 4) + iVar8 * 4);
        iVar7 = *(int *)(*(int *)(DAT_002f18d8 + param_2 * 4) + iVar8 * 4);
      }
      if (iVar8 == *(int *)(iVar2 + 0x38) + -3) {
        bVar17 = ((uint)*(byte *)(local_5c + 0xc0) & *(uint *)(DAT_002f18a4 + 4)) != 0;
        iVar10 = 0;
        if (bVar17) {
          iVar15 = 0;
          iVar10 = iVar7;
        }
        iVar11 = iVar13;
        if ((bVar17 && iVar7 != 0) && -1 < iVar10) {
          do {
            iVar10 = FUN_0036bcb4(local_64,(int)*psVar12);
            iVar13 = iVar11;
            if (iVar10 == 0) {
              fVar23 = afStack_b8[param_2 * 2 + 1] + fVar24 + *(float *)(psVar12 + 4) * fVar18;
              if (*(char *)(DAT_002f18a0 + 0xe) == '\x01') {
                iVar13 = iVar11 + 1;
                FUN_002e70a8(fVar21 - (*pfVar14 + *(float *)(psVar12 + 2) * fVar4 + fVar25),fVar23,
                             *(undefined4 *)(iVar2 + 0x24),iVar11);
              }
              else {
                iVar13 = iVar11 + 1;
                FUN_002e70a8(((fVar5 + *(float *)(psVar12 + 2) * fVar4) - fVar6) + *pfVar14,fVar23,
                             *(undefined4 *)(iVar2 + 0x24),iVar11);
              }
            }
            iVar15 = iVar15 + 1;
            psVar12 = psVar12 + 6;
            iVar11 = iVar13;
          } while (iVar15 < iVar7);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    iVar15 = 0;
    do {
      FUN_002e70a8(uVar3,uVar20,*(undefined4 *)(iVar2 + 0x20),iVar15);
      iVar7 = local_68;
      iVar8 = DAT_002f18a0;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 6);
    if (*(char *)(DAT_002f18a0 + 0xe) == '\x01') {
      pbVar16 = (byte *)(*(int *)(DAT_002f18dc + param_2 * 4) + *(short *)(local_68 + 0x298) * 0x13)
      ;
    }
    else {
      pbVar16 = (byte *)(*(int *)(DAT_002f18e0 + param_2 * 4) + *(short *)(local_68 + 0x298) * 0x13)
      ;
    }
    fVar25 = *(float *)(*(int *)(DAT_002f18e4 + param_2 * 4) + *(short *)(local_68 + 0x298) * 4);
    bVar17 = ((uint)*(byte *)(local_5c + 0xc0) & *(uint *)(DAT_002f18a4 + 4)) != 0;
    bVar1 = 0;
    if (bVar17) {
      bVar1 = *pbVar16;
      iVar13 = 0;
    }
    iVar15 = 0;
    if (bVar17 && bVar1 != 0) {
      do {
        iVar11 = FUN_0036bcb4(local_64,(int)(char)pbVar16[iVar13 * 3 + 1]);
        iVar10 = iVar15;
        if (iVar11 == 0) {
          iVar11 = 0x74 - (0x74 - (uint)pbVar16[iVar13 * 3 + 2]);
          if (*(char *)(iVar8 + 0xe) == '\x01') {
            fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            iVar10 = iVar15 + 1;
            uVar22 = VectorUnsignedToFloat
                               (pbVar16[iVar13 * 3 + 3] + 0x96,(byte)(in_fpscr >> 0x15) & 3);
            uVar19 = VectorSignedToFloat(((int)*(char *)(*(int *)(DAT_002f18e8 + param_2 * 4) +
                                                        (int)*(short *)(iVar7 + 0x298)) -
                                         (int)(fVar18 + fVar25 + fVar6)) + 10,
                                         (byte)(in_fpscr >> 0x15) & 3);
            FUN_002e70a8(uVar19,uVar22,*(undefined4 *)(iVar2 + 0x20),iVar15);
          }
          else {
            iVar10 = iVar15 + 1;
            uVar19 = VectorUnsignedToFloat
                               (pbVar16[iVar13 * 3 + 3] + 0x96,(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            FUN_002e70a8(fVar18 + fVar25,uVar19,*(undefined4 *)(iVar2 + 0x20),iVar15);
          }
        }
        iVar13 = iVar13 + 1;
        iVar15 = iVar10;
      } while (iVar13 < (int)(uint)*pbVar16);
    }
    FUN_002e70a8(uVar3,uVar20,*(undefined4 *)(iVar2 + 0x28),0);
    if ((*(uint *)(DAT_002f18a4 + 4) & (uint)*(byte *)(local_5c + 0xc0)) != 0) {
      psVar12 = (short *)(DAT_002f1a68 + local_60 * 2);
      iVar15 = (int)*(short *)(iVar7 + 0x298);
      fVar25 = (float)VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
      uVar9 = in_fpscr & 0xfffffff | (uint)(fVar18 == fVar25) << 0x1e;
      if (SUB41(uVar9 >> 0x1e,0)) {
        fVar24 = (float)VectorSignedToFloat((int)psVar12[1],(byte)(uVar9 >> 0x15) & 3);
        fVar18 = (float)VectorSignedToFloat((int)psVar12[2],(byte)(uVar9 >> 0x15) & 3);
        fVar25 = *(float *)(*(int *)(DAT_002f18e4 + param_2 * 4) + iVar15 * 4);
        iVar13 = 0x74 - (int)(fVar21 - (fVar24 + DAT_002f1a6c));
        if (*(char *)(iVar8 + 0xe) == '\x01') {
          fVar24 = (float)VectorSignedToFloat(iVar13,(byte)(uVar9 >> 0x15) & 3);
          uVar20 = VectorSignedToFloat(((int)*(char *)(*(int *)(DAT_002f18e8 + param_2 * 4) + iVar15
                                                      ) - (int)(fVar24 + fVar25 + fVar6)) + 10,
                                       (byte)(uVar9 >> 0x15) & 3);
          FUN_002e70a8(uVar20,fVar18 + DAT_002f1a70,*(undefined4 *)(iVar2 + 0x28),0);
          return;
        }
        fVar24 = (float)VectorSignedToFloat(iVar13,(byte)(uVar9 >> 0x15) & 3);
        FUN_002e70a8(fVar24 + fVar25,fVar18 + DAT_002f1a70,*(undefined4 *)(iVar2 + 0x28),0);
      }
    }
  }
  return;
}
