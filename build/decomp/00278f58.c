// OoT3D decomp @ 00278f58  name=FUN_00278f58  size=2076

void FUN_00278f58(int param_1)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  float fVar4;
  ushort uVar5;
  short sVar6;
  ushort *puVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  int local_68;
  float local_64 [2];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int iVar7;

  local_4c = param_1;
  (**(code **)(param_1 + 0x1bc))();
  iVar7 = local_4c;
  iVar13 = DAT_00279330;
  fVar17 = DAT_0027932c;
  fVar20 = DAT_00279324;
  uVar2 = *(ushort *)(local_4c + 0x1c);
  iVar14 = *(int *)(local_4c + 0x124);
  uVar12 = uVar2 & 3;
  if ((((uVar2 & 3) == 2) && (iVar14 != 0)) &&
     ((*(byte *)(iVar14 + 0x1b4) & 4) == 0 || (*(byte *)(iVar14 + 0x1b4) & 1) == 0)) {
    FUN_003705a0(DAT_00279324,DAT_00279328,local_4c + 0x1e4);
  }
  else {
    *(float *)(local_4c + 0x1e4) = DAT_0027932c;
    if (*(char *)(iVar13 + uVar12) != '\0') {
      sVar6 = *(short *)(local_4c + 0xbe) - *(short *)(DAT_00279334 + uVar12 * 2);
      if (sVar6 < 0) {
        sVar6 = -sVar6;
      }
      iVar13 = (int)sVar6;
      if ((iVar13 < 0x2000) && (iVar13 != -0x8000)) {
        fVar19 = (float)VectorSignedToFloat(iVar13 + -0x2000,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar17 + fVar19 * DAT_00279338;
        *(float *)(local_4c + 0x1e4) = fVar17;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar20) << 0x1f |
                (uint)(fVar17 == fVar20) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar17) || NAN(fVar20)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar17 = fVar20;
        }
        *(float *)(local_4c + 0x1e4) = fVar17;
      }
    }
  }
  fVar17 = DAT_0027933c;
  *(undefined4 *)(local_4c + 0x1d8) = *(undefined4 *)(iVar7 + 0x28);
  *(float *)(local_4c + 0x1dc) = *(float *)(iVar7 + 0x2c) + fVar17;
  uVar18 = DAT_00279340;
  *(undefined4 *)(local_4c + 0x1e0) = *(undefined4 *)(iVar7 + 0x30);
  if ((uVar2 & 3) == 0) {
    *(undefined4 *)(local_4c + 0x1e8) = uVar18;
  }
  else if (uVar12 == 1) {
    if ((uint)((int)(short)(*(short *)(iVar7 + 0xbe) + -0x8000) + ((int)DAT_0027934c >> 1)) <
        DAT_0027934c) {
LAB_002790d0:
      uVar18 = DAT_00279344;
    }
    else {
      uVar12 = (int)(short)(*(short *)(iVar7 + 0xbe) + -0x4000) + ((int)DAT_0027934c >> 1);
      if (uVar12 < DAT_0027934c) {
        if (iVar14 != 0) {
          uVar12 = (uint)*(byte *)(iVar14 + 0x1b4);
        }
        if (iVar14 != 0 && (uVar12 & 4) != 0) goto LAB_002790d0;
      }
    }
LAB_002790d4:
    FUN_003705a0(uVar18,DAT_00279348,local_4c + 0x1e8);
  }
  else if (uVar12 == 2) {
    if (((int)(short)(*(short *)(iVar7 + 0xbe) + -0x8000) + 0x4ffU < DAT_0027934c) ||
       ((int)(short)(*(short *)(iVar7 + 0xbe) + 0x4000) + 0x4ffU < DAT_0027934c)) {
      uVar18 = DAT_00279344;
    }
    goto LAB_002790d4;
  }
  iVar14 = local_4c;
  iVar13 = 0;
  iVar15 = *(int *)(local_4c + 0x124);
  FUN_00372224(&local_88,local_4c + 0x148);
  fVar17 = DAT_00279350;
  uVar2 = *(ushort *)(iVar14 + 0x1c);
  uVar5 = uVar2 & 3;
  if ((uVar2 & 3) == 0) {
    iVar13 = *(int *)(local_4c + 0x128);
    if (iVar13 == 0) goto LAB_002792d0;
    if (*(int *)(iVar13 + 0x13c) != 0) goto LAB_002791b4;
    *(undefined4 *)(local_4c + 0x128) = 0;
LAB_002792b4:
    if ((*(ushort *)(iVar7 + 0x1c) & 3) == 0) goto LAB_002792d0;
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 == 2) {
        iVar13 = *(int *)(iVar15 + 0x1c0);
      }
      if (uVar5 == 2 && iVar13 == 0) goto LAB_002792d0;
LAB_002791b4:
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(local_4c + 0x1e4) == fVar20) << 0x1e |
                 (uint)(fVar20 <= *(float *)(local_4c + 0x1e4)) << 0x1d;
      bVar3 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
        *(undefined1 *)(iVar13 + 800) = 1;
      }
      else {
        *(undefined1 *)(iVar13 + 800) = 0;
        FUN_0036df4c(iVar13 + 0x2e4,local_4c + 0x1d8);
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(local_4c + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_003735e8(fVar19 * fVar17,&local_88,0);
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(DAT_00279354 +
                                                           (*(ushort *)(local_4c + 0x1c) & 3) * 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_00369014(fVar19 * fVar17,&local_88,1);
        local_50 = *(float *)(local_4c + 0x1e8);
        if (((*(ushort *)(iVar14 + 0x1c) & 3) == 1) && (DAT_0027935c < (int)local_50)) {
          local_50 = DAT_00279358;
        }
        local_58 = fVar20;
        local_54 = fVar20;
        local_50 = local_50 * DAT_00279360;
        FUN_003735ac(iVar13 + 0x2f0,&local_88,&local_58);
        *(float *)(iVar13 + 0x2f0) = *(float *)(iVar13 + 0x2e4) + *(float *)(iVar13 + 0x2f0);
        *(float *)(iVar13 + 0x2f4) = *(float *)(iVar13 + 0x2e8) + *(float *)(iVar13 + 0x2f4);
        *(float *)(iVar13 + 0x2f8) = *(float *)(iVar13 + 0x2ec) + *(float *)(iVar13 + 0x2f8);
      }
      goto LAB_002792b4;
    }
    iVar13 = *(int *)(iVar15 + 0x1bc);
    if (iVar13 != 0) goto LAB_002791b4;
  }
  if ((*(ushort *)(iVar7 + 0x1c) & 3) != 2) {
    return;
  }
LAB_002792d0:
  local_48 = local_4c + 0x2000;
  iVar13 = *(int *)(local_4c + 0x220c);
  FUN_0034322c(iVar13,0x2000,0);
  FUN_00369014(DAT_00279364,&local_98,0);
  if ((*(ushort *)(local_4c + 0x1c) & 3) == 0) {
    sVar6 = *(short *)(local_4c + 0xbe) + 0x4000;
  }
  else {
    sVar6 = *(short *)(local_4c + 0xbe) + -0x4000;
  }
  iVar7 = (int)sVar6;
  if (*(int *)(local_48 + 0x390) != iVar7) {
    *(int *)(local_48 + 0x390) = iVar7;
    fVar20 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar20 * fVar17,&local_98,1);
    fVar4 = DAT_0027974c;
    fVar19 = DAT_00279748;
    fVar17 = DAT_00279744;
    fVar20 = DAT_00279740;
    iVar7 = DAT_0027973c;
    local_98 = local_98 * DAT_00279738;
    local_88 = local_88 * DAT_00279738;
    local_78 = local_78 * DAT_00279738;
    local_94 = local_94 * DAT_00279738;
    local_84 = local_84 * DAT_00279738;
    local_74 = local_74 * DAT_00279738;
    local_90 = local_90 * DAT_00279738;
    local_80 = local_80 * DAT_00279738;
    local_70 = local_70 * DAT_00279738;
    local_68 = 0;
    do {
      iVar14 = 0;
      pfVar16 = (float *)(DAT_00279750 + local_68 * 0xc);
      fVar21 = pfVar16[3];
      fVar22 = *pfVar16;
      fVar27 = pfVar16[1];
      fVar29 = pfVar16[2];
      fVar23 = pfVar16[4];
      fVar28 = pfVar16[5];
      do {
        fVar24 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_58 = *pfVar16 + (fVar21 - fVar22) * fVar20 * fVar24;
        fVar24 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_54 = pfVar16[1] + (fVar23 - fVar27) * fVar20 * fVar24;
        fVar24 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_50 = pfVar16[2] + (fVar28 - fVar29) * fVar20 * fVar24;
        FUN_003735ac(local_64,&local_98,&local_58);
        iVar15 = 0;
        iVar25 = (int)(fVar20 + (local_64[0] + fVar17) * fVar19);
        do {
          uVar12 = ((int)(fVar20 + (fVar4 - local_5c) * fVar19) + iVar15) - 5;
          if ((uVar12 & 0xffffffc0) == 0) {
            puVar8 = (ushort *)(iVar13 + (iVar25 + uVar12 * 0x40) * 2 + -10);
            pbVar9 = (byte *)(iVar15 * 0xb + iVar7);
            iVar10 = 0;
            iVar11 = 0xb;
            do {
              if (((iVar25 + iVar10) - 5U & 0xffffffc0) == 0) {
                *puVar8 = *puVar8 | (ushort)*pbVar9;
              }
              iVar11 = iVar11 + -1;
              puVar8 = puVar8 + 1;
              pbVar9 = pbVar9 + 1;
              iVar10 = iVar10 + 1;
            } while (iVar11 != 0);
          }
          iVar10 = DAT_00279758;
          fVar24 = DAT_00279754;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0xb);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 2);
      local_68 = local_68 + 1;
    } while (local_68 < 0x19);
    iVar7 = 0;
    do {
      iVar14 = 0;
      pfVar16 = (float *)(iVar10 + iVar7 * 0xc);
      fVar21 = pfVar16[3];
      fVar27 = *pfVar16;
      fVar29 = pfVar16[2];
      fVar22 = pfVar16[4];
      fVar28 = pfVar16[1];
      fVar23 = pfVar16[5];
      do {
        fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_58 = *pfVar16 + (fVar21 - fVar27) * fVar24 * fVar26;
        fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_54 = pfVar16[1] + (fVar22 - fVar28) * fVar24 * fVar26;
        fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        local_50 = pfVar16[2] + (fVar23 - fVar29) * fVar24 * fVar26;
        FUN_003735ac(local_64,&local_98,&local_58);
        iVar25 = 3;
        uVar12 = (uint)(fVar20 + (local_64[0] + fVar17) * fVar19);
        iVar15 = (int)(fVar20 + (fVar4 - local_5c) * fVar19);
        pbVar9 = DAT_0027975c;
        do {
          if ((iVar15 - 1U & 0xffffffc0) == 0) {
            iVar11 = (iVar15 - 1U) * 0x40;
            if ((uVar12 - 1 & 0xffffffc0) == 0) {
              puVar8 = (ushort *)(iVar13 + ((uVar12 - 1) + iVar11) * 2);
              *puVar8 = *puVar8 | (ushort)*pbVar9;
            }
            if ((uVar12 & 0xffffffc0) == 0) {
              puVar8 = (ushort *)(iVar13 + (iVar11 + uVar12) * 2);
              *puVar8 = *puVar8 | (ushort)pbVar9[1];
            }
            if ((uVar12 + 1 & 0xffffffc0) == 0) {
              puVar8 = (ushort *)(iVar13 + (iVar11 + uVar12 + 1) * 2);
              *puVar8 = *puVar8 | (ushort)pbVar9[2];
            }
          }
          iVar25 = iVar25 + -1;
          iVar15 = iVar15 + 1;
          pbVar9 = pbVar9 + 3;
        } while (iVar25 != 0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    FUN_0032b184(iVar13,0x80);
    FUN_0032b184(iVar13 + 0x1f80,0x80);
    iVar7 = 0x1f;
    do {
      *(undefined2 *)(iVar13 + 0x80) = 0;
      *(undefined2 *)(iVar13 + 0xfe) = 0;
      *(undefined2 *)(iVar13 + 0x100) = 0;
      iVar7 = iVar7 + -1;
      *(undefined2 *)(iVar13 + 0x17e) = 0;
      iVar13 = iVar13 + 0x100;
    } while (iVar7 != 0);
    iVar13 = 1 - *(int *)(local_48 + 0x38c);
    *(int *)(local_48 + 0x38c) = iVar13;
    FUN_0032b1c4(local_4c + iVar13 * 0x54 + 0x22c0,local_4c + 0x2368,local_4c + 0x1ec,0);
    FUN_00348a64(*(undefined4 *)(local_48 + 0x2b8),0,
                 local_4c + *(int *)(local_48 + 0x38c) * 0x54 + 0x22c0,DAT_002797e8,DAT_002797e8,
                 DAT_002797e4,DAT_002797e0);
  }
  return;
}
