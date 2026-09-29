// OoT3D decomp @ 0027be30  name=FUN_0027be30  size=2664

void FUN_0027be30(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  float *pfVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_78;
  float local_74;
  float local_70;

  fVar3 = DAT_0027c228;
  *(float *)(param_1 + 0x50) =
       DAT_0027c230 -
       (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x2c)) * DAT_0027c228 * DAT_0027c22c;
  *(undefined1 *)(param_1 + 0x7b2) = 0;
  *(short *)(param_1 + 0x76e) = *(short *)(param_1 + 0x76e) + 1;
  if (*(short *)(param_1 + 0x7aa) != 0) {
    *(short *)(param_1 + 0x7aa) = *(short *)(param_1 + 0x7aa) + -1;
  }
  if (*(short *)(param_1 + 0x7ac) != 0) {
    *(short *)(param_1 + 0x7ac) = *(short *)(param_1 + 0x7ac) + -1;
  }
  if (*(short *)(param_1 + 0x7ae) != 0) {
    *(short *)(param_1 + 0x7ae) = *(short *)(param_1 + 0x7ae) + -1;
  }
  if (*(short *)(param_1 + 0x790) != 0) {
    *(short *)(param_1 + 0x790) = *(short *)(param_1 + 0x790) + -1;
  }
  if (*(short *)(param_1 + 0x798) != 0) {
    *(short *)(param_1 + 0x798) = *(short *)(param_1 + 0x798) + -1;
  }
  fVar24 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x28) - *(float *)(param_1 + 0x28);
  fVar23 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x30) - *(float *)(param_1 + 0x30);
  fVar16 = (float)FUN_00338f60((int)-*(short *)(param_1 + 0x36));
  fVar17 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0x36));
  fVar18 = (float)FUN_00338f60((int)-*(short *)(param_1 + 0x36));
  fVar19 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0x36));
  fVar22 = DAT_0027c23c;
  fVar4 = DAT_0027c238;
  iVar21 = DAT_0027c234;
  fVar18 = fVar18 * fVar23 - fVar19 * fVar24;
  iVar12 = DAT_0027c234 + -0x4e0000;
  iVar13 = DAT_0027c234 + 0x1e40000;
  if (((DAT_0027c234 <= (int)ABS(fVar16 * fVar24 + fVar17 * fVar23)) || ((int)fVar18 < iVar12)) ||
     (iVar13 < (int)fVar18)) {
    fVar18 = DAT_0027c238;
  }
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar18 < DAT_0027c23c) << 0x1f |
          (uint)(fVar18 == DAT_0027c23c) << 0x1e;
  uVar15 = uVar8 | (uint)(NAN(fVar18) || NAN(DAT_0027c23c)) << 0x1c;
  bVar2 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) {
    *(undefined2 *)(param_1 + 0x774) = 0;
  }
  else {
    *(short *)(param_1 + 0x774) = (short)(int)fVar18;
  }
  fVar23 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x28) - *(float *)(param_1 + 0x28);
  fVar24 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x30) - *(float *)(param_1 + 0x30);
  fVar16 = (float)FUN_00338f60((int)(short)-(*(short *)(param_1 + 0x36) + -0x8000));
  fVar17 = (float)FUN_002cfca0((int)(short)-(*(short *)(param_1 + 0x36) + -0x8000));
  fVar18 = (float)FUN_00338f60((int)(short)-(*(short *)(param_1 + 0x36) + -0x8000));
  fVar19 = (float)FUN_002cfca0((int)(short)-(*(short *)(param_1 + 0x36) + -0x8000));
  fVar18 = fVar18 * fVar24 - fVar19 * fVar23;
  if (((iVar21 <= (int)ABS(fVar16 * fVar23 + fVar17 * fVar24)) || ((int)fVar18 < iVar12)) ||
     (iVar13 < (int)fVar18)) {
    fVar18 = fVar4;
  }
  uVar8 = uVar15 & 0xfffffff | (uint)(fVar18 < fVar22) << 0x1f | (uint)(fVar18 == fVar22) << 0x1e;
  uVar15 = uVar8 | (uint)(NAN(fVar18) || NAN(fVar22)) << 0x1c;
  bVar2 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) {
    *(undefined2 *)(param_1 + 0x776) = 0;
  }
  else {
    *(short *)(param_1 + 0x776) = (short)(int)fVar18;
  }
  sVar7 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
  iVar12 = DAT_0027c248;
  iVar21 = DAT_0027c244;
  if ((int)(short)(sVar7 - *(short *)(param_1 + 0x36)) + 0x38e2U < DAT_0027c240) {
    *(undefined2 *)(param_1 + 0x788) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x788) = 0;
  }
  iVar13 = 0;
  *(undefined2 *)(param_1 + 0x78a) = 0;
  while ((pfVar9 = (float *)(iVar21 + iVar13 * 0xc),
         iVar12 <= (int)ABS(*(float *)(param_1 + 0x28) - *pfVar9) ||
         (iVar12 <= (int)ABS(*(float *)(param_1 + 0x30) - pfVar9[2])))) {
    iVar13 = (int)(short)((short)iVar13 + 1);
    if (3 < iVar13) {
LAB_0027c0f8:
      (**(code **)(param_1 + 0x760))(param_1,param_2);
      fVar4 = DAT_0027c24c;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
      FUN_0036e168(*(undefined4 *)(param_1 + 0x7f8),fVar4,fVar3,fVar22,param_1 + 0xc4);
      FUN_00376864(param_1);
      FUN_0029e828(param_1,param_2);
      uVar5 = DAT_0027c254;
      fVar3 = DAT_0027c250;
      FUN_00376340(DAT_0027c254,DAT_0027c254,DAT_0027c250,param_2,param_1,4);
      FUN_0036e168(fVar22,fVar4,param_1 + 0x7d8);
      FUN_0036e168(fVar22,fVar4,param_1 + 0x7dc);
      fVar18 = DAT_0027c25c;
      if ((*(ushort *)(param_1 + 0x76e) & 0x7f) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      fVar16 = *(float *)(param_1 + 0x8f4);
      iVar12 = 0x19;
      iVar21 = param_1 + 0x828;
      pfVar9 = (float *)(param_1 + 0x8f0);
      do {
        fVar17 = pfVar9[2];
        *(float *)(iVar21 + 4) = *(float *)(iVar21 + 4) + fVar16;
        fVar16 = pfVar9[3];
        iVar12 = iVar12 + -1;
        *(float *)(iVar21 + 8) = *(float *)(iVar21 + 8) + fVar17;
        fVar17 = DAT_0027c578;
        iVar21 = iVar21 + 8;
        pfVar9 = pfVar9 + 2;
      } while (iVar12 != 0);
      uVar8 = (uint)*(short *)(param_1 + 0x798);
      if (uVar8 != 0) {
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027c580 + 0x110),
                                            (byte)(uVar15 >> 0x15) & 3);
        if ((int)(DAT_0027c578 / fVar16 + fVar18) < (int)uVar8) {
          uVar20 = DAT_0027c584;
          if ((uVar8 & 1) != 0) {
            uVar20 = DAT_0027c588;
          }
          FUN_0036e168(uVar20,fVar4,DAT_0027c57c,fVar22,param_1 + 0x810);
        }
        else {
          FUN_0036e168(fVar22,fVar4,uVar5,fVar22,param_1 + 0x810);
        }
        fVar16 = DAT_0027c58c;
        sVar7 = *(short *)(param_2 + 0x3206);
        bVar14 = sVar7 == 0;
        if (bVar14) {
          sVar7 = *(short *)(param_2 + 0x3200);
        }
        if (bVar14 && sVar7 == 0) {
          uVar20 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x810),3);
          *(ushort *)(param_2 + 0x3202) = (ushort)uVar20 & 0xff;
          uVar20 = VectorFloatToUnsigned(*(float *)(param_1 + 0x810) * fVar16,3);
          *(ushort *)(param_2 + 0x3204) = (ushort)uVar20 & 0xff;
          uVar20 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x810),3);
          *(ushort *)(param_2 + 0x31fc) = (ushort)uVar20 & 0xff;
          uVar20 = VectorFloatToUnsigned(*(float *)(param_1 + 0x810) * fVar16,3);
          *(ushort *)(param_2 + 0x31fe) = (ushort)uVar20 & 0xff;
        }
      }
      iVar21 = DAT_0027c59c;
      sVar7 = *(short *)(param_1 + 0x78e);
      if (sVar7 == 0) {
        *(float *)(param_1 + 0x7e0) = fVar22;
        *(float *)(param_1 + 0x7e4) = fVar22;
        *(float *)(param_1 + 0x7e8) = fVar22;
        uVar5 = DAT_0027c5a0;
        uVar20 = VectorUnsignedToFloat
                           ((uint)*(ushort *)(iVar21 + param_2),(byte)(uVar15 >> 0x15) & 3);
        FUN_0036e168(uVar20,fVar4,DAT_0027c5a0,fVar22,param_1 + 0x7ec);
        FUN_0036e168(DAT_0027c5a4,fVar4,uVar5,fVar22,param_1 + 0x7f0);
      }
      else {
        if (sVar7 < 1000) {
          *(short *)(param_1 + 0x78e) = sVar7 + -1;
          FUN_0036e168(DAT_0027c590,fVar4,fVar3,fVar22,param_1 + 0x7e0);
          FUN_0036e168(fVar22,fVar4,fVar3,fVar22,param_1 + 0x7e4);
        }
        else {
          FUN_0036e168(fVar17,fVar4,fVar3,fVar22,param_1 + 0x7e0);
          FUN_0036e168(uVar5,fVar4,fVar3,fVar22,param_1 + 0x7e4);
        }
        FUN_0036e168(fVar22,fVar4,fVar3,fVar22,param_1 + 0x7e8);
        FUN_0036e168(DAT_0027c594,fVar4,uVar5,fVar22,param_1 + 0x7ec);
        FUN_0036e168(DAT_0027c598,fVar4,uVar5,fVar22,param_1 + 0x7f0);
      }
      uVar5 = DAT_0027c5ac;
      if (DAT_0027c5a8 < *(uint *)(*(int *)(param_2 + 0x20ac) + 0x2c)) {
        iVar21 = *(int *)(param_1 + 0x7f4);
        if (DAT_0027c5b0 < iVar21) {
          uVar10 = 1;
          uVar11 = 0;
        }
        else {
          if (iVar21 <= DAT_0027c5b4) {
            if (DAT_0027c5b8 < iVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            if (DAT_0027c5c0 < iVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          uVar10 = 3;
          uVar11 = 1;
        }
        if (9 < *(byte *)(*(int *)(param_2 + 0x20ac) + 0x12bc)) {
          uVar10 = 0xffff;
        }
        if ((*(ushort *)(param_1 + 0x76e) & uVar10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if ((*(ushort *)(param_1 + 0x76e) & uVar11) == 0) {
          local_78 = fVar22;
          local_74 = fVar22;
          local_70 = fVar22;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
      if (*(short *)(param_1 + 0x796) != 0) {
        FUN_003309e0(param_1,param_2,0);
        sVar7 = 0;
        do {
          sVar7 = sVar7 + 2;
          *(short *)(param_1 + 0x792) = *(short *)(param_1 + 0x792) + 0x4a;
        } while (sVar7 < 0x14);
        FUN_0036e168(fVar22,fVar4,DAT_0027c948,fVar22,param_1 + 0x7f4);
      }
      iVar21 = DAT_0027c94c;
      if (*(short *)(param_1 + 0x78c) == 0) {
        iVar12 = param_2 + 0x5c78;
        if (*(int *)(param_1 + 0x760) != DAT_0027c950) {
          FUN_00376168(param_2,iVar12,param_1 + 0xa10);
        }
        FUN_003762a4(param_2,iVar12,param_1 + 0xa10);
        if (*(int *)(param_1 + 0x760) == iVar21) {
          FUN_003761f0(param_2,iVar12,param_1 + 0xa10);
        }
      }
      sVar7 = 0xd;
      if (*(int *)(param_1 + 0x760) == DAT_0027c954) {
        *(float *)(*(int *)(param_1 + 0xa2c) + 0x48) = fVar22;
      }
      else {
        *(float *)(*(int *)(param_1 + 0xa2c) + 0x48) = fVar4;
      }
      iVar12 = 0;
      pfVar9 = (float *)(*(int *)(param_1 + 0xa2c) + 0x228);
      do {
        if (*(int *)(param_1 + 0x760) == iVar21) {
          *pfVar9 = fVar22;
        }
        else {
          *pfVar9 = fVar4;
        }
        do {
          sVar7 = sVar7 + -1;
          pfVar9 = pfVar9 + 0x14;
          iVar12 = iVar12 + 1;
          if (sVar7 == 0) {
            uVar8 = uVar15 & 0xfffffff | (uint)(*(float *)(param_1 + 0x814) == fVar22) << 0x1e;
            if (SUB41(uVar8 >> 0x1e,0)) {
              *(undefined2 *)(*DAT_0027c580 + 0x454) = 0;
            }
            else {
              iVar21 = *DAT_0027c580;
              *(undefined2 *)(iVar21 + 0x454) = 1;
              *(undefined2 *)(iVar21 + 0x456) = 0xff;
              *(undefined2 *)(iVar21 + 0x458) = 0x50;
              *(undefined2 *)(iVar21 + 0x45a) = 0;
              uVar20 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x814),3);
              *(ushort *)(iVar21 + 0x45c) = (ushort)uVar20 & 0xff;
            }
            FUN_0036e168(fVar22,fVar4,uVar5,fVar22,param_1 + 0x814);
            fVar4 = DAT_0027cba4;
            piVar6 = DAT_0027c580;
            pfVar9 = *(float **)(DAT_0027cb9c + param_2);
            local_78 = (float)*DAT_0027cba0;
            local_74 = (float)DAT_0027cba0[1];
            local_70 = (float)DAT_0027cba0[2];
            sVar7 = 0;
            do {
              if (*(char *)(pfVar9 + 9) != '\0') {
                uVar15 = *(byte *)((int)pfVar9 + 0x25) + 1;
                *(char *)((int)pfVar9 + 0x25) = (char)uVar15;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                *pfVar9 = *pfVar9 + pfVar9[3] * fVar22 * fVar4;
                iVar21 = *piVar6;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                pfVar9[1] = pfVar9[1] + pfVar9[4] * fVar22 * fVar4;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                pfVar9[2] = pfVar9[2] + pfVar9[5] * fVar22 * fVar4;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                pfVar9[3] = pfVar9[3] + pfVar9[6] * fVar22 * fVar4;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                pfVar9[4] = pfVar9[4] + pfVar9[7] * fVar22 * fVar4;
                fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                    (byte)(uVar8 >> 0x15) & 3);
                pfVar9[5] = pfVar9[5] + pfVar9[8] * fVar22 * fVar4;
                if (*(char *)(pfVar9 + 9) == '\x01') {
                  iVar12 = (uVar15 & 3) * 3;
                  *(undefined1 *)((int)pfVar9 + 0x26) = *(undefined1 *)((int)&local_78 + iVar12);
                  *(undefined1 *)((int)pfVar9 + 0x27) = *(undefined1 *)((int)&local_78 + iVar12 + 1)
                  ;
                  *(undefined1 *)(pfVar9 + 10) = *(undefined1 *)((int)&local_78 + iVar12 + 2);
                  fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar21 + 0x110),
                                                      (byte)(uVar8 >> 0x15) & 3);
                  sVar1 = *(short *)((int)pfVar9 + 0x2a) -
                          (short)(int)(fVar18 + fVar22 * fVar3 * fVar4);
                  *(short *)((int)pfVar9 + 0x2a) = sVar1;
                  if (sVar1 < 1) {
                    *(undefined2 *)((int)pfVar9 + 0x2a) = 0;
                    *(undefined1 *)(pfVar9 + 9) = 0;
                  }
                }
              }
              sVar7 = sVar7 + 1;
              pfVar9 = pfVar9 + 0xd;
            } while (sVar7 < 0x50);
            return;
          }
        } while (iVar12 == 6);
      } while( true );
    }
  }
  *(undefined2 *)(param_1 + 0x78a) = 1;
  goto LAB_0027c0f8;
}
