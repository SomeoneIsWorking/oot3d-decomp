// OoT3D decomp @ 0047b124  name=FUN_0047b124  size=2952

void FUN_0047b124(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  bool bVar18;
  uint in_fpscr;
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
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined1 auStack_188 [12];
  float local_17c;
  float local_178 [3];
  int local_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 uStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 uStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 *local_98;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float *local_68;

  iVar16 = *(int *)(param_1 + 0x3c);
  *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0xad) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xad) = 0;
  iVar6 = 0;
  do {
    iVar8 = param_1 + iVar6 * 4;
    iVar6 = iVar6 + 2;
    *(undefined1 *)(*(int *)(iVar8 + 0xb4) + 0xad) = 0;
    *(undefined1 *)(*(int *)(iVar8 + 0xb8) + 0xad) = 0;
  } while (iVar6 < 0xc);
  if (((*DAT_0047b538 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0047b538), iVar6 != 0)) {
    FUN_0036788c(DAT_0047b53c);
  }
  local_6c = DAT_0047b548;
  iVar6 = 0;
  do {
    iVar8 = param_1 + iVar6 * 4;
    iVar6 = iVar6 + 2;
    *(undefined1 *)(*(int *)(iVar8 + 0xe8) + 0xad) = 0;
    *(undefined1 *)(*(int *)(iVar8 + 0xec) + 0xad) = 0;
    fVar27 = DAT_0047b54c;
  } while (iVar6 < 0xc);
  iVar8 = FUN_003695f8();
  iVar6 = DAT_0047b558;
  fVar32 = DAT_0047b554;
  fVar29 = DAT_0047b550;
  if (iVar8 != 0) {
    fVar27 = DAT_0047b550;
  }
  if (*(short *)(param_1 + 0x4c) != 0) {
    local_94 = *(int *)(param_2 + 0x20ac);
    iVar8 = 0xff;
    local_9c = 3;
    if (iVar16 == 0) {
      sVar2 = *(short *)(param_1 + 0x4c) + -0x78;
      *(short *)(param_1 + 0x4c) = sVar2;
      if (sVar2 < 0) {
        *(undefined2 *)(param_1 + 0x4c) = 0;
      }
      iVar8 = (int)*(short *)(param_1 + 0x4c);
      fVar34 = fVar32 - (*(float *)(iVar6 + 4) - *(float *)(param_1 + 0x44)) /
                        (*(float *)(iVar6 + 4) - *(float *)(iVar6 + 0xc));
    }
    else {
      puVar9 = (undefined4 *)(iVar16 + 0x3c);
      uVar12 = *(undefined4 *)(iVar16 + 0x40);
      uVar13 = *(undefined4 *)(iVar16 + 0x44);
      *(undefined4 *)(param_1 + 0xc) = *puVar9;
      *(undefined4 *)(param_1 + 0x10) = uVar12;
      *(undefined4 *)(param_1 + 0x14) = uVar13;
      fVar34 = fVar32 - (*(float *)(iVar6 + 4) - *(float *)(param_1 + 0x44)) /
                        (*(float *)(iVar6 + 4) - *(float *)(iVar6 + 0xc));
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar16 + 0x1a0);
      iVar10 = DAT_0047b55c;
      bVar18 = *(int *)(param_1 + 0x120) != 0;
      puVar7 = (undefined4 *)0x0;
      if (bVar18) {
        puVar7 = (undefined4 *)(uint)*(byte *)(param_1 + 0x4e);
      }
      if ((bVar18 && puVar7 != (undefined4 *)0xff) && puVar7 != (undefined4 *)0x2) {
        puVar9 = *(undefined4 **)(param_1 + 0x124);
      }
      if (((bVar18 && puVar7 != (undefined4 *)0xff) && puVar7 != (undefined4 *)0x2) &&
          puVar9 != puVar7) {
        iVar14 = 0;
        do {
          iVar15 = param_1 + iVar14 * 4;
          uVar13 = *(undefined4 *)(*(int *)(iVar15 + 0xb4) + 0xc);
          uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x120),
                                *(int *)(iVar10 + (uint)*(byte *)(param_1 + 0x4e) * 4) + 4);
          FUN_00372d94(uVar13,uVar12);
          uVar13 = *(undefined4 *)(*(int *)(iVar15 + 0xe8) + 0xc);
          uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x120),
                                *(int *)(iVar10 + (uint)*(byte *)(param_1 + 0x4e) * 4) + 4);
          FUN_00372d94(uVar13,uVar12);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 0xc);
        *(uint *)(param_1 + 0x124) = (uint)*(byte *)(param_1 + 0x4e);
      }
    }
    iVar10 = DAT_0047b560;
    cVar1 = *(char *)(param_1 + 0x58) + -1;
    *(char *)(param_1 + 0x58) = cVar1;
    if (cVar1 < '\0') {
      *(undefined1 *)(param_1 + 0x58) = 2;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x10);
    uVar31 = *(undefined4 *)(param_1 + 0x14);
    uVar12 = *(undefined4 *)(param_1 + 0x44);
    iVar14 = param_1 + *(char *)(param_1 + 0x58) * 0x18;
    *(undefined4 *)(iVar14 + 0x5c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar14 + 0x60) = uVar13;
    *(undefined4 *)(iVar14 + 100) = uVar31;
    *(float *)(iVar14 + 0x70) = fVar34;
    *(undefined4 *)(iVar14 + 0x68) = uVar12;
    local_a8 = 1;
    iVar14 = *(char *)(param_1 + 0x58) + 1;
    iVar11 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar14) >> 0x20);
    iVar15 = *(char *)(param_1 + 0x58) + 2;
    iVar10 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar15) >> 0x20);
    iVar10 = param_1 + (iVar15 + (iVar10 - (iVar10 >> 0x1f)) * -3) * 0x18;
    if (*(char *)(param_1 + 0x59) == '\0') {
      local_9c = 1;
    }
    else {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(iVar6 + 0x40) <= *(float *)(iVar10 + 0x68)) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar19 = *(float *)(iVar6 + 0x48);
        uVar12 = *(undefined4 *)(param_1 + 0x10);
        uVar13 = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(iVar10 + 0x5c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(iVar10 + 0x60) = uVar12;
        *(undefined4 *)(iVar10 + 100) = uVar13;
        *(float *)(iVar10 + 0x70) = *(float *)(iVar10 + 0x70) * fVar19;
        *(float *)(iVar10 + 0x68) = *(float *)(iVar10 + 0x68) * fVar19;
      }
      fVar19 = *(float *)(iVar10 + 0x70);
      fVar30 = *(float *)(iVar6 + 0x44);
      fVar33 = *(float *)(param_1 + 0x44);
      uVar12 = *(undefined4 *)(param_1 + 0x10);
      uVar13 = *(undefined4 *)(param_1 + 0x14);
      fVar28 = *(float *)(iVar10 + 0x68);
      iVar6 = param_1 + ((iVar11 - (iVar11 >> 0x1f)) * -3 + iVar14) * 0x18;
      *(undefined4 *)(iVar6 + 0x5c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(iVar6 + 0x60) = uVar12;
      *(undefined4 *)(iVar6 + 100) = uVar13;
      *(float *)(iVar6 + 0x70) = fVar19 + (fVar34 - fVar19) * fVar30;
      *(float *)(iVar6 + 0x68) = fVar28 + (fVar33 - fVar28) * fVar30;
      *(char *)(param_1 + 0x59) = *(char *)(param_1 + 0x59) + -1;
      local_a8 = 0;
    }
    fVar30 = DAT_0047b570;
    fVar28 = DAT_0047b56c;
    fVar19 = DAT_0047b568;
    fVar34 = DAT_0047b564;
    if (((*(uint *)(local_94 + 0x1710) & 0x40) == 0) || (*(int *)(local_94 + 0x16f8) != iVar16)) {
      local_a0 = 0;
      iVar6 = (int)((ulonglong)((longlong)DAT_0047b560 * (longlong)(int)*(char *)(param_1 + 0x58))
                   >> 0x20);
      local_a4 = (int)*(char *)(param_1 + 0x58) + (iVar6 - (iVar6 >> 0x1f)) * -3;
      if (0 < local_9c) {
        do {
          iVar6 = param_1 + local_a4 * 0x18;
          local_98 = (undefined4 *)(iVar6 + 0x5c);
          fVar33 = *(float *)(iVar6 + 0x68);
          uVar3 = in_fpscr & 0xfffffff;
          in_fpscr = uVar3 | (uint)(*(float *)(DAT_0047b558 + 4) <= fVar33) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar20 = *(float *)(DAT_0047b558 + 0xc);
            in_fpscr = uVar3 | (uint)(fVar33 == fVar20) << 0x1e | (uint)(fVar20 <= fVar33) << 0x1d;
            bVar4 = (byte)(in_fpscr >> 0x18);
            if ((bool)(bVar4 >> 5 & 1) && !(bool)(bVar4 >> 6)) {
              fVar20 = *(float *)(iVar6 + 0x70) * *(float *)(DAT_0047b558 + 0x14);
              fVar33 = fVar20 * fVar34;
            }
            else {
              fVar20 = ((fVar20 - fVar33) / (fVar20 - *(float *)(DAT_0047b558 + 8))) *
                       *(float *)(DAT_0047b558 + 0x10);
              fVar33 = fVar20;
            }
            fVar21 = *(float *)(param_1 + 300);
            local_bc = *(undefined4 *)(iVar6 + 0x60);
            local_cc = *local_98;
            local_ac = *(undefined4 *)(iVar6 + 100);
            local_d8 = 1.0;
            local_c8 = 0.0;
            local_c4 = 1.0;
            local_d4 = 0.0;
            local_d0 = 0.0;
            local_c0 = 0.0;
            local_b8 = 0.0;
            local_b4 = 0.0;
            fStack_b0 = 1.0;
            local_78 = local_cc;
            local_74 = local_bc;
            local_70 = local_ac;
            FUN_0036c174(&local_d8,&local_d8,param_2 + 0x2fc);
            if (local_a8 != 0) {
              if (*(char *)(param_1 + 0x51) == '\0') {
                *(undefined1 *)(param_1 + 0x51) = 3;
              }
              fVar22 = (float)VectorUnsignedToFloat
                                        (*(byte *)(param_1 + 0x51) & 0x7f,
                                         (byte)(in_fpscr >> 0x15) & 3);
              fVar22 = fVar22 * fVar19;
              in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar29) << 0x1e;
              if (!SUB41(in_fpscr >> 0x1e,0)) {
                fVar23 = (float)FUN_003727f0(fVar22);
                fVar24 = (float)FUN_00372674(fVar22);
                fVar22 = local_d4 * fVar23;
                local_d4 = local_d4 * fVar24 - local_d8 * fVar23;
                fVar26 = local_c4 * fVar23;
                local_c4 = local_c4 * fVar24 - local_c8 * fVar23;
                fVar25 = local_b4 * fVar23;
                local_b4 = local_b4 * fVar24 - local_b8 * fVar23;
                local_d8 = local_d8 * fVar24 + fVar22;
                local_c8 = local_c8 * fVar24 + fVar26;
                local_b8 = local_b8 * fVar24 + fVar25;
              }
            }
            local_16c = 0;
            pfVar17 = local_178 + local_a0;
            local_68 = local_178 + local_a0;
            do {
              iVar6 = local_16c + local_a0 * 4;
              local_108 = local_d8;
              local_104 = local_d4;
              local_100 = local_d0;
              uStack_fc = local_cc;
              local_f8 = local_c8;
              local_f4 = local_c4;
              local_f0 = local_c0;
              local_ec = local_bc;
              local_e8 = local_b8;
              local_e4 = local_b4;
              local_e0 = fStack_b0;
              uStack_dc = local_ac;
              fVar25 = (float)VectorSignedToFloat(local_16c,(byte)(in_fpscr >> 0x15) & 3);
              fVar25 = fVar25 * fVar28;
              in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar25 == fVar29) << 0x1e;
              fVar22 = fVar32;
              fVar26 = fVar29;
              if (!SUB41(in_fpscr >> 0x1e,0)) {
                fVar26 = (float)FUN_003727f0(fVar25);
                fVar22 = (float)FUN_00372674(fVar25);
              }
              iVar16 = DAT_0047b558;
              fStack_164 = -fVar26;
              local_130 = fVar29;
              local_12c = fVar29;
              local_120 = fVar29;
              local_11c = fVar29;
              local_118 = fVar29;
              local_114 = fVar29;
              local_110 = fVar32;
              local_10c = fVar29;
              fStack_160 = fVar29;
              local_15c = fVar29;
              fStack_150 = fVar29;
              local_14c = fVar29;
              fStack_148 = fVar29;
              fStack_144 = fVar29;
              fStack_140 = fVar32;
              fStack_13c = fVar29;
              local_84 = *(undefined4 *)(DAT_0047b558 + 0x2c);
              local_7c = fVar29;
              local_168 = fVar22;
              fStack_158 = fVar26;
              fStack_154 = fVar22;
              local_138 = fVar22;
              local_134 = fStack_164;
              local_128 = fVar26;
              local_124 = fVar22;
              local_80 = local_84;
              FUN_00372070(&local_168,&local_168,&local_84);
              local_90 = local_15c * fVar21 * (fVar33 + fVar32);
              local_8c = local_14c * fVar21 * (fVar20 + fVar32);
              local_88 = *(float *)(iVar16 + 0x34) + (float)local_98[5] * *(float *)(iVar16 + 0x30);
              FUN_00372070(&local_108,&local_108,&local_90);
              FUN_0036c174(&local_108,&local_108,&local_138);
              iVar6 = param_1 + iVar6 * 4;
              fVar22 = *(float *)(param_1 + 300) * *(float *)(iVar16 + 0x50);
              if ((int)fVar22 < 0x3f800000) {
                fVar22 = fVar32;
              }
              fVar22 = *(float *)(DAT_0047b558 + 0x38) * fVar22;
              local_108 = local_108 * fVar22;
              local_f8 = local_f8 * fVar22;
              local_e8 = local_e8 * fVar22;
              local_104 = local_104 * fVar22;
              local_f4 = local_f4 * fVar22;
              local_e4 = local_e4 * fVar22;
              local_100 = local_100 * fVar22;
              local_f0 = local_f0 * fVar22;
              local_e0 = local_e0 * fVar22;
              *(undefined1 *)(*(int *)(iVar6 + 0xb4) + 0xac) = 1;
              FUN_003721e0(*(undefined4 *)(iVar6 + 0xb4),&local_108);
              *(undefined1 *)(*(int *)(iVar6 + 0xb4) + 0xad) = 1;
              *(undefined1 *)(*(int *)(iVar6 + 0xe8) + 0xac) = 1;
              FUN_003721e0(*(undefined4 *)(iVar6 + 0xe8),&local_108);
              iVar16 = 0;
              *(undefined1 *)(*(int *)(iVar6 + 0xe8) + 0xad) = 1;
              if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x11c) + 8) + 8)) {
                do {
                  local_178[0] = *DAT_0047bce8;
                  local_178[1] = DAT_0047bce8[1];
                  local_178[2] = DAT_0047bce8[2];
                  iVar14 = *(int *)(*(int *)(iVar6 + 0xb4) + 0x10);
                  FUN_00333abc(iVar14,iVar16,auStack_188);
                  fVar22 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
                  local_17c = *pfVar17 * fVar22 * fVar30;
                  FUN_00333a38(iVar14,iVar16,auStack_188);
                  iVar10 = iVar16 + 1;
                  *(undefined1 *)(*(int *)(iVar14 + 4) + iVar16 * 0x124) = 1;
                  iVar16 = iVar10;
                } while (iVar10 < *(int *)(**(int **)(*(int *)(param_1 + 0x11c) + 8) + 8));
              }
              iVar16 = 0;
              if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x11c) + 8) + 8)) {
                do {
                  local_178[0] = *DAT_0047bcec;
                  local_178[1] = DAT_0047bcec[1];
                  local_178[2] = DAT_0047bcec[2];
                  iVar14 = *(int *)(*(int *)(iVar6 + 0xe8) + 0x10);
                  FUN_00333abc(iVar14,iVar16,auStack_188);
                  fVar22 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
                  local_17c = *local_68 * fVar22 * fVar30;
                  FUN_00333a38(iVar14,iVar16,auStack_188);
                  puVar7 = DAT_0047bcf0;
                  *(undefined1 *)(*(int *)(iVar14 + 4) + iVar16 * 0x124) = 1;
                  local_198 = *puVar7;
                  uStack_194 = puVar7[1];
                  uStack_190 = puVar7[2];
                  local_18c = *(undefined4 *)(DAT_0047b558 + 0x4c);
                  FUN_003688a8(iVar14,iVar16,1,&local_198);
                  iVar10 = iVar16 * 0x124;
                  iVar16 = iVar16 + 1;
                  *(undefined1 *)(*(int *)(iVar14 + 4) + iVar10 + 0xb) = 1;
                } while (iVar16 < *(int *)(**(int **)(*(int *)(param_1 + 0x11c) + 8) + 8));
              }
              *(float *)(*(int *)(*(int *)(iVar6 + 0xb4) + 0xc) + 0xc) = fVar27;
              *(float *)(*(int *)(*(int *)(iVar6 + 0xe8) + 0xc) + 0xc) = fVar27;
              FUN_002cf5ec(local_6c,*(undefined4 *)(iVar6 + 0xb4),0);
              FUN_002cf5ec(local_6c,*(undefined4 *)(iVar6 + 0xe8),0);
              local_16c = local_16c + 1;
            } while (local_16c < 4);
          }
          local_a0 = local_a0 + 1;
          iVar6 = (int)((ulonglong)((longlong)DAT_0047b560 * (longlong)(local_a4 + 1)) >> 0x20);
          local_a4 = local_a4 + 1 + (iVar6 - (iVar6 >> 0x1f)) * -3;
        } while (local_a0 < local_9c);
      }
    }
  }
  iVar6 = DAT_0047b55c;
  iVar16 = *(int *)(param_1 + 0xac);
  if ((iVar16 != 0) && ((*(uint *)(iVar16 + 4) & 0x8000000) == 0)) {
    if (*(uint *)(param_1 + 0x128) != (uint)*(byte *)(iVar16 + 2)) {
      uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x120),
                            *(undefined4 *)(DAT_0047b55c + (uint)*(byte *)(iVar16 + 2) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xc),uVar12);
      uVar12 = FUN_00372f0c(*(undefined4 *)(param_1 + 0x120),
                            *(undefined4 *)(iVar6 + (uint)*(byte *)(iVar16 + 2) * 4));
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc),uVar12);
      *(uint *)(param_1 + 0x128) = (uint)*(byte *)(iVar16 + 2);
    }
    FUN_003713fc(*(undefined4 *)(iVar16 + 0x3c),
                 DAT_0047bcf4 + *(float *)(iVar16 + 0x50) * *(float *)(iVar16 + 0x58) +
                 *(float *)(iVar16 + 0x40),*(undefined4 *)(iVar16 + 0x44),&local_c0,0);
    fVar27 = (float)VectorUnsignedToFloat
                              (DAT_0047bcfc & *(int *)(param_2 + 0x5bf4) * DAT_0047bcf8 * 8,
                               (byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar27 * DAT_0047bd00,&local_c0,1);
    iVar6 = *DAT_0047bd04;
    fVar27 = (float)VectorSignedToFloat(*(short *)(iVar6 + 0xd0e) + 0x32,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar32 = (float)VectorSignedToFloat(*(short *)(iVar6 + 0xd0a) + 0x23,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar29 = (float)VectorSignedToFloat(*(short *)(iVar6 + 0xd0c) + 0x3c,
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371348(fVar32 * DAT_0047bd08,fVar29 * DAT_0047bd08,fVar27 * DAT_0047bd08,&local_c0,1);
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0xb0),&local_c0);
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0xad) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0xe4),&local_c0);
    *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0xad) = 1;
    puVar5 = DAT_0047b538;
    uVar12 = extraout_r1;
    if ((*DAT_0047b538 & 1) == 0) {
      uVar35 = FUN_003679b4(DAT_0047b538);
      uVar12 = (int)((ulonglong)uVar35 >> 0x20);
      if ((int)uVar35 != 0) {
        FUN_0036788c(DAT_0047b53c);
        uVar12 = DAT_0047b544;
      }
    }
    iVar6 = DAT_0047bd0c;
    FUN_0032d5dc(DAT_0047bd0c,uVar12);
    FUN_00372170(*(undefined4 *)(param_1 + 0xb0),0);
    FUN_00372170(*(undefined4 *)(param_1 + 0xe4),0);
    uVar12 = extraout_r1_00;
    if ((*puVar5 & 1) == 0) {
      uVar35 = FUN_003679b4(DAT_0047b538);
      uVar12 = (int)((ulonglong)uVar35 >> 0x20);
      if ((int)uVar35 != 0) {
        FUN_0036788c(iVar6 + -0x180);
        uVar12 = DAT_0047b544;
      }
    }
    FUN_0032d5b8(iVar6,uVar12);
  }
  return;
}
