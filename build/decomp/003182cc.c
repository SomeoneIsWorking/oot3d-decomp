// OoT3D decomp @ 003182cc  name=FUN_003182cc  size=1136

void FUN_003182cc(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
                 undefined4 param_7,int param_8)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint in_fpscr;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  short local_44 [2];
  float local_40;

  iVar6 = FUN_00326b20();
  fVar3 = DAT_003186c8;
  fVar14 = DAT_003186c4;
  if (iVar6 == 0) {
    param_1 = *(float *)(param_6 + 0x6c);
    if (0x41000000 < (int)param_1) {
      *(float *)(param_6 + 0x6c) = param_1 - param_4;
      return;
    }
    if (DAT_003186c4 < param_1) goto LAB_003183b8;
  }
  else {
    iVar11 = FUN_00338f60((int)*(short *)(param_6 + 0xbc));
    fVar15 = DAT_003186d0;
    iVar6 = DAT_003186cc;
    fVar17 = fVar3;
    if (iVar11 < DAT_003186cc) {
      fVar12 = (float)FUN_002cfca0((int)*(short *)(param_6 + 0xbc));
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar14 <= fVar12) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar17 = fVar15;
      }
    }
    fVar17 = fVar17 * param_5;
    FUN_00326a6c(param_6 + 0xec8,&local_40,local_44);
    fVar12 = DAT_003186d4;
    fVar13 = (float)FUN_00338f60((int)local_44[0]);
    fVar5 = DAT_003186e0;
    fVar16 = DAT_003186dc;
    piVar4 = DAT_003186d8;
    in_fpscr = in_fpscr & 0xfffffff;
    if (param_2 < fVar13) {
      uVar7 = *(uint *)(param_6 + 0xe54);
      uVar9 = in_fpscr | (uint)(param_3 <= local_40) << 0x1d;
      if (!SUB41(uVar9 >> 0x1d,0)) {
        *(uint *)(param_6 + 0xe54) = uVar7 & 0xfffffffc;
        param_4 = *(float *)(param_6 + 0x6c) - param_4;
        *(float *)(param_6 + 0x6c) = param_4;
        if ((int)param_4 < 0x3fc00000) {
          *(float *)(param_6 + 0x6c) = fVar14;
        }
        return;
      }
      if ((uVar7 & 1) == 0) {
        if ((uVar7 & 2) == 0) {
          fVar15 = fVar3;
          if (NAN(fVar17 * DAT_003186e8 * local_40 - *(float *)(param_6 + 0x6c)) || NAN(fVar14)) {
            fVar15 = DAT_003186ec;
          }
          fVar14 = *(float *)(param_6 + 0x6c) + fVar15 * DAT_003186f0 * DAT_003186f4;
          *(float *)(param_6 + 0x6c) = fVar14;
          if ((int)fVar14 < 0x3fc00001) {
            fVar14 = fVar12;
          }
          *(float *)(param_6 + 0x6c) = fVar14;
          uVar9 = in_fpscr | (uint)(fVar14 < fVar17) << 0x1f | (uint)(fVar14 == fVar17) << 0x1e;
          uVar10 = uVar9 | (uint)(NAN(fVar14) || NAN(fVar17)) << 0x1c;
          bVar2 = (byte)(uVar9 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
            fVar14 = fVar14 - param_4;
            *(float *)(param_6 + 0x6c) = fVar14;
            uVar9 = in_fpscr | (uint)(fVar14 < fVar17) << 0x1f | (uint)(fVar14 == fVar17) << 0x1e;
            uVar10 = uVar9 | (uint)(NAN(fVar14) || NAN(fVar17)) << 0x1c;
            bVar2 = (byte)(uVar9 >> 0x18);
            if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
              fVar17 = fVar14;
            }
            *(float *)(param_6 + 0x6c) = fVar17;
          }
          goto LAB_00318618;
        }
        fVar14 = *(float *)(param_6 + 0x6c);
        uVar9 = in_fpscr | (uint)(fVar14 < fVar17) << 0x1f | (uint)(fVar14 == fVar17) << 0x1e |
                (uint)(fVar17 <= fVar14) << 0x1d;
        uVar10 = uVar9 | (uint)(NAN(fVar14) || NAN(fVar17)) << 0x1c;
        bVar2 = (byte)(uVar9 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
          *(float *)(param_6 + 0x6c) = fVar14 - DAT_003186e4;
          goto LAB_00318618;
        }
        if ((bool)(bVar2 >> 5 & 1)) goto LAB_00318618;
        *(float *)(param_6 + 0x6c) = fVar17;
        uVar7 = uVar7 & 0xfffffffd;
      }
      else {
        fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003186d8 + 0x110),
                                            (byte)(uVar9 >> 0x15) & 3);
        if ((int)(DAT_003186dc / fVar17 + DAT_003186e0) - *(int *)(param_6 + 0xea4) < 1) {
          iVar11 = FUN_00338f60((int)*(short *)(param_6 + 0xbc));
          fVar17 = fVar3;
          if (iVar11 < iVar6) {
            fVar12 = (float)FUN_002cfca0((int)*(short *)(param_6 + 0xbc));
            uVar9 = uVar9 & 0xfffffff | (uint)(fVar14 <= fVar12) << 0x1d;
            if (!SUB41(uVar9 >> 0x1d,0)) {
              fVar17 = fVar15;
            }
          }
          fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + 0xe6c),
                                              (byte)(uVar9 >> 0x15) & 3);
          fVar17 = fVar17 * fVar12;
        }
        else {
          iVar11 = FUN_00338f60((int)*(short *)(param_6 + 0xbc));
          fVar17 = fVar3;
          if (iVar11 < iVar6) {
            fVar12 = (float)FUN_002cfca0((int)*(short *)(param_6 + 0xbc));
            uVar9 = uVar9 & 0xfffffff | (uint)(fVar14 <= fVar12) << 0x1d;
            if (!SUB41(uVar9 >> 0x1d,0)) {
              fVar17 = fVar15;
            }
          }
          fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + 0xe6c),
                                              (byte)(uVar9 >> 0x15) & 3);
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                              (byte)(uVar9 >> 0x15) & 3);
          fVar16 = (float)VectorSignedToFloat((int)(fVar16 / fVar13 + fVar5) -
                                              *(int *)(param_6 + 0xea4),(byte)(uVar9 >> 0x15) & 3);
          fVar17 = (fVar12 * fVar17 - *(float *)(param_6 + 0x6c)) / fVar16 +
                   *(float *)(param_6 + 0x6c);
        }
        *(float *)(param_6 + 0x6c) = fVar17;
        iVar11 = FUN_00338f60((int)*(short *)(param_6 + 0xbc));
        fVar17 = fVar3;
        if (iVar11 < iVar6) {
          fVar12 = (float)FUN_002cfca0((int)*(short *)(param_6 + 0xbc));
          uVar9 = uVar9 & 0xfffffff | (uint)(fVar14 <= fVar12) << 0x1d;
          if (!SUB41(uVar9 >> 0x1d,0)) {
            fVar17 = fVar15;
          }
        }
        fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_6 + 0xe6c),
                                            (byte)(uVar9 >> 0x15) & 3);
        uVar10 = uVar9 & 0xfffffff | (uint)(fVar17 * fVar14 == *(float *)(param_6 + 0x6c)) << 0x1e |
                 (uint)(*(float *)(param_6 + 0x6c) <= fVar17 * fVar14) << 0x1d;
        bVar2 = (byte)(uVar10 >> 0x18);
        if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) goto LAB_00318618;
        uVar7 = *(uint *)(param_6 + 0xe54) & 0xfffffffe | 2;
      }
      *(uint *)(param_6 + 0xe54) = uVar7;
LAB_00318618:
      uVar8 = *(undefined4 *)(param_6 + 0xe6c);
      fVar14 = (float)VectorSignedToFloat((int)local_44[0],(byte)(uVar10 >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((int)local_44[0],(byte)(uVar10 >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat(uVar8,(byte)(uVar10 >> 0x15) & 3);
      fVar17 = *(float *)(param_6 + 0x6c);
      fVar12 = (float)VectorSignedToFloat(-param_8,(byte)(uVar10 >> 0x15) & 3);
      iVar6 = (int)(short)(int)((DAT_003186fc - fVar17 * (fVar3 / fVar15)) *
                               fVar16 * fVar14 * DAT_003186f8 * fVar14 * DAT_003186f8);
      fVar14 = (float)VectorSignedToFloat(uVar8,(byte)(uVar10 >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar10 >> 0x15) & 3);
      fVar12 = (DAT_003186fc - fVar17 * (fVar3 / fVar14)) * fVar12;
      uVar9 = uVar10 & 0xfffffff | (uint)(fVar12 < fVar15) << 0x1f |
              (uint)(fVar12 == fVar15) << 0x1e;
      bVar2 = (byte)(uVar9 >> 0x18);
      fVar14 = (float)VectorSignedToFloat(uVar8,(byte)(uVar9 >> 0x15) & 3);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar12) || NAN(fVar15))) {
        fVar15 = (float)VectorSignedToFloat(param_8,(byte)(uVar9 >> 0x15) & 3);
        fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(uVar9 >> 0x15) & 3);
        uVar9 = uVar10 & 0xfffffff |
                (uint)(fVar12 <= (DAT_003186fc - fVar17 * (fVar3 / fVar14)) * fVar15) << 0x1d;
        if (SUB41(uVar9 >> 0x1d,0)) {
          fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar9 >> 0x15) & 3);
        }
        else {
          fVar14 = (float)VectorSignedToFloat(uVar8,(byte)(uVar9 >> 0x15) & 3);
          fVar15 = (float)VectorSignedToFloat(param_8,(byte)(uVar9 >> 0x15) & 3);
          fVar15 = (DAT_003186fc - fVar17 * (fVar3 / fVar14)) * fVar15;
        }
      }
      else {
        fVar15 = (float)VectorSignedToFloat(-param_8,(byte)(uVar9 >> 0x15) & 3);
        fVar15 = (DAT_003186fc - fVar17 * (fVar3 / fVar14)) * fVar15;
      }
      sVar1 = (short)(int)fVar15 + *(short *)(param_6 + 0x36);
      *(short *)(param_6 + 0x36) = sVar1;
      *(short *)(param_6 + 0xbe) = sVar1;
      return;
    }
    param_1 = *(float *)(param_6 + 0x6c) - param_1;
    *(float *)(param_6 + 0x6c) = param_1;
    if (fVar14 <= param_1) goto LAB_003183b8;
  }
  param_1 = fVar14;
LAB_003183b8:
  *(float *)(param_6 + 0x6c) = param_1;
  return;
}
