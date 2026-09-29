// OoT3D decomp @ 0014da40  name=FUN_0014da40  size=3080

int FUN_0014da40(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  undefined4 uVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c8;
  undefined2 *local_c4;
  undefined2 *local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;

  uVar25 = DAT_0014de68;
  iVar11 = *param_1;
  puVar5 = param_3;
  if (param_3 < (undefined2 *)(param_1[7] * param_1[8] * param_1[9] * 6 + (int)param_3)) {
    do {
      uVar1 = (undefined2)uVar25;
      *puVar5 = uVar1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar1;
      puVar5 = puVar5 + 3;
    } while (puVar5 < (undefined2 *)(param_1[7] * param_1[8] * param_1[9] * 6 + (int)param_3));
  }
  fVar4 = DAT_0014de74;
  fVar3 = DAT_0014de70;
  local_90 = (uint)*(ushort *)(iVar11 + 0xe);
  local_8c = *(int *)(iVar11 + 0x1c);
  iVar11 = *(int *)(iVar11 + 0x18);
  local_c8 = param_1[7] * param_1[8];
  fVar23 = (float)param_1[10] + DAT_0014de6c;
  fVar26 = (float)param_1[0xb] + DAT_0014de6c;
  local_94 = 0;
  fVar13 = (float)param_1[0xc] + DAT_0014de6c;
  if (local_90 != 0) {
    local_74 = local_c8 * 3;
    do {
      iVar12 = local_8c + (short)local_94 * 0x14;
      FUN_0036ac0c(&local_e0,iVar11 + (*(ushort *)(iVar12 + 2) & 0xffff1fff) * 6);
      FUN_0036df4c(&local_d4,&local_e0);
      for (puVar6 = (ushort *)(iVar12 + 4); puVar6 < (ushort *)(iVar12 + 8); puVar6 = puVar6 + 1) {
        psVar10 = (short *)(iVar11 + (*puVar6 & 0xffff1fff) * 6);
        fVar14 = (float)VectorSignedToFloat((int)*psVar10,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorSignedToFloat((int)psVar10[1],(byte)(in_fpscr >> 0x15) & 3);
        fVar22 = (float)VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = in_fpscr & 0xfffffff | (uint)(local_d4 < fVar14) << 0x1f |
                (uint)(local_d4 == fVar14) << 0x1e;
        bVar2 = (byte)(uVar7 >> 0x18);
        fVar15 = local_e0;
        fVar16 = fVar14;
        if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(local_d4) || NAN(fVar14))) &&
           (uVar7 = in_fpscr & 0xfffffff | (uint)(local_e0 < fVar14) << 0x1f |
                    (uint)(local_e0 == fVar14) << 0x1e, bVar2 = (byte)(uVar7 >> 0x18),
           fVar15 = fVar14, fVar16 = local_d4,
           !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(local_e0) || NAN(fVar14)))) {
          fVar15 = local_e0;
        }
        local_d4 = fVar16;
        local_e0 = fVar15;
        uVar8 = uVar7 & 0xfffffff | (uint)(local_d0 < fVar17) << 0x1f |
                (uint)(local_d0 == fVar17) << 0x1e;
        bVar2 = (byte)(uVar8 >> 0x18);
        fVar15 = local_dc;
        fVar16 = fVar17;
        if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(local_d0) || NAN(fVar17))) &&
           (uVar8 = uVar7 & 0xfffffff | (uint)(local_dc < fVar17) << 0x1f |
                    (uint)(local_dc == fVar17) << 0x1e, bVar2 = (byte)(uVar8 >> 0x18),
           fVar15 = fVar17, fVar16 = local_d0,
           !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(local_dc) || NAN(fVar17)))) {
          fVar15 = local_dc;
        }
        local_d0 = fVar16;
        local_dc = fVar15;
        uVar7 = uVar8 & 0xfffffff | (uint)(local_cc < fVar22) << 0x1f |
                (uint)(local_cc == fVar22) << 0x1e;
        in_fpscr = uVar7 | (uint)(NAN(local_cc) || NAN(fVar22)) << 0x1c;
        bVar2 = (byte)(uVar7 >> 0x18);
        fVar15 = local_d8;
        if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (uVar7 = uVar8 & 0xfffffff | (uint)(local_d8 < fVar22) << 0x1f |
                    (uint)(local_d8 == fVar22) << 0x1e,
           in_fpscr = uVar7 | (uint)(NAN(local_d8) || NAN(fVar22)) << 0x1c,
           bVar2 = (byte)(uVar7 >> 0x18), fVar15 = fVar22, fVar22 = local_cc,
           !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
          fVar15 = local_d8;
        }
        local_cc = fVar22;
        local_d8 = fVar15;
      }
      fVar16 = (float)*(undefined8 *)(param_1 + 1);
      fVar15 = local_d4 - fVar16;
      fVar14 = (float)param_1[3];
      fVar22 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
      fVar17 = local_d0 - fVar22;
      fVar29 = (float)param_1[0xd];
      fVar30 = local_cc - fVar14;
      local_a0 = (int)(fVar29 * fVar15);
      fVar31 = (float)param_1[0xe];
      local_a4 = (int)(fVar31 * fVar17);
      fVar32 = (float)param_1[0xf];
      iVar18 = (int)(fVar32 * fVar30);
      iVar24 = (int)(float)param_1[10];
      FUN_00368d94((int)fVar15,iVar24);
      if ((extraout_r1 < 0x32) && (0 < local_a0)) {
        local_a0 = local_a0 + -1;
      }
      iVar27 = (int)(float)param_1[0xb];
      FUN_00368d94((int)fVar17,iVar27);
      if ((extraout_r1_00 < 0x32) && (0 < local_a4)) {
        local_a4 = local_a4 + -1;
      }
      fVar15 = (float)param_1[0xc];
      iVar28 = (int)fVar15;
      FUN_00368d94((int)fVar30,iVar28);
      if ((extraout_r1_01 < 0x32) && (0 < iVar18)) {
        iVar18 = iVar18 + -1;
      }
      fVar16 = local_e0 - fVar16;
      fVar22 = local_dc - fVar22;
      fVar17 = local_d8 - fVar14;
      iVar19 = (int)(fVar29 * fVar16);
      iVar20 = (int)(fVar31 * fVar22);
      iVar21 = (int)(fVar32 * fVar17);
      FUN_00368d94((int)fVar16,iVar24);
      if ((iVar24 + -0x32 < extraout_r1_02) && (iVar19 < param_1[7] + -1)) {
        iVar19 = iVar19 + 1;
      }
      FUN_00368d94((int)fVar22,iVar27);
      if ((iVar27 + -0x32 < extraout_r1_03) && (iVar20 < param_1[8] + -1)) {
        iVar20 = iVar20 + 1;
      }
      FUN_00368d94((int)fVar17,iVar28);
      if ((iVar28 + -0x32 < extraout_r1_04) && (iVar21 < param_1[9] + -1)) {
        iVar21 = iVar21 + 1;
      }
      fVar16 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
      local_c0 = param_3 + iVar18 * local_c8 * 3;
      local_78 = iVar21 + 1;
      local_a8 = (fVar14 + fVar15 * fVar16) - fVar3;
      local_b4 = local_a8 + fVar13;
      local_9c = iVar18;
      if (iVar18 < local_78) {
        local_7c = local_a4 * 6;
        local_80 = local_a0 * 3;
        local_84 = iVar19 + 1;
        local_88 = iVar20 + 1;
        do {
          local_c4 = (undefined2 *)(param_1[7] * local_7c + (int)local_c0);
          fVar15 = (float)VectorSignedToFloat(local_a4,(byte)(in_fpscr >> 0x15) & 3);
          local_ac = ((float)param_1[2] + (float)param_1[0xb] * fVar15) - fVar3;
          local_b8 = local_ac + fVar26;
          local_98 = local_a4;
          if (local_a4 < local_88) {
            do {
              puVar5 = local_c4 + local_80;
              fVar15 = (float)VectorSignedToFloat(local_a0,(byte)(in_fpscr >> 0x15) & 3);
              local_b0 = ((float)param_1[1] + (float)param_1[10] * fVar15) - fVar3;
              local_bc = local_b0 + fVar23;
              iVar18 = local_a0;
              if (local_a0 < local_84) {
                do {
                  psVar10 = (short *)(iVar11 + (*(ushort *)(iVar12 + 2) & 0xffff1fff) * 6);
                  local_fc = VectorSignedToFloat((int)*psVar10,(byte)(in_fpscr >> 0x15) & 3);
                  local_f8 = VectorSignedToFloat((int)psVar10[1],(byte)(in_fpscr >> 0x15) & 3);
                  local_f4 = VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
                  uVar7 = FUN_00357194(&local_fc,&local_b0,&local_bc);
                  if (uVar7 == 0) {
LAB_0014e4f0:
                    iVar24 = (int)(short)local_94;
                    if (*(short *)(iVar12 + 0xc) < 0x4000) {
                      if (*(short *)(iVar12 + 0xc) < DAT_0014e658) {
                        FUN_003562c0(param_1,puVar5 + 2,local_8c,iVar11,iVar24);
                      }
                      else {
                        FUN_003562c0(param_1,puVar5 + 1,local_8c,iVar11,iVar24);
                      }
                    }
                    else {
                      FUN_003562c0(param_1,puVar5,local_8c,iVar11,iVar24);
                    }
                  }
                  else {
                    psVar10 = (short *)(iVar11 + (*(ushort *)(iVar12 + 4) & 0xffff1fff) * 6);
                    local_108 = VectorSignedToFloat((int)*psVar10,(byte)(in_fpscr >> 0x15) & 3);
                    local_104 = VectorSignedToFloat((int)psVar10[1],(byte)(in_fpscr >> 0x15) & 3);
                    local_100 = VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
                    uVar8 = FUN_00357194(&local_108,&local_b0,&local_bc);
                    if (uVar8 == 0) goto LAB_0014e4f0;
                    psVar10 = (short *)(iVar11 + (uint)*(ushort *)(iVar12 + 6) * 6);
                    local_114 = VectorSignedToFloat((int)*psVar10,(byte)(in_fpscr >> 0x15) & 3);
                    local_110 = VectorSignedToFloat((int)psVar10[1],(byte)(in_fpscr >> 0x15) & 3);
                    local_10c = VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
                    uVar9 = FUN_00357194(&local_114,&local_b0,&local_bc);
                    if (uVar9 == 0) goto LAB_0014e4f0;
                    if ((uVar7 & uVar8 & uVar9) == 0) {
                      iVar24 = FUN_0035708c(&local_fc,&local_b0,&local_bc);
                      uVar7 = uVar7 | iVar24 << 8;
                      iVar24 = FUN_0035708c(&local_108,&local_b0,&local_bc);
                      uVar8 = uVar8 | iVar24 << 8;
                      iVar24 = FUN_0035708c(&local_114,&local_b0,&local_bc);
                      uVar9 = uVar9 | iVar24 << 8;
                      if ((uVar7 & uVar8 & uVar9) == 0) {
                        iVar24 = FUN_00356fa4(&local_fc,&local_b0,&local_bc);
                        iVar27 = FUN_00356fa4(&local_108,&local_b0,&local_bc);
                        iVar28 = FUN_00356fa4(&local_114,&local_b0,&local_bc);
                        if (((uVar9 | iVar28 << 0x18) &
                            (uVar7 | iVar24 << 0x18) & (uVar8 | iVar27 << 0x18)) == 0) {
                          uVar25 = *(undefined4 *)(iVar12 + 0x10);
                          fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 10),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xc),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0xe),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          fVar15 = fVar15 * fVar4;
                          fVar16 = fVar16 * fVar4;
                          fVar22 = fVar22 * fVar4;
                          iVar24 = FUN_00356ebc(&local_fc,&local_108,&local_114,&local_cc);
                          if ((((((iVar24 == 0) &&
                                 (iVar24 = FUN_00356ebc(fVar15,fVar16,fVar22,uVar25,local_b4,
                                                        local_b0,local_ac,local_b8,&local_fc,
                                                        &local_108,&local_114,&local_cc),
                                 iVar24 == 0)) &&
                                (iVar24 = FUN_00356ebc(fVar15,fVar16,fVar22,uVar25,local_a8,local_bc
                                                       ,local_ac,local_b8,&local_fc,&local_108,
                                                       &local_114,&local_cc), iVar24 == 0)) &&
                               (((iVar24 = FUN_00356ebc(fVar15,fVar16,fVar22,uVar25,local_b4,
                                                        local_bc,local_ac,local_b8,&local_fc,
                                                        &local_108,&local_114,&local_cc),
                                 iVar24 == 0 &&
                                 (iVar24 = FUN_00356dc4(fVar15,fVar16,fVar22,uVar25,local_b0,
                                                        local_ac,local_a8,local_b4,&local_fc,
                                                        &local_108,&local_114,&local_cc),
                                 iVar24 == 0)) &&
                                ((iVar24 = FUN_00356dc4(fVar15,fVar16,fVar22,uVar25,local_b0,
                                                        local_b8,local_a8,local_b4,&local_fc,
                                                        &local_108,&local_114,&local_cc),
                                 iVar24 == 0 &&
                                 ((iVar24 = FUN_00356dc4(fVar15,fVar16,fVar22,uVar25,local_bc,
                                                         local_ac,local_a8,local_b4,&local_fc,
                                                         &local_108,&local_114,&local_cc),
                                  iVar24 == 0 &&
                                  (iVar24 = FUN_00356dc4(fVar15,fVar16,fVar22,uVar25,local_bc,
                                                         local_b8,local_a8,local_b4,&local_fc,
                                                         &local_108,&local_114,&local_cc),
                                  iVar24 == 0)))))))) &&
                              (iVar24 = FUN_00356cc8(fVar15,fVar16,fVar22,uVar25,local_ac,local_a8,
                                                     local_b0,local_bc,&local_fc,&local_108,
                                                     &local_114,&local_cc), iVar24 == 0)) &&
                             (((iVar24 = FUN_00356cc8(fVar15,fVar16,fVar22,uVar25,local_ac,local_b4,
                                                      local_b0,local_bc,&local_fc,&local_108,
                                                      &local_114,&local_cc), iVar24 == 0 &&
                               (iVar24 = FUN_00356cc8(fVar15,fVar16,fVar22,uVar25,local_b8,local_a8,
                                                      local_b0,local_bc,&local_fc,&local_108,
                                                      &local_114,&local_cc), iVar24 == 0)) &&
                              (iVar24 = FUN_00356cc8(fVar15,fVar16,fVar22,uVar25,local_b8,local_b4,
                                                     local_b0,local_bc,&local_fc,&local_108,
                                                     &local_114,&local_cc), iVar24 == 0)))) {
                            psVar10 = (short *)(iVar11 + (*(ushort *)(iVar12 + 2) & 0xffff1fff) * 6)
                            ;
                            local_d8 = (float)VectorSignedToFloat((int)*psVar10,
                                                                  (byte)(in_fpscr >> 0x15) & 3);
                            local_d4 = (float)VectorSignedToFloat((int)psVar10[1],
                                                                  (byte)(in_fpscr >> 0x15) & 3);
                            local_d0 = (float)VectorSignedToFloat((int)psVar10[2],
                                                                  (byte)(in_fpscr >> 0x15) & 3);
                            psVar10 = (short *)(iVar11 + (*(ushort *)(iVar12 + 4) & 0xffff1fff) * 6)
                            ;
                            local_e4 = VectorSignedToFloat((int)*psVar10,
                                                           (byte)(in_fpscr >> 0x15) & 3);
                            local_e0 = (float)VectorSignedToFloat((int)psVar10[1],
                                                                  (byte)(in_fpscr >> 0x15) & 3);
                            local_dc = (float)VectorSignedToFloat((int)psVar10[2],
                                                                  (byte)(in_fpscr >> 0x15) & 3);
                            psVar10 = (short *)(iVar11 + (uint)*(ushort *)(iVar12 + 6) * 6);
                            local_f0 = VectorSignedToFloat((int)*psVar10,
                                                           (byte)(in_fpscr >> 0x15) & 3);
                            local_ec = VectorSignedToFloat((int)psVar10[1],
                                                           (byte)(in_fpscr >> 0x15) & 3);
                            local_e8 = VectorSignedToFloat((int)psVar10[2],
                                                           (byte)(in_fpscr >> 0x15) & 3);
                            iVar24 = FUN_003564a4(&local_b0,&local_bc,&local_d8,&local_e4);
                            if (((iVar24 == 0) &&
                                (iVar24 = FUN_003564a4(&local_b0,&local_bc,&local_e4,&local_f0),
                                iVar24 == 0)) &&
                               (iVar24 = FUN_003564a4(&local_b0,&local_bc,&local_f0,&local_d8),
                               iVar24 == 0)) goto LAB_0014e564;
                          }
                          goto LAB_0014e4f0;
                        }
                      }
                    }
                  }
LAB_0014e564:
                  iVar18 = iVar18 + 1;
                  puVar5 = puVar5 + 3;
                  local_b0 = local_b0 + (float)param_1[10];
                  local_bc = local_bc + (float)param_1[10];
                } while (iVar18 < local_84);
              }
              local_ac = local_ac + (float)param_1[0xb];
              local_b8 = local_b8 + (float)param_1[0xb];
              local_98 = local_98 + 1;
              local_c4 = local_c4 + param_1[7] * 3;
            } while (local_98 < local_88);
          }
          local_a8 = local_a8 + (float)param_1[0xc];
          local_b4 = local_b4 + (float)param_1[0xc];
          local_c0 = local_c0 + local_74;
          local_9c = local_9c + 1;
        } while (local_9c < local_78);
      }
      local_94 = local_94 + 1;
    } while (local_94 < (int)local_90);
  }
  return (uint)*(ushort *)((int)param_1 + 0x46) << 2;
}
