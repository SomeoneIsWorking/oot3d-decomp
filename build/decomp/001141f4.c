// OoT3D decomp @ 001141f4  name=FUN_001141f4  size=1640

void FUN_001141f4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char cVar12;
  short sVar13;
  int iVar14;
  undefined1 *puVar15;
  char *pcVar16;
  short sVar17;
  float *pfVar18;
  uint uVar19;
  short *psVar20;
  uint uVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;

  uVar19 = DAT_00114600;
  pcVar16 = DAT_001145fc;
  uVar21 = 0;
  pfVar18 = DAT_00114604;
  if ((*(char *)(DAT_00114600 + 0x17) == '\0') && (*(short *)(DAT_00114600 + 0x1e) != 4)) {
    pfVar18 = (float *)(*(int *)(param_1 + 0x20ac) + 0x28);
  }
  fVar22 = (float)FUN_003727f0(*(undefined4 *)(DAT_00114600 + 0x120));
  fVar26 = DAT_0011460c;
  fVar24 = DAT_00114608;
  fVar22 = fVar22 * DAT_00114608;
  local_88[1] = DAT_0011460c;
  local_88[0] = fVar22;
  local_88[2] = (float)FUN_00372674(*(undefined4 *)(uVar19 + 0x120));
  fVar6 = DAT_00114628;
  fVar5 = DAT_00114624;
  fVar4 = DAT_00114620;
  uVar3 = DAT_0011461c;
  fVar25 = DAT_00114618;
  fVar23 = DAT_00114614;
  psVar20 = DAT_00114610;
  local_88[2] = local_88[2] * fVar24;
  fVar22 = *pfVar18 - fVar22;
  if ((int)(fVar22 * fVar22 + (pfVar18[2] - local_88[2]) * (pfVar18[2] - local_88[2])) <
      (int)DAT_00114610) {
    uVar21 = 1;
    *(float *)(uVar19 + 0x120) = *(float *)(uVar19 + 0x120) + DAT_00114614;
  }
  else {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(uVar19 + 0x78) == DAT_00114620) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      FUN_00373500(DAT_0011462c,DAT_00114628,DAT_00114630);
    }
    else {
      *(float *)(uVar19 + 0x120) = *(float *)(uVar19 + 0x120) + DAT_00114624;
      local_88[1] = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) +
                                                                       0x28) + 2),
                                               (byte)(in_fpscr >> 0x15) & 3);
      local_88[1] = local_88[1] - fVar25;
    }
  }
  fVar22 = (float)FUN_003727f0(*(undefined4 *)(uVar19 + 0x124));
  local_78 = fVar26;
  local_88[3] = fVar22 * fVar24;
  local_74 = (float)FUN_00372674(*(undefined4 *)(uVar19 + 0x124));
  local_74 = local_74 * fVar24;
  fVar22 = *pfVar18 - fVar22 * fVar24;
  if ((int)(fVar22 * fVar22 + (pfVar18[2] - local_74) * (pfVar18[2] - local_74)) < (int)psVar20) {
    uVar21 = uVar21 | 2;
    *(float *)(uVar19 + 0x124) = *(float *)(uVar19 + 0x124) - fVar23;
  }
  else {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(uVar19 + 0x78) == fVar4) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      FUN_00373500(DAT_00114634,fVar6,uVar3,DAT_00114638);
    }
    else {
      *(float *)(uVar19 + 0x124) = *(float *)(uVar19 + 0x124) - fVar5;
      local_78 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 - fVar25;
    }
  }
  fVar22 = (float)FUN_003727f0(*(undefined4 *)(uVar19 + 0x128));
  local_6c = fVar26;
  local_70 = fVar22 * fVar24;
  local_68 = (float)FUN_00372674(*(undefined4 *)(uVar19 + 0x128));
  local_68 = local_68 * fVar24;
  fVar24 = *pfVar18 - fVar22 * fVar24;
  if ((int)(fVar24 * fVar24 + (pfVar18[2] - local_68) * (pfVar18[2] - local_68)) < (int)psVar20) {
    uVar21 = uVar21 | 4;
    *(float *)(uVar19 + 0x128) = *(float *)(uVar19 + 0x128) - fVar23;
  }
  else {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(uVar19 + 0x78) == fVar4) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      FUN_00373500(DAT_0011463c,fVar6,uVar3,DAT_00114640);
    }
    else {
      *(float *)(uVar19 + 0x128) = *(float *)(uVar19 + 0x128) - fVar5;
      local_6c = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_6c = local_6c - fVar25;
    }
  }
  fVar24 = DAT_0011465c;
  iVar10 = DAT_00114658;
  uVar9 = DAT_00114654;
  uVar8 = DAT_00114650;
  uVar7 = DAT_0011464c;
  uVar3 = DAT_00114648;
  fVar26 = fVar6;
  if (*(char *)(DAT_00114600 + 0xd) == '\x01') {
    fVar26 = DAT_00114644;
  }
  sVar17 = 0;
  do {
    uVar11 = DAT_00114660;
    if (*pcVar16 != '\0') {
      *(short *)(pcVar16 + 2) = *(short *)(pcVar16 + 2) + 1;
      FUN_00368cc0(param_1,pcVar16 + 4,pcVar16 + 0x1c,uVar11);
      if ((DAT_00114664 <= (int)*(float *)(pcVar16 + 0x24)) ||
         (in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(*(float *)(pcVar16 + 0x24) + DAT_00114668 <=
                           ABS(*(float *)(pcVar16 + 0x1c))) << 0x1d, SUB41(in_fpscr >> 0x1d,0))) {
        cVar12 = '\0';
      }
      else {
        cVar12 = '\x01';
      }
      if (sVar17 < 0x15) {
        psVar20 = (short *)0x0;
        uVar19 = 1;
      }
      pcVar16[0x44] = cVar12;
      if (0x14 < sVar17) {
        if (sVar17 < 0x29) {
          psVar20 = (short *)0x1;
          uVar19 = 2;
        }
        else {
          psVar20 = (short *)0x2;
          uVar19 = 4;
        }
      }
      fVar27 = *(float *)(pcVar16 + 0x10) - *(float *)(pcVar16 + 4);
      fVar23 = *(float *)(pcVar16 + 0x14);
      fVar25 = *(float *)(pcVar16 + 8);
      fVar22 = *(float *)(pcVar16 + 0x18) - *(float *)(pcVar16 + 0xc);
      local_64 = FUN_003758b0(fVar22,fVar27);
      fVar22 = SQRT(fVar27 * fVar27 + fVar22 * fVar22);
      local_60 = FUN_003758b0(fVar22,fVar23 - fVar25);
      if ((int)fVar22 < DAT_0011466c) {
        fVar23 = (float)FUN_003738a8(uVar3);
        uVar2 = DAT_00114600;
        *(float *)(pcVar16 + 0x14) = fVar23 + local_88[(int)psVar20 * 3 + 1];
        fVar23 = DAT_00114668;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(uVar2 + 0x78) == fVar4) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          fVar25 = (float)FUN_003738a8(DAT_00114668);
          *(float *)(pcVar16 + 0x10) = fVar25 + local_88[(int)psVar20 * 3];
          fVar23 = (float)FUN_003738a8(fVar23);
          *(float *)(pcVar16 + 0x18) = fVar23 + local_88[(int)psVar20 * 3 + 2];
        }
        else {
          fVar23 = (float)FUN_003738a8(uVar7);
          *(float *)(pcVar16 + 0x10) = fVar23 + local_88[(int)psVar20 * 3];
          fVar23 = (float)FUN_003738a8(uVar7);
          *(float *)(pcVar16 + 0x18) = fVar23 + local_88[(int)psVar20 * 3 + 2];
        }
        local_94 = *(undefined4 *)(pcVar16 + 4);
        uStack_8c = *(undefined4 *)(pcVar16 + 0xc);
        local_90 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28) +
                                                      2),(byte)(in_fpscr >> 0x15) & 3);
        fVar23 = (float)FUN_00371e50(uVar8);
        FUN_00368b98(uVar9,fVar23 + DAT_00114668,pcVar16 + 0x1c,*(undefined4 *)(param_1 + 0x5c28),
                     &local_94,0x96,0x5a);
        iVar14 = *(int *)(pcVar16 + 0x28);
        if (*(int *)(pcVar16 + 0x28) < 0x3fc00001) {
          iVar14 = iVar10;
        }
        *(int *)(pcVar16 + 0x28) = iVar14;
        *(int *)(pcVar16 + 0x34) = iVar10;
        *(float *)(pcVar16 + 0x38) = fVar6;
      }
      else if ((*(ushort *)(pcVar16 + 2) & 0x1f) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      sVar1 = *(short *)(pcVar16 + 0x3e);
      psVar20 = (short *)(pcVar16 + 0x3e);
      sVar13 = FUN_00368d94((int)(short)((short)local_64 - sVar1),5);
      iVar14 = (int)sVar13;
      if (iVar14 < 0x4001) {
        if (iVar14 < -0x4000) {
          iVar14 = DAT_001148dc;
        }
      }
      else {
        iVar14 = 0x4000;
      }
      *psVar20 = sVar1 + (short)iVar14;
      fVar23 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      puVar15 = (undefined1 *)(int)(short)(int)(fVar23 * fVar24);
      if ((int)puVar15 < 0x1f41) {
        if ((int)puVar15 < -8000) {
          puVar15 = DAT_001148e0;
        }
      }
      else {
        puVar15 = &DAT_00001f40;
      }
      FUN_00370084(pcVar16 + 0x42,puVar15,3,DAT_001148e4);
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(pcVar16 + 0x42),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar23 = fVar23 * DAT_001148e8;
      FUN_00370084(pcVar16 + 0x3c,local_60,5,0x4000);
      if ((uVar21 & uVar19) != 0) {
        *(undefined4 *)(pcVar16 + 0x28) = DAT_001148ec;
        *(undefined4 *)(pcVar16 + 0x34) = DAT_001148f0;
        *(float *)(pcVar16 + 0x38) = fVar6;
      }
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_00114600 + 0x78) == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        *(undefined4 *)(pcVar16 + 0x28) = DAT_001148f4;
        *(undefined4 *)(pcVar16 + 0x34) = DAT_001148f0;
        *(float *)(pcVar16 + 0x38) = fVar6;
      }
      FUN_00373500(DAT_001148f8,fVar6,fVar5,pcVar16 + 0x28);
      fVar25 = *(float *)(pcVar16 + 0x28);
      fVar22 = (float)FUN_00338f60((int)*(short *)(pcVar16 + 0x3c));
      fVar22 = fVar22 * fVar25 * fVar26;
      fVar27 = (float)FUN_002cfca0((int)*(short *)(pcVar16 + 0x3e));
      *(float *)(pcVar16 + 4) = *(float *)(pcVar16 + 4) + fVar22 * fVar27;
      fVar27 = (float)FUN_002cfca0((int)*(short *)(pcVar16 + 0x3c));
      *(float *)(pcVar16 + 8) = *(float *)(pcVar16 + 8) + fVar25 * fVar26 * fVar27;
      fVar25 = (float)FUN_00338f60((int)*(short *)(pcVar16 + 0x3e));
      *(float *)(pcVar16 + 0xc) = *(float *)(pcVar16 + 0xc) + fVar22 * fVar25;
      if (pcVar16[0x44] != '\0') {
        FUN_00373500(fVar6,fVar6,DAT_001148fc,pcVar16 + 0x34);
        FUN_00373500(DAT_00114904,fVar6,DAT_00114900,pcVar16 + 0x38);
        *(float *)(pcVar16 + 0x30) = *(float *)(pcVar16 + 0x30) + *(float *)(pcVar16 + 0x34);
        fVar25 = (float)FUN_00372674();
        *(float *)(pcVar16 + 0x2c) = fVar23 + fVar25 * *(float *)(pcVar16 + 0x38);
      }
    }
    sVar17 = sVar17 + 1;
    pcVar16 = pcVar16 + 0x48;
  } while (sVar17 < 0x3c);
  *(float *)(DAT_00114600 + 0x78) = fVar4;
  return;
}
