// OoT3D decomp @ 00465514  name=FUN_00465514  size=1344

void FUN_00465514(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  
  fVar25 = DAT_004658c8;
  fVar3 = DAT_004658c4;
  uVar26 = CONCAT44(param_2,param_1);
  local_38 = 0;
  do {
    iVar16 = DAT_004658cc;
    if (*(char *)(DAT_004658cc + local_38) != '\0') {
      bVar23 = false;
      iVar13 = 0;
      iVar17 = 5;
      pfVar19 = (float *)(DAT_004658d0 + local_38 * 0x50);
      pfVar9 = pfVar19 + 3;
      pfVar11 = pfVar19 + 1;
      pfVar12 = pfVar19 + 2;
      pfVar5 = pfVar19;
      do {
        if (*pfVar9 == 0.0) {
          iVar13 = iVar13 + 1;
        }
        else {
          fVar22 = (float)((int)*pfVar9 + -1);
          *pfVar9 = fVar22;
          if (fVar22 != 0.0) {
            uVar26 = CONCAT44(*pfVar12,*pfVar5);
          }
          fVar24 = (float)((ulonglong)uVar26 >> 0x20);
          bVar23 = true;
          if (fVar22 != 0.0) {
            fVar22 = (float)uVar26 + fVar24;
          }
          else {
            iVar13 = iVar13 + 1;
            fVar22 = *pfVar11;
          }
          uVar26 = CONCAT44(fVar24,fVar22);
          *pfVar5 = fVar22;
        }
        iVar17 = iVar17 + -1;
        pfVar9 = pfVar9 + 4;
        pfVar11 = pfVar11 + 4;
        pfVar5 = pfVar5 + 4;
        pfVar12 = pfVar12 + 4;
      } while (iVar17 != 0);
      if (bVar23) {
        uVar26 = CONCAT44(pfVar19[0x10],
                          pfVar19[0x10] * pfVar19[0xc] * pfVar19[8] * pfVar19[4] * *pfVar19 * fVar25
                         );
        if (DAT_004658d4[local_38] != 0) {
          uVar26 = FUN_002d4a10();
        }
        if (iVar13 == 5) {
          *(undefined *)(iVar16 + local_38) = 0;
        }
      }
    }
    fVar22 = (float)((ulonglong)uVar26 >> 0x20);
    fVar24 = (float)uVar26;
    pfVar5 = (float *)(DAT_004658d8 + local_38 * 0x10);
    if (pfVar5[3] != 0.0) {
      fVar10 = (float)((int)pfVar5[3] + -1);
      bVar23 = fVar10 != 0.0;
      pfVar5[3] = fVar10;
      piVar4 = DAT_004658d4;
      if (bVar23) {
        fVar24 = *pfVar5;
      }
      if (bVar23) {
        fVar22 = pfVar5[2];
        fVar24 = fVar24 + fVar22;
      }
      if (!bVar23) {
        fVar24 = pfVar5[1];
      }
      *pfVar5 = fVar24;
      fVar24 = *pfVar5;
      uVar26 = CONCAT44(fVar22,fVar24);
      if (piVar4[local_38] != 0) {
        *(float *)(piVar4[local_38] + 0xb8) = fVar24;
        uVar26 = CONCAT44(fVar22,fVar24);
      }
    }
    fVar22 = (float)uVar26;
    pfVar5 = (float *)(DAT_004658dc + local_38 * 0x10);
    if (pfVar5[3] != 0.0) {
      fVar24 = (float)((int)pfVar5[3] + -1);
      bVar23 = fVar24 != 0.0;
      pfVar5[3] = fVar24;
      piVar4 = DAT_004658d4;
      if (bVar23) {
        fVar22 = *pfVar5;
      }
      if (bVar23) {
        fVar22 = fVar22 + pfVar5[2];
      }
      if (!bVar23) {
        fVar22 = pfVar5[1];
      }
      *pfVar5 = fVar22;
      FUN_0030ee14(&local_3c,piVar4 + local_38);
      if (local_3c != 0) {
        FUN_0047ebf4(*pfVar5);
      }
      uVar26 = FUN_0030ede0(&local_3c);
    }
    iVar16 = DAT_004658e0;
    puVar14 = (undefined4 *)(DAT_004658e0 + local_38 * 8);
    if ((puVar14[1] != 0) && (iVar13 = puVar14[1] + -1, puVar14[1] = iVar13, iVar13 == 0)) {
      FUN_0030ee14(&local_3c,iVar16 + -0x250 + local_38 * 4);
      if (local_3c != 0) {
        FUN_002d3ce0(local_3c,*puVar14);
      }
      uVar26 = FUN_0030ede0(&local_3c);
    }
    iVar16 = DAT_004658e4;
    puVar14 = (undefined4 *)(DAT_004658e4 + local_38 * 8);
    if ((puVar14[1] != 0) && (iVar13 = puVar14[1] + -1, puVar14[1] = iVar13, iVar13 == 0)) {
      FUN_0030ee14(&local_3c,iVar16 + -0x270 + local_38 * 4);
      if (local_3c != 0) {
        FUN_002d3ce0(local_3c,*puVar14);
      }
      uVar26 = FUN_0030ede0(&local_3c);
    }
    if (DAT_004658d4[local_38] == 0) {
      uVar18 = 0;
      local_30 = DAT_004658d4 + local_38 * 0x10 + -0x40;
      do {
        piVar4 = local_30;
        uVar6 = uVar18 & 0xff;
        iVar16 = 0;
        iVar13 = DAT_004658d0 + uVar6 * 0x50;
        iVar17 = DAT_004658d0 + uVar6 * 8;
        iVar21 = DAT_004658d0 + uVar6 * 8;
        local_34 = DAT_004658d0 + -0x10 + uVar6 * 4;
        do {
          piVar15 = piVar4 + uVar18 * 4 + iVar16 * 2;
          if (*(char *)piVar15 != '\0') {
            *(char *)piVar15 = '\0';
            if (*(char *)((int)piVar15 + 1) == '\0') {
              fVar22 = (float)(uint)*(ushort *)(piVar15 + 1);
              bVar1 = *(byte *)((int)piVar15 + 2);
              fVar24 = (float)VectorUnsignedToFloat
                                        (*(ushort *)((int)piVar15 + 6) & 0xff,
                                         (byte)(in_fpscr >> 0x15) & 3);
              fVar24 = fVar24 * fVar3 * fVar24 * fVar3;
              if (fVar22 == 0.0) {
                *(float *)(iVar13 + (uint)bVar1 * 0x10) = fVar24;
                fVar22 = 1.401298e-45;
              }
              pfVar5 = (float *)(iVar13 + (uint)bVar1 * 0x10);
              pfVar5[1] = fVar24;
              iVar20 = DAT_004658cc;
              fVar10 = (float)VectorSignedToFloat(fVar22,(byte)(in_fpscr >> 0x15) & 3);
              fVar10 = (fVar24 - *pfVar5) / fVar10;
              uVar26 = CONCAT44(*pfVar5,fVar10);
              pfVar5[2] = fVar10;
              pfVar5[3] = fVar22;
              *(undefined *)(iVar20 + (uVar18 & 0xff)) = 1;
            }
            else if (*(char *)((int)piVar15 + 1) == '\x01') {
              local_3c = (uint)*(ushort *)((int)piVar15 + 6);
              FUN_0030ee14(&local_40,local_34);
              if (local_40 != 0) {
                FUN_002d3ce0(local_40,local_3c);
              }
              *(undefined4 *)(iVar17 + 0x244) = 0;
              FUN_0030ede0(&local_40);
              uVar2 = *(ushort *)((int)piVar15 + 6);
              FUN_0030ee14(&local_3c,local_34);
              if (local_3c != 0) {
                FUN_002d3ce0(local_3c,uVar2 ^ 0xffff);
              }
              *(undefined4 *)(iVar21 + 0x264) = 0;
              uVar26 = FUN_0030ede0(&local_3c);
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 2);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 4);
    }
    do {
      local_38 = local_38 + 1;
      if (3 < (int)local_38) {
        iVar17 = FUN_002d3cd0();
        iVar13 = DAT_004658ec;
        iVar16 = DAT_004658e8;
        if (iVar17 == *(char *)(DAT_004658e8 + 1)) goto LAB_004659fc;
        iVar21 = 0;
        iVar20 = DAT_004658ec + -0x150;
        do {
          iVar7 = *(int *)(iVar20 + iVar21 * 4);
          if (iVar7 != 0) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            FUN_0030ee14(&local_38);
            uVar18 = 0;
            do {
              pbVar8 = (byte *)(iVar13 + iVar21 * 0x20 + uVar18 * 2);
              fVar25 = (float)VectorUnsignedToFloat((uint)*pbVar8,(byte)(in_fpscr >> 0x15) & 3);
              fVar25 = fVar25 * fVar3;
              if (iVar17 != 0) {
                fVar22 = (float)VectorUnsignedToFloat((uint)pbVar8[1],(byte)(in_fpscr >> 0x15) & 3);
                fVar25 = fVar22 * fVar3 * fVar25;
              }
              uVar6 = local_38;
              if (local_38 != 0) {
                uVar6 = 1;
              }
              if (uVar6 != 0) {
                FUN_0030ed80(fVar25,local_38,1 << (uVar18 & 0xff));
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < 0x10);
            FUN_0030ede0(&local_38);
          }
          do {
            iVar21 = iVar21 + 1;
            if (3 < iVar21) {
              *(char *)(iVar16 + 1) = (char)iVar17;
LAB_004659fc:
              if (*(char *)(iVar16 + 2) != '\0') {
                if (*DAT_004658d4 == 0) {
                  *(undefined *)(iVar16 + 2) = 0;
                }
                else {
                  FUN_0030ee14(&local_3c,DAT_004658d4);
                  if (local_3c != 0) {
                    FUN_002d3c88(local_3c,0,1,&local_38);
                  }
                  uVar18 = (uint)*(ushort *)(iVar16 + 4);
                  bVar23 = uVar18 == 0;
                  if (bVar23) {
                    uVar18 = local_38 & 0xffff;
                  }
                  if (bVar23 && uVar18 == 1) {
                    *(int *)(iVar16 + 0xc) = *(int *)(iVar16 + 0xc) + 1;
                  }
                  *(undefined2 *)(iVar16 + 4) = (undefined2)local_38;
                  FUN_0030ede0(&local_3c);
                }
              }
              return;
            }
          } while (iVar21 == 2);
        } while( true );
      }
    } while (local_38 == 2);
  } while( true );
}

