// OoT3D decomp @ 00242a94  name=FUN_00242a94  size=4620

void FUN_00242a94(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined1 uVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  short *psVar18;
  float *pfVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  short sVar23;
  char *pcVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  bool bVar28;
  bool bVar29;
  uint in_fpscr;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  undefined1 local_88 [4];
  float local_84 [4];
  float local_74;
  int local_70;
  int local_6c;
  short *local_68;

  iVar13 = *(int *)(param_1 + 0xac0);
  local_70 = *(int *)(param_2 + 0x20ac);
  iVar26 = local_70;
  if (iVar13 != DAT_00242ec0) {
    iVar26 = DAT_00242ec4;
  }
  if (iVar13 != DAT_00242ec0 && iVar13 != iVar26) {
    uVar14 = FUN_00363c10(param_2 + 0x3a58,0x17c);
    *(undefined4 *)(param_1 + 0x1a4) = uVar14;
  }
  iVar13 = DAT_00242f08;
  fVar37 = DAT_00242ed8;
  iVar26 = DAT_00242ed4;
  fVar35 = DAT_00242ed0;
  uVar25 = DAT_00242ecc;
  uVar14 = DAT_00242ec8;
  local_68 = (short *)(param_1 + 0x1000);
  if (*(char *)(param_1 + 0x10a3) != '\0') {
    FUN_0036e168(param_2 + 0x7f98);
    local_98 = 0.0;
    local_94 = 0.0;
    local_90 = 0;
    local_8c = *(float *)(param_2 + 0x7f98);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),3,4,&local_98,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),4,4,&local_98,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),5,4,&local_98,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),9,4,&local_98,2);
    fVar35 = DAT_00242eec;
    local_84[0] = fVar37;
    local_84[3] = (float)FUN_00371e50(DAT_00242ee0);
    local_84[3] = local_84[3] + fVar35;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined1 *)(param_1 + 4000) = 3;
  uVar4 = DAT_00242f0c;
  *(undefined4 *)(*(int *)(iVar13 + 0x44) + 0x1720) = DAT_00242f04;
  *(undefined1 *)(param_1 + 0xc18) = 0;
  fVar36 = DAT_00242f14;
  uVar5 = DAT_00242f10;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(short *)(param_1 + 0xace) = *(short *)(param_1 + 0xace) + 1;
  *(short *)(param_1 + 0xad0) = *(short *)(param_1 + 0xad0) + 1;
  uVar15 = *(uint *)(param_1 + 0xac0);
  if ((uVar15 == uVar4 || uVar15 == uVar5) && (*(char *)(local_70 + 0x247e) != '\0')) {
    bVar28 = uVar15 == uVar5;
    if (bVar28) {
      uVar15 = (uint)*(ushort *)(param_1 + 0xaee);
    }
    if (!bVar28 || uVar15 != 0) {
      uVar16 = FUN_00363c10(param_2 + 0x3a58,0x17c);
      *(undefined4 *)(param_1 + 0x1a4) = uVar16;
      uVar16 = FUN_0036ae14(param_1 + 0x1a8,0x1b);
      uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar16;
      FUN_00374a58(param_1 + 0x1a8,0x1b);
      *(uint *)(param_1 + 0xac0) = uVar5;
    }
    fVar32 = DAT_00242f18;
    *(undefined2 *)(param_1 + 0xaee) = 0;
    *(undefined2 *)(param_1 + 0xae2) = 0xf;
    uVar16 = DAT_00242f1c;
    fVar30 = (float)VectorSignedToFloat(0xf,(byte)(in_fpscr >> 0x15) & 3);
    uVar31 = VectorSignedToFloat((int)(fVar36 + fVar30 * fVar32 * fVar36),
                                 (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(*(int *)(iVar13 + 0x44) + 0x1718) = uVar31;
    FUN_00375bcc(param_1,uVar16);
    *(float *)(param_1 + 0xb88) = fVar37;
  }
  (**(code **)(param_1 + 0xac0))(param_1,param_2);
  iVar13 = 0;
  do {
    iVar20 = param_1 + iVar13 * 2;
    sVar11 = *(short *)(iVar20 + 0xae2);
    iVar13 = (int)(short)((short)iVar13 + 1);
    if (sVar11 != 0) {
      *(short *)(iVar20 + 0xae2) = sVar11 + -1;
    }
  } while (iVar13 < 5);
  if (*(short *)(param_1 + 0xad2) != 0) {
    *(short *)(param_1 + 0xad2) = *(short *)(param_1 + 0xad2) + -1;
  }
  if (*(short *)(param_1 + 0xc08) != 0) {
    *(short *)(param_1 + 0xc08) = *(short *)(param_1 + 0xc08) + -1;
  }
  if (*(short *)(param_1 + 0xc1c) != 0) {
    *(short *)(param_1 + 0xc1c) = *(short *)(param_1 + 0xc1c) + -1;
  }
  if (*(short *)(param_1 + 0xc1a) != 0) {
    *(short *)(param_1 + 0xc1a) = *(short *)(param_1 + 0xc1a) + -1;
  }
  if (*(short *)(param_1 + 0xac8) != 0) {
    *(short *)(param_1 + 0xac8) = *(short *)(param_1 + 0xac8) + -1;
  }
  if (*local_68 == 0) {
    FUN_001fdcb8(param_1,param_2);
    iVar20 = param_1 + 0xf8c;
    *(undefined4 *)(param_1 + 0xfd8) = *(undefined4 *)(param_1 + 0xb30);
    *(undefined4 *)(param_1 + 0xfdc) = *(undefined4 *)(param_1 + 0xb34);
    *(undefined4 *)(param_1 + 0xfe0) = *(undefined4 *)(param_1 + 0xb38);
    iVar13 = param_2 + 0x5c78;
    FUN_003762a4(param_2,iVar13,iVar20);
    if (*(short *)(param_1 + 0xc08) == 0) {
      FUN_00376168(param_2,iVar13,iVar20);
      iVar17 = *(int *)(param_1 + 0xac0);
      bVar28 = iVar17 != DAT_00243330;
      iVar34 = DAT_00243330;
      if (bVar28) {
        iVar34 = DAT_00243334;
      }
      iVar2 = iVar34;
      if (bVar28 && iVar17 != iVar34) {
        iVar2 = DAT_00243338;
      }
      if ((bVar28 && iVar17 != iVar34) && iVar17 != iVar2) {
        FUN_003761f0(param_2,iVar13,iVar20);
      }
    }
  }
  fVar32 = fVar37;
  fVar30 = fVar37;
  fVar33 = fVar37;
  if (*(char *)(param_1 + 0xac5) != '\0') {
    fVar32 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0xbe));
    fVar33 = (float)FUN_00338f60((int)-*(short *)(param_1 + 0xbe));
    fVar30 = (*(float *)(param_1 + 0x68) * fVar32 + fVar33 * *(float *)(param_1 + 0x60)) *
             DAT_0024333c;
    fVar33 = (*(float *)(param_1 + 0x68) * fVar33 - fVar32 * *(float *)(param_1 + 0x60)) *
             DAT_0024333c;
    fVar32 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * (short)DAT_00243340));
    fVar32 = fVar32 * DAT_00243344 - DAT_00243348;
  }
  fVar6 = DAT_0024334c;
  *(undefined1 *)(param_1 + 0xac5) = 0;
  FUN_0036e168(fVar30,iVar26,fVar6,fVar37,param_1 + 0xe88);
  FUN_0036e168(fVar33,iVar26,fVar6,fVar37,param_1 + 0xe8c);
  uVar16 = DAT_00243350;
  FUN_0036e168(fVar32,iVar26,DAT_00243350,fVar37,param_1 + 0xe90);
  if (*(short *)(param_1 + 0xae6) == 1) {
    FUN_00375bcc(param_1,DAT_00243354);
  }
  if (*(short *)(param_1 + 0xae6) == 0x96) {
    FUN_00375bcc(param_1,DAT_00243358);
    *(undefined2 *)(param_1 + 0xae6) = 0;
  }
  uVar31 = DAT_0024335c;
  sVar11 = *(short *)(param_1 + 0xc1a);
  bVar28 = sVar11 == 0;
  if (bVar28) {
    sVar11 = *(short *)(param_1 + 0xc1c);
  }
  if (!bVar28 || sVar11 != 0) {
    iVar13 = 1;
    do {
      iVar20 = param_1 + iVar13 * 2;
      sVar11 = *(short *)(iVar20 + 0xe60);
      if (sVar11 == 0) {
        FUN_0036fc20(iVar26,uVar31,param_1 + iVar13 * 4 + 0xe18);
      }
      else {
        *(short *)(iVar20 + 0xe60) = sVar11 + -1;
        FUN_00373500(*(undefined4 *)(param_1 + 0xe84),iVar26,fVar35,param_1 + iVar13 * 4 + 0xe18);
      }
      iVar13 = (int)(short)((short)iVar13 + 1);
    } while (iVar13 < 0x12);
    if (*(short *)(param_1 + 0xc1c) != 0) {
      local_c4 = DAT_00243360;
      FUN_0037547c(DAT_00243368,local_70 + 0x28,4,DAT_00243364,DAT_00243364);
      FUN_0036cae4(DAT_0024336c,param_2,1);
    }
  }
  uVar7 = DAT_00243370;
  if (*(char *)(param_1 + 0xacb) != '\0') {
    *(undefined1 *)(param_1 + 0xacb) = 0;
    uVar22 = DAT_00243374;
    local_84[2] = *(float *)(param_1 + 0x28);
    local_74 = *(float *)(param_1 + 0x30);
    local_6c = param_2 + 0x5000;
    local_84[3] = fVar37;
    pcVar24 = *(char **)(param_2 + 0x5c28);
    sVar11 = 0;
    do {
      if (*pcVar24 == '\0') {
        *pcVar24 = '\x05';
        *(float *)(pcVar24 + 4) = local_84[2];
        *(float *)(pcVar24 + 8) = fVar37;
        *(float *)(pcVar24 + 0xc) = local_74;
        puVar3 = DAT_00242f00;
        uVar21 = DAT_00242f00[1];
        uVar27 = DAT_00242f00[2];
        *(undefined4 *)(pcVar24 + 0x10) = *DAT_00242f00;
        *(undefined4 *)(pcVar24 + 0x14) = uVar21;
        *(undefined4 *)(pcVar24 + 0x18) = uVar27;
        uVar21 = puVar3[1];
        uVar27 = puVar3[2];
        *(undefined4 *)(pcVar24 + 0x1c) = *puVar3;
        *(undefined4 *)(pcVar24 + 0x20) = uVar21;
        *(undefined4 *)(pcVar24 + 0x24) = uVar27;
        *(int *)(pcVar24 + 0x40) = iVar26;
        *(undefined4 *)(pcVar24 + 0x34) = uVar31;
        *(undefined4 *)(pcVar24 + 0x38) = uVar22;
        fVar32 = (float)FUN_00371e50(uVar16);
        *(short *)(pcVar24 + 0x30) = (short)(int)fVar32;
        pcVar24[0x2c] = '\0';
        pcVar24[0x2d] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[0x2e] = '\0';
        pcVar24[0x2f] = '\0';
        break;
      }
      sVar11 = sVar11 + 1;
      pcVar24 = pcVar24 + 0x4c;
    } while (sVar11 < 0x96);
    uVar31 = DAT_00243378;
    pcVar24 = *(char **)(local_6c + 0xc28);
    sVar11 = 0;
    do {
      if (*pcVar24 == '\0') {
        *pcVar24 = '\x05';
        *(float *)(pcVar24 + 4) = local_84[2];
        *(float *)(pcVar24 + 8) = local_84[3];
        *(float *)(pcVar24 + 0xc) = local_74;
        puVar3 = DAT_00242f00;
        uVar22 = DAT_00242f00[1];
        uVar21 = DAT_00242f00[2];
        *(undefined4 *)(pcVar24 + 0x10) = *DAT_00242f00;
        *(undefined4 *)(pcVar24 + 0x14) = uVar22;
        *(undefined4 *)(pcVar24 + 0x18) = uVar21;
        uVar22 = puVar3[1];
        uVar21 = puVar3[2];
        *(undefined4 *)(pcVar24 + 0x1c) = *puVar3;
        *(undefined4 *)(pcVar24 + 0x20) = uVar22;
        *(undefined4 *)(pcVar24 + 0x24) = uVar21;
        *(int *)(pcVar24 + 0x40) = iVar26;
        *(undefined4 *)(pcVar24 + 0x34) = uVar7;
        *(undefined4 *)(pcVar24 + 0x38) = uVar31;
        fVar32 = (float)FUN_00371e50(uVar16);
        *(short *)(pcVar24 + 0x30) = (short)(int)fVar32;
        pcVar24[0x2c] = '\0';
        pcVar24[0x2d] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[0x2e] = '\0';
        pcVar24[0x2f] = '\0';
        break;
      }
      sVar11 = sVar11 + 1;
      pcVar24 = pcVar24 + 0x4c;
    } while (sVar11 < 0x96);
  }
  if (*(short *)(param_1 + 0xba0) != 0) {
    sVar11 = *(short *)(param_1 + 0xba0) + -1;
    *(short *)(param_1 + 0xba0) = sVar11;
    puVar3 = DAT_00242f00;
    if (sVar11 == 0) {
      sVar11 = 0;
      pcVar24 = *(char **)(DAT_002437a8 + param_2);
      do {
        if (*pcVar24 == '\0') {
          *pcVar24 = '\x04';
          uVar16 = puVar3[1];
          uVar31 = puVar3[2];
          *(undefined4 *)(pcVar24 + 0x10) = *puVar3;
          *(undefined4 *)(pcVar24 + 0x14) = uVar16;
          *(undefined4 *)(pcVar24 + 0x18) = uVar31;
          uVar16 = puVar3[1];
          uVar31 = puVar3[2];
          *(undefined4 *)(pcVar24 + 0x1c) = *puVar3;
          *(undefined4 *)(pcVar24 + 0x20) = uVar16;
          *(undefined4 *)(pcVar24 + 0x24) = uVar31;
          pcVar24[0x2e] = '\0';
          pcVar24[0x2f] = '\0';
          *(int *)(pcVar24 + 0x34) = iVar26;
          *(float *)(pcVar24 + 0x48) = fVar37;
          *(float *)(pcVar24 + 0x3c) = fVar37;
          pcVar24[2] = '\0';
          pcVar24[3] = '\0';
          break;
        }
        sVar11 = sVar11 + 1;
        pcVar24 = pcVar24 + 0x4c;
      } while (sVar11 < 0x96);
    }
    fVar33 = *(float *)(param_1 + 0xba4);
    fVar32 = *(float *)(DAT_002437ac + *(short *)(param_1 + 0xba0) * 4) * DAT_002437b0;
    fVar30 = (float)FUN_003738a8();
    puVar3 = DAT_00242f00;
    sVar11 = 0;
    fVar30 = fVar30 + DAT_002437b4;
    pcVar24 = *(char **)(DAT_002437a8 + param_2);
    do {
      if (*pcVar24 == '\0') {
        *pcVar24 = '\x04';
        uVar16 = puVar3[1];
        uVar31 = puVar3[2];
        *(undefined4 *)(pcVar24 + 0x10) = *puVar3;
        *(undefined4 *)(pcVar24 + 0x14) = uVar16;
        *(undefined4 *)(pcVar24 + 0x18) = uVar31;
        uVar16 = puVar3[1];
        uVar31 = puVar3[2];
        *(undefined4 *)(pcVar24 + 0x1c) = *puVar3;
        *(undefined4 *)(pcVar24 + 0x20) = uVar16;
        *(undefined4 *)(pcVar24 + 0x24) = uVar31;
        pcVar24[0x2e] = '\0';
        pcVar24[0x2f] = '\0';
        *(int *)(pcVar24 + 0x34) = iVar26;
        *(float *)(pcVar24 + 0x48) = fVar33 + fVar32;
        *(float *)(pcVar24 + 0x3c) = fVar30;
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        break;
      }
      sVar11 = sVar11 + 1;
      pcVar24 = pcVar24 + 0x4c;
    } while (sVar11 < 0x96);
  }
  bVar28 = *(short *)(param_1 + 0xac8) != 0;
  bVar1 = 0;
  if (bVar28) {
    bVar1 = *(byte *)(param_1 + 0xaca);
  }
  if (bVar28 && bVar1 < 4) {
    uVar12 = (ushort)*(byte *)(param_1 + 0xac6);
    bVar28 = uVar12 != 0;
    if (!bVar28) {
      uVar12 = *(ushort *)(param_1 + 0xac8);
    }
    if (bVar28 || uVar12 != 0x1e) {
      if (*(short *)(param_1 + 0xac8) < 0x2d) {
        local_84[2] = fVar37;
        local_84[3] = fVar37;
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xac8),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar32 = fVar32 * fVar35;
        if (*(short *)(param_1 + 0xac8) < 1) {
          fVar35 = fVar32 * DAT_002437c4 - fVar36;
        }
        else {
          fVar35 = fVar36 + fVar32 * DAT_002437c4;
        }
        fVar35 = (float)VectorSignedToFloat((int)fVar35,(byte)(in_fpscr >> 0x15) & 3);
        local_74 = (DAT_002437b8 - fVar35) * DAT_002437c8;
        FUN_00371e50(DAT_002437cc);
        FUN_003735e8(&local_b8,0);
        FUN_003735ac(local_88,&local_b8,local_84 + 2);
        cVar9 = FUN_003544a4(param_1,param_2,local_88);
        *(char *)(param_1 + 0xaca) = cVar9 + *(char *)(param_1 + 0xaca);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xac6) = 1;
      fVar32 = DAT_002437c0;
      fVar35 = DAT_002437bc;
      local_84[0] = fVar37;
      sVar11 = 0;
      local_88 = (undefined1  [4])DAT_002437bc;
      do {
        sVar23 = 0;
        local_84[1] = fVar35;
        do {
          FUN_003544a4(param_1,param_2,local_88);
          sVar23 = sVar23 + 1;
          local_84[1] = local_84[1] + fVar32;
        } while (sVar23 < 4);
        sVar11 = sVar11 + 1;
        local_88 = (undefined1  [4])((float)local_88 + fVar32);
      } while (sVar11 < 4);
    }
  }
  fVar32 = DAT_002437d4;
  fVar35 = DAT_002437d0;
  for (iVar13 = *(int *)(param_2 + 0x20b4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 0x130)) {
    if (*(short *)(iVar13 + 0x1c) == 1) {
      iVar20 = 0;
      do {
        local_84[2] = fVar37;
        local_84[3] = fVar37;
        local_74 = fVar35;
        fVar33 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
        fVar33 = fVar33 * fVar32;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar33 == fVar37) << 0x1e;
        iVar34 = iVar26;
        fVar30 = fVar37;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar30 = (float)FUN_003727f0(fVar33);
          iVar34 = FUN_00372674(fVar33);
        }
        local_c0 = fVar37;
        local_b8 = fVar37;
        local_a4 = -fVar30;
        local_b0 = iVar26;
        local_b4 = fVar37;
        local_ac = fVar37;
        local_a8 = fVar37;
        local_a0 = fVar37;
        local_98 = fVar37;
        local_c4 = iVar34;
        local_bc = fVar30;
        local_9c = iVar34;
        FUN_003735ac(local_88,&local_c4,local_84 + 2);
        local_94 = *(float *)(iVar13 + 0x28) + (float)local_88;
        local_90 = *(undefined4 *)(iVar13 + 0x2c);
        local_8c = *(float *)(iVar13 + 0x30) + local_84[1];
        FUN_003544a4(param_1,param_2,&local_94);
        iVar20 = (int)(short)((short)iVar20 + 1);
      } while (iVar20 < 8);
    }
  }
  FUN_0011393c(param_2);
  for (psVar18 = *(short **)(&DAT_000020cc + param_2); psVar18 != (short *)0x0;
      psVar18 = *(short **)(psVar18 + 0x98)) {
    if ((*psVar18 == DAT_002437d8) && ((char)psVar18[0xe3] != '\0')) {
      *(undefined1 *)(param_1 + 0xacc) = 1;
      break;
    }
  }
  *(undefined1 *)(param_2 + 0x3237) = 0;
  *(undefined1 *)(param_2 + 0x3236) = 0;
  *(undefined1 *)(param_2 + 0x325c) = 2;
  uVar22 = DAT_00243be8;
  uVar31 = DAT_00243be4;
  uVar16 = DAT_002437dc;
  iVar13 = (int)*(char *)(param_1 + 0xacc);
  if (iVar13 == 10) {
    *(undefined1 *)(param_2 + 0x3236) = 3;
    *(undefined1 *)(param_2 + 0x3235) = 0xb;
    FUN_00373500(iVar26,iVar26,uVar16,param_2 + 0x3258);
    *(undefined2 *)(param_1 + 0xad0) = 0;
    goto switchD_00243774_caseD_ffffffff;
  }
  if (10 < iVar13) {
    if (iVar13 == 0x10) {
      *(undefined1 *)(param_2 + 0x3236) = 0x10;
      *(undefined1 *)(param_2 + 0x3235) = 0xf;
      FUN_0036fc20(iVar26,param_2 + 0x3258);
      goto switchD_00243774_caseD_ffffffff;
    }
    if (0x10 < iVar13) {
      if (iVar13 == 0x14) {
        *(undefined1 *)(param_2 + 0x3236) = 2;
        *(undefined1 *)(param_2 + 0x3235) = 1;
      }
      else {
        if (iVar13 == 0x23) {
          *(undefined1 *)(param_2 + 0x3235) = 0;
          goto LAB_00243ab4;
        }
        if (iVar13 == 0x41) {
          *(undefined1 *)(param_2 + 0x3236) = 3;
          *(undefined1 *)(param_2 + 0x3235) = 6;
          FUN_0036fc20(iVar26,param_2 + 0x3258);
        }
        else if (iVar13 == 0x4b) {
          *(undefined1 *)(param_2 + 0x3236) = 4;
          *(undefined1 *)(param_2 + 0x3235) = 8;
          FUN_0036fc20(iVar26,param_2 + 0x3258);
        }
      }
      goto switchD_00243774_caseD_ffffffff;
    }
    switch(iVar13) {
    case 0xb:
      *(undefined1 *)(param_2 + 0x3236) = 0xc;
      *(undefined1 *)(param_2 + 0x3235) = 0xb;
      fVar35 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xad0) * 0x1800));
      FUN_00373500(fVar36 + fVar35 * fVar36,iVar26,iVar26,param_2 + 0x3258);
      break;
    case 0xc:
      *(undefined1 *)(param_2 + 0x3236) = 0xc;
      *(undefined1 *)(param_2 + 0x3235) = 3;
      FUN_00373500(iVar26,iVar26,uVar16,param_2 + 0x3258);
      break;
    case 0xd:
      *(undefined1 *)(param_2 + 0x3235) = 0xd;
      FUN_00373500(iVar26,iVar26,DAT_00243bec,param_2 + 0x3258);
      break;
    case 0xe:
      *(undefined1 *)(param_2 + 0x3235) = 0xe;
      goto LAB_00243ab4;
    case 0xf:
      *(undefined1 *)(param_2 + 0x3236) = 0xe;
      *(undefined1 *)(param_2 + 0x3235) = 0xf;
      FUN_00373500(iVar26,iVar26,uVar14,param_2 + 0x3258);
    }
    goto switchD_00243774_caseD_ffffffff;
  }
  switch(iVar13) {
  case 0:
    FUN_00373500(fVar37,iVar26,DAT_00243be4,param_2 + 0x3258);
    break;
  case 1:
    *(undefined1 *)(param_2 + 0x3235) = 1;
    FUN_00373500(iVar26,iVar26,uVar22,param_2 + 0x3258);
    break;
  case 2:
    *(undefined1 *)(param_2 + 0x3235) = 1;
    FUN_00373500(iVar26,iVar26,uVar31,param_2 + 0x3258);
    break;
  case 3:
    uVar10 = 3;
    goto LAB_002438f4;
  case 4:
    uVar10 = 4;
LAB_002438f4:
    *(undefined1 *)(param_2 + 0x3235) = uVar10;
LAB_00243ab4:
    *(int *)(param_2 + 0x3258) = iVar26;
    break;
  case 5:
    *(undefined1 *)(param_2 + 0x3236) = 5;
    *(undefined1 *)(param_2 + 0x3235) = 3;
    FUN_0036fc20(iVar26,uVar25,param_2 + 0x3258);
    break;
  case 6:
    *(undefined1 *)(param_2 + 0x3236) = 5;
    *(float *)(param_2 + 0x3258) = fVar37;
    break;
  case 7:
    *(undefined1 *)(param_2 + 0x3236) = 7;
    *(float *)(param_2 + 0x3258) = fVar37;
    break;
  case 8:
    *(undefined1 *)(param_2 + 0x3236) = 3;
    *(undefined1 *)(param_2 + 0x3235) = 9;
    FUN_00373500(iVar26,iVar26,uVar16,param_2 + 0x3258);
    break;
  case 9:
    *(undefined1 *)(param_2 + 0x3236) = 3;
    *(undefined1 *)(param_2 + 0x3235) = 10;
    FUN_0036fc20(iVar26,param_2 + 0x3258);
  }
switchD_00243774_caseD_ffffffff:
  *(undefined1 *)(param_1 + 0xacc) = 0;
  uVar15 = in_fpscr & 0xfffffff | (uint)(*(float *)(local_68 + 0x4e) == fVar37) << 0x1e;
  if (SUB41(uVar15 >> 0x1e,0)) {
    if (*(short *)(param_1 + 0xaf0) == 0) {
      *(undefined1 *)(param_2 + 0x3265) = 0;
      *(undefined1 *)(param_2 + 0x3261) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x3261) = 1;
      *(undefined1 *)(param_2 + 0x3264) = 0xff;
      *(undefined1 *)(param_2 + 0x3263) = 0xff;
      *(undefined1 *)(param_2 + 0x3262) = 0xff;
      if ((*(ushort *)(param_1 + 0xaf0) & 1) == 0) {
        *(undefined1 *)(param_2 + 0x3265) = 0;
      }
      else {
        *(undefined1 *)(param_2 + 0x3265) = 100;
      }
      *(short *)(param_1 + 0xaf0) = *(short *)(param_1 + 0xaf0) + -1;
    }
  }
  else {
    uVar14 = VectorFloatToUnsigned(*(float *)(local_68 + 0x4e),3);
    *(char *)(param_2 + 0x3265) = (char)uVar14;
    *(undefined1 *)(param_2 + 0x3264) = 0xff;
    *(undefined1 *)(param_2 + 0x3263) = 0xff;
    *(undefined1 *)(param_2 + 0x3262) = 0xff;
    *(undefined1 *)(param_2 + 0x3261) = 1;
  }
  puVar8 = DAT_00243bf0;
  if (*(short *)(param_1 + 0xff6) == 0) {
    FUN_0036fc20(iVar26,DAT_00243f28,param_1 + 0xff8);
    uVar15 = uVar15 & 0xfffffff | (uint)(*(float *)(param_1 + 0xff8) == fVar37) << 0x1e;
    if (!SUB41(uVar15 >> 0x1e,0)) goto LAB_00243c2c;
    *(undefined1 *)(param_1 + 0xff4) = 0;
  }
  else {
    *(short *)(param_1 + 0xff6) = *(short *)(param_1 + 0xff6) + -1;
    uVar14 = DAT_00243bf4;
    if ((*(char *)(param_1 + 0xff4) != '\x01') &&
       (uVar14 = DAT_00243bf8, *(char *)(param_1 + 0xff4) == '\x04')) {
      uVar14 = DAT_00243bfc;
    }
    FUN_00373500(uVar14,uVar7,DAT_00243c00,param_1 + 0xff8);
LAB_00243c2c:
    cVar9 = *(char *)(param_1 + 0xff4);
    if (cVar9 != '\0') {
      *puVar8 = 1;
      puVar3 = DAT_00243f2c;
      if (cVar9 == '\x01') {
        uVar14 = *(undefined4 *)(param_1 + 0x2c);
        uVar25 = *(undefined4 *)(param_1 + 0x30);
        *DAT_00243f2c = *(undefined4 *)(param_1 + 0x28);
        puVar3[1] = uVar14;
        puVar3[2] = uVar25;
      }
      uVar14 = DAT_00243f34;
      *DAT_00243f30 = (short)(int)*(float *)(param_1 + 0xff8);
      *DAT_00243f38 = uVar14;
      *DAT_00243f3c = 0;
      goto LAB_00243c84;
    }
  }
  *puVar8 = 0;
LAB_00243c84:
  fVar35 = DAT_00243f40;
  bVar1 = *(byte *)(param_1 + 0xba8);
  if (bVar1 != 0) {
    *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0xc20);
    fVar37 = DAT_00243f44;
    iVar26 = bVar1 - 1;
    *(float *)(param_1 + 0xbb0) = *(float *)(param_1 + 0xc24) + fVar35;
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_1 + 0xc28);
    fVar35 = (float)VectorSignedToFloat(iVar26,(byte)(uVar15 >> 0x15) & 3);
    fVar35 = (float)FUN_003727f0(fVar35 * fVar37);
    fVar36 = (float)VectorSignedToFloat(iVar26,(byte)(uVar15 >> 0x15) & 3);
    fVar37 = (float)FUN_00372674(fVar36 * fVar37);
    local_bc = (float)(int)(short)(bVar1 + 0xf9);
    fVar36 = (float)VectorSignedToFloat(iVar26,(byte)(uVar15 >> 0x15) & 3);
    local_c0 = 0.0;
    local_c4 = (int)(short)((short)(int)(fVar36 * DAT_00243f48) + 0x6000);
    FUN_0036aa20(*(float *)(param_1 + 0xb30) + fVar35 * fVar6,*(undefined4 *)(param_1 + 0xb34),
                 *(float *)(param_1 + 0xb38) + fVar37 * fVar6,param_2 + 0x208c,param_1,param_2,0xe8,
                 0);
    *(undefined1 *)(param_1 + 0xba8) = 0;
  }
  iVar26 = DAT_00243f50;
  if ((*(char *)(param_1 + 0x1241) != '\0') &&
     (*(uint *)(*(int *)(param_2 + 0x20ac) + 0x2c) <= DAT_00243f4c)) {
    if ('\0' < (char)*(byte *)(param_1 + 0x1240)) {
      pfVar19 = (float *)(local_88 + 3);
      if ((*(byte *)(param_1 + 0x1240) & 1) != 0) {
        local_84[0] = (float)CONCAT31(local_84[0]._1_3_,1);
        pfVar19 = local_84;
      }
      for (iVar13 = (int)*(char *)(param_1 + 0x1240) >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined1 *)((int)pfVar19 + 1) = 1;
        pfVar19 = (float *)((int)pfVar19 + 2);
        *(undefined1 *)pfVar19 = 1;
      }
    }
    for (psVar18 = *(short **)(&DAT_000020cc + param_2); psVar18 != (short *)0x0;
        psVar18 = *(short **)(psVar18 + 0x98)) {
      if (*psVar18 == DAT_00243f50) {
        iVar13 = 0;
        if (0 < *(char *)(param_1 + 0x1240)) {
          do {
            iVar20 = param_1 + iVar13 * 0xc;
            bVar28 = false;
            if (*(float *)(psVar18 + 4) == *(float *)(iVar20 + 0x10b0)) {
              bVar28 = *(float *)(psVar18 + 6) == *(float *)(iVar20 + 0x10b4);
            }
            bVar29 = false;
            if (bVar28) {
              bVar29 = *(float *)(psVar18 + 8) == *(float *)(iVar20 + 0x10b8);
            }
            if (bVar29) {
              iVar20 = param_1 + iVar13 * 6;
              sVar11 = psVar18[10];
              sVar23 = *(short *)(iVar20 + 0x11a0);
              bVar28 = sVar11 == sVar23;
              if (bVar28) {
                sVar23 = psVar18[0xb];
                sVar11 = *(short *)(iVar20 + 0x11a2);
              }
              bVar29 = bVar28 && sVar23 == sVar11;
              if (bVar28 && sVar23 == sVar11) {
                bVar29 = psVar18[0xc] == *(short *)(iVar20 + 0x11a4);
              }
              if ((bVar29) && (psVar18[0xe] == *(short *)(param_1 + iVar13 * 2 + 0x1218))) {
                *(undefined1 *)((int)local_84 + iVar13) = 0;
                break;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(char *)(param_1 + 0x1240));
        }
      }
    }
    iVar13 = 0;
    if ('\0' < *(char *)(param_1 + 0x1240)) {
      do {
        if (*(char *)((int)local_84 + iVar13) == '\x01') {
          iVar20 = param_1 + iVar13 * 2;
          FUN_00334914(param_2,((uint)*(ushort *)(iVar20 + 0x1218) << 0x11) >> 0x1a);
          local_c0 = (float)(int)*(short *)(iVar20 + 0x1218);
          iVar20 = param_1 + iVar13 * 6;
          local_c4 = (int)*(short *)(iVar20 + 0x11a4);
          local_bc = 1.4013e-45;
          iVar34 = param_1 + iVar13 * 0xc;
          z_actor_003738d0(*(undefined4 *)(iVar34 + 0x10b0),*(undefined4 *)(iVar34 + 0x10b4),
                           *(undefined4 *)(iVar34 + 0x10b8),param_2 + 0x208c,param_2,iVar26,
                           (int)*(short *)(iVar20 + 0x11a0),(int)*(short *)(iVar20 + 0x11a2));
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(char *)(param_1 + 0x1240));
    }
  }
  return;
}
