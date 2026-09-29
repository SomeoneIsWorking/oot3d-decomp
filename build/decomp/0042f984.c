// OoT3D decomp @ 0042f984  name=FUN_0042f984  size=15504

void FUN_0042f984(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *extraout_r1;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int *piVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  undefined4 uVar19;
  int extraout_s0;
  int extraout_s0_00;
  float fVar20;
  int extraout_s1;
  int extraout_s1_00;
  int extraout_s2;
  int extraout_s2_00;
  int extraout_s3;
  int extraout_s3_00;
  int extraout_s4;
  int extraout_s4_00;
  int extraout_s5;
  int extraout_s5_00;
  int iVar21;
  int extraout_s6;
  int extraout_s6_00;
  int iVar22;
  int extraout_s7;
  int extraout_s7_00;
  int iVar23;
  undefined8 uVar24;
  int local_98;
  int local_94;
  int local_90;
  undefined1 auStack_8c [24];
  int local_74 [7];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char local_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int local_38;
  int local_34;
  undefined4 local_30;

  iVar1 = DAT_0042fdec;
  bVar17 = false;
  iVar15 = 0;
  bVar18 = false;
  if (*(int *)(DAT_0042fdec + 0x10) == 0) {
    return;
  }
  local_74[6] = *DAT_0042fdf0;
  uStack_58 = DAT_0042fdf0[1];
  uStack_54 = DAT_0042fdf0[2];
  uStack_50 = DAT_0042fdf0[3];
  uStack_4c = DAT_0042fdf0[4];
  uStack_48 = DAT_0042fdf0[5];
  uVar19 = FUN_002f9484(auStack_3c,auStack_40,local_44);
  iVar22 = DAT_004334ec;
  iVar21 = DAT_004334e8;
  iVar13 = DAT_004330c4;
  puVar12 = DAT_004327ec;
  iVar7 = DAT_00431fdc;
  iVar6 = DAT_00430e28;
  puVar5 = DAT_00430468;
  iVar16 = DAT_00430464;
  puVar11 = DAT_0042fdf4;
  switch(*(undefined4 *)(iVar1 + 0x10)) {
  case 1:
    iVar15 = *(int *)(iVar1 + 0x54);
    if (iVar15 != 0) goto LAB_00430f34;
    *DAT_0042fdf4 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    if (puVar11[-4] != 0) {
      FUN_002f6944();
      FUN_003525d4();
      puVar11[-4] = 0;
    }
    FUN_00447150();
    iVar15 = 0;
    do {
      if (puVar11[iVar15 + -0x1b] != 0) {
        FUN_002f6944();
        FUN_003525d4();
        puVar11[iVar15 + -0x1b] = 0;
      }
      iVar16 = DAT_0042fdf8;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x1b);
    iVar15 = 0;
    while (iVar6 = DAT_0042fdfc, iVar15 = iVar15 + 1, iVar15 < 0xb8) {
      if (0x74 < iVar15) {
        local_74[4] = iVar16;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
      }
    }
    iVar15 = 0;
    do {
      uVar19 = FUN_002eeec4(iVar15);
      *(undefined4 *)(iVar6 + iVar15 * 4) = uVar19;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
    local_74[3] = 0;
    local_74[4] = 0;
    local_74[5] = 0;
    iVar15 = 0;
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    do {
      if (*(int *)(iVar6 + iVar15 * 4) != 0) {
        iVar16 = FUN_002eee84(iVar15);
        iVar7 = FUN_002eed7c(*(undefined4 *)(iVar16 + 0x13bc),*(undefined4 *)(iVar16 + 0x13c0),
                             *(undefined4 *)(iVar16 + 0x13c4));
        local_74[iVar15 + 3] = iVar7;
        local_74[iVar15] = *(int *)(iVar16 + 0x13cc) + *(int *)(iVar16 + 0x13c8) * 0x3c;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
    iVar16 = 0;
    bVar18 = SBORROW4(local_74[3],local_74[4]);
    iVar15 = local_74[3] - local_74[4];
    if (local_74[3] <= local_74[4]) {
      if (local_74[4] <= local_74[3]) {
        bVar18 = SBORROW4(local_74[0],local_74[1]);
        iVar15 = local_74[0] - local_74[1];
      }
      if (iVar15 < 0 != bVar18) {
        iVar16 = 1;
      }
    }
    if ((local_74[iVar16 + 3] <= local_74[5]) &&
       ((local_74[iVar16 + 3] < local_74[5] || (local_74[iVar16] < local_74[2])))) {
      iVar16 = 2;
    }
    *(int *)(iVar1 + 0x14) = iVar16;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    uVar10 = DAT_0042fe08;
    puVar5 = DAT_0042fe04;
    uVar19 = DAT_0042fe00;
    iVar16 = 0;
    puVar11[10] = 0;
    *puVar5 = uVar19;
    uVar2 = DAT_0042fe0c;
    puVar5[3] = uVar10;
    puVar5[1] = uVar19;
    puVar5[4] = uVar2;
    puVar5[2] = uVar19;
    uVar3 = DAT_0042fe14;
    uVar19 = DAT_0042fe10;
    puVar5[5] = DAT_0042fe10;
    puVar5[6] = uVar3;
    puVar5[9] = uVar10;
    puVar5[7] = DAT_0042fe18;
    puVar5[10] = uVar2;
    puVar5[8] = DAT_0042fe1c;
    puVar5[0xb] = uVar19;
    iVar15 = DAT_0042fe24;
    uVar19 = DAT_0042fe20;
    puVar5[0xc] = DAT_0042fe20;
    puVar5[0xf] = iVar15;
    puVar5[0xd] = uVar19;
    puVar5[0x10] = iVar15;
    puVar5[0xe] = uVar19;
    puVar5[0x11] = iVar15;
    *(int *)(iVar1 + 0x48) = iVar15;
    *(undefined4 *)(iVar1 + 0x50) = DAT_0042fe28;
    *(undefined4 *)(iVar1 + 0x4c) = uVar10;
    do {
      FUN_002ee864(iVar16);
      if (*(int *)(iVar6 + iVar16 * 4) != 0) {
        FUN_002ee864(iVar16 + 3);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 3);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    uVar19 = 2;
LAB_004311a4:
    *(undefined4 *)(iVar1 + 0x10) = uVar19;
    break;
  case 2:
    local_30 = DAT_0042fe2c;
    iVar16 = 0;
    *DAT_0042fdf4 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    iVar15 = DAT_0042fe24;
    do {
      local_38 = iVar15;
      local_34 = iVar15;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar16);
      FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_30,1,iVar16);
      do {
        iVar16 = iVar16 + 1;
        if (0xb7 < iVar16) {
          iVar15 = *(int *)(iVar1 + 0x28) + 1;
          *(int *)(iVar1 + 0x28) = iVar15;
          if (iVar15 == 0xb) {
            *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
            FUN_002ee864(6);
            *(undefined4 *)(iVar1 + 0x10) = 3;
          }
          goto code_r0x00430f18;
        }
      } while (5 < iVar16);
    } while( true );
  case 3:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x10,0x30,0x120,0x2c);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *puVar11 = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0x10,100,0x120,0x2c);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 1;
        *(undefined4 *)(iVar1 + 0x14) = 1;
        puVar11[1] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0x10,0x98,0x120,0x2c);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 2;
        *(undefined4 *)(iVar1 + 0x14) = 2;
        puVar11[2] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 3;
        uVar19 = 1;
        puVar11 = DAT_0042fdf4;
LAB_0043002c:
        puVar11[3] = uVar19;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x10,0x30,0x120,0x2c);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0x10,100,0x120,0x2c);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0x10,0x98,0x120,0x2c);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 2)) {
        iVar15 = 2;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_0042fdf4;
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 3)) {
        bVar18 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        uVar19 = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        goto LAB_0043002c;
      }
    }
    uVar8 = FUN_0033b5ec();
    if (((uVar8 & 1) != 0 || iVar15 != 0) && (!bVar18)) {
      local_98 = DAT_0043045c;
      local_94 = DAT_00430458;
      FUN_0037547c(DAT_00430460,0,4,DAT_0043045c);
      iVar16 = DAT_00430464;
      if (*(int *)(DAT_00430464 + 0x18) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar16 + 0x18) = 0;
      }
      uVar19 = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      if (iVar15 == 0) {
        uVar19 = 4;
      }
      *(undefined4 *)(iVar1 + 0x54) = uVar19;
      puVar11 = DAT_00430468;
      iVar15 = DAT_0042fe24;
      uVar19 = DAT_0042fe20;
      iVar16 = *(int *)(iVar1 + 0x14);
      if (*(int *)(DAT_0042fdfc + iVar16 * 4) == 0) {
        piVar14 = DAT_00430468 + 3;
        *DAT_00430468 = DAT_0042fe20;
        *piVar14 = iVar15;
        puVar11[1] = uVar19;
        puVar11[4] = iVar15;
        puVar11[2] = uVar19;
        puVar11[5] = iVar15;
        uVar19 = DAT_0042fe08;
        puVar11[iVar16 + -0x17] = 1;
        *(undefined4 *)(iVar1 + 0x48) = uVar19;
        uVar19 = 5;
        *(undefined4 *)(iVar1 + 0x50) = DAT_0043046c;
      }
      else {
        DAT_0042fdf4[iVar16] = 1;
        uVar19 = 4;
      }
      goto LAB_004321c8;
    }
    uVar8 = FUN_0033b5ec();
    if ((uVar8 & 2) != 0 || bVar18) {
      local_98 = DAT_0043045c;
      local_94 = DAT_00430458;
      FUN_0037547c(DAT_00430470,0,4,DAT_0043045c);
      puVar11 = DAT_0042fdf4;
      if (iVar15 == 0) {
        uVar19 = 4;
      }
      else {
        uVar19 = 0;
      }
      *(undefined4 *)(iVar1 + 0x54) = uVar19;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      uVar19 = 0xb;
LAB_0043305c:
      *(undefined4 *)(iVar1 + 0x10) = uVar19;
      return;
    }
    uVar8 = FUN_0033b5d0();
    if ((uVar8 & 0x80) == 0) {
      uVar8 = FUN_0033b5d0();
      bVar18 = (uVar8 & 0x40) != 0;
      iVar15 = 0;
      if (bVar18) {
        iVar15 = *(int *)(iVar1 + 0x14);
      }
      if (bVar18 && 0 < iVar15) {
        local_98 = DAT_0043045c;
        local_94 = DAT_00430458;
        FUN_0037547c(DAT_00430474,0,4,DAT_0043045c);
        iVar15 = *(int *)(iVar1 + 0x14) + -1;
        goto LAB_00430218;
      }
    }
    else if (*(int *)(iVar1 + 0x14) < 2) {
      local_98 = DAT_0043045c;
      local_94 = DAT_00430458;
      FUN_0037547c(DAT_00430474,0,4,DAT_0043045c);
      iVar15 = *(int *)(iVar1 + 0x14) + 1;
LAB_00430218:
      *(int *)(iVar1 + 0x14) = iVar15;
    }
    goto code_r0x00430f18;
  case 4:
    if (*(int *)(iVar1 + 0x54) == 0) {
      iVar15 = *(int *)(iVar1 + 0x28);
      if (iVar15 == 0) {
        iVar16 = *(int *)(iVar1 + 0x14);
        if (iVar16 == 0) {
LAB_004303ac:
          puVar11 = DAT_00430468;
          DAT_00430468[1] = DAT_00430480;
          puVar11[4] = DAT_00430484;
          if (iVar16 != 2) goto LAB_004303cc;
        }
        else {
          *DAT_00430468 = DAT_00430480;
          puVar5[3] = DAT_00430484;
          if (iVar16 != 1) goto LAB_004303ac;
LAB_004303cc:
          puVar11 = DAT_00430468;
          DAT_00430468[2] = DAT_00430480;
          puVar11[5] = DAT_00430484;
        }
        puVar11 = DAT_0042fe04;
        DAT_0042fe04[iVar16] = DAT_00430488;
        puVar11[iVar16 + 3] = DAT_0043048c;
        puVar11[iVar16 + 0xc] = DAT_00430484;
        if (iVar16 == 0) {
          puVar5 = puVar11 + 0xf;
          uVar19 = DAT_00430490;
        }
        else {
          puVar5 = (undefined4 *)(DAT_00430494 + iVar16 * 4);
          uVar19 = VectorSignedToFloat(iVar16 * -0xc,(byte)(in_fpscr >> 0x15) & 3);
        }
        *puVar5 = uVar19;
        puVar11[local_74[iVar16 * 2 + 6]] = DAT_00430478;
      }
      else if (iVar15 == 2) {
        DAT_0042fe04[local_74[*(int *)(iVar1 + 0x14) * 2 + 7]] = DAT_00430478;
      }
      *(int *)(iVar1 + 0x28) = iVar15 + 1;
      if (iVar15 + 1 == 8) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        iVar15 = DAT_00430e28;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 7;
        *(undefined4 *)(iVar15 + 0x10) = 5;
      }
      goto code_r0x00430f18;
    }
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
    break;
  case 5:
    if (*(int *)(iVar1 + 0x54) == 0) {
      iVar15 = *(int *)(iVar1 + 0x28);
      if (iVar15 == 0) {
        *DAT_0042fe04 = DAT_00430478;
      }
      else {
        puVar11 = extraout_r1;
        if (iVar15 == 1) {
          uVar19 = DAT_00430478;
          puVar11 = DAT_0042fe04;
        }
        if (iVar15 == 1) {
          puVar11[1] = uVar19;
        }
        else {
          if (iVar15 == 2) {
            uVar19 = DAT_00430478;
            puVar11 = DAT_0042fe04;
          }
          if (iVar15 == 2) {
            puVar11[2] = uVar19;
          }
        }
      }
      *(int *)(iVar1 + 0x28) = iVar15 + 1;
      if ((iVar15 + 1 == 6) && (*(int *)(DAT_0042fdfc + *(int *)(iVar1 + 0x14) * 4) == 0)) {
        *(int *)(DAT_0043047c + 0x4dc) = *(int *)(iVar1 + 0x14);
        FUN_0043e200();
        iVar15 = DAT_00430464;
        iVar16 = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        do {
          if (*(int *)(iVar15 + iVar16 * 4) != 0) {
            FUN_002f6944();
            FUN_003525d4();
            *(undefined4 *)(iVar15 + iVar16 * 4) = 0;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < 0x1b);
        FUN_002f43d8(0);
        return;
      }
      FUN_002ee5e4();
      local_74[4] = 0;
      iVar15 = 0;
      local_74[5] = VectorSignedToFloat(*(int *)(iVar1 + 0x28) * -0xc,(byte)(in_fpscr >> 0x15) & 3);
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
        do {
          iVar15 = iVar15 + 1;
          if (0xb7 < iVar15) goto code_r0x004336fc;
        } while (5 < iVar15);
      } while( true );
    }
    FUN_002ee5e4();
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
  default:
    goto code_r0x004336fc;
  case 7:
    iVar15 = *(int *)(DAT_00430e28 + 0x10) + -1;
    *(int *)(DAT_00430e28 + 0x10) = iVar15;
    if (iVar15 == 0) {
      FUN_002ee864(7);
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x10) = 8;
    }
    iVar15 = 0x7a;
    local_34 = DAT_00430484;
    do {
      if (*(int *)(iVar1 + 0x2c) == 0) {
        local_38 = VectorSignedToFloat(*(int *)(iVar6 + 0x10) * 0x50,(byte)(in_fpscr >> 0x15) & 3);
      }
      else {
        local_38 = VectorSignedToFloat(*(int *)(iVar6 + 0x10) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
      }
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar15);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x86);
    goto code_r0x00430f18;
  case 8:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x62,0x6a,0x7c,0x34);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        puVar11[4] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0x46,0xa2,0x54,0x24);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x18) = 1;
        *(undefined4 *)(iVar1 + 0xc) = 1;
        puVar11[5] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0xa6,0xa2,0x54,0x24);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x18) = 2;
        *(undefined4 *)(iVar1 + 0xc) = 2;
        puVar11[6] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_0042fdf4;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x18) = 3;
        *(undefined4 *)(iVar1 + 0xc) = 3;
        puVar11[3] = 1;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x62,0x6a,0x7c,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0x46,0xa2,0x54,0x24);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0xa6,0xa2,0x54,0x24);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 2)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 3)) {
        bVar18 = true;
      }
      if (local_44[0] == '\0' && iVar15 == 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11 = DAT_0042fdf4;
        DAT_0042fdf4[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[3] = 0;
      }
    }
    uVar8 = FUN_0033b5ec();
    if (((uVar8 & 1) == 0 && iVar15 == 0) || (bVar18)) {
      uVar8 = FUN_0033b5ec();
      if ((uVar8 & 2) != 0 || bVar18) {
        local_98 = DAT_0043045c;
        local_94 = DAT_00430458;
        FUN_0037547c(DAT_00430470,0,4,DAT_0043045c);
        iVar15 = DAT_00430e28;
        if (bVar18) {
          uVar19 = 0;
        }
        else {
          uVar19 = 4;
        }
        *(undefined4 *)(iVar1 + 0x54) = uVar19;
        *(undefined4 *)(iVar15 + 0x10) = 0;
        *(undefined4 *)(iVar15 + 0x9c) = 1;
        uVar19 = 9;
        goto LAB_004308b4;
      }
      uVar8 = FUN_0033b5d0();
      if ((uVar8 & 0x40) == 0) {
        uVar8 = FUN_0033b5d0();
        iVar15 = DAT_0043045c;
        uVar19 = DAT_00430458;
        if ((uVar8 & 0x80) == 0) {
          uVar8 = FUN_0033b5d0();
          if ((uVar8 & 0x10) == 0) {
            uVar8 = FUN_0033b5d0();
            if (((uVar8 & 0x20) != 0) && (*(int *)(iVar1 + 0x18) == 2)) {
              local_98 = DAT_0043045c;
              local_94 = DAT_00430458;
              FUN_0037547c(DAT_00430474,0,4,DAT_0043045c);
              uVar19 = 1;
              goto LAB_00430a50;
            }
          }
          else if (*(int *)(iVar1 + 0x18) == 1) {
            local_98 = DAT_0043045c;
            local_94 = DAT_00430458;
            FUN_0037547c(DAT_00430474,0,4,DAT_0043045c);
            uVar19 = 2;
LAB_00430a50:
            *(undefined4 *)(iVar1 + 0x18) = uVar19;
          }
        }
        else if (*(int *)(iVar1 + 0x18) == 0) {
          *(undefined4 *)(iVar1 + 0x18) = 1;
          local_98 = iVar15;
          local_94 = uVar19;
          FUN_0037547c(DAT_00430474,0,4,iVar15);
        }
      }
      else {
        if (*(int *)(iVar1 + 0x18) != 0) {
          local_98 = DAT_0043045c;
          local_94 = DAT_00430458;
          FUN_0037547c(DAT_00430474,0,4,DAT_0043045c);
        }
        *(undefined4 *)(iVar1 + 0x18) = 0;
      }
    }
    else {
      iVar16 = *(int *)(iVar1 + 0x18);
      if (iVar16 == 0) {
        local_98 = DAT_0043045c;
        local_94 = DAT_00430458;
        FUN_0037547c(DAT_00430e2c,0,4,DAT_0043045c);
        DAT_0042fdf4[4] = 1;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        uVar19 = 10;
      }
      else if (iVar16 == 1) {
        local_98 = DAT_0043045c;
        local_94 = DAT_00430458;
        FUN_0037547c(DAT_00430460,0,4,DAT_0043045c);
        DAT_0042fdf4[5] = 1;
        iVar16 = DAT_00430e28;
        if (iVar15 == 0) {
          uVar19 = 4;
        }
        else {
          uVar19 = 0;
        }
        *(undefined4 *)(iVar1 + 0x54) = uVar19;
        *(undefined4 *)(iVar16 + 0x10) = 0;
        uVar19 = 0xc;
      }
      else {
        if (iVar16 != 2) goto LAB_00430a54;
        local_98 = DAT_0043045c;
        local_94 = DAT_00430458;
        FUN_0037547c(DAT_00430460,0,4,DAT_0043045c);
        DAT_0042fdf4[6] = 1;
        if (iVar15 == 0) {
          uVar19 = 4;
        }
        else {
          uVar19 = 0;
        }
        *(undefined4 *)(iVar1 + 0x54) = uVar19;
        iVar15 = DAT_00430e28;
        *(undefined4 *)(DAT_00430e28 + 0x14) = 5;
        *(undefined4 *)(iVar15 + 0x10) = 0;
        uVar19 = 0x22;
      }
LAB_004308b4:
      *(undefined4 *)(iVar1 + 0x10) = uVar19;
    }
LAB_00430a54:
    iVar15 = DAT_00430e28;
    local_74[5] = DAT_00430e30;
    iVar16 = 0x7a;
    do {
      local_74[4] = VectorSignedToFloat(*(int *)(iVar15 + 0x10) * -0x50,(byte)(in_fpscr >> 0x15) & 3
                                       );
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar16);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0x86);
    goto code_r0x00430f18;
  case 9:
    iVar15 = *(int *)(iVar1 + 0x54);
    if (iVar15 == 0) {
      if (*(int *)(DAT_00430e28 + 0x10) == 0) {
        if (*(int *)(DAT_00430e28 + 0x40) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + 0x40) = 0;
        }
        uVar19 = DAT_00430e34;
        puVar11 = DAT_0042fdf4;
        puVar5 = *(undefined4 **)(iVar1 + 0x14);
        puVar12 = DAT_0042fdf4 + (int)puVar5 + 0xb;
        DAT_0042fdf4[(int)puVar5] = 0;
        *puVar12 = uVar19;
        bVar18 = puVar5 == (undefined4 *)0x0;
        uVar19 = VectorSignedToFloat((int)puVar5 * 0x34 + 0x30,(byte)(in_fpscr >> 0x15) & 3);
        puVar11[(int)puVar5 + 0xe] = uVar19;
        iVar15 = (int)puVar5 + 0x17;
        if (bVar18) {
          puVar5 = puVar11 + 0x1a;
        }
        puVar11[iVar15] = DAT_00430e30;
        uVar19 = DAT_00430e38;
        if (!bVar18) {
          iVar15 = (int)puVar5 * 0xc;
          puVar5 = (undefined4 *)(DAT_00430494 + (int)puVar5 * 4);
          uVar19 = VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
        }
        *puVar5 = uVar19;
      }
      iVar15 = *(int *)(iVar6 + 0x10) + 1;
      *(int *)(iVar6 + 0x10) = iVar15;
      uVar19 = DAT_00430e40;
      puVar11 = DAT_0042fe04;
      if (iVar15 == 5) {
        iVar15 = *(int *)(iVar1 + 0x14);
        if (iVar15 == 0) {
LAB_00430bd4:
          uVar19 = DAT_00430e40;
          puVar11 = DAT_0042fe04;
          DAT_0042fe04[1] = DAT_00430e34;
          uVar10 = DAT_00430e48;
          puVar11[4] = DAT_00430e48;
          puVar11[0xd] = uVar19;
          puVar11[0x10] = DAT_00430e30;
          puVar11[7] = DAT_00430e4c;
          puVar11[10] = uVar10;
          if (iVar15 != 2) goto LAB_00430c20;
        }
        else {
          *DAT_0042fe04 = DAT_00430e34;
          uVar10 = DAT_00430e3c;
          puVar11[3] = DAT_00430e3c;
          puVar11[0xc] = uVar19;
          puVar11[0xf] = DAT_00430e30;
          puVar11[6] = DAT_00430e44;
          puVar11[9] = uVar10;
          if (iVar15 != 1) goto LAB_00430bd4;
LAB_00430c20:
          uVar19 = DAT_00430e40;
          puVar11 = DAT_0042fe04;
          DAT_0042fe04[2] = DAT_00430e34;
          uVar10 = DAT_00430e50;
          puVar11[5] = DAT_00430e50;
          puVar11[0xe] = uVar19;
          puVar11[0x11] = DAT_00430e30;
          puVar11[8] = DAT_00430e54;
          puVar11[0xb] = uVar10;
        }
        *(undefined4 *)(iVar1 + 0x10) = 2;
      }
      iVar15 = 0x7a;
      local_34 = DAT_00430e30;
      do {
        local_38 = VectorSignedToFloat(*(int *)(iVar6 + 0x10) * 0x50,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x86);
      goto code_r0x00430f18;
    }
    goto LAB_00430f34;
  case 10:
    iVar15 = *(int *)(iVar1 + 0x28);
    fVar20 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = fVar20 * DAT_00431330;
    *(float *)(iVar1 + 0x44) = fVar20;
    if (0x3f800000 < (int)fVar20) {
      *(undefined4 *)(iVar1 + 0x44) = DAT_00431334;
    }
    *(int *)(iVar1 + 0x28) = iVar15 + 1;
    iVar16 = DAT_00430464;
    if (0x1e < iVar15) {
      iVar15 = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      do {
        if (*(int *)(iVar16 + iVar15 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar16 + iVar15 * 4) = 0;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x1b);
      FUN_002f43d8(0);
      FUN_0044735c(param_1,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    break;
  case 0xb:
    if (*(int *)(iVar1 + 0x54) != 0) {
      DAT_00431328[3] = 1;
code_r0x004311bc:
      FUN_002edbe8();
      *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
      goto code_r0x004336fc;
    }
    iVar15 = *(int *)(iVar1 + 0x28);
    fVar20 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = fVar20 * DAT_00431330;
    *(float *)(iVar1 + 0x44) = fVar20;
    if (0x3f800000 < (int)fVar20) {
      *(undefined4 *)(iVar1 + 0x44) = DAT_00431334;
    }
    *(int *)(iVar1 + 0x28) = iVar15 + 1;
    iVar16 = DAT_0043047c;
    if (0x1e < iVar15) {
      *(undefined1 *)(param_1 + 0x2f4) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      *(undefined4 *)(iVar16 + 0x558) = 0xff;
      *(undefined1 *)(iVar16 + 0x56e) = 0xff;
      *(undefined4 *)(iVar16 + 0x4e4) = 1;
      uVar19 = DAT_00431338;
      *(undefined1 *)(param_1 + 0x101) = 0;
      *(undefined4 *)(param_1 + 0xc) = uVar19;
      *(undefined4 *)(param_1 + 0x10) = 0x2e8;
      FUN_00331754(0);
      iVar15 = DAT_00430464;
      iVar16 = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      do {
        if (*(int *)(iVar15 + iVar16 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar15 + iVar16 * 4) = 0;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x1b);
      FUN_002f43d8(0);
      FUN_002ee468();
      return;
    }
    break;
  case 0xc:
    iVar15 = *(int *)(iVar1 + 0x54);
    if (iVar15 == 0) {
      if (*(int *)(DAT_00430e28 + 0x10) == 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        if (*(int *)(iVar6 + 0x40) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + 0x40) = 0;
        }
        uVar19 = DAT_00430e34;
        puVar11 = DAT_0042fe04;
        iVar15 = *(int *)(iVar1 + 0x14);
        DAT_0042fe04[iVar15] = DAT_00430e58;
        uVar10 = DAT_00430e5c;
        puVar11[iVar15 + 6] = uVar19;
        puVar11[iVar15 + 0xc] = uVar10;
      }
      iVar15 = *(int *)(iVar6 + 0x10) + 1;
      *(int *)(iVar6 + 0x10) = iVar15;
      uVar19 = DAT_00430e64;
      puVar11 = DAT_0042fe04;
      if (iVar15 == 5) {
        iVar16 = *(int *)(iVar1 + 0x14);
        iVar15 = 0;
        if (iVar16 == 0) {
LAB_00430db0:
          uVar19 = DAT_00430e64;
          DAT_0042fe04[1] = DAT_00430e34;
          iVar13 = DAT_00430e6c;
          iVar7 = iVar15 * 0x3c;
          iVar15 = iVar15 + 1;
          uVar10 = VectorSignedToFloat(iVar7 + 0x38,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(DAT_00430e6c + 4) = uVar10;
          *(undefined4 *)(iVar13 + 0x10) = uVar19;
          *(undefined4 *)(iVar13 + 0x1c) = uVar10;
          *(undefined4 *)(iVar13 + 0x28) = DAT_00430e68;
          *(int *)(iVar13 + 0x34) = DAT_00430e30;
          if (iVar16 != 2) goto LAB_00430e10;
        }
        else {
          *DAT_0042fe04 = DAT_00430e34;
          uVar10 = DAT_00430e60;
          puVar11[3] = DAT_00430e60;
          puVar11[6] = uVar19;
          puVar11[9] = uVar10;
          puVar11[0xc] = DAT_00430e68;
          puVar11[0xf] = DAT_00430e30;
          iVar15 = 1;
          if (iVar16 != 1) goto LAB_00430db0;
LAB_00430e10:
          DAT_00430e70[2] = DAT_00430e34;
          iVar16 = DAT_00430e6c;
          uVar19 = DAT_00430e64;
          uVar10 = VectorSignedToFloat(iVar15 * 0x3c + 0x38,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(DAT_00430e6c + 8) = uVar10;
          *(undefined4 *)(iVar16 + 0x14) = uVar19;
          *(undefined4 *)(iVar16 + 0x20) = uVar10;
          *(undefined4 *)(iVar16 + 0x2c) = DAT_00430e68;
          *(int *)(iVar16 + 0x38) = DAT_00430e30;
        }
        DAT_00431328[5] = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0xd;
      }
      iVar15 = 0x7a;
      local_74[5] = DAT_00430e30;
      do {
        local_74[4] = VectorSignedToFloat(*(int *)(iVar6 + 0x10) * -0x50,
                                          (byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x86);
      goto code_r0x00430f18;
    }
    goto LAB_00430f34;
  case 0xd:
    iVar15 = *(int *)(iVar1 + 0x28) + 1;
    *(int *)(iVar1 + 0x28) = iVar15;
    if (iVar15 == 5) {
      FUN_002ee864(9);
      uVar19 = 0xe;
      goto LAB_004311a4;
    }
    break;
  case 0xe:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x10,0x38,0x120,0x2c);
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(uint *)(iVar1 + 0x40) = (uint)(*(int *)(iVar1 + 0x14) == 0);
        DAT_00431328[*(int *)(iVar1 + 0x40)] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0x10,0x74,0x120,0x2c);
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        *(undefined4 *)(iVar1 + 0xc) = 1;
        if (*(int *)(iVar1 + 0x14) == 2) {
          *(undefined4 *)(iVar1 + 0x40) = 1;
        }
        else {
          *(undefined4 *)(iVar1 + 0x40) = 2;
        }
        DAT_00431328[*(int *)(iVar1 + 0x40)] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 3;
        uVar19 = 1;
        puVar11 = DAT_00431328;
LAB_00431590:
        puVar11[3] = uVar19;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x10,0x38,0x120,0x2c);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0x10,0x74,0x120,0x2c);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(4,0xcc,0x34,0x20);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 3)) {
        bVar18 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11 = DAT_00431328;
        uVar19 = 0;
        DAT_00431328[*(int *)(iVar1 + 0x40)] = 0;
        goto LAB_00431590;
      }
    }
    uVar8 = FUN_0033b5ec();
    if (((uVar8 & 1) == 0 && iVar15 == 0) || (bVar18)) {
      uVar8 = FUN_0033b5ec();
      if ((uVar8 & 2) == 0 && !bVar18) {
        uVar8 = FUN_0033b5d0();
        if ((uVar8 & 0x40) == 0) {
          uVar8 = FUN_0033b5d0();
          if (((uVar8 & 0x80) != 0) && (*(int *)(iVar1 + 0x1c) == 0)) {
            local_98 = DAT_00431694;
            local_94 = DAT_00431690;
            FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
            uVar19 = 1;
            goto LAB_00431894;
          }
        }
        else if (*(int *)(iVar1 + 0x1c) == 1) {
          local_98 = DAT_00431694;
          local_94 = DAT_00431690;
          FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
          uVar19 = 0;
LAB_00431894:
          *(undefined4 *)(iVar1 + 0x1c) = uVar19;
        }
        goto code_r0x00430f18;
      }
      local_98 = DAT_00431694;
      local_94 = DAT_00431690;
      FUN_0037547c(DAT_004319f4,0,4,DAT_00431694);
      DAT_00431328[3] = 1;
      uVar19 = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      if (!bVar18) {
        uVar19 = 4;
      }
      *(undefined4 *)(iVar1 + 0x54) = uVar19;
      uVar19 = 0xf;
    }
    else {
      local_98 = DAT_00431694;
      local_94 = DAT_00431690;
      FUN_0037547c(DAT_00431698,0,4,DAT_00431694);
      iVar15 = DAT_0043169c;
      if (*(int *)(DAT_0043169c + 0x24) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + 0x24) = 0;
      }
      uVar19 = DAT_004316a0;
      iVar15 = DAT_00430e28;
      iVar16 = *(int *)(iVar1 + 0x14);
      uVar8 = *(uint *)(iVar1 + 0x1c);
      piVar14 = local_74 + iVar16 * 2 + 6;
      iVar6 = piVar14[uVar8];
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar15 + 0x14) = 5;
      *(undefined4 *)(iVar1 + 0x48) = uVar19;
      uVar19 = DAT_0043132c;
      *(undefined4 *)(iVar1 + 0x50) = DAT_0043132c;
      uVar10 = DAT_00431348;
      puVar11 = DAT_00430e70;
      if (*(int *)(iVar15 + 0x18 + iVar6 * 4) == 0) {
        DAT_00430e70[iVar16] = DAT_0043133c;
        uVar2 = DAT_00431688;
        puVar11[iVar16 + 3] = DAT_00431688;
        puVar11[iVar16 + 6] = uVar10;
        iVar15 = DAT_004319ec;
        puVar11[iVar16 + 9] = uVar2;
        uVar10 = DAT_004319e8;
        puVar11[iVar16 + 0xc] = DAT_004319e8;
        puVar11[iVar16 + 0xf] = iVar15;
        puVar11[iVar6 + 3] = DAT_004319f0;
        puVar11[iVar6 + 0xf] = uVar19;
        iVar15 = piVar14[uVar8 ^ 1];
        puVar11[iVar15] = DAT_0043168c;
        puVar11[iVar15 + 0xc] = uVar10;
        puVar11[-0xb] = 1;
        puVar11[-10] = 1;
        puVar11[-9] = 1;
        uVar19 = 0x19;
      }
      else {
        *(undefined4 *)(iVar1 + 0xc) = 1;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        if (uVar8 == 0) {
          iVar16 = local_74[iVar16 * 2 + 7];
          *(undefined4 *)(iVar15 + 0xbc + iVar16 * 4) = DAT_0043168c;
          *(undefined4 *)(iVar15 + 0xec + iVar16 * 4) = DAT_004316a4;
          *(undefined4 *)(iVar15 + 0x90 + *piVar14 * 4) = 1;
        }
        else {
          iVar6 = *piVar14;
          DAT_00430e70[iVar6] = DAT_0043168c;
          iVar15 = DAT_004319e0;
          *(undefined4 *)(DAT_004319e0 + iVar6 * 4) = DAT_004316a4;
          iVar16 = local_74[iVar16 * 2 + 7];
          *(undefined4 *)(iVar15 + -0x24 + iVar16 * 4) = DAT_00431688;
          *(undefined4 *)(iVar15 + 0xc + iVar16 * 4) = DAT_004319e4;
          *(undefined4 *)(iVar15 + -0x5c + iVar16 * 4) = 1;
        }
        uVar19 = 0x10;
      }
    }
    goto LAB_004321c8;
  case 0xf:
    if (*(int *)(iVar1 + 0x54) != 0) goto code_r0x004311bc;
    if (*(int *)(iVar1 + 0x28) == 0) {
      if (*(int *)(DAT_00430464 + 0x24) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar16 + 0x24) = 0;
      }
      iVar15 = 0;
      DAT_00431328[3] = 0;
      uVar19 = DAT_0043133c;
      puVar11 = DAT_00430e70;
      iVar16 = *(int *)(iVar1 + 0x14);
      if (iVar16 == 0) {
LAB_0043126c:
        uVar19 = DAT_0043133c;
        DAT_00430e70[1] = DAT_00431348;
        iVar7 = DAT_00430e6c;
        iVar6 = iVar15 * 0x3c;
        iVar15 = iVar15 + 1;
        uVar10 = VectorSignedToFloat(iVar6 + 0x38,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(DAT_00430e6c + 4) = uVar10;
        *(undefined4 *)(iVar7 + 0x10) = uVar19;
        *(undefined4 *)(iVar7 + 0x1c) = uVar10;
        *(undefined4 *)(iVar7 + 0x28) = DAT_00431340;
        *(undefined4 *)(iVar7 + 0x34) = DAT_00431344;
        if (iVar16 == 2) goto code_r0x00431324;
      }
      else {
        *DAT_00430e70 = DAT_00430e64;
        uVar10 = DAT_00430e60;
        puVar11[3] = DAT_00430e60;
        puVar11[6] = uVar19;
        puVar11[9] = uVar10;
        puVar11[0xc] = DAT_00431340;
        puVar11[0xf] = DAT_00431344;
        iVar15 = 1;
        if (iVar16 != 1) goto LAB_0043126c;
      }
      uVar19 = DAT_0043133c;
      DAT_00430e70[2] = DAT_00431348;
      iVar16 = DAT_00430e6c;
      uVar10 = VectorSignedToFloat(iVar15 * 0x3c + 0x38,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(DAT_00430e6c + 8) = uVar10;
      *(undefined4 *)(iVar16 + 0x14) = uVar19;
      *(undefined4 *)(iVar16 + 0x20) = uVar10;
      *(undefined4 *)(iVar16 + 0x2c) = DAT_00431340;
      *(undefined4 *)(iVar16 + 0x38) = DAT_00431344;
    }
code_r0x00431324:
    iVar15 = *(int *)(iVar1 + 0x28) + 1;
    *(int *)(iVar1 + 0x28) = iVar15;
    uVar19 = DAT_00431688;
    puVar11 = DAT_00430e70;
    if (iVar15 == 5) {
      iVar15 = *(int *)(iVar1 + 0x14);
      DAT_00430e70[iVar15] = DAT_0043133c;
      uVar10 = DAT_0043168c;
      puVar11[iVar15 + 3] = uVar19;
      puVar11[iVar15 + 6] = uVar10;
      puVar11[iVar15 + 9] = uVar19;
      puVar11[iVar15 + 0xc] = DAT_00431340;
      puVar11[iVar15 + 0xf] = DAT_00431344;
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 7;
      puVar11[-0x2b] = 5;
    }
    break;
  case 0x10:
    iVar16 = local_74[*(int *)(iVar1 + 0x14) * 2 + *(int *)(iVar1 + 0x1c) + 6];
    iVar15 = *(int *)(iVar1 + 0x28) + 1;
    *(int *)(iVar1 + 0x28) = iVar15;
    if (4 < iVar15) {
      *(int *)(DAT_00430e28 + 0x14) = *(int *)(DAT_00430e28 + 0x14) + -1;
    }
    if (*(int *)(DAT_00430e28 + 0x14) == 0) {
      FUN_002ee864(iVar16 + 10);
      *(undefined4 *)(iVar1 + 0x10) = 0x11;
    }
    goto LAB_004318f4;
  case 0x11:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      puVar11 = DAT_00431328;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        puVar11[9] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      puVar11 = DAT_00431328;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x20) = 1;
        *(undefined4 *)(iVar1 + 0xc) = 1;
        puVar11[10] = 1;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        bVar17 = true;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        iVar15 = 1;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11 = DAT_00431328;
        DAT_00431328[9] = 0;
        puVar11[10] = 0;
      }
    }
    uVar8 = FUN_0033b5ec();
    if ((uVar8 & 1) == 0 && iVar15 == 0) {
      uVar8 = FUN_0033b5ec();
      if ((uVar8 & 2) == 0) {
        uVar8 = FUN_0033b5d0();
        if ((uVar8 & 0x10) == 0) {
          uVar8 = FUN_0033b5d0();
          if (((uVar8 & 0x20) != 0) && (*(int *)(iVar1 + 0x20) == 1)) {
            local_98 = DAT_00431694;
            local_94 = DAT_00431690;
            FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
            uVar19 = 0;
            goto LAB_00431bc4;
          }
        }
        else if (*(int *)(iVar1 + 0x20) == 0) {
          local_98 = DAT_00431694;
          local_94 = DAT_00431690;
          FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
          uVar19 = 1;
LAB_00431bc4:
          *(undefined4 *)(iVar1 + 0x20) = uVar19;
        }
LAB_00431bc8:
        if (!bVar17) goto code_r0x00430f18;
      }
    }
    else {
      local_98 = DAT_00431694;
      local_94 = DAT_00431690;
      FUN_0037547c(DAT_00431698,0,4,DAT_00431694);
      iVar15 = DAT_0043169c;
      iVar16 = local_74[*(int *)(iVar1 + 0x14) * 2 + *(int *)(iVar1 + 0x1c) + 6];
      if (*(int *)(DAT_0043169c + (iVar16 + 10) * 4) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + (iVar16 + 10) * 4) = 0;
      }
      iVar15 = DAT_00430e28;
      if (*(int *)(iVar1 + 0x20) != 0) {
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar15 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0x14;
        goto LAB_00431bc8;
      }
    }
    local_98 = DAT_00431694;
    local_94 = DAT_00431690;
    FUN_0037547c(DAT_004319f4,0,4,DAT_00431694);
    iVar15 = DAT_0043169c;
    iVar16 = local_74[*(int *)(iVar1 + 0x14) * 2 + *(int *)(iVar1 + 0x1c) + 6];
    if (*(int *)(DAT_0043169c + (iVar16 + 10) * 4) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar15 + (iVar16 + 10) * 4) = 0;
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar15 = *(int *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      iVar15 = local_74[iVar15 * 2 + 7];
      DAT_00430e70[iVar15] = DAT_00431fc0;
      *(undefined4 *)(DAT_004319e0 + iVar15 * 4) = DAT_00431fc4;
    }
    else {
      iVar6 = local_74[iVar15 * 2 + 6];
      DAT_00430e70[iVar6] = DAT_00431fc0;
      iVar16 = DAT_004319e0;
      *(undefined4 *)(DAT_004319e0 + iVar6 * 4) = DAT_00431fc4;
      iVar15 = local_74[iVar15 * 2 + 7];
      *(undefined4 *)(iVar16 + -0x24 + iVar15 * 4) = DAT_004319f0;
      *(undefined4 *)(iVar16 + 0xc + iVar15 * 4) = DAT_00431fc8;
    }
    puVar11 = DAT_00431328;
    *(int *)(iVar1 + 0x48) = DAT_004319ec;
    *(undefined4 *)(iVar1 + 0x50) = DAT_004319e4;
    puVar11[*(int *)(iVar1 + 0x14)] = 1;
    *(undefined4 *)(iVar1 + 0x10) = 0x12;
    goto code_r0x00430f18;
  case 0x12:
    iVar15 = *(int *)(DAT_00430e28 + 0x14) + 1;
    *(int *)(DAT_00430e28 + 0x14) = iVar15;
    if (iVar15 == 5) {
      FUN_002ee864(9);
      *(undefined4 *)(iVar1 + 0x10) = 0xe;
      puVar11 = DAT_00431328;
      *DAT_00431328 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[*(int *)(iVar1 + 0x14)] = 1;
    }
LAB_004318f4:
    FUN_002edb18(1);
    break;
  case 0x13:
    *(int *)(DAT_00431fdc + 0x14) = *(int *)(DAT_00431fdc + 0x14) + 1;
    FUN_002edb18(1);
    uVar19 = DAT_00432420;
    iVar15 = DAT_00431fd4;
    if (5 < *(int *)(iVar7 + 0x14)) {
      iVar16 = *(int *)(iVar1 + 0x14);
      *(undefined4 *)(iVar7 + 0xbc + iVar16 * 4) = DAT_00431fc0;
      uVar10 = DAT_0043241c;
      *(undefined4 *)(iVar7 + 200 + iVar16 * 4) = DAT_0043241c;
      *(undefined4 *)(iVar7 + 0xd4 + iVar16 * 4) = uVar19;
      *(undefined4 *)(iVar7 + 0xe0 + iVar16 * 4) = uVar10;
      *(undefined4 *)(iVar7 + 0xec + iVar16 * 4) = DAT_00431fc4;
      *(int *)(iVar7 + 0xf8 + iVar16 * 4) = DAT_0043240c;
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 7;
      local_74[2] = DAT_00431fcc;
      *(undefined4 *)(iVar7 + 0x10) = 5;
      local_74[3] = DAT_00431fd0;
      local_74[4] = iVar15;
      local_74[5] = DAT_00431fd0;
      local_98 = 0x97;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
      local_74[4] = iVar15;
      local_74[5] = DAT_00431fd8;
      local_98 = 0x9e;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
    }
    goto code_r0x00430f18;
  case 0x14:
    *(int *)(DAT_00430e28 + 0x14) = *(int *)(DAT_00430e28 + 0x14) + 1;
    FUN_002edb18(0xffffffff);
    iVar16 = DAT_00431fd4;
    iVar15 = DAT_00431fd0;
    if (5 < *(int *)(iVar6 + 0x14)) {
      local_74[2] = DAT_00431fcc;
      local_74[3] = DAT_00431fd0;
      local_74[4] = DAT_00431fd4;
      local_74[5] = DAT_00431fd8;
      local_98 = 0x97;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
      local_74[4] = iVar16;
      local_74[5] = iVar15;
      local_98 = 0x9e;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
      *(undefined4 *)(iVar6 + 0x14) = 5;
      *(undefined4 *)(iVar1 + 0x10) = 0x15;
    }
    goto code_r0x004336fc;
  case 0x15:
    *(int *)(DAT_00430e28 + 0x14) = *(int *)(DAT_00430e28 + 0x14) + -1;
    FUN_002edb18(1);
    iVar15 = DAT_004319ec;
    if (*(int *)(iVar6 + 0x14) != 0) goto code_r0x004336fc;
    *(undefined4 *)(iVar6 + 0x14) = 1;
    iVar16 = 0;
    do {
      if (iVar16 - 0xa2U < 9) {
        local_38 = iVar15;
        local_34 = iVar15;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar16);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xb8);
    FUN_002ee864(0x11);
    FUN_002ee864(0x12);
    uVar19 = 0x16;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    goto LAB_00432400;
  case 0x16:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      puVar11 = DAT_00431328;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        puVar11[9] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      if (iVar16 != 0) {
        uVar19 = 1;
        *(undefined4 *)(iVar1 + 0x20) = 1;
        puVar11 = DAT_00431328;
        *(undefined4 *)(iVar1 + 0xc) = 1;
LAB_00431f18:
        puVar11[10] = uVar19;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      puVar11 = DAT_00431328;
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        bVar17 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        uVar19 = 0;
        puVar11[9] = 0;
        goto LAB_00431f18;
      }
    }
    uVar8 = FUN_0033b5ec();
    if ((uVar8 & 1) == 0 && iVar15 == 0) {
      uVar8 = FUN_0033b5ec();
      if ((uVar8 & 2) == 0) {
        uVar8 = FUN_0033b5d0();
        if ((uVar8 & 0x10) == 0) {
          uVar8 = FUN_0033b5d0();
          if (((uVar8 & 0x20) != 0) && (*(int *)(iVar1 + 0x20) == 1)) {
            local_98 = DAT_00431694;
            local_94 = DAT_00431690;
            FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
            uVar19 = 0;
            goto LAB_00432080;
          }
        }
        else if (*(int *)(iVar1 + 0x20) == 0) {
          local_98 = DAT_00431694;
          local_94 = DAT_00431690;
          FUN_0037547c(DAT_004319f8,0,4,DAT_00431694);
          uVar19 = 1;
LAB_00432080:
          *(undefined4 *)(iVar1 + 0x20) = uVar19;
        }
LAB_00432084:
        if (!bVar17) goto code_r0x00430f18;
      }
    }
    else {
      local_98 = DAT_00431694;
      local_94 = DAT_00431690;
      FUN_0037547c(DAT_00431698,0,4,DAT_00431694);
      iVar15 = DAT_0043169c;
      if (*(int *)(DAT_0043169c + 0x44) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + 0x44) = 0;
      }
      if (*(int *)(iVar15 + 0x48) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + 0x48) = 0;
      }
      if (*(int *)(iVar1 + 0x20) == 0) {
        *(undefined4 *)(DAT_00431fdc + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0x18;
        goto LAB_00432084;
      }
    }
    local_98 = DAT_00431694;
    local_94 = DAT_00431690;
    FUN_0037547c(DAT_004319f4,0,4,DAT_00431694);
    iVar15 = DAT_0043169c;
    if (*(int *)(DAT_0043169c + 0x44) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar15 + 0x44) = 0;
    }
    if (*(int *)(iVar15 + 0x48) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar15 + 0x48) = 0;
    }
    local_38 = DAT_00432408;
    iVar15 = DAT_00431fdc;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar16 = DAT_0043240c;
    *(undefined4 *)(iVar15 + 0x14) = 0;
    local_34 = iVar16;
    iVar15 = 0;
    do {
      if (iVar15 - 0xa2U < 9) {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar15);
      }
      iVar6 = DAT_00431fcc;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0xb8);
    iVar7 = *(int *)(iVar1 + 0x14);
    iVar13 = local_74[iVar7 * 2 + *(int *)(iVar1 + 0x1c) + 6];
    *(undefined4 *)(DAT_00432414 + iVar13 * 4) = DAT_00432410;
    iVar15 = DAT_004319e0;
    *(int *)(DAT_004319e0 + iVar13 * 4) = iVar6;
    if (((iVar7 != 0) && (*(undefined4 *)(iVar15 + -0x5c) = 0, iVar7 == 1)) ||
       (DAT_00431328[1] = 0, iVar7 != 2)) {
      DAT_00431328[2] = 0;
    }
    uVar19 = DAT_00432418;
    DAT_00431328[iVar7] = 1;
    *(int *)(iVar1 + 0x48) = iVar16;
    *(undefined4 *)(iVar1 + 0x50) = uVar19;
    uVar19 = 0x13;
LAB_004321c8:
    *(undefined4 *)(iVar1 + 0x10) = uVar19;
    goto code_r0x00430f18;
  case 0x18:
    *(int *)(DAT_00431fdc + 0x14) = *(int *)(DAT_00431fdc + 0x14) + 1;
    FUN_002edb18(0xffffffff);
    if (*(int *)(iVar7 + 0x14) < 6) goto code_r0x004336fc;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    uVar19 = DAT_00431fc0;
    iVar16 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar7 + 0x90 + iVar16 * 4) = 1;
    uVar10 = DAT_00432424;
    *(undefined4 *)(iVar7 + 0xbc + iVar16 * 4) = uVar19;
    uVar19 = DAT_0043241c;
    iVar15 = DAT_00431fd4;
    *(undefined4 *)(iVar7 + 200 + iVar16 * 4) = DAT_0043241c;
    *(undefined4 *)(iVar7 + 0xd4 + iVar16 * 4) = uVar10;
    *(undefined4 *)(iVar7 + 0xe0 + iVar16 * 4) = uVar19;
    *(undefined4 *)(iVar7 + 0xec + iVar16 * 4) = DAT_00432428;
    *(int *)(iVar7 + 0xf8 + iVar16 * 4) = DAT_0043240c;
    iVar16 = local_74[iVar16 * 2 + *(int *)(iVar1 + 0x1c) + 6];
    *(undefined4 *)(iVar7 + 200 + iVar16 * 4) = DAT_0043242c;
    *(undefined4 *)(iVar7 + 0xf8 + iVar16 * 4) = DAT_00431fc8;
    local_74[2] = DAT_00431fcc;
    local_74[3] = DAT_00431fd0;
    local_74[4] = iVar15;
    local_74[5] = DAT_00431fd0;
    local_98 = 0x97;
    FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
    local_74[4] = iVar15;
    local_74[5] = DAT_00432430;
    local_98 = 0x9e;
    FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
    uVar19 = 0x19;
    goto LAB_00432400;
  case 0x19:
    iVar16 = *(int *)(DAT_00431fdc + 0x14) + 1;
    *(int *)(DAT_00431fdc + 0x14) = iVar16;
    *(undefined4 *)(iVar7 + 0x90) = 1;
    *(undefined4 *)(iVar7 + 0x94) = 1;
    *(undefined4 *)(iVar7 + 0x98) = 1;
    iVar15 = *(int *)(iVar1 + 0x28);
    if (3 < iVar16) {
      iVar15 = iVar15 + 1;
      *(int *)(iVar1 + 0x28) = iVar15;
    }
    if (iVar15 == 6) {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0x1a;
    }
    iVar15 = DAT_004327d4;
    local_74[4] = 0;
    local_74[5] = 0;
    if (*(int *)(iVar1 + 0x28) != 0) {
      iVar16 = 0;
      local_74[4] = DAT_0043240c;
      local_74[5] = DAT_0043240c;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar16);
        VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
        local_74[3] = iVar15;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),local_74 + 3,1,iVar16);
        iVar6 = iVar16;
        do {
          iVar16 = iVar6 + 1;
          if (0xb7 < iVar16) goto code_r0x00432528;
        } while ((5 < iVar16) && (uVar8 = iVar6 - 0xa1, iVar6 = iVar16, 9 < uVar8));
      } while( true );
    }
code_r0x00432528:
    FUN_002edbe8();
    break;
  case 0x1a:
    iVar15 = local_74[*(int *)(iVar1 + 0x14) * 2 + *(int *)(iVar1 + 0x1c) + 6];
    if (*(int *)(iVar1 + 0x28) == 0) {
      FUN_002ee864(0xf);
      FUN_002ee864(0x18);
    }
    if (*(int *)(iVar1 + 0x28) == 2) {
      if (((*DAT_004327d8 & 1) == 0) && (iVar16 = FUN_003679b4(DAT_004327d8), iVar16 != 0)) {
        FUN_0036788c(DAT_004327dc);
      }
      *(undefined1 *)(DAT_004327e8 + 0x21) = 1;
      FUN_002eda00(*(undefined4 *)(iVar1 + 0x14),iVar15);
      *(undefined4 *)(iVar1 + 0x10) = 0x1c;
    }
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
    break;
  case 0x1b:
    *DAT_004327ec = 1;
    puVar12[1] = 1;
    puVar12[2] = 1;
    FUN_002edbe8();
    iVar16 = local_74[*(int *)(iVar1 + 0x14) * 2 + *(int *)(iVar1 + 0x1c) + 6];
    iVar15 = FUN_002fdaa4();
    if (iVar15 != 0) {
      FUN_002ed9d8();
      FUN_002eda00(*(undefined4 *)(iVar1 + 0x14),iVar16);
      uVar19 = 0x1c;
      goto LAB_004311a4;
    }
    break;
  case 0x1c:
    iVar15 = FUN_002fdaa4();
    if (iVar15 != 0) {
      FUN_00447128();
      local_98 = DAT_00431694;
      local_94 = DAT_00431690;
      FUN_0037547c(DAT_004327f0,0,4,DAT_00431694);
      uVar19 = extraout_r1_00;
      if ((*DAT_004327d8 & 1) == 0) {
        uVar24 = FUN_003679b4(DAT_004327d8);
        uVar19 = (int)((ulonglong)uVar24 >> 0x20);
        if ((int)uVar24 != 0) {
          FUN_0036788c(DAT_004327dc);
          uVar19 = DAT_004327e4;
        }
      }
      iVar15 = DAT_004327f4;
      iVar16 = 0;
      *(undefined1 *)(DAT_004327e8 + 0x21) = 0;
      do {
        uVar24 = FUN_002eeec4(iVar16,uVar19);
        uVar19 = (undefined4)((ulonglong)uVar24 >> 0x20);
        *(int *)(iVar15 + iVar16 * 4) = (int)uVar24;
        iVar6 = DAT_004327f8;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      if (*(int *)(DAT_004327f8 + 0x3c) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar6 + 0x3c) = 0;
      }
      if (*(int *)(iVar6 + 0x60) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar6 + 0x60) = 0;
      }
      iVar16 = 0;
      do {
        if (*(int *)(iVar6 + iVar16 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + iVar16 * 4) = 0;
        }
        if (*(int *)(iVar6 + (iVar16 + 3) * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + (iVar16 + 3) * 4) = 0;
        }
        FUN_002ee864(iVar16);
        if (*(int *)(iVar15 + iVar16 * 4) != 0) {
          FUN_002ee864(iVar16 + 3);
        }
        uVar19 = DAT_00432418;
        iVar7 = DAT_0043240c;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      *(int *)(iVar1 + 0x48) = DAT_0043240c;
      *(undefined4 *)(iVar1 + 0x50) = uVar19;
      FUN_002ee864(0x10);
      iVar15 = DAT_00432408;
      iVar16 = 0;
      do {
        local_74[4] = iVar7;
        local_74[5] = iVar7;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar16);
        do {
          if (iVar16 - 0xa2U < 9) {
            local_74[4] = iVar15;
            local_74[5] = iVar7;
            FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar16);
          }
          iVar16 = iVar16 + 1;
          if (0xb7 < iVar16) {
            uVar19 = 0x20;
            goto LAB_004311a4;
          }
        } while ((5 < iVar16) && (iVar16 != 0xab));
      } while( true );
    }
    break;
  case 0x20:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar15 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_004327ec;
      if (iVar15 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 3;
        puVar11[3] = 1;
      }
    }
    else {
      local_98 = 2;
      iVar15 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_004327ec;
      if ((iVar15 != 0) && (*(int *)(iVar1 + 0xc) == 3)) {
        bVar17 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11[3] = 0;
      }
    }
    uVar8 = FUN_0033b5ec();
    if (((uVar8 & 2) != 0) || (uVar8 = FUN_0033b5ec(), (uVar8 & 1) != 0 || bVar17)) {
      local_98 = DAT_00432d10;
      local_94 = DAT_00432d0c;
      FUN_0037547c(DAT_004319f4,0,4,DAT_00432d10);
      uVar19 = 1;
      DAT_004327ec[3] = 1;
      if (bVar17) {
        uVar10 = 0;
      }
      else {
        uVar10 = 4;
      }
      *(undefined4 *)(iVar1 + 0x54) = uVar10;
      goto LAB_004321c8;
    }
code_r0x00430f18:
    FUN_002ee5e4();
LAB_00432a64:
    FUN_002edbe8();
    goto code_r0x004336fc;
  case 0x22:
    iVar15 = *(int *)(iVar1 + 0x54);
    if (iVar15 == 0) {
      if (*(int *)(DAT_00430e28 + 0x10) == 0) {
        if (*(int *)(DAT_00430e28 + 0x40) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + 0x40) = 0;
        }
        *(undefined4 *)(iVar1 + 0x48) = DAT_00430e3c;
        *(undefined4 *)(iVar1 + 0x50) = DAT_0043132c;
      }
      iVar15 = *(int *)(iVar6 + 0x10) + 1;
      *(int *)(iVar6 + 0x10) = iVar15;
      puVar11 = DAT_00431328;
      if (iVar15 == 5) {
        *(undefined4 *)(iVar1 + 0x28) = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0x24;
      }
      iVar15 = 0x7a;
      local_74[5] = DAT_00430e30;
      do {
        local_74[4] = VectorSignedToFloat(*(int *)(iVar6 + 0x10) * -0x50,
                                          (byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x86);
      goto code_r0x00430f18;
    }
    goto LAB_00430f34;
  case 0x24:
    iVar15 = *(int *)(DAT_00431fdc + 0x14) + -1;
    *(int *)(DAT_00431fdc + 0x14) = iVar15;
    if (iVar15 == 0) {
      FUN_002ee864(0x13);
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x10) = 0x25;
    }
    FUN_002ed908(1);
    break;
  case 0x25:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      puVar11 = DAT_004327ec;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        puVar11[7] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      if (iVar16 != 0) {
        uVar19 = 1;
        *(undefined4 *)(iVar1 + 0x24) = 1;
        puVar11 = DAT_004327ec;
        *(undefined4 *)(iVar1 + 0xc) = 1;
LAB_00432b7c:
        puVar11[8] = uVar19;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        bVar17 = true;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      puVar11 = DAT_004327ec;
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        iVar15 = 1;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        uVar19 = 0;
        puVar11[7] = 0;
        goto LAB_00432b7c;
      }
    }
    uVar8 = FUN_0033b5ec();
    iVar16 = DAT_00432d10;
    uVar19 = DAT_00432d0c;
    if ((uVar8 & 1) != 0 || iVar15 != 0) {
      if (*(int *)(iVar1 + 0x24) == 1) {
        DAT_004327ec[8] = 1;
        local_98 = iVar16;
        local_94 = uVar19;
        FUN_0037547c(DAT_00432d1c,0,4,iVar16);
        uVar19 = extraout_r1_01;
        if (iVar15 == 0) {
          uVar19 = 4;
        }
        *(undefined4 *)(iVar1 + 0x28) = 0;
        if (iVar15 == 0) {
          *(undefined4 *)(iVar1 + 0x54) = uVar19;
        }
        else {
          *(undefined4 *)(iVar1 + 0x54) = 0;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0x27;
        *(undefined4 *)(DAT_00431fdc + 0x14) = 0;
        return;
      }
      bVar17 = true;
    }
    uVar8 = FUN_0033b5ec();
    puVar11 = DAT_004327ec;
    if ((uVar8 & 2) == 0 && !bVar17) {
      uVar8 = FUN_0033b5d0();
      if ((uVar8 & 0x10) == 0) {
        uVar8 = FUN_0033b5d0();
        if (((uVar8 & 0x20) != 0) && (*(int *)(iVar1 + 0x24) == 1)) {
          local_98 = DAT_00432d10;
          local_94 = DAT_00432d0c;
          FUN_0037547c(DAT_00432d20,0,4,DAT_00432d10);
          uVar19 = 0;
          goto LAB_00432ce8;
        }
      }
      else if (*(int *)(iVar1 + 0x24) == 0) {
        local_98 = DAT_00432d10;
        local_94 = DAT_00432d0c;
        FUN_0037547c(DAT_00432d20,0,4,DAT_00432d10);
        uVar19 = 1;
LAB_00432ce8:
        *(undefined4 *)(iVar1 + 0x24) = uVar19;
      }
    }
    else {
      *(undefined4 *)(DAT_00431fdc + 0x14) = 0;
      puVar11[7] = 1;
      if ((bVar17) && (iVar15 == 1)) {
        *(undefined4 *)(iVar1 + 0x54) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x54) = 4;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0x26;
    }
code_r0x00432cf0:
    FUN_002ee5e4();
    FUN_002edbe8();
    goto code_r0x004336fc;
  case 0x26:
    iVar15 = *(int *)(iVar1 + 0x54);
    if (iVar15 == 0) {
      if (*(int *)(DAT_00431fdc + 0x14) == 0) {
        local_98 = DAT_00432d10;
        local_94 = DAT_00432d0c;
        FUN_0037547c(DAT_004319f4,0,4,DAT_00432d10);
        if (*(int *)(iVar7 + 0x70) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar7 + 0x70) = 0;
        }
      }
      iVar15 = *(int *)(iVar7 + 0x14) + 1;
      *(int *)(iVar7 + 0x14) = iVar15;
      if (iVar15 == 5) {
        *(int *)(iVar1 + 0x48) = DAT_00432d14;
        *(undefined4 *)(iVar1 + 0x50) = DAT_00432d18;
        *(undefined4 *)(iVar1 + 0x2c) = 1;
        *(undefined4 *)(iVar1 + 0x10) = 7;
      }
      FUN_002ed908(1);
      FUN_002ee5e4();
      goto code_r0x004336fc;
    }
LAB_00430f34:
    *(int *)(iVar1 + 0x54) = iVar15 + -1;
    goto LAB_00432a64;
  case 0x27:
    if (*(int *)(iVar1 + 0x54) != 0) goto code_r0x004311bc;
    if (*(int *)(DAT_00431fdc + 0x14) == 0) {
      *(undefined4 *)(DAT_00431fdc + 0xac) = 0;
      *(undefined4 *)(iVar7 + 0xb0) = 0;
      if (*(int *)(iVar7 + 0x70) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar7 + 0x70) = 0;
      }
    }
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    FUN_002ed908(0xffffffff);
    if (*(int *)(iVar7 + 0x14) < 5) goto code_r0x004336fc;
    *(undefined4 *)(iVar7 + 0x14) = 5;
    local_74[2] = DAT_004330b8;
    *(undefined4 *)(iVar1 + 0x24) = 1;
    iVar16 = DAT_004330c0;
    iVar15 = DAT_004330bc;
    local_74[3] = DAT_004330bc;
    local_74[4] = DAT_004330c0;
    local_74[5] = DAT_00432d14;
    local_98 = 0x89;
    FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
    local_74[4] = iVar16;
    local_74[5] = iVar15;
    local_98 = 0x90;
    FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
    uVar19 = 0x28;
    goto LAB_00432400;
  case 0x28:
    *(int *)(DAT_00431fdc + 0x14) = *(int *)(DAT_00431fdc + 0x14) + -1;
    FUN_002ed908(1);
    iVar15 = DAT_00432d14;
    if (0 < *(int *)(iVar7 + 0x14)) goto code_r0x004336fc;
    iVar16 = 0;
    do {
      if (iVar16 - 0xa2U < 9) {
        local_38 = iVar15;
        local_34 = iVar15;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar16);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xb8);
    FUN_002ee864(0x14);
    FUN_002ee864(0x15);
    uVar19 = 0x29;
LAB_00432400:
    *(undefined4 *)(iVar1 + 0x10) = uVar19;
    goto code_r0x004336fc;
  case 0x29:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      puVar11 = DAT_004327ec;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        puVar11[7] = 1;
      }
      local_98 = 1;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      puVar11 = DAT_004327ec;
      if (iVar16 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 1;
        *(undefined4 *)(iVar1 + 0xc) = 1;
        puVar11[8] = 1;
      }
    }
    else {
      local_98 = 2;
      iVar16 = FUN_0033f428(0x24,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 0)) {
        iVar15 = 1;
      }
      local_98 = 2;
      iVar16 = FUN_0033f428(0xa4,0x78,0x78,0x34);
      if ((iVar16 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        bVar17 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11 = DAT_004327ec;
        DAT_004327ec[7] = 0;
        puVar11[8] = 0;
      }
    }
    uVar8 = FUN_0033b5ec();
    iVar16 = DAT_004330c4;
    puVar11 = DAT_004327ec;
    if ((uVar8 & 1) != 0 || iVar15 != 0) {
      if (*(int *)(iVar1 + 0x24) == 0) {
        if (iVar15 == 0) {
          uVar19 = 4;
        }
        else {
          uVar19 = 0;
        }
        *(undefined4 *)(iVar1 + 0x54) = uVar19;
        *(undefined4 *)(iVar16 + 0x14) = 0;
        puVar11[7] = 1;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0x2a;
        return;
      }
      bVar17 = true;
    }
    uVar8 = FUN_0033b5ec();
    iVar16 = DAT_004330c4;
    puVar11 = DAT_004327ec;
    if ((uVar8 & 2) != 0 || bVar17) {
      if ((bVar17) && (iVar15 == 1)) {
        uVar19 = 0;
      }
      else {
        uVar19 = 4;
      }
      *(undefined4 *)(iVar1 + 0x54) = uVar19;
      puVar11[8] = 1;
      *(undefined4 *)(iVar16 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 1;
      uVar19 = 0x2a;
      goto LAB_0043305c;
    }
    uVar8 = FUN_0033b5d0();
    if ((uVar8 & 0x10) == 0) {
      uVar8 = FUN_0033b5d0();
      if (((uVar8 & 0x20) != 0) && (*(int *)(iVar1 + 0x24) == 1)) {
        local_98 = DAT_00432d10;
        local_94 = DAT_00432d0c;
        FUN_0037547c(DAT_00432d20,0,4,DAT_00432d10);
        uVar19 = 0;
        goto LAB_0043310c;
      }
    }
    else if (*(int *)(iVar1 + 0x24) == 0) {
      local_98 = DAT_00432d10;
      local_94 = DAT_00432d0c;
      FUN_0037547c(DAT_00432d20,0,4,DAT_00432d10);
      uVar19 = 1;
LAB_0043310c:
      *(undefined4 *)(iVar1 + 0x24) = uVar19;
    }
    goto LAB_00432a64;
  case 0x2a:
    if (*(int *)(iVar1 + 0x54) != 0) goto code_r0x004311bc;
    if (*(int *)(DAT_004330c4 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x2c) == 0) {
        local_98 = DAT_00432d10;
        local_94 = DAT_00432d0c;
        FUN_0037547c(DAT_004334f4,0,4,DAT_00432d10);
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      else {
        iVar15 = 0;
        do {
          if (iVar15 - 0xa2U < 9) {
            local_38 = iVar21;
            local_34 = iVar22;
            FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar15);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0xb8);
        local_98 = DAT_00432d10;
        local_94 = DAT_00432d0c;
        FUN_0037547c(DAT_004334f0,0,4,DAT_00432d10);
      }
      iVar15 = DAT_004327f8;
      if (*(int *)(DAT_004327f8 + 0x50) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + 0x50) = 0;
      }
      if (*(int *)(iVar15 + 0x54) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar15 + 0x54) = 0;
      }
    }
    *(int *)(iVar13 + 0x14) = *(int *)(iVar13 + 0x14) + 1;
    if (*(int *)(iVar1 + 0x2c) == 0) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = 1;
    }
    FUN_002ed908(uVar19);
    if (*(int *)(iVar13 + 0x14) == 5) {
      *(undefined4 *)(iVar13 + 0x14) = 0;
      if (*(int *)(iVar1 + 0x2c) == 0) {
        FUN_002ee864(0x16);
        FUN_002ee864(0x18);
        uVar19 = 0x2c;
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      else {
        *(int *)(iVar1 + 0x48) = DAT_004334ec;
        *(undefined4 *)(iVar1 + 0x50) = DAT_004334f8;
        *(undefined4 *)(iVar1 + 0x2c) = 1;
        uVar19 = 7;
      }
      local_74[2] = DAT_004330b8;
      *(undefined4 *)(iVar1 + 0x10) = uVar19;
      iVar16 = DAT_004330c0;
      iVar15 = DAT_004330bc;
      local_74[3] = DAT_004330bc;
      local_74[4] = DAT_004330c0;
      local_74[5] = DAT_004334ec;
      local_98 = 0x90;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
      local_74[4] = iVar16;
      local_74[5] = iVar15;
      local_98 = 0x89;
      FUN_002fc40c(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,local_74 + 2,1);
      return;
    }
    break;
  case 0x2b:
    iVar15 = *(int *)(DAT_004330c4 + 0x14) + 1;
    *(int *)(DAT_004330c4 + 0x14) = iVar15;
    if (iVar15 == 5) {
      FUN_002ee864(0x16);
      FUN_002ee864(0x18);
      *(undefined4 *)(iVar1 + 0x28) = 0;
      uVar19 = 0x2c;
      goto LAB_004311a4;
    }
    break;
  case 0x2c:
    iVar15 = *(int *)(iVar1 + 0x28) + 1;
    *(int *)(iVar1 + 0x28) = iVar15;
    if (iVar15 == 2) {
      if (((*DAT_004327d8 & 1) == 0) && (iVar15 = FUN_003679b4(DAT_004327d8), iVar15 != 0)) {
        FUN_0036788c(DAT_004327dc);
      }
      *(undefined1 *)(DAT_004327e8 + 0x21) = 1;
      FUN_00446fc4(*(undefined4 *)(iVar1 + 0x14));
    }
    else if ((2 < iVar15) && (iVar15 = FUN_002fdaa4(), iVar15 != 0)) {
      FUN_002ed9d8();
      uVar19 = extraout_r1_02;
      if ((*DAT_004327d8 & 1) == 0) {
        uVar24 = FUN_003679b4(DAT_004327d8);
        uVar19 = (int)((ulonglong)uVar24 >> 0x20);
        if ((int)uVar24 != 0) {
          FUN_0036788c(DAT_004327dc);
          uVar19 = DAT_004327e4;
        }
      }
      iVar15 = DAT_004327f4;
      iVar16 = 0;
      *(undefined1 *)(DAT_004327e8 + 0x21) = 0;
      do {
        uVar24 = FUN_002eeec4(iVar16,uVar19);
        uVar19 = (undefined4)((ulonglong)uVar24 >> 0x20);
        *(int *)(iVar15 + iVar16 * 4) = (int)uVar24;
        iVar6 = DAT_004327f8;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      iVar16 = 0;
      do {
        if (*(int *)(iVar6 + iVar16 * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + iVar16 * 4) = 0;
        }
        if (*(int *)(iVar6 + (iVar16 + 3) * 4) != 0) {
          FUN_002f6944();
          FUN_003525d4();
          *(undefined4 *)(iVar6 + (iVar16 + 3) * 4) = 0;
        }
        FUN_002ee864(iVar16);
        if (*(int *)(iVar15 + iVar16 * 4) != 0) {
          FUN_002ee864(iVar16 + 3);
        }
        iVar7 = DAT_004334ec;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      iVar15 = 0;
      local_74[4] = DAT_004334e8;
      local_74[5] = DAT_004334ec;
      do {
        if (iVar15 - 0xa2U < 9) {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0xb8);
      *(int *)(iVar1 + 0x48) = iVar7;
      *(undefined4 *)(iVar1 + 0x50) = DAT_004334f8;
      if (*(int *)(iVar6 + 0x58) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar6 + 0x58) = 0;
      }
      if (*(int *)(iVar6 + 0x60) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar6 + 0x60) = 0;
      }
      FUN_002ee864(0x17);
      iVar15 = 0;
      local_74[2] = 0;
      local_74[3] = 0;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 2,1,iVar15);
        do {
          iVar15 = iVar15 + 1;
          if (0xb7 < iVar15) {
            uVar19 = 0x2f;
            goto LAB_004311a4;
          }
        } while (5 < iVar15);
      } while( true );
    }
    break;
  case 0x2f:
    if (*(int *)(iVar1 + 0xc) == -1) {
      local_98 = 1;
      iVar15 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_004327ec;
      if (iVar15 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 3;
        puVar11[3] = 1;
      }
    }
    else {
      local_98 = 2;
      iVar15 = FUN_0033f428(4,0xcc,0x34,0x20);
      puVar11 = DAT_004327ec;
      if ((iVar15 != 0) && (*(int *)(iVar1 + 0xc) == 3)) {
        bVar17 = true;
      }
      if (local_44[0] == '\0') {
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        puVar11[3] = 0;
      }
    }
    uVar8 = FUN_0033b5ec();
    if (((uVar8 & 2) != 0) || (uVar8 = FUN_0033b5ec(), (uVar8 & 1) != 0 || bVar17)) {
      local_98 = DAT_00432d10;
      local_94 = DAT_00432d0c;
      FUN_0037547c(DAT_004334f0,0,4,DAT_00432d10);
      DAT_004327ec[3] = 1;
      if (bVar17) {
        uVar19 = 0;
      }
      else {
        uVar19 = 4;
      }
      *(undefined4 *)(iVar1 + 0x10) = 1;
      *(undefined4 *)(iVar1 + 0x54) = uVar19;
    }
    iVar15 = 0;
    local_74[4] = 0;
    local_74[5] = 0;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),local_74 + 4,1,iVar15);
      do {
        iVar15 = iVar15 + 1;
        if (0xb7 < iVar15) goto code_r0x00432cf0;
      } while (5 < iVar15);
    } while( true );
  }
  FUN_002ee5e4();
code_r0x004336fc:
  FUN_002ed224();
  FUN_00444e20();
  FUN_00445088();
  *(uint *)(param_1 + 0x89c) = (uint)(*(int *)(iVar1 + 0x10) - 1U < 3);
  iVar15 = extraout_s0;
  iVar16 = extraout_s1;
  iVar6 = extraout_s2;
  iVar7 = extraout_s3;
  iVar13 = extraout_s4;
  iVar21 = extraout_s5;
  iVar22 = extraout_s6;
  iVar23 = extraout_s7;
  if (((*DAT_004338b8 & 1) == 0) &&
     (iVar9 = FUN_003679b4(DAT_004338b8), puVar11 = DAT_004338c0, uVar19 = DAT_004338bc,
     iVar4 = DAT_004334ec, iVar15 = extraout_s0_00, iVar16 = extraout_s1_00, iVar6 = extraout_s2_00,
     iVar7 = extraout_s3_00, iVar13 = extraout_s4_00, iVar21 = extraout_s5_00,
     iVar22 = extraout_s6_00, iVar23 = extraout_s7_00, iVar9 != 0)) {
    *DAT_004338c0 = DAT_004338bc;
    puVar11[1] = iVar4;
    puVar11[2] = iVar4;
    puVar11[3] = iVar4;
    puVar11[4] = iVar4;
    puVar11[5] = uVar19;
    puVar11[6] = iVar4;
    puVar11[7] = iVar4;
    puVar11[8] = iVar4;
    puVar11[9] = iVar4;
    puVar11[10] = uVar19;
    puVar11[0xb] = iVar4;
    iVar15 = iVar4;
    iVar16 = iVar4;
    iVar6 = iVar4;
    iVar7 = iVar4;
    iVar13 = iVar4;
    iVar21 = iVar4;
    iVar22 = iVar4;
    iVar23 = iVar4;
  }
  FUN_00372224(iVar15,iVar16,iVar6,iVar7,iVar13,iVar21,iVar22,iVar23,auStack_8c,DAT_004338c0);
  local_98 = DAT_004334ec;
  local_94 = DAT_004334ec;
  local_90 = DAT_004334ec;
  FUN_002f9a1c(*(undefined4 *)(iVar1 + 0x30));
  uVar19 = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
  uVar10 = FUN_002f9a0c(*(undefined4 *)(iVar1 + 0x30));
  FUN_0036759c(*(undefined4 *)(iVar1 + 4),uVar10,uVar19);
  uVar19 = FUN_002fc3f0(*(undefined4 *)(iVar1 + 0x30),0);
  uVar10 = FUN_002f9a00(*(undefined4 *)(iVar1 + 0x30));
  FUN_00317d1c(*(undefined4 *)(iVar1 + 4),uVar10,uVar19);
  uVar19 = FUN_002fc3e4(*(undefined4 *)(iVar1 + 0x30),0);
  uVar10 = FUN_002f99f4(*(undefined4 *)(iVar1 + 0x30));
  FUN_002f9934(*(undefined4 *)(iVar1 + 4),uVar10,uVar19);
  (**(code **)(**(int **)(iVar1 + 8) + 8))(*(int **)(iVar1 + 8),auStack_8c,auStack_8c,&local_98);
  iVar15 = DAT_004338c4;
  iVar16 = 0;
  do {
    if (*(int *)(iVar15 + iVar16 * 4) != 0) {
      FUN_002f7684();
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x1b);
  if (*(int *)(iVar1 + 0x34) != 0) {
    FUN_002f94a8();
  }
  return;
}
