// OoT3D decomp @ 002919ec  name=FUN_002919ec  size=2876

void FUN_002919ec(int param_1)

{
  undefined8 uVar1;
  byte bVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  uint in_fpscr;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float *pfVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float *pfVar39;
  float *local_12c;
  float *local_128;
  float *local_124;
  float *local_120;
  float *local_11c;
  float *local_118;
  float *local_114;
  float *local_110;
  float *local_10c;
  float *local_108;
  float *local_104;
  float *local_100;
  float *local_fc;
  float *local_f8;
  float *local_f4;
  float local_f0;
  float *local_ec;
  float *local_e8;
  float *local_e4;
  float local_e0;
  float local_dc;
  float *local_d8;
  float *local_d4;
  float *local_d0;
  float *local_cc;
  undefined1 auStack_c8 [4];
  float local_c4;
  float local_c0;
  float local_b4;
  float local_b0;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float *local_88;
  float *local_84;
  float *local_80;
  float *local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;

  pfVar3 = DAT_00291d78;
  local_68 = param_1 + 0x1000;
  if (*(char *)(param_1 + 0x175d) == '\0') {
LAB_002924b8:
    FUN_0036759c(*(undefined4 *)(local_68 + 0x760),0x6c0,DAT_0029258c);
    FUN_0036751c(*(undefined4 *)(local_68 + 0x760),0x6c0,DAT_00292594);
    local_88 = pfVar3;
    local_84 = pfVar3;
    local_80 = pfVar3;
    iVar21 = *(int *)(local_68 + 0x764);
    *(float **)(iVar21 + 0x3c) = pfVar3;
    *(float **)(iVar21 + 0x40) = pfVar3;
    *(float **)(iVar21 + 0x44) = pfVar3;
    *(undefined4 *)(*(int *)(local_68 + 0x764) + 0x170) = 1;
    if (((*DAT_00292598 & 1) == 0) && (iVar21 = FUN_003679b4(DAT_00292598), iVar21 != 0)) {
      FUN_0036788c(DAT_0029259c);
    }
    FUN_00367788(DAT_002925a8,*(undefined4 *)(local_68 + 0x764),0);
    return;
  }
  uVar8 = in_fpscr & 0xfffffff;
  uVar22 = uVar8 | (uint)(*(float *)(param_1 + 0x1714) == (float)DAT_00291d78) << 0x1e;
  pfVar11 = (float *)(param_1 + 0x172c);
  pfVar5 = (float *)(param_1 + 0x1750);
  pfVar12 = pfVar11;
  uVar23 = DAT_00291d7c;
  if (SUB41(uVar22 >> 0x1e,0)) {
    uVar22 = uVar8 | (uint)(*(float *)(param_1 + 0x1718) == (float)DAT_00291d78) << 0x1e;
    pfVar12 = (float *)(param_1 + 0x1744);
    pfVar6 = (float *)(param_1 + 0x1738);
    pfVar5 = pfVar6;
    if ((SUB41(uVar22 >> 0x1e,0)) &&
       (uVar22 = uVar8 | (uint)(*(float *)(param_1 + 0x171c) == (float)DAT_00291d78) << 0x1e,
       pfVar5 = (float *)(param_1 + 0x1750), uVar23 = DAT_00291d80, SUB41(uVar22 >> 0x1e,0)))
    goto LAB_00291a84;
  }
  pfVar6 = pfVar5;
  *(undefined4 *)(param_1 + 0x1720) = uVar23;
  pfVar11 = pfVar12;
LAB_00291a84:
  fVar37 = DAT_00291d84;
  fVar38 = *pfVar6 - *pfVar11;
  fVar35 = pfVar6[1] - pfVar11[1];
  fVar33 = pfVar6[2] - pfVar11[2];
  local_6c = *pfVar11 + fVar38 * DAT_00291d84;
  local_70 = pfVar11[1] + fVar35 * DAT_00291d84;
  local_74 = pfVar11[2] + fVar33 * DAT_00291d84;
  fVar24 = (float)FUN_003696ec(fVar38,fVar33);
  fVar25 = (float)FUN_003696ec(fVar35,SQRT(fVar38 * fVar38 + fVar33 * fVar33));
  fVar25 = -fVar25;
  local_98 = SQRT(fVar38 * fVar38 + fVar35 * fVar35 + fVar33 * fVar33) * fVar37;
  FUN_003735e8(fVar24,auStack_c8,0);
  uVar8 = uVar22 & 0xfffffff | (uint)(fVar25 == (float)pfVar3) << 0x1e;
  if (!SUB41(uVar8 >> 0x1e,0)) {
    fVar35 = (float)FUN_003727f0(fVar25);
    fVar38 = (float)FUN_00372674(fVar25);
    fVar37 = local_c0 * fVar35;
    local_c0 = local_c0 * fVar38 - local_c4 * fVar35;
    fVar25 = local_b0 * fVar35;
    local_b0 = local_b0 * fVar38 - local_b4 * fVar35;
    fVar33 = local_a0 * fVar35;
    local_a0 = local_a0 * fVar38 - local_a4 * fVar35;
    local_c4 = local_c4 * fVar38 + fVar37;
    local_b4 = local_b4 * fVar38 + fVar25;
    local_a4 = local_a4 * fVar38 + fVar33;
  }
  pfVar5 = DAT_00291d98;
  fVar33 = DAT_00291d94;
  fVar25 = DAT_00291d90;
  fVar37 = DAT_00291d8c;
  iVar21 = 0;
  *(float *)(param_1 + 0x1724) = fVar24 - DAT_00291d88;
LAB_00291bb4:
  fVar24 = DAT_00291d9c;
  fVar35 = (float)VectorSignedToFloat(iVar21,(byte)(uVar8 >> 0x15) & 3);
  fVar35 = (float)FUN_003727f0(fVar35 * fVar37 * DAT_00291d9c);
  piVar4 = DAT_00291da0;
  local_88 = (float *)(fVar35 * local_98 * (float)DAT_00291da0[1]);
  local_84 = pfVar3;
  fVar35 = (float)VectorSignedToFloat(iVar21,(byte)(uVar8 >> 0x15) & 3);
  fVar24 = (float)FUN_00372674(fVar35 * fVar37 * fVar24);
  local_80 = (float *)(-fVar24 * local_98 * (float)piVar4[2]);
  FUN_003735ac(&local_94,auStack_c8,&local_88);
  iVar7 = param_1 + iVar21 * 0x1c8;
  local_78 = iVar21 + 1;
  local_cc = (float *)(iVar7 + 0x1a4);
  pfVar12 = (float *)(iVar7 + 0x1b0);
  pfVar6 = (float *)(iVar7 + 0x240);
  pfVar11 = (float *)(iVar7 + 0x2d0);
  *(float *)(iVar7 + 0x1a4) = local_6c + local_94;
  *(float *)(iVar7 + 0x1a8) = local_70 + local_90;
  *(float *)(iVar7 + 0x1ac) = local_74 + local_8c;
  iVar10 = (int)(short)local_78;
  iVar7 = iVar10;
  if (0xb < iVar10) {
    iVar7 = iVar21 + -1;
  }
  local_d4 = pfVar3;
  if (0xb < iVar10) {
    iVar7 = (int)(short)iVar7;
  }
  pfVar39 = DAT_00291da4;
  if (*(short *)(param_1 + 0x1c) == 0x23) {
    local_d8 = pfVar3;
    local_d0 = DAT_00291da8;
    fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(uVar8 >> 0x15) & 3);
    FUN_003735e8(fVar24 * DAT_00291dac * fVar37,&local_12c,0);
    FUN_003735ac(&local_e4,&local_12c,&local_d8);
    iVar10 = 0;
    do {
      pfVar39 = pfVar12 + iVar10 * 3;
      iVar10 = (int)(short)((short)iVar10 + 2);
      *pfVar39 = *pfVar39 + (float)local_e4;
      pfVar39[2] = pfVar39[2] + local_dc;
      pfVar39[3] = pfVar39[3] + (float)local_e4;
      pfVar39[5] = pfVar39[5] + local_dc;
      pfVar39 = DAT_00291db0;
    } while (iVar10 < 0xc);
  }
  fVar38 = DAT_00291dc0;
  fVar35 = DAT_00291dbc;
  fVar24 = DAT_00291db8;
  uVar23 = DAT_00291db4;
  pfVar18 = (float *)(param_1 + iVar7 * 0x1c8 + 0x1b0);
  iVar7 = 0;
  *piVar4 = *piVar4 + 1;
  do {
    *pfVar12 = *local_cc;
    pfVar12[1] = local_cc[1];
    pfVar12[2] = local_cc[2];
    pfVar13 = pfVar12;
    pfVar15 = pfVar11;
    pfVar17 = pfVar6;
    pfVar19 = pfVar18;
    while( true ) {
      pfVar12 = pfVar13 + 3;
      iVar7 = (int)(short)((short)iVar7 + 1);
      pfVar11 = pfVar15 + 3;
      pfVar6 = pfVar17 + 3;
      pfVar18 = pfVar19 + 3;
      if (0xb < iVar7) {
        pfVar17[0x25] = pfVar17[0x22];
        pfVar17[0x24] = pfVar17[0x21];
        iVar7 = DAT_0029258c;
        iVar21 = (int)(short)local_78;
        if (0xb < iVar21) {
          local_d4 = pfVar3;
          local_d0 = pfVar5;
          iVar21 = DAT_0029258c + 0x6c0;
          param_1 = param_1 + 0x1a4;
          local_cc = pfVar3;
          iVar10 = 0;
          do {
            iVar14 = 0;
            iVar16 = 0;
            do {
              uVar8 = (uint)*(ushort *)(DAT_00292590 + (iVar10 + iVar16) * 2);
              puVar9 = (undefined4 *)(iVar7 + uVar8 * 0xc);
              pfVar6 = (float *)(iVar21 + uVar8 * 0xc);
              iVar20 = param_1 + iVar14 * 0xc;
              *puVar9 = *(undefined4 *)(iVar20 + 0xc);
              puVar9[1] = *(undefined4 *)(iVar20 + 0x10);
              puVar9[2] = *(undefined4 *)(iVar20 + 0x14);
              fVar37 = *(float *)(iVar20 + 0xa0);
              pfVar12 = pfVar5;
              pfVar11 = pfVar3;
              if (fVar37 != (float)pfVar3) {
                pfVar11 = (float *)FUN_003727f0(fVar37);
                pfVar12 = (float *)FUN_00372674(fVar37);
              }
              local_10c = pfVar3;
              local_104 = pfVar3;
              local_f0 = -(float)pfVar11;
              local_fc = pfVar5;
              local_100 = pfVar3;
              local_f8 = pfVar3;
              local_f4 = pfVar3;
              local_ec = pfVar3;
              local_e4 = pfVar3;
              fVar37 = *(float *)(iVar20 + 0x9c);
              local_110 = pfVar12;
              local_108 = pfVar11;
              local_e8 = pfVar12;
              if (fVar37 != (float)pfVar3) {
                fVar33 = (float)FUN_003727f0(fVar37);
                fVar35 = (float)FUN_00372674(fVar37);
                fVar37 = (float)local_108 * fVar33;
                local_108 = (float *)((float)local_108 * fVar35 - (float)local_10c * fVar33);
                fVar24 = (float)local_f8 * fVar33;
                local_f8 = (float *)((float)local_f8 * fVar35 - (float)local_fc * fVar33);
                fVar25 = (float)local_e8 * fVar33;
                local_e8 = (float *)((float)local_e8 * fVar35 - (float)local_ec * fVar33);
                local_10c = (float *)((float)local_10c * fVar35 + fVar37);
                local_fc = (float *)((float)local_fc * fVar35 + fVar24);
                local_ec = (float *)((float)local_ec * fVar35 + fVar25);
              }
              FUN_003735ac(&local_e0,&local_110,&local_d4);
              *pfVar6 = local_e0;
              iVar14 = (int)(short)((short)iVar14 + 1);
              pfVar6[1] = local_dc;
              iVar16 = (int)(short)((short)iVar16 + 0xc);
              pfVar6[2] = (float)local_d8;
            } while (iVar14 < 0xc);
            param_1 = param_1 + 0x1c8;
            iVar10 = (int)(short)((short)iVar10 + 1);
          } while (iVar10 < 0xc);
          *(undefined1 *)(local_68 + 0x75d) = 0;
          goto LAB_002924b8;
        }
        goto LAB_00291bb4;
      }
      if (iVar7 == 0) break;
      FUN_0036fc20(pfVar5,uVar23,pfVar11);
      FUN_0036fc20(pfVar5,uVar23,pfVar15 + 4);
      FUN_0036fc20(pfVar5,uVar23,pfVar15 + 5);
      local_d8 = pfVar3;
      fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar8 >> 0x15) & 3);
      fVar26 = (float)FUN_003727f0(fVar26 * fVar24 * DAT_00292210);
      local_d0 = (float *)((*(float *)(param_1 + 0x1708) + fVar26 * *(float *)(param_1 + 0x170c)) *
                          *(float *)(DAT_00292214 + iVar7 * 4));
      fVar26 = *(float *)(param_1 + 0x1724);
      uVar8 = uVar8 & 0xfffffff | (uint)(fVar26 == (float)pfVar3) << 0x1e;
      pfVar28 = pfVar5;
      pfVar27 = pfVar3;
      if (!SUB41(uVar8 >> 0x1e,0)) {
        pfVar27 = (float *)FUN_003727f0(fVar26);
        pfVar28 = (float *)FUN_00372674(fVar26);
      }
      local_128 = pfVar3;
      local_120 = pfVar3;
      local_10c = (float *)-(float)pfVar27;
      local_118 = pfVar5;
      local_11c = pfVar3;
      local_114 = pfVar3;
      local_110 = pfVar3;
      local_108 = pfVar3;
      local_100 = pfVar3;
      local_12c = pfVar28;
      local_124 = pfVar27;
      local_104 = pfVar28;
      FUN_003735ac(&local_f0,&local_12c,&local_d8);
      fVar26 = (float)VectorSignedToFloat(iVar21,(byte)(uVar8 >> 0x15) & 3);
      fVar26 = (float)FUN_00372674(fVar26 * fVar37 * DAT_00291d9c);
      local_d8 = (float *)(fVar26 * *(float *)(param_1 + 0x1710) *
                                    *(float *)(DAT_00292218 + iVar7 * 4));
      local_d0 = pfVar3;
      FUN_003735ac(&local_fc,&local_12c,&local_d8);
      fVar29 = *(float *)(param_1 + 0x1720);
      fVar36 = ((*pfVar12 + *pfVar11) - *pfVar13) + local_f0 + (float)local_fc;
      fVar30 = pfVar13[4];
      fVar31 = pfVar15[4];
      fVar32 = pfVar13[1];
      fVar34 = ((pfVar13[5] + pfVar15[5]) - pfVar13[2]) + (float)local_e8 + (float)local_f4;
      fVar26 = (float)FUN_003675f8(fVar34,fVar36);
      fVar29 = (float)FUN_003675f8(SQRT(fVar36 * fVar36 + fVar34 * fVar34),
                                   ((fVar30 + fVar31) - fVar32) + fVar29);
      fVar29 = -fVar29;
      uVar8 = uVar8 & 0xfffffff | (uint)(fVar26 == (float)pfVar3) << 0x1e;
      *pfVar17 = fVar29;
      local_d8 = pfVar3;
      pfVar28 = pfVar5;
      pfVar27 = pfVar3;
      local_d0 = pfVar39;
      if (!SUB41(uVar8 >> 0x1e,0)) {
        pfVar27 = (float *)FUN_003727f0(fVar26);
        pfVar28 = (float *)FUN_00372674(fVar26);
      }
      local_128 = pfVar3;
      local_10c = (float *)-(float)pfVar27;
      local_120 = pfVar3;
      local_118 = pfVar5;
      uVar8 = uVar8 & 0xfffffff | (uint)(fVar29 == (float)pfVar3) << 0x1e;
      local_11c = pfVar3;
      local_114 = pfVar3;
      local_110 = pfVar3;
      local_108 = pfVar3;
      local_100 = pfVar3;
      local_12c = pfVar28;
      local_124 = pfVar27;
      local_104 = pfVar28;
      if (!SUB41(uVar8 >> 0x1e,0)) {
        fVar31 = (float)FUN_003727f0(fVar29);
        fVar32 = (float)FUN_00372674(fVar29);
        fVar26 = (float)local_124 * fVar31;
        local_124 = (float *)((float)local_124 * fVar32 - (float)local_128 * fVar31);
        fVar29 = (float)local_114 * fVar31;
        local_114 = (float *)((float)local_114 * fVar32 - (float)local_118 * fVar31);
        fVar30 = (float)local_104 * fVar31;
        local_104 = (float *)((float)local_104 * fVar32 - (float)local_108 * fVar31);
        local_128 = (float *)((float)local_128 * fVar32 + fVar26);
        local_118 = (float *)((float)local_118 * fVar32 + fVar29);
        local_108 = (float *)((float)local_108 * fVar32 + fVar30);
      }
      FUN_003735ac(&local_e4,&local_12c,&local_d8);
      uVar1 = *(undefined8 *)pfVar12;
      fVar31 = pfVar13[5];
      local_7c = (float *)(DAT_0029221c + iVar7 * 4);
      *pfVar12 = *pfVar13 + (float)local_e4;
      pfVar13[4] = pfVar13[1] + local_e0;
      pfVar13[5] = pfVar13[2] + local_dc;
      fVar29 = (*pfVar13 + (float)local_e4) - *(float *)(param_1 + 0x28);
      fVar26 = (pfVar13[2] + local_dc) - *(float *)(param_1 + 0x30);
      fVar30 = *(float *)(param_1 + 0x1728) * *local_7c;
      fVar26 = SQRT(fVar29 * fVar29 + fVar26 * fVar26);
      uVar8 = uVar8 & 0xfffffff | (uint)(fVar30 < fVar26) << 0x1f | (uint)(fVar30 == fVar26) << 0x1e
      ;
      uVar22 = uVar8 | (uint)(NAN(fVar30) || NAN(fVar26)) << 0x1c;
      bVar2 = (byte)(uVar8 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar22 >> 0x1c) & 1)) {
        fVar26 = (float)FUN_003675f8();
        uVar22 = uVar22 & 0xfffffff | (uint)(fVar26 == (float)pfVar3) << 0x1e;
        local_d0 = (float *)(*(float *)(param_1 + 0x1728) * *local_7c);
        pfVar28 = pfVar5;
        pfVar27 = pfVar3;
        if (!SUB41(uVar22 >> 0x1e,0)) {
          pfVar27 = (float *)FUN_003727f0(fVar26);
          pfVar28 = (float *)FUN_00372674(fVar26);
        }
        local_128 = pfVar3;
        local_120 = pfVar3;
        local_10c = (float *)-(float)pfVar27;
        local_118 = pfVar5;
        local_11c = pfVar3;
        local_114 = pfVar3;
        local_110 = pfVar3;
        local_108 = pfVar3;
        local_100 = pfVar3;
        local_12c = pfVar28;
        local_124 = pfVar27;
        local_104 = pfVar28;
        FUN_003735ac(&local_e4,&local_12c,&local_d8);
        *pfVar12 = *(float *)(param_1 + 0x28) + (float)local_e4;
        pfVar13[5] = *(float *)(param_1 + 0x30) + local_dc;
      }
      fVar26 = pfVar13[4];
      fVar29 = *(float *)(param_1 + 0x1704);
      uVar22 = uVar22 & 0xfffffff | (uint)(fVar26 < fVar29) << 0x1f |
               (uint)(fVar26 == fVar29) << 0x1e;
      uVar8 = uVar22 | (uint)(NAN(fVar26) || NAN(fVar29)) << 0x1c;
      bVar2 = (byte)(uVar22 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
        fVar26 = fVar29;
      }
      pfVar13[4] = fVar26;
      fVar30 = (*pfVar12 - (float)uVar1) * fVar35 * fVar38;
      *pfVar11 = fVar30;
      fVar29 = (pfVar13[4] - (float)((ulonglong)uVar1 >> 0x20)) * fVar35 * fVar38;
      pfVar15[4] = fVar29;
      fVar26 = (pfVar13[5] - fVar31) * fVar35 * fVar38;
      pfVar15[5] = fVar26;
      iVar10 = DAT_00292584;
      if (*(short *)(param_1 + 0x1c) != 0x23) {
        if (DAT_00292584 < (int)fVar30) {
          *pfVar11 = fVar25;
        }
        else {
          if ((uint)DAT_00292588 <= (uint)fVar30) {
            fVar30 = fVar33;
          }
          *pfVar11 = fVar30;
        }
        if (iVar10 < (int)fVar29) {
          pfVar15[4] = fVar25;
        }
        else {
          if ((uint)DAT_00292588 <= (uint)fVar29) {
            fVar29 = fVar33;
          }
          pfVar15[4] = fVar29;
        }
        if (iVar10 < (int)fVar26) {
          pfVar15[5] = fVar25;
        }
        else {
          if ((uint)DAT_00292588 <= (uint)fVar26) {
            fVar26 = fVar33;
          }
          pfVar15[5] = fVar26;
        }
      }
      fVar26 = (float)FUN_003675f8(pfVar13[5] - pfVar19[5],*pfVar12 - *pfVar18);
      pfVar17[1] = fVar26;
      pfVar13 = pfVar12;
      pfVar15 = pfVar11;
      pfVar17 = pfVar6;
      pfVar19 = pfVar18;
    }
  } while( true );
}
