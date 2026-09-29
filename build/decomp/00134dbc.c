// OoT3D decomp @ 00134dbc  name=FUN_00134dbc  size=1292

void FUN_00134dbc(int param_1,float *param_2,int param_3,int param_4)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint in_fpscr;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;

  iVar18 = DAT_001350cc;
  fVar3 = DAT_001350c8;
  local_70 = DAT_001350c8;
  local_6c = DAT_001350c8;
  fVar29 = DAT_001350c8;
  fVar25 = DAT_001350c8;
  fVar27 = DAT_001350c8;
  if (*(char *)(DAT_001350cc + 7) != '\0') {
    local_88 = *param_2;
    local_84 = param_2[1];
    local_80 = param_2[2];
    local_94 = *(float *)(param_3 + 0x954);
    local_90 = *(float *)(param_3 + 0x958);
    local_8c = *(float *)(param_3 + 0x95c);
    fVar29 = local_94 - local_88;
    fVar25 = local_90 - local_84;
    fVar27 = local_8c - local_80;
    fVar21 = SQRT(fVar29 * fVar29 + fVar25 * fVar25 + fVar27 * fVar27) * DAT_001350d0;
    if (DAT_001350d4 < (int)fVar21) {
      fVar21 = DAT_001350d8;
    }
    *(float *)(DAT_001350cc + 0xf0) = DAT_001350dc - fVar21 * DAT_001350dc * DAT_001350e0;
  }
  fVar21 = DAT_001350ec;
  uVar4 = DAT_001350e8;
  iVar16 = 0;
  local_68 = DAT_001350e4;
  sVar1 = (short)(int)*(float *)(iVar18 + 0xf0);
  iVar18 = (int)sVar1;
  do {
    if (iVar18 < iVar16) {
      if (*(char *)(DAT_001350cc + 7) != '\0') {
        iVar17 = param_3 + iVar16 * 0xc;
        fVar14 = (float)VectorSignedToFloat(iVar16 - iVar18,(byte)(in_fpscr >> 0x15) & 3);
        fVar15 = (float)VectorSignedToFloat(0xc9 - iVar18,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = fVar14 / fVar15;
        FUN_00373500(local_88 + fVar29 * fVar14,fVar21,uVar4,iVar17);
        FUN_00373500(local_84 + fVar25 * fVar14,fVar21,uVar4,iVar17 + 4);
        FUN_00373500(local_80 + fVar27 * fVar14,fVar21,uVar4,iVar17 + 8);
      }
    }
    else {
      fVar14 = param_2[1];
      fVar15 = param_2[2];
      pfVar13 = (float *)(param_3 + iVar16 * 0xc);
      *pfVar13 = *param_2;
      pfVar13[1] = fVar14;
      pfVar13[2] = fVar15;
    }
    fVar12 = DAT_00135118;
    iVar11 = DAT_00135114;
    fVar10 = DAT_00135110;
    fVar9 = DAT_0013510c;
    fVar8 = DAT_00135108;
    fVar7 = DAT_00135104;
    fVar6 = DAT_00135100;
    fVar5 = DAT_001350fc;
    fVar15 = DAT_001350f8;
    iVar17 = DAT_001350f4;
    fVar14 = DAT_001350f0;
    iVar16 = (int)(short)((short)iVar16 + 1);
  } while (iVar16 < 200);
  do {
    sVar1 = sVar1 + 1;
    iVar18 = (int)sVar1;
    if (199 < iVar18) {
      return;
    }
    pfVar13 = (float *)(param_3 + iVar18 * 0xc);
    fVar27 = *pfVar13;
    fVar25 = pfVar13[1];
    fVar28 = fVar27 - pfVar13[-3];
    fVar22 = *(float *)(DAT_001350cc + 0xf4) * fVar14;
    fVar29 = pfVar13[2];
    fVar23 = fVar27 * fVar27 + fVar29 * fVar29;
    if (iVar17 < (int)fVar23) {
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
      fVar24 = fVar24 + (SQRT(fVar23) - fVar5) * fVar15;
    }
    else {
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
    }
    fVar26 = fVar25;
    if (*(char *)(DAT_001350cc + 0x16) == '\x02') {
      uVar19 = in_fpscr & 0xfffffff | (uint)(fVar24 <= fVar25) << 0x1d;
      if (SUB41(uVar19 >> 0x1d,0)) {
LAB_00135090:
        fVar26 = fVar25 - fVar22;
      }
      else {
        fVar22 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(uVar19 >> 0x15) & 3);
        fVar22 = fVar22 + (SQRT(fVar23) - fVar5) * fVar6;
        uVar20 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar22) << 0x1f |
                 (uint)(fVar25 == fVar22) << 0x1e;
        uVar19 = uVar20 | (uint)(NAN(fVar25) || NAN(fVar22)) << 0x1c;
        bVar2 = (byte)(uVar20 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
          fVar22 = (fVar25 - fVar22) * fVar7;
          if (DAT_0013511c < (int)fVar22) {
            fVar22 = fVar8;
          }
          if (99 < iVar18) {
            fVar23 = (float)VectorSignedToFloat(iVar18 + -100,(byte)(uVar19 >> 0x15) & 3);
            fVar26 = fVar25 - fVar23 * fVar9 * fVar22;
          }
        }
      }
    }
    else if (iVar18 < 0xbf) {
      uVar20 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar24) << 0x1f |
               (uint)(fVar25 == fVar24) << 0x1e;
      uVar19 = uVar20 | (uint)(NAN(fVar25) || NAN(fVar24)) << 0x1c;
      bVar2 = (byte)(uVar20 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) goto LAB_00135090;
    }
    else {
      uVar20 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar24) << 0x1f |
               (uint)(fVar25 == fVar24) << 0x1e;
      uVar19 = uVar20 | (uint)(NAN(fVar25) || NAN(fVar24)) << 0x1c;
      bVar2 = (byte)(uVar20 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
        fVar23 = (fVar25 - fVar24) * fVar10;
        uVar20 = in_fpscr & 0xfffffff | (uint)(fVar23 < fVar22) << 0x1f |
                 (uint)(fVar23 == fVar22) << 0x1e;
        uVar19 = uVar20 | (uint)(NAN(fVar23) || NAN(fVar22)) << 0x1c;
        bVar2 = (byte)(uVar20 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
          fVar23 = fVar22;
        }
        fVar26 = fVar25 - fVar23;
      }
    }
    if ((((((int)fVar27 + 0xbd240000U < 0x3a0001) && ((int)fVar29 <= DAT_00135320)) &&
         (iVar11 <= (int)fVar29)) ||
        ((((int)fVar27 + 0xbd240000U < 0x760001 && ((int)fVar29 <= DAT_00135324)) &&
         (iVar11 <= (int)fVar29)))) && ((int)fVar25 <= DAT_00135328)) {
      fVar26 = fVar12;
    }
    fVar25 = pfVar13[-2];
    fVar29 = fVar29 - pfVar13[-1];
    fVar27 = (float)FUN_003675f8(fVar29,fVar28);
    fVar22 = (float)FUN_003675f8(SQRT(fVar28 * fVar28 + fVar29 * fVar29),fVar26 - fVar25);
    fVar22 = -fVar22;
    uVar20 = uVar19 & 0xfffffff | (uint)(fVar27 == fVar3) << 0x1e;
    iVar18 = param_4 + iVar18 * 0xc;
    *(float *)(iVar18 + -8) = fVar27;
    *(float *)(iVar18 + -0xc) = fVar22;
    fVar29 = fVar21;
    fVar25 = fVar3;
    if (!SUB41(uVar20 >> 0x1e,0)) {
      fVar25 = (float)FUN_003727f0(fVar27);
      fVar29 = (float)FUN_00372674(fVar27);
    }
    local_a4 = -fVar25;
    local_b0 = fVar21;
    in_fpscr = uVar20 & 0xfffffff | (uint)(fVar22 == fVar3) << 0x1e;
    local_c4 = fVar29;
    local_c0 = fVar3;
    local_bc = fVar25;
    local_b8 = fVar3;
    local_b4 = fVar3;
    local_ac = fVar3;
    local_a8 = fVar3;
    local_a0 = fVar3;
    local_9c = fVar29;
    local_98 = fVar3;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar23 = (float)FUN_003727f0(fVar22);
      fVar22 = (float)FUN_00372674(fVar22);
      fVar29 = local_bc * fVar23;
      local_bc = local_bc * fVar22 - local_c0 * fVar23;
      fVar25 = local_ac * fVar23;
      local_ac = local_ac * fVar22 - local_b0 * fVar23;
      fVar27 = local_9c * fVar23;
      local_9c = local_9c * fVar22 - local_a0 * fVar23;
      local_c0 = local_c0 * fVar22 + fVar29;
      local_b0 = local_b0 * fVar22 + fVar25;
      local_a0 = local_a0 * fVar22 + fVar27;
    }
    FUN_003735ac(&local_7c,&local_c4,&local_70);
    *pfVar13 = pfVar13[-3] + local_7c;
    pfVar13[1] = pfVar13[-2] + local_78;
    pfVar13[2] = pfVar13[-1] + local_74;
  } while( true );
}
