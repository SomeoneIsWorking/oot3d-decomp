// OoT3D decomp @ 003d2cc8  name=FUN_003d2cc8  size=2340

void FUN_003d2cc8(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint in_fpscr;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 uStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 uStack_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 uStack_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;

  FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),&local_a8,0);
  fVar5 = DAT_003d30e0;
  fVar4 = DAT_003d30dc;
  fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar21 * DAT_003d30dc * DAT_003d30e0,&local_a8,1);
  fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00369014(fVar21 * fVar4 * fVar5,&local_a8,1);
  fVar21 = DAT_003d30f0;
  iVar15 = DAT_003d30e4;
  *(undefined4 *)(DAT_003d30e4 + 0x24) = 1;
  *(undefined4 *)(iVar15 + 0x28) = DAT_003d30e8;
  *(undefined4 *)(iVar15 + 0x2c) = DAT_003d30ec;
  local_10c = 2.10195e-43;
  local_108 = 2.10195e-43;
  local_104 = 2.10195e-43;
  local_118 = (undefined1 *)0xff;
  local_114 = 0xff;
  local_110 = (float)(int)(short)(int)(*(float *)(param_1 + 0x1fc) * fVar21);
  FUN_0035619c(param_2,auStack_b8,auStack_c8);
  local_70 = param_1 + 0x2000;
  FUN_00342988(*(undefined4 *)(param_1 + 0x2fe0),auStack_c8,0xffffffff);
  fVar14 = DAT_003d3118;
  fVar13 = DAT_003d3114;
  fVar12 = DAT_003d3110;
  fVar11 = DAT_003d310c;
  fVar10 = DAT_003d3108;
  fVar9 = DAT_003d3104;
  fVar8 = DAT_003d3100;
  fVar7 = DAT_003d30fc;
  fVar6 = DAT_003d30f8;
  fVar21 = DAT_003d30f4;
  local_74 = param_1 + 0xc00;
  local_78 = param_1 + 0x1074;
  uVar17 = 0;
  do {
    bVar3 = true;
    if ((int)uVar17 < 2) {
      local_104 = local_a8;
      local_100 = local_a4;
      local_fc = local_a0;
      local_f4 = local_98;
      local_f0 = local_94;
      local_ec = local_90;
      local_e4 = local_88;
      local_e0 = local_84;
      local_dc = local_80;
      local_a8 = fVar14;
      local_98 = fVar14;
      local_88 = fVar14;
      local_a4 = fVar14;
      local_94 = fVar14;
      local_84 = fVar14;
      local_a0 = fVar14;
      local_90 = fVar14;
      local_80 = fVar14;
    }
    else {
      if (2 < (int)uVar17) {
        local_d0 = *(undefined4 *)(param_1 + uVar17 * 0xc + 0x6ec);
        local_d4 = fVar14;
        local_cc = fVar14;
        FUN_00372070(&local_a8,&local_a8,&local_d4);
        iVar15 = param_1 + uVar17 * 6;
        fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0xcb8),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar27 = fVar27 * fVar4 * fVar5;
        uVar20 = in_fpscr & 0xfffffff | (uint)(fVar27 == fVar14) << 0x1e;
        if (!SUB41(uVar20 >> 0x1e,0)) {
          fVar23 = (float)FUN_003727f0(fVar27);
          fVar24 = (float)FUN_00372674(fVar27);
          fVar27 = local_a0 * fVar23;
          local_a0 = local_a0 * fVar24 - local_a4 * fVar23;
          fVar22 = local_90 * fVar23;
          local_90 = local_90 * fVar24 - local_94 * fVar23;
          fVar25 = local_80 * fVar23;
          local_80 = local_80 * fVar24 - local_84 * fVar23;
          local_a4 = local_a4 * fVar24 + fVar27;
          local_94 = local_94 * fVar24 + fVar22;
          local_84 = local_84 * fVar24 + fVar25;
        }
        fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0xcbc),
                                            (byte)(uVar20 >> 0x15) & 3);
        fVar27 = fVar27 * fVar4 * fVar5;
        in_fpscr = uVar20 & 0xfffffff | (uint)(fVar27 == fVar14) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar23 = (float)FUN_003727f0(fVar27);
          fVar24 = (float)FUN_00372674(fVar27);
          fVar27 = local_a4 * fVar23;
          local_a4 = local_a4 * fVar24 - local_a8 * fVar23;
          fVar22 = local_94 * fVar23;
          local_94 = local_94 * fVar24 - local_98 * fVar23;
          fVar25 = local_84 * fVar23;
          local_84 = local_84 * fVar24 - local_88 * fVar23;
          local_a8 = local_a8 * fVar24 + fVar27;
          local_98 = local_98 * fVar24 + fVar22;
          local_88 = local_88 * fVar24 + fVar25;
        }
      }
      local_104 = local_a8;
      local_100 = local_a4;
      local_fc = local_a0;
      local_f4 = local_98;
      local_f0 = local_94;
      local_ec = local_90;
      local_e4 = local_88;
      local_e0 = local_84;
      local_dc = local_80;
      iVar15 = param_1 + uVar17 * 0xc;
      fVar27 = (*(float *)(iVar15 + 0x8d4) + *(float *)(iVar15 + 0xac0)) *
               *(float *)(param_1 + 0x54);
      fVar22 = (*(float *)(iVar15 + 0x8d8) + *(float *)(iVar15 + 0xac4)) *
               *(float *)(param_1 + 0x58);
      fVar25 = (*(float *)(iVar15 + 0x8dc) + *(float *)(iVar15 + 0xac8)) *
               *(float *)(param_1 + 0x5c);
      local_a8 = local_a8 * fVar27;
      local_98 = local_98 * fVar27;
      local_88 = local_88 * fVar27;
      local_a4 = local_a4 * fVar22;
      local_94 = local_94 * fVar22;
      local_84 = local_84 * fVar22;
      local_a0 = local_a0 * fVar25;
      local_90 = local_90 * fVar25;
      local_80 = local_80 * fVar25;
      if (((int)*(short *)(param_1 + 0x1ca) <= (int)uVar17) &&
         ((int)uVar17 <= (int)*(short *)(param_1 + 0x1cc))) {
        fVar27 = *(float *)(param_1 + 0x200);
        local_a8 = local_a8 * fVar27;
        local_98 = local_98 * fVar27;
        local_88 = local_88 * fVar27;
        local_a4 = local_a4 * fVar27;
        local_94 = local_94 * fVar27;
        local_84 = local_84 * fVar27;
        local_a0 = local_a0 * fVar27;
        local_90 = local_90 * fVar27;
        bVar3 = false;
        local_80 = local_80 * fVar27;
      }
    }
    iVar15 = (int)*(short *)(param_1 + 0x1c2) + uVar17 * -2 + 300;
    lVar2 = (longlong)DAT_003d35c8 * (longlong)iVar15;
    uStack_f8 = uStack_9c;
    local_e8 = local_8c;
    uStack_d8 = uStack_7c;
    if (*(short *)(param_1 + 0x1b0) < 200) {
      fVar27 = ((*(float *)(param_1 + (short)((short)iVar15 +
                                             ((short)(int)(lVar2 >> 0x25) - (short)(lVar2 >> 0x3f))
                                             * -300) * 4 + 0x250) - fVar12) -
               *(float *)(local_74 + 0x1c4)) * *(float *)(param_1 + 0x1f8) * fVar12;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar27 == fVar14) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar22 = (float)FUN_003727f0(fVar27);
        fVar27 = (float)FUN_00372674(fVar27);
        fVar25 = local_a8 * fVar22;
        local_a8 = local_a8 * fVar27 - local_a0 * fVar22;
        local_a0 = fVar25 + local_a0 * fVar27;
        fVar25 = local_98 * fVar22;
        local_98 = local_98 * fVar27 - local_90 * fVar22;
        local_90 = fVar25 + local_90 * fVar27;
        fVar25 = local_88 * fVar22;
        local_88 = local_88 * fVar27 - local_80 * fVar22;
        local_80 = fVar25 + local_80 * fVar27;
      }
    }
    iVar15 = param_1 + uVar17 * 0x30;
    *(float *)(iVar15 + 0x280c) = local_a8;
    *(float *)(iVar15 + 0x2810) = local_a4;
    *(float *)(iVar15 + 0x2814) = local_a0;
    *(undefined4 *)(iVar15 + 0x2818) = uStack_9c;
    *(float *)(iVar15 + 0x281c) = local_98;
    *(float *)(iVar15 + 0x2820) = local_94;
    *(float *)(iVar15 + 0x2824) = local_90;
    *(undefined4 *)(iVar15 + 0x2828) = local_8c;
    *(float *)(iVar15 + 0x282c) = local_88;
    *(float *)(iVar15 + 0x2830) = local_84;
    *(float *)(iVar15 + 0x2834) = local_80;
    *(undefined4 *)(iVar15 + 0x2838) = uStack_7c;
    local_a8 = local_104;
    local_a4 = local_100;
    local_a0 = local_fc;
    uStack_9c = uStack_f8;
    local_98 = local_f4;
    local_94 = local_f0;
    local_90 = local_ec;
    local_8c = local_e8;
    local_88 = local_e4;
    local_84 = local_e0;
    local_80 = local_dc;
    uStack_7c = uStack_d8;
    if (1 < (int)uVar17) {
      fVar27 = local_ec;
      if (bVar3) {
        fVar27 = (float)(*(short *)(param_1 + 0x1d2) + 0x26);
      }
      if (bVar3 && (int)uVar17 < (int)fVar27) {
        if (*(short *)(param_1 + 0x1b0) == 0xc9 || *(short *)(param_1 + 0x1b0) == 0xca) {
          fVar27 = (float)VectorUnsignedToFloat
                                    (*(ushort *)(param_1 + 0x1b2) & 3,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = (float)FUN_003655ec();
          fVar22 = (fVar7 + fVar22 * fVar6) * DAT_003d35cc * *(float *)(param_1 + 0x54);
          fVar27 = fVar27 * fVar21;
        }
        else {
          fVar27 = (float)FUN_003655ec();
          fVar22 = (fVar8 + fVar27 * fVar8) * DAT_003d35cc * *(float *)(param_1 + 0x54);
          fVar27 = fVar14;
        }
        local_104 = local_a8;
        local_100 = local_a4;
        local_fc = local_a0;
        uStack_f8 = uStack_9c;
        local_f4 = local_98;
        local_f0 = local_94;
        local_ec = local_90;
        fVar22 = fVar22 * fVar13;
        local_e8 = local_8c;
        local_e4 = local_88;
        local_e0 = local_84;
        local_dc = local_80;
        uStack_d8 = uStack_7c;
        fVar25 = (float)FUN_003655ec();
        iVar15 = param_1 + uVar17 * 0xc;
        fVar26 = *(float *)(iVar15 + 0x8d4);
        fVar23 = (float)FUN_003655ec();
        fVar24 = (float)FUN_003655ec();
        local_108 = (fVar24 - fVar9) * fVar10 * *(float *)(iVar15 + 0x8dc);
        local_110 = (fVar25 - fVar9) * fVar10 * fVar26;
        local_10c = fVar27 + (fVar23 - fVar9) * fVar11;
        FUN_00372070(&local_104,&local_104,&local_110);
        FUN_00371fac(&local_104,param_2 + 0x2fc);
        local_118 = auStack_b8;
        local_104 = local_104 * fVar22;
        local_f4 = local_f4 * fVar22;
        local_e4 = local_e4 * fVar22;
        local_100 = local_100 * fVar22;
        local_f0 = local_f0 * fVar22;
        local_e0 = local_e0 * fVar22;
        local_114 = 0;
        FUN_003693b4(*(undefined4 *)(local_70 + 0xfe0),0,&local_104);
      }
    }
    iVar15 = param_1 + uVar17 * 0xc;
    FUN_003735ac((undefined4 *)(iVar15 + 0xdc8),&local_a8,DAT_003d35d0);
    if (uVar17 == 0x24) {
      FUN_003735ac(param_1 + 0x3c,&local_a8,DAT_003d35d0);
LAB_003d353c:
      if ((uVar17 & 1) != 0) {
        iVar1 = (int)uVar17 / 2;
        puVar18 = (undefined4 *)(*(int *)(local_78 + 0x1c) + iVar1 * 0x50 + 0x38);
        uVar16 = *(undefined4 *)(iVar15 + 0xdcc);
        uVar19 = *(undefined4 *)(iVar15 + 0xdd0);
        *puVar18 = *(undefined4 *)(iVar15 + 0xdc8);
        puVar18[1] = uVar16;
        puVar18[2] = uVar19;
        iVar15 = *(int *)(local_78 + 0x1c);
        if (*(short *)(param_1 + 0x1b0) < 6) {
          uVar16 = VectorSignedToFloat((int)(short)(int)(*(float *)(iVar1 * 0x50 + 0x34 + iVar15) *
                                                        *(float *)(iVar15 + iVar1 * 0x50 + 0x48)),
                                       (byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(iVar1 * 0x50 + 0x44 + iVar15) = uVar16;
        }
        else {
          *(float *)(iVar1 * 0x50 + 0x44 + iVar15) = fVar14;
        }
      }
    }
    else {
      if (uVar17 == 0x18) {
        local_110 = DAT_003d35d4;
        local_10c = DAT_003d35d8;
        local_108 = DAT_003d35dc;
        local_104 = local_a8;
        local_100 = local_a4;
        local_fc = local_a0;
        uStack_f8 = uStack_9c;
        local_f4 = local_98;
        local_f0 = local_94;
        local_ec = local_90;
        local_e8 = local_8c;
        local_e4 = local_88;
        local_e0 = local_84;
        local_dc = local_80;
        uStack_d8 = uStack_7c;
        if (*(short *)(param_1 + 0x1ce) != 0) {
          local_110 = fVar13;
        }
        FUN_003735ac(param_1 + 0x23c,&local_104,&local_110);
        uVar16 = DAT_003d35e0;
        fVar23 = (float)FUN_003727f0(DAT_003d35e0);
        fVar24 = (float)FUN_00372674(uVar16);
        fVar27 = local_fc * fVar23;
        local_fc = local_fc * fVar24 - local_100 * fVar23;
        fVar22 = local_ec * fVar23;
        local_ec = local_ec * fVar24 - local_f0 * fVar23;
        fVar25 = local_dc * fVar23;
        local_dc = local_dc * fVar24 - local_e0 * fVar23;
        local_100 = local_100 * fVar24 + fVar27;
        local_f0 = local_f0 * fVar24 + fVar22;
        local_e0 = local_e0 * fVar24 + fVar25;
        FUN_003624c8(&local_104,&local_118,0);
        *(undefined2 *)(param_1 + 0x248) = (undefined2)local_118;
        *(undefined2 *)(param_1 + 0x24a) = local_118._2_2_;
        *(undefined2 *)(param_1 + 0x24c) = (undefined2)local_114;
        goto LAB_003d353c;
      }
      if ((int)uVar17 < 0x26) goto LAB_003d353c;
    }
    uVar17 = uVar17 + 1;
    if (0x28 < (int)uVar17) {
      FUN_00371eac(*(undefined4 *)(*(int *)(local_70 + 0xfe0) + 8),0);
      local_114 = 1;
      local_118 = (undefined1 *)param_1;
      FUN_0035e240(param_1 + 0x16e0,param_1 + 0x148,0,DAT_003d3648);
      return;
    }
  } while( true );
}
