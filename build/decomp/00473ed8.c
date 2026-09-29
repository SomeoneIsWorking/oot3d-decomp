// OoT3D decomp @ 00473ed8  name=FUN_00473ed8  size=7260

void FUN_00473ed8(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  char cVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined2 uVar26;
  ushort uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined4 uVar33;
  undefined1 *puVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined4 uVar39;
  undefined1 uVar40;
  uint extraout_r2;
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  short *psVar46;
  int iVar47;
  bool bVar48;
  undefined8 uVar49;

  if (((*DAT_00474dc4 & 1) == 0) && (iVar28 = FUN_003679b4(DAT_00474dc4), iVar28 != 0)) {
    FUN_0036788c(DAT_00474dc8);
  }
  iVar28 = *(int *)(param_1 + 0x20ac);
  *(undefined1 *)(param_1 + 0x2ba0) = 0xff;
  puVar14 = DAT_00474dd8;
  if (0 < *(int *)(param_1 + 0x2b74)) {
    *(int *)(param_1 + 0x2b74) = *(int *)(param_1 + 0x2b74) + -1;
  }
  piVar13 = DAT_00474dd4;
  puVar12 = DAT_00474dc4;
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    *puVar14 = 0;
  }
  if (((*puVar12 & 1) == 0) && (iVar29 = FUN_003679b4(DAT_00474dc4), iVar29 != 0)) {
    FUN_0036788c(DAT_00474dc8);
  }
  iVar29 = (**(code **)(*piVar13 + 0xc))(piVar13);
  puVar34 = DAT_00474dd8;
  if (iVar29 != 0) {
    return;
  }
  if ((char)piVar13[0x3ce] == '\0') goto switchD_00473fe8_caseD_1a;
  switch(*(undefined1 *)(param_1 + 0x2a90)) {
  case 9:
  case 10:
  case 0xb:
    FUN_003523dc(1);
    iVar28 = FUN_003371d8();
    *(int *)(param_1 + 0x2a80) = iVar28;
    *(undefined2 *)(puVar14 + 2) = 0;
    *(undefined1 *)(iVar28 + 2) = 0;
    *(undefined2 *)(DAT_00474ddc + param_1) = 1;
    FUN_0033f2d8();
    *(undefined2 *)(puVar14 + 0xe) = 1;
    *(undefined2 *)(puVar14 + 0xc) = 3;
    if (*(char *)(param_1 + 0x2a90) != '\t') {
      if (*(char *)(param_1 + 0x2a90) == '\n') {
        *(undefined1 *)(param_1 + 0x2b73) = 0x1e;
        FUN_00340bdc(param_1,0x18);
      }
      else {
        FUN_0033704c((1 << (*(ushort *)(param_1 + 0x2b80) - 0xf & 0xff)) + 0x8000U & 0xffff);
        uVar43 = 0;
        iVar28 = (short)(*(short *)(param_1 + 0x2b80) + -0xf) * 9;
        iVar29 = iVar28 + DAT_00474de0;
        bVar1 = *(byte *)(DAT_00474de0 + iVar28);
        do {
          if (uVar43 < bVar1) {
            uVar40 = *(undefined1 *)(iVar29 + uVar43 + 1);
          }
          else {
            uVar40 = 0xff;
          }
          FUN_0048b7f4(piVar13,uVar43,uVar40);
          uVar43 = uVar43 + 1 & 0xffff;
        } while (uVar43 < 8);
        FUN_00340bdc(param_1,0x1b);
      }
      break;
    }
    uVar43 = (uint)*(ushort *)(param_1 + 0x2b80);
    if (uVar43 == 0) {
LAB_00474114:
      sVar17 = *(short *)(puVar14 + 10);
LAB_00474118:
      FUN_0033704c(sVar17);
    }
    else {
      if (uVar43 == 1) {
LAB_00474120:
        sVar17 = *(short *)(puVar14 + 10) + -0x4000;
        goto LAB_00474118;
      }
      if (uVar43 == 0x2c) goto LAB_00474114;
      if (uVar43 == 0x30) goto LAB_00474120;
      if (0x21 < uVar43) goto LAB_00474114;
      FUN_0033704c((1 << (uVar43 & 0xff)) + 0x8000U & 0xffff);
    }
    FUN_00340bdc(param_1,0xc);
    break;
  case 0xc:
    puVar34 = (undefined1 *)FUN_003371d8();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if (uVar43 != 0) {
      uVar41 = extraout_r2;
      if (uVar43 == 1) {
        uVar41 = (uint)*(ushort *)(puVar14 + 2);
      }
      if (uVar43 == 1 && uVar41 == 8) {
        *(undefined2 *)(puVar14 + 2) = 0;
      }
      if (uVar43 - 1 == (int)*(short *)(puVar14 + 2)) {
        *(undefined1 *)(param_1 + 0x2ba0) = *puVar34;
        FUN_002d038c((byte)(*(undefined1 **)(param_1 + 0x2a80))[2] - 1,
                     **(undefined1 **)(param_1 + 0x2a80));
        *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
      }
    }
    *(ushort *)(param_1 + 0x2b7c) = (ushort)*(byte *)(*(int *)(param_1 + 0x2a80) + 1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x2a80) + 1);
    uVar43 = (uint)bVar1;
    if (0xc < uVar43) {
      if (uVar43 == 0xff) {
        FUN_003523dc(0);
        FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
        *(undefined1 *)(param_1 + 0x2b73) = 0xf;
        FUN_00340bdc(param_1,0xe);
      }
      else {
        iVar28 = FUN_0043c1ec();
        if ((iVar28 == 2) && (iVar28 = FUN_00374be8(param_1,5), iVar28 != 0)) {
          uVar43 = *(uint *)(param_1 + 0x18);
          bVar48 = (uVar43 & *DAT_00474e04) == 0;
          if (bVar48) {
            uVar43 = (uint)*(byte *)(param_1 + 0x6016);
          }
          if (!bVar48 || uVar43 != 0) {
            uVar43 = 1;
          }
          if (uVar43 != 0) {
            FUN_003523dc(0);
            iVar28 = DAT_00474ddc;
            *(undefined1 *)(param_1 + 0x2ba1) = 1;
            *(undefined2 *)(iVar28 + param_1) = 4;
            FUN_003725e0(param_1);
          }
        }
      }
      break;
    }
    if ((uVar43 == 0xc) ||
       ((*(uint *)(DAT_00474de4 + 0xbc) &
        *(uint *)(DAT_00474dec + *(short *)(DAT_00474de8 + uVar43 * 2) * 4 + 0x18)) != 0)) {
      *(ushort *)(param_1 + 0x2b7c) = (ushort)bVar1;
      *(ushort *)(param_1 + 0x2b82) = (ushort)bVar1;
      *(ushort *)(puVar14 + 6) = (ushort)bVar1;
      *(undefined1 *)(param_1 + 0x2b73) = 0x1e;
      sVar17 = *(short *)(param_1 + 0x2b80);
      if (sVar17 == 0x30) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x2a80) + 1);
        if ((bVar1 < 6) || (bVar1 == 0xc)) {
          FUN_003523dc(0);
          FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
          FUN_00340bdc(param_1,9);
        }
        else {
LAB_00474390:
          FUN_0036be34(param_1,DAT_00474dfc);
          FUN_00340bdc(param_1,0x11);
          *(undefined1 *)(param_1 + 0x2a88) = 3;
          uVar39 = DAT_00474df4;
          uVar33 = DAT_00474df0;
          *(undefined1 *)(param_1 + 0x2b73) = 0xf;
          FUN_0037547c(DAT_00474e00,0,4,uVar39,uVar39,uVar33);
          FUN_0034be04(1);
        }
      }
      else if (sVar17 == 0x28) {
        if (0xb < *(byte *)(*(int *)(param_1 + 0x2a80) + 1)) goto LAB_00474390;
        FUN_003523dc(0);
        FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
        *(undefined1 *)(param_1 + 0x2b73) = 0xf;
        FUN_00340bdc(param_1,0xe);
      }
      else if (sVar17 == 1) {
        FUN_0036be34(param_1,DAT_00474dfc);
        FUN_00340bdc(param_1,0x11);
        *(undefined1 *)(param_1 + 0x2a88) = 3;
        uVar39 = DAT_00474df4;
        uVar33 = DAT_00474df0;
        *(undefined1 *)(param_1 + 0x2b73) = 0xf;
        FUN_0037547c(DAT_00474e00,0,4,uVar39,uVar39,uVar33);
      }
      else {
        FUN_0037547c(DAT_00474e00,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
        FUN_0048b980(piVar13);
        FUN_00340bdc(param_1,0xd);
      }
      FUN_0034be04(1);
      break;
    }
    FUN_003523dc(0);
    FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
    goto LAB_00474bcc;
  case 0xd:
  case 0x1c:
  case 0x27:
    uVar27 = *(ushort *)(puVar14 + 0xe);
    iVar28 = (int)(short)uVar27;
    psVar46 = (short *)(DAT_00474e08 + iVar28 * 6);
    sVar17 = *(short *)(puVar14 + 0x10);
    iVar44 = (int)sVar17;
    sVar2 = *psVar46;
    iVar35 = (int)sVar2;
    iVar29 = iVar44 - iVar35;
    if (iVar29 < 0) {
      iVar29 = iVar35 - iVar44;
    }
    sVar3 = *(short *)(DAT_00474dd8 + 0xc);
    iVar36 = (int)sVar3;
    sVar18 = FUN_00368d94(iVar29);
    sVar4 = psVar46[1];
    iVar29 = (int)sVar4;
    sVar5 = *(short *)(puVar34 + 0x14);
    iVar45 = (int)sVar5;
    iVar30 = iVar45 - iVar29;
    if (iVar30 < 0) {
      iVar30 = iVar29 - iVar45;
    }
    sVar19 = FUN_00368d94(iVar30,iVar36);
    sVar6 = psVar46[2];
    iVar30 = (int)sVar6;
    sVar7 = *(short *)(DAT_00474dd8 + 0x12);
    iVar47 = (int)sVar7;
    iVar31 = iVar47 - iVar30;
    if (iVar31 < 0) {
      iVar31 = iVar30 - iVar47;
    }
    sVar20 = FUN_00368d94(iVar31,iVar36);
    if (iVar35 <= iVar44) {
      sVar18 = -sVar18;
    }
    *(short *)(DAT_00474dd8 + 0x10) = sVar17 + sVar18;
    puVar14 = DAT_00474dd8;
    if (iVar29 <= iVar45) {
      sVar19 = -sVar19;
    }
    *(short *)(DAT_00474dd8 + 0x14) = sVar19 + sVar5;
    if (iVar30 <= iVar47) {
      sVar20 = -sVar20;
    }
    *(short *)(puVar14 + 0x12) = sVar20 + sVar7;
    sVar17 = *(short *)(puVar14 + 0x16);
    psVar46 = (short *)(DAT_00474e0c + iVar28 * 6);
    sVar5 = *psVar46;
    iVar35 = (int)sVar5;
    iVar29 = sVar17 - iVar35;
    if (iVar29 < 0) {
      iVar29 = iVar35 - sVar17;
    }
    sVar19 = FUN_00368d94(iVar29,iVar36);
    sVar18 = psVar46[1];
    iVar29 = (int)sVar18;
    sVar7 = *(short *)(puVar14 + 0x1a);
    iVar44 = sVar7 - iVar29;
    if (iVar44 < 0) {
      iVar44 = iVar29 - sVar7;
    }
    sVar21 = FUN_00368d94(iVar44,iVar36);
    puVar34 = DAT_00474dd8;
    sVar20 = psVar46[2];
    iVar44 = (int)sVar20;
    sVar8 = *(short *)(puVar14 + 0x18);
    iVar30 = sVar8 - iVar44;
    if (iVar30 < 0) {
      iVar30 = iVar44 - sVar8;
    }
    sVar22 = FUN_00368d94(iVar30,iVar36);
    sVar9 = *(short *)(puVar34 + 0x22);
    iVar30 = (int)sVar9;
    if (iVar35 <= iVar30) {
      sVar19 = -sVar19;
    }
    *(short *)(DAT_00474dd8 + 0x16) = sVar19 + sVar17;
    puVar14 = DAT_00474dd8;
    sVar17 = *(short *)(DAT_00474dd8 + 0x26);
    iVar35 = (int)sVar17;
    if (iVar29 <= iVar35) {
      sVar21 = -sVar21;
    }
    *(short *)(DAT_00474dd8 + 0x1a) = sVar21 + sVar7;
    sVar7 = *(short *)(puVar14 + 0x24);
    iVar29 = (int)sVar7;
    if (iVar44 <= iVar29) {
      sVar22 = -sVar22;
    }
    *(short *)(puVar14 + 0x18) = sVar22 + sVar8;
    psVar46 = (short *)(DAT_00474e10 + iVar28 * 6);
    sVar19 = *psVar46;
    iVar45 = (int)sVar19;
    sVar8 = *(short *)(puVar14 + 0x1c);
    iVar31 = (int)sVar8;
    iVar44 = iVar31 - iVar45;
    if (iVar44 < 0) {
      iVar44 = iVar45 - iVar31;
    }
    sVar23 = FUN_00368d94(iVar44,iVar36);
    sVar21 = psVar46[1];
    iVar44 = (int)sVar21;
    sVar22 = *(short *)(DAT_00474dd8 + 0x20);
    iVar37 = (int)sVar22;
    iVar47 = iVar37 - iVar44;
    if (iVar47 < 0) {
      iVar47 = iVar44 - iVar37;
    }
    sVar24 = FUN_00368d94(iVar47,iVar36);
    sVar10 = psVar46[2];
    iVar47 = (int)sVar10;
    sVar11 = *(short *)(DAT_00474dd8 + 0x1e);
    iVar38 = (int)sVar11;
    iVar32 = iVar38 - iVar47;
    if (iVar32 < 0) {
      iVar32 = iVar47 - iVar38;
    }
    sVar25 = FUN_00368d94(iVar32,iVar36);
    if (iVar45 <= iVar31) {
      sVar23 = -sVar23;
    }
    *(short *)(DAT_00474dd8 + 0x1c) = sVar23 + sVar8;
    puVar14 = DAT_00474dd8;
    if (iVar44 <= iVar37) {
      sVar24 = -sVar24;
    }
    *(short *)(DAT_00474dd8 + 0x20) = sVar22 + sVar24;
    if (iVar47 <= iVar38) {
      sVar25 = -sVar25;
    }
    *(short *)(puVar14 + 0x1e) = sVar25 + sVar11;
    psVar46 = (short *)(DAT_00474e14 + iVar28 * 6);
    sVar8 = *psVar46;
    iVar44 = (int)sVar8;
    iVar28 = iVar30 - iVar44;
    if (iVar28 < 0) {
      iVar28 = iVar44 - iVar30;
    }
    sVar23 = FUN_00368d94(iVar28,iVar36);
    sVar22 = psVar46[1];
    iVar45 = (int)sVar22;
    iVar28 = iVar35 - iVar45;
    if (iVar28 < 0) {
      iVar28 = iVar45 - iVar35;
    }
    sVar24 = FUN_00368d94(iVar28,iVar36);
    sVar11 = psVar46[2];
    iVar28 = (int)sVar11;
    iVar31 = iVar29 - iVar28;
    if (iVar31 < 0) {
      iVar31 = iVar28 - iVar29;
    }
    sVar25 = FUN_00368d94(iVar31,iVar36);
    if (iVar44 <= iVar30) {
      sVar23 = -sVar23;
    }
    *(short *)(DAT_00474dd8 + 0x22) = sVar23 + sVar9;
    puVar14 = DAT_00474dd8;
    if (iVar45 <= iVar35) {
      sVar24 = -sVar24;
    }
    *(short *)(DAT_00474dd8 + 0x26) = sVar24 + sVar17;
    if (iVar28 <= iVar29) {
      sVar25 = -sVar25;
    }
    *(short *)(puVar14 + 0x24) = sVar25 + sVar7;
    sVar3 = sVar3 + -1;
    *(short *)(puVar14 + 0xc) = sVar3;
    if (sVar3 == 0) {
      *(short *)(puVar14 + 0x10) = sVar2;
      *(short *)(puVar14 + 0x14) = sVar4;
      *(short *)(puVar14 + 0x12) = sVar6;
      *(short *)(puVar14 + 0x16) = sVar5;
      *(short *)(puVar14 + 0x1a) = sVar18;
      *(short *)(puVar14 + 0x18) = sVar20;
      *(short *)(puVar14 + 0x1c) = sVar19;
      *(short *)(puVar14 + 0x20) = sVar21;
      *(short *)(puVar14 + 0x1e) = sVar10;
      *(short *)(puVar14 + 0x22) = sVar8;
      *(short *)(puVar14 + 0x26) = sVar22;
      *(short *)(puVar14 + 0x24) = sVar11;
      *(undefined2 *)(puVar14 + 0xc) = 3;
      *(ushort *)(puVar14 + 0xe) = uVar27 ^ 1;
    }
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 != '\0') break;
    FUN_003523dc(0);
    if (*(char *)(param_1 + 0x2a90) != '\r') {
      if (*(char *)(param_1 + 0x2a90) != '\x1c') {
        FUN_003725e0(param_1);
        goto LAB_0047507c;
      }
      if (*(ushort *)(param_1 + 0x2b7c) < 6) {
        FUN_003725e0(param_1);
        goto LAB_00475098;
      }
    }
    FUN_0036be34(param_1,DAT_00474dfc);
    FUN_00340bdc(param_1,0x11);
    *(undefined1 *)(param_1 + 0x2a88) = 3;
    cVar16 = '\x02';
    goto LAB_00475a88;
  case 0xe:
  case 0xf:
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 == '\0') {
      *(undefined2 *)(*DAT_00474e18 + 0xf7a) = 1;
      FUN_0048b8d8(piVar13);
      FUN_00340bdc(param_1,0x10);
    }
    break;
  case 0x10:
  case 0x1e:
    iVar28 = *DAT_00474e18;
    sVar2 = *(short *)(iVar28 + 0xf7a);
    *(short *)(iVar28 + 0xf6e) = *(short *)(iVar28 + 0xf6e) + sVar2;
    *(short *)(iVar28 + 0xf70) = *(short *)(iVar28 + 0xf70) + sVar2;
    *(short *)(iVar28 + 0xf72) = *(short *)(iVar28 + 0xf72) + sVar2;
    *(short *)(iVar28 + 0xf74) = *(short *)(iVar28 + 0xf74) + sVar2;
    sVar17 = sVar2 << 1;
    *(short *)(iVar28 + 0xf76) = *(short *)(iVar28 + 0xf76) + sVar2;
    *(short *)(iVar28 + 0xf7a) = sVar17;
    if (sVar17 < DAT_00474e1c) break;
    iVar28 = (int)sVar17;
    if ((*DAT_00474dc4 & 1) == 0) {
      uVar49 = FUN_003679b4(DAT_00474dc4);
      iVar28 = (int)((ulonglong)uVar49 >> 0x20);
      if ((int)uVar49 != 0) {
        FUN_0036788c(DAT_00474dc8);
        iVar28 = DAT_00474dd0;
      }
    }
    FUN_002c0ca4(piVar13,iVar28);
    FUN_00303b14(DAT_00474e20,9,0xff);
    puVar15 = DAT_00474e24;
    *DAT_00474e24 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    if (*(char *)(param_1 + 0x2a90) == '\x1e') {
      FUN_002d0320(piVar13,DAT_00474e28,0);
      *(undefined4 *)(param_1 + 0x2b74) = 0x41;
      FUN_00340bdc(param_1,0x1f);
      break;
    }
LAB_00474bcc:
    FUN_00340bdc(param_1,9);
    break;
  case 0x11:
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 == '\0') {
      FUN_003523dc(0);
      *(undefined1 *)((int)piVar13 + 0xd) = 1;
      FUN_00340bdc(param_1,0x12);
      iVar29 = FUN_003371d8();
      *(int *)(param_1 + 0x2a80) = iVar29;
      *(undefined2 *)(puVar14 + 2) = 0;
      *(undefined1 *)(iVar29 + 2) = 0;
      FUN_0033f2d8();
      uVar43 = (uint)*(ushort *)(param_1 + 0x2b7c);
      if (uVar43 - 6 < 7) {
        z_actor_003738d0(*(undefined4 *)(iVar28 + 0x28),*(undefined4 *)(iVar28 + 0x2c),
                         *(undefined4 *)(iVar28 + 0x30),param_1 + 0x208c,param_1,
                         (int)*(short *)(DAT_00474e30 + uVar43 * 2 + -0xc),0,0,0,
                         (int)*(short *)(DAT_00474e2c + uVar43 * 2 + -0xc),1);
      }
    }
    break;
  case 0x12:
    FUN_003523dc(1);
    FUN_003523dc(1);
    FUN_0033f248((int)(char)((char)*(undefined2 *)(param_1 + 0x2b7c) + '\x01'),1);
    if (*(ushort *)(param_1 + 0x2b7c) != 0xc) {
      FUN_0035c528(*(undefined4 *)(DAT_00474e34 + (uint)*(ushort *)(param_1 + 0x2b7c) * 4));
      FUN_00347cc4(0x20);
    }
    *(undefined2 *)(DAT_00474ddc + param_1) = 1;
    if (*(short *)(param_1 + 0x2b80) == 1) {
      uVar26 = 0x29;
LAB_00474d10:
      *(undefined2 *)(param_1 + 0x2b80) = uVar26;
    }
    else if (*(short *)(param_1 + 0x2b80) == 0x30) {
      uVar26 = 0x31;
      goto LAB_00474d10;
    }
    *(undefined2 *)(puVar14 + 2) = 0;
    FUN_00340bdc(param_1,0x13);
    break;
  case 0x13:
  case 0x19:
    iVar28 = FUN_0033f400();
    *(int *)(param_1 + 0x2a80) = iVar28;
    if ((*(char *)(iVar28 + 1) == '\0') && (0 < *(short *)(puVar14 + 2))) {
      if (*(char *)(param_1 + 0x2a90) == '\x13') {
        FUN_00340bdc(param_1,0x14);
      }
      else {
        FUN_00340bdc(param_1,0x1a);
      }
    }
    else {
      if ((short)(ushort)*(byte *)(iVar28 + 2) < *(short *)(puVar14 + 2)) {
        FUN_0033f2d8();
        *(undefined2 *)(puVar14 + 2) = 0;
      }
      uVar43 = (uint)(byte)(*(undefined1 **)(param_1 + 0x2a80))[2];
      if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
        *(undefined1 *)(param_1 + 0x2ba0) = **(undefined1 **)(param_1 + 0x2a80);
        FUN_002d038c((byte)(*(undefined1 **)(param_1 + 0x2a80))[2] - 1,
                     **(undefined1 **)(param_1 + 0x2a80));
        *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
      }
    }
    break;
  case 0x14:
    FUN_002d0320(piVar13,*(ushort *)(param_1 + 0x2b7c) + 0x893,0);
    *(undefined1 *)((int)piVar13 + 0xd) = 1;
    FUN_00340bdc(param_1,0x15);
    cVar16 = '\x1e';
    goto LAB_00475a88;
  case 0x15:
    cVar16 = *(char *)(param_1 + 0x2b73);
    if (cVar16 == '\0') {
      if (((*(ushort *)(param_1 + 0x2b7c) < 6) && (5 < *(ushort *)(param_1 + 0x2b80) - 0xf)) ||
         (iVar28 = FUN_0032c800(1), iVar28 == 0)) {
        FUN_00340bdc(param_1,0x16);
      }
      break;
    }
    goto LAB_00474ecc;
  case 0x16:
    FUN_003523dc(0);
    FUN_0033f2d8();
    FUN_00340bdc(param_1,0x17);
    cVar16 = '\x03';
    goto LAB_00475a88;
  case 0x17:
    cVar16 = *(char *)(param_1 + 0x2b73);
    if (cVar16 != '\0') goto LAB_00474ecc;
    if ((5 < *(ushort *)(param_1 + 0x2b7c)) || (*(ushort *)(param_1 + 0x2b80) - 0xf < 6)) {
      FUN_003725e0(param_1);
      if (*(short *)(param_1 + 0x2b7c) == 7) {
        *(undefined2 *)(*DAT_00474e18 + 0x5be) = 1;
      }
      uVar43 = (uint)*(ushort *)(param_1 + 0x2b80);
      if (uVar43 == 0x29) {
        *(undefined2 *)(param_1 + 0x2b7e) = 1;
        if (*(short *)(param_1 + 0x2b7c) == 0xc) {
          *(undefined2 *)(param_1 + 0x2b7e) = 0xb;
        }
        break;
      }
      uVar27 = *(ushort *)(param_1 + 0x2b7c);
      if (uVar43 < 0x1c) {
        if ((uint)uVar27 != uVar43 - 0xf) goto LAB_00475098;
      }
      else if ((uint)uVar27 != uVar43 - 0x1c) {
        *(ushort *)(DAT_00474ddc + param_1) = uVar27 - 1;
        break;
      }
      goto LAB_0047507c;
    }
    if ((*(short *)(param_1 + 0x2b9c) == 0) && (*(char *)(param_1 + 0x2e49) != '\x03')) {
      if ((*(ushort *)(DAT_00475c5c + 0x8a) & 0xf) != 1) {
        FUN_00367c7c(param_1,*(ushort *)(param_1 + 0x2b7c) + 0x88d,0);
        FUN_00340bdc(param_1,0);
        *(undefined2 *)(DAT_00474ddc + param_1) = 1;
        break;
      }
      FUN_003725e0(param_1);
      FUN_00340bdc(param_1,0);
    }
    else {
      FUN_003655d0(1,0xf);
      FUN_0037547c(DAT_00475c54,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
      FUN_00367c7c(param_1,DAT_00475c58,0);
      FUN_00340bdc(param_1,0);
    }
    goto LAB_00475098;
  case 0x18:
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 == '\0') {
      uVar27 = *(ushort *)(param_1 + 0x2b80);
      if (uVar27 < 8) {
        FUN_003523dc(4);
      }
      else {
        if (uVar27 == 9) {
          uVar33 = 2;
        }
        else if (uVar27 == 10) {
          uVar33 = 3;
        }
        else if (uVar27 == 0xd) {
          uVar33 = 5;
        }
        else {
          uVar33 = 1;
        }
        FUN_003523dc(uVar33);
      }
      FUN_0033f248((int)(char)((char)*(undefined2 *)(param_1 + 0x2b80) + -1),2);
      *(undefined2 *)(puVar14 + 2) = 0;
      FUN_00340bdc(param_1,0x19);
    }
    break;
  case 0x1a:
  case 0x33:
    break;
  case 0x1b:
    puVar34 = (undefined1 *)FUN_003371d8();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
      FUN_002d038c(uVar43 - 1,*puVar34);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x2a80) + 1);
    if (bVar1 < 0xd) {
      *(ushort *)(param_1 + 0x2b7c) = (ushort)bVar1;
      FUN_00340bdc(param_1,0x1c);
      FUN_00376a78(param_1,*(short *)(DAT_00474de8 +
                                     (uint)*(byte *)(*(int *)(param_1 + 0x2a80) + 1) * 2) + 0x5aU &
                           0xff);
      uVar39 = DAT_00474df4;
      uVar33 = DAT_00474df0;
      *(undefined1 *)(param_1 + 0x2b73) = 0x1e;
      FUN_0037547c(DAT_00474e00,0,4,uVar39,uVar39,uVar33);
      FUN_0048b980(piVar13);
    }
    else if (bVar1 == 0xff) {
      FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
      *(undefined1 *)(param_1 + 0x2b73) = 0xf;
      FUN_00340bdc(param_1,0x1d);
    }
    break;
  case 0x1d:
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 == '\0') {
      *(undefined2 *)(*DAT_00474e18 + 0xf7a) = 1;
      FUN_0048b8d8(piVar13);
      *(undefined1 *)((int)piVar13 + 0xd) = 1;
      FUN_00340bdc(param_1,0x1e);
    }
    break;
  case 0x1f:
    if ((*(int *)(param_1 + 0x2b74) < 0x3c) &&
       ((iVar28 = FUN_0034696c(param_1,1), iVar28 != 0 || (*(int *)(param_1 + 0x2b74) < 1)))) {
      *puVar14 = 1;
      uVar26 = *(undefined2 *)(param_1 + 0x2b80);
      *(undefined2 *)(param_1 + 0x2b9e) = 0;
      FUN_00343f0c(param_1,param_1 + 0x224c);
      FUN_003438a4(param_1,uVar26);
    }
    break;
  default:
    *(undefined1 *)(param_1 + 0x2ba0) = 0xff;
    break;
  case 0x21:
    FUN_002d0264(1);
    FUN_003523dc(1);
    iVar28 = FUN_002d0258();
    *(int *)(param_1 + 0x2a80) = iVar28;
    *(undefined2 *)(puVar14 + 2) = 0;
    *(undefined1 *)(iVar28 + 2) = 0;
    *(undefined2 *)(puVar14 + 4) = 0;
    FUN_0033f2d8();
    FUN_00340bdc(param_1,0x22);
    break;
  case 0x22:
    iVar29 = FUN_002d0258();
    *(int *)(param_1 + 0x2a80) = iVar29;
    iVar28 = DAT_00474e20;
    if ((*(byte *)(iVar29 + 2) != 0) && (*(byte *)(iVar29 + 2) - 1 == (int)*(short *)(puVar14 + 2)))
    {
      if (7 < *(short *)(puVar14 + 4)) {
        uVar43 = (int)*(short *)(puVar14 + 4) - 8;
        uVar27 = 0;
        do {
          uVar43 = uVar43 & 0xffff;
          FUN_002d038c(uVar43,*(undefined1 *)(iVar28 + uVar43 + 1));
          uVar27 = uVar27 + 1;
          uVar43 = uVar43 + 1;
        } while (uVar27 < 8);
        *(short *)(puVar14 + 4) = *(short *)(puVar14 + 4) + -1;
      }
      *(undefined1 *)(param_1 + 0x2ba0) = **(undefined1 **)(param_1 + 0x2a80);
      FUN_002d038c((int)*(short *)(puVar14 + 4),**(undefined1 **)(param_1 + 0x2a80));
      sVar17 = *(short *)(puVar14 + 4);
      *(short *)(puVar14 + 4) = sVar17 + 1;
      FUN_002d038c((int)(short)(sVar17 + 1),0xff);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
      if (*(char *)(*(int *)(param_1 + 0x2a80) + 2) == '\b') {
        *(undefined2 *)(puVar14 + 2) = 0;
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x2a80) + 1) != '\0') {
      iVar28 = FUN_0043c1ec();
      if ((iVar28 != 2) || (iVar28 = FUN_00374be8(param_1,5), iVar28 == 0)) break;
      uVar43 = *(uint *)(param_1 + 0x18);
      bVar48 = (uVar43 & *DAT_00474e04) == 0;
      if (bVar48) {
        uVar43 = (uint)*(byte *)(param_1 + 0x6016);
      }
      if (!bVar48 || uVar43 != 0) {
        uVar43 = 1;
      }
      if (uVar43 == 0) break;
    }
    uVar39 = DAT_00474df4;
    uVar33 = DAT_00474df0;
    if (*(short *)(puVar14 + 4) != 0) {
      *(undefined1 *)(DAT_00474de4 + 0xf58) = 1;
    }
    FUN_0037547c(DAT_00474df8,0,4,uVar39,uVar39,uVar33);
    FUN_002d0264(0);
    iVar28 = DAT_00474ddc;
    *(undefined1 *)(param_1 + 0x2b73) = 0xf;
    *(undefined2 *)(iVar28 + param_1) = 4;
    FUN_003725e0(param_1);
    uVar42 = 0x360;
    uVar39 = *DAT_00475c60;
    uVar33 = DAT_00475c64;
    goto LAB_004756ec;
  case 0x23:
  case 0x28:
    iVar29 = FUN_0033f400();
    puVar12 = DAT_00474e04;
    *(int *)(param_1 + 0x2a80) = iVar29;
    iVar28 = DAT_00474e20;
    uVar43 = *(uint *)(param_1 + 0x18);
    bVar48 = (uVar43 & *puVar12) == 0;
    if (bVar48) {
      uVar43 = (uint)*(byte *)(param_1 + 0x6016);
    }
    if (!bVar48 || uVar43 != 0) {
      uVar43 = 1;
    }
    if (uVar43 == 0) {
      if ((*(byte *)(iVar29 + 2) != 0) &&
         (*(byte *)(iVar29 + 2) - 1 == (int)*(short *)(puVar14 + 2))) {
        if (7 < *(short *)(puVar14 + 4)) {
          uVar43 = (int)*(short *)(puVar14 + 4) - 8;
          uVar27 = 0;
          do {
            uVar43 = uVar43 & 0xffff;
            FUN_002d038c(uVar43,*(undefined1 *)(iVar28 + uVar43 + 1));
            uVar27 = uVar27 + 1;
            uVar43 = uVar43 + 1;
          } while (uVar27 < 8);
          *(short *)(puVar14 + 4) = *(short *)(puVar14 + 4) + -1;
        }
        FUN_002d038c((int)*(short *)(puVar14 + 4),**(undefined1 **)(param_1 + 0x2a80));
        sVar17 = *(short *)(puVar14 + 4);
        *(short *)(puVar14 + 4) = sVar17 + 1;
        FUN_002d038c((int)(short)(sVar17 + 1),0xff);
        *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
        if (*(char *)(*(int *)(param_1 + 0x2a80) + 2) == '\b') {
          *(undefined2 *)(puVar14 + 4) = 0;
          *(undefined2 *)(puVar14 + 2) = 0;
        }
      }
      cVar16 = *(char *)(param_1 + 0x2b73);
      if (cVar16 != '\0') goto LAB_00474ecc;
      if (*(char *)(*(int *)(param_1 + 0x2a80) + 1) != '\0') break;
    }
    else {
      FUN_0033f248(0,1);
    }
    FUN_003523dc(0);
    *(undefined2 *)(DAT_00474ddc + param_1) = 0xf;
    FUN_003725e0(param_1);
    break;
  case 0x24:
    FUN_002d0264(2);
    FUN_003523dc(1);
    FUN_00340bdc(param_1,0x25);
    break;
  case 0x25:
    puVar34 = (undefined1 *)FUN_002d0258();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    if (((byte)puVar34[2] != 0) &&
       (sVar17 = *(short *)(puVar14 + 2), (byte)puVar34[2] - 1 == (int)sVar17)) {
      *(undefined1 *)(param_1 + 0x2ba0) = *puVar34;
      FUN_002d038c((int)sVar17,**(undefined1 **)(param_1 + 0x2a80));
      sVar17 = *(short *)(puVar14 + 2);
      *(short *)(puVar14 + 2) = sVar17 + 1;
      FUN_002d038c((int)(short)(sVar17 + 1),0xff);
    }
    iVar28 = DAT_00475c68;
    cVar16 = *(char *)(*(int *)(param_1 + 0x2a80) + 1);
    if (cVar16 != '\0') {
      if (cVar16 != -1) {
        iVar28 = FUN_0043c1ec();
        if ((iVar28 != 2) || (iVar28 = FUN_00374be8(param_1,5), iVar28 == 0)) break;
        uVar43 = *(uint *)(param_1 + 0x18);
        bVar48 = (uVar43 & *DAT_00474e04) == 0;
        if (bVar48) {
          uVar43 = (uint)*(byte *)(param_1 + 0x6016);
        }
        if (!bVar48 || uVar43 != 0) {
          uVar43 = 1;
        }
        if (uVar43 == 0) break;
      }
      FUN_002d0264(0);
      FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
      FUN_003725e0(param_1);
      FUN_00340bdc(param_1,0x26);
      break;
    }
    *(undefined1 *)(param_1 + 0x2b73) = 0x1e;
    *(undefined1 *)(iVar28 + 0x2dd) = 1;
    FUN_00340bdc(param_1,0x27);
    FUN_0037547c(DAT_00474e00,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
    uVar42 = 0x80;
    uVar39 = *DAT_00475c6c;
    uVar33 = DAT_00475c70;
LAB_004756ec:
    FUN_00470758(uVar33,uVar39,uVar42);
    break;
  case 0x26:
    FUN_003523dc(0);
    FUN_00367c7c(param_1,DAT_00475c74,0);
    FUN_00340bdc(param_1,0);
LAB_00475098:
    *(undefined2 *)(DAT_00474ddc + param_1) = 4;
    break;
  case 0x29:
    FUN_003523dc(1);
    FUN_003523dc(6);
    FUN_00484b84(*(undefined1 *)(DAT_00474de4 + 0x53));
    iVar28 = FUN_0033f400();
    *(int *)(param_1 + 0x2a80) = iVar28;
    *(undefined2 *)(puVar14 + 2) = 0;
    *(undefined1 *)(iVar28 + 2) = 0;
    FUN_0033f2d8();
    FUN_0033f248(0xe,1);
    FUN_00340bdc(param_1,0x2a);
    cVar16 = '\x03';
    goto LAB_00475a88;
  case 0x2a:
  case 0x2c:
    FUN_0037547c(DAT_00475c78,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
    puVar34 = (undefined1 *)FUN_0033f400();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
      FUN_002d038c(uVar43 - 1,*puVar34);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
    }
    cVar16 = *(char *)(param_1 + 0x2b73);
    if (cVar16 == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x2a80) + 1) == '\0') {
        if (*(char *)(param_1 + 0x2a90) == '*') {
          FUN_0037547c(DAT_00475c7c,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
          FUN_00340bdc(param_1,0x2b);
        }
        else {
          FUN_0037547c(DAT_00475c80,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
          FUN_00340bdc(param_1,0x2d);
        }
      }
      break;
    }
LAB_00474ecc:
    cVar16 = cVar16 + -1;
    goto LAB_00475a88;
  case 0x2b:
  case 0x2d:
    puVar34 = (undefined1 *)FUN_0033f400();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
      FUN_002d038c(uVar43 - 1,*puVar34);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
    }
    break;
  case 0x2e:
    FUN_0037547c(DAT_00475c78,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
    puVar34 = (undefined1 *)FUN_003371d8();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
      FUN_002d038c(uVar43 - 1,*puVar34);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x2a80) + 1) == -1) {
LAB_00475a14:
      FUN_003523dc(0);
      FUN_0037547c(DAT_00474df8,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
      *(undefined1 *)(param_1 + 0x2b73) = 0xf;
LAB_0047507c:
      *(undefined2 *)(DAT_00474ddc + param_1) = 3;
      break;
    }
    iVar28 = FUN_0043c1ec();
    if ((iVar28 == 2) && (iVar28 = FUN_00374be8(param_1,5), iVar28 != 0)) {
      uVar43 = *(uint *)(param_1 + 0x18);
      bVar48 = (uVar43 & *DAT_00474e04) == 0;
      if (bVar48) {
        uVar43 = (uint)*(byte *)(param_1 + 0x6016);
      }
      if (!bVar48 || uVar43 != 0) {
        uVar43 = 1;
      }
      if (uVar43 != 0) goto LAB_00475a14;
    }
    if (*(char *)(*(int *)(param_1 + 0x2a80) + 1) != '\r') break;
    FUN_0037547c(DAT_00475c84,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
    FUN_00340bdc(param_1,0x2f);
    cVar16 = '-';
LAB_00475a88:
    *(char *)(param_1 + 0x2b73) = cVar16;
    break;
  case 0x2f:
    puVar34 = (undefined1 *)FUN_003371d8();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    uVar43 = (uint)(byte)puVar34[2];
    if ((uVar43 != 0) && (uVar43 - 1 == (int)*(short *)(puVar14 + 2))) {
      FUN_002d038c(uVar43 - 1,*puVar34);
      *(short *)(puVar14 + 2) = *(short *)(puVar14 + 2) + 1;
    }
    cVar16 = *(char *)(param_1 + 0x2b73) + -1;
    *(char *)(param_1 + 0x2b73) = cVar16;
    if (cVar16 == '\0') {
      iVar28 = FUN_00484c98();
      if (iVar28 == 1) {
        *(undefined2 *)(DAT_00474ddc + param_1) = 0xf;
      }
      else {
        FUN_0037547c(DAT_00475c7c,0,4,DAT_00474df4,DAT_00474df4,DAT_00474df0);
        iVar28 = FUN_003371d8();
        *(int *)(param_1 + 0x2a80) = iVar28;
        *(undefined2 *)(puVar14 + 2) = 0;
        *(undefined1 *)(iVar28 + 2) = 0;
        FUN_0033f2d8();
        FUN_00340bdc(param_1,0x30);
      }
    }
    break;
  case 0x30:
    iVar28 = FUN_004896d4(DAT_00475c7c);
    if (iVar28 == 0) {
      iVar28 = FUN_0033f400();
      *(int *)(param_1 + 0x2a80) = iVar28;
      *(undefined2 *)(puVar14 + 2) = 0;
      *(undefined1 *)(iVar28 + 2) = 0;
      FUN_0033f2d8();
      FUN_0033f248(0xe,1);
    }
    break;
  case 0x31:
    FUN_003523dc(1);
    iVar29 = FUN_003371d8();
    iVar28 = DAT_00474ddc;
    *(int *)(param_1 + 0x2a80) = iVar29;
    *(undefined2 *)(puVar14 + 2) = 0;
    *(undefined1 *)(iVar29 + 2) = 0;
    *(undefined2 *)(iVar28 + param_1) = 1;
    FUN_0033f2d8();
    FUN_0033704c(*(short *)(puVar14 + 10) + -0x4000);
    FUN_00340bdc(param_1,0x32);
    break;
  case 0x32:
    puVar34 = (undefined1 *)FUN_003371d8();
    *(undefined1 **)(param_1 + 0x2a80) = puVar34;
    if (((byte)puVar34[2] != 0) && ((byte)puVar34[2] - 1 == (int)*(short *)(puVar14 + 2))) {
      *(undefined1 *)(param_1 + 0x2ba0) = *puVar34;
      *(undefined2 *)(puVar14 + 2) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x2a80) + 2) = 0;
      FUN_0033f2d8();
      FUN_00340bdc(param_1,0x33);
    }
  }
switchD_00473fe8_caseD_1a:
  *(undefined1 *)(param_1 + 0x6016) = 0;
  return;
}
