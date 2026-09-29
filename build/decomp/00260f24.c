// OoT3D decomp @ 00260f24  name=FUN_00260f24  size=4324

void FUN_00260f24(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float *pfVar10;
  undefined1 uVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  short *psVar19;
  bool bVar20;
  uint in_fpscr;
  uint uVar21;
  undefined2 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  int local_68;

  fVar4 = DAT_002612d4;
  fVar31 = DAT_002612d0;
  if (*(char *)(param_1 + 0xa33) != '\0' && *(char *)(param_1 + 0xa33) != '\x02') {
    FUN_0036fc20(DAT_002612d4,DAT_002612d0,param_1 + 0xa08);
  }
  if (DAT_002612d8 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x27ffU
     ) {
    *(undefined1 *)(param_1 + 0xa0f) = 0;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x8c0);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x8c4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x8c8);
  }
  else {
    *(undefined1 *)(param_1 + 0xa0f) = 1;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x8b4);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x8b8);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x8bc);
  }
  *(undefined1 *)(param_1 + 0xa0e) = 0;
  uVar15 = DAT_002612dc;
  *(short *)(param_1 + 0x894) = *(short *)(param_1 + 0x894) + 1;
  FUN_0037572c(uVar15,param_1);
  fVar27 = DAT_002612e0;
  local_68 = param_2 + 0x2000;
  fVar29 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x28) - DAT_002612e0;
  fVar23 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x30) - DAT_002612e0;
  *(float *)(param_1 + 0x1108) = SQRT(fVar29 * fVar29 + fVar23 * fVar23);
  (**(code **)(param_1 + 0x888))(param_1,param_2);
  iVar14 = 0;
  do {
    iVar16 = param_1 + iVar14 * 2;
    sVar12 = *(short *)(iVar16 + 0x89a);
    iVar14 = (int)(short)((short)iVar14 + 1);
    if (sVar12 != 0) {
      *(short *)(iVar16 + 0x89a) = sVar12 + -1;
    }
  } while (iVar14 < 5);
  if (*(short *)(param_1 + 0xa12) != 0) {
    *(short *)(param_1 + 0xa12) = *(short *)(param_1 + 0xa12) + -1;
  }
  if (*(short *)(param_1 + 0xa3e) != 0) {
    *(short *)(param_1 + 0xa3e) = *(short *)(param_1 + 0xa3e) + -1;
  }
  if (*(short *)(param_1 + 0xa8c) != 0) {
    *(short *)(param_1 + 0xa8c) = *(short *)(param_1 + 0xa8c) + -1;
  }
  if (*(short *)(param_1 + 0xa8e) != 0) {
    *(short *)(param_1 + 0xa8e) = *(short *)(param_1 + 0xa8e) + -1;
  }
  FUN_00376864(param_1);
  fVar29 = *(float *)(param_1 + 0x28) - fVar27;
  fVar23 = *(float *)(param_1 + 0x30) - fVar27;
  if (DAT_002612e4 <= (int)SQRT(fVar29 * fVar29 + fVar23 * fVar23)) {
    fVar23 = (float)FUN_0033f114();
    FUN_0036c258(fVar23 * DAT_002612e8 * DAT_002612ec,&local_6c,&local_70);
    fVar23 = DAT_002612f0;
    *(float *)(param_1 + 0x28) = fVar27 + local_70 * DAT_002612f0;
    *(float *)(param_1 + 0x30) = fVar27 + local_6c * fVar23;
  }
  uVar5 = DAT_002612f8;
  uVar15 = DAT_002612f4;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  fVar23 = DAT_002612fc;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  if ((*(char *)(param_1 + 0xa31) != '\0') &&
     (FUN_00376340(uVar5,uVar5,uVar15,param_2,param_1,5), (*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    if (DAT_00261300 < *(uint *)(param_1 + 100)) {
      FUN_0036fca8(param_1,param_2,5,0x14);
      local_a4 = DAT_00261304;
      FUN_0037547c(DAT_0026130c,0,4,DAT_00261308,DAT_00261308);
    }
    *(float *)(param_1 + 100) = fVar23;
  }
  if ((*(ushort *)(param_1 + 0x894) & 0x1f) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  sVar12 = *(short *)(param_1 + 0xa14);
  iVar14 = (int)sVar12;
  if (iVar14 != 0) {
    sVar12 = sVar12 + -1;
  }
  *(char *)(param_1 + 0xa0c) = (char)*(undefined2 *)(DAT_00261314 + iVar14 * 2);
  if (iVar14 != 0) {
    *(short *)(param_1 + 0xa14) = sVar12;
  }
  fVar24 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x894) * (short)DAT_00261318));
  uVar28 = DAT_00261330;
  fVar29 = DAT_0026132c;
  uVar7 = DAT_00261328;
  uVar6 = DAT_00261324;
  *(float *)(param_1 + 0x8a8) = DAT_00261320 + fVar24 * DAT_0026131c;
  uVar8 = DAT_00261334;
  if (*(short *)(param_1 + 0xa40) == 0) {
    *(undefined4 *)(param_1 + 0xa60) = DAT_00261674;
    FUN_00373500(DAT_00261678,uVar28,uVar15,param_1 + 0xa5c);
    *(undefined4 *)(param_1 + 0xa70) = DAT_0026167c;
    FUN_00373500(DAT_00261680,uVar28,uVar15,param_1 + 0xa6c);
    iVar16 = *(int *)(param_1 + 0x888);
    bVar20 = iVar16 != DAT_00261684;
    iVar14 = DAT_00261684;
    if (bVar20) {
      iVar14 = DAT_00261688;
    }
    iVar17 = iVar14;
    if (bVar20 && iVar16 != iVar14) {
      iVar17 = DAT_0026168c;
    }
    if ((bVar20 && iVar16 != iVar14) && iVar16 != iVar17) {
      FUN_00373500(uVar6,uVar28,param_1 + 0xa64);
      FUN_00373500(uVar6,uVar28,param_1 + 0xa74);
      fVar24 = (float)FUN_00370084(param_1 + 0xa42,0,10,100);
    }
    else {
      FUN_00373500(uVar7,uVar28,uVar15,param_1 + 0xa64);
      FUN_00373500(uVar7,uVar28,uVar15,param_1 + 0xa74);
      fVar24 = (float)FUN_00370084(param_1 + 0xa42,DAT_00261690,10,100);
    }
  }
  else {
    *(short *)(param_1 + 0xa40) = *(short *)(param_1 + 0xa40) + -1;
    FUN_00373500(uVar6,fVar31,uVar8,param_1 + 0xa5c);
    FUN_00373500(DAT_00261338,fVar31,uVar8,param_1 + 0xa6c);
    uVar6 = DAT_00261340;
    uVar15 = DAT_0026133c;
    FUN_00373500(DAT_00261340,uVar28,DAT_0026133c,param_1 + 0xa64);
    FUN_00373500(uVar6,uVar28,uVar15,param_1 + 0xa74);
    fVar24 = (float)FUN_00370084(param_1 + 0xa42,4000,10,2000);
  }
  if (*(short *)(param_1 + 0xa98) != 0x4b) {
    *(float *)(param_1 + 0xa58) = *(float *)(param_1 + 0xa58) + *(float *)(param_1 + 0xa5c);
    fVar24 = *(float *)(param_1 + 0xa68) + *(float *)(param_1 + 0xa6c);
    *(float *)(param_1 + 0xa68) = fVar24;
  }
  fVar9 = DAT_00261694;
  bVar20 = *(char *)(param_1 + 0xa33) == '\x02';
  if (bVar20) {
    *(float *)(param_1 + 0xa74) = fVar23;
    fVar24 = fVar23;
  }
  iVar14 = 0;
  if (bVar20) {
    *(float *)(param_1 + 0xa64) = fVar24;
  }
  do {
    fVar24 = fVar9;
    if ((iVar14 != 0) && (fVar24 = fVar4, iVar14 == 1)) {
      fVar24 = fVar31;
    }
    sVar12 = (short)iVar14;
    fVar25 = (float)FUN_002cfca0((int)(short)((short)(int)*(float *)(param_1 + 0xa60) * sVar12 +
                                             (short)(int)*(float *)(param_1 + 0xa58)));
    iVar14 = param_1 + iVar14 * 2;
    *(short *)(iVar14 + 0xa44) = (short)(int)(fVar25 * fVar24 * *(float *)(param_1 + 0xa64));
    fVar25 = (float)FUN_002cfca0((int)(short)((short)(int)*(float *)(param_1 + 0xa70) * sVar12 +
                                             (short)(int)*(float *)(param_1 + 0xa68)));
    *(short *)(iVar14 + 0xa4e) = (short)(int)(fVar25 * fVar24 * *(float *)(param_1 + 0xa74));
    iVar14 = (int)(short)(sVar12 + 1);
  } while (iVar14 < 5);
  if ((*(char *)(param_1 + 0xa0e) != '\0') && (*(short *)(param_1 + 0xa9a) == 0)) {
    for (psVar19 = *(short **)(local_68 + 0xcc); psVar19 != (short *)0x0;
        psVar19 = *(short **)(psVar19 + 0x98)) {
      if (((*psVar19 == DAT_00261698) &&
          (uVar13 = psVar19[0xe] & 0xff, (uVar13 == 0x10 || uVar13 == 0x11) || uVar13 == 0x16)) &&
         (fVar25 = *(float *)(param_1 + 0x914) - *(float *)(psVar19 + 0x14),
         fVar24 = *(float *)(param_1 + 0x91c) - *(float *)(psVar19 + 0x18),
         (int)(fVar25 * fVar25 + fVar24 * fVar24) < DAT_0026169c)) {
        FUN_00372224(&local_a4,param_1 + 0x148);
        fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar24 = fVar31 + fVar24 * DAT_002616a0 * DAT_002616a4;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar23) << 0x1e;
        local_7c = fVar4;
        local_9c = fVar23;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar25 = (float)FUN_003727f0(fVar24);
          local_7c = (float)FUN_00372674(fVar24);
          local_9c = fVar25;
        }
        local_a0 = fVar23;
        local_98 = fVar23;
        local_84 = -local_9c;
        local_90 = fVar4;
        local_94 = fVar23;
        local_8c = fVar23;
        local_88 = fVar23;
        local_80 = fVar23;
        local_78 = fVar23;
        local_74 = fVar23;
        local_70 = fVar23;
        local_6c = fVar4;
        local_a4 = local_7c;
        FUN_003735ac(psVar19 + 0x174,&local_a4,&local_74);
        psVar19[0x172] = 1;
        psVar19[0x173] = 0;
        *(undefined2 *)(param_1 + 0xa8e) = 9;
        goto LAB_0026170c;
      }
    }
    if (*(short *)(param_1 + 0xa8e) == 6) {
      local_a4 = DAT_00261304;
      FUN_0037547c(DAT_002619ec,0,4,DAT_00261308,DAT_00261308);
    }
    if (*(short *)(param_1 + 0xa8e) == 5) {
      local_a4 = DAT_00261304;
      FUN_0037547c(DAT_002619f0,0,4,DAT_00261308,DAT_00261308);
    }
  }
LAB_0026170c:
  uVar15 = DAT_002619f8;
  fVar24 = DAT_002619f4;
  if (*(short *)(param_1 + 0xa12) == 0) {
    iVar14 = 0;
    do {
      iVar16 = *(int *)(param_1 + 0xb5c);
      iVar17 = iVar14 * 0x50 + 0x16;
      bVar2 = *(byte *)(iVar16 + iVar17);
      if ((bVar2 & 2) == 0) {
        if ((*(byte *)(iVar16 + iVar14 * 0x50 + 0x15) & 2) != 0) {
          iVar14 = iVar14 * 0x50 + 0x15;
          *(byte *)(iVar16 + iVar14) = *(byte *)(iVar16 + iVar14) & 0xfd;
          if (*(char *)(param_1 + 0xa0e) == '\x01') {
            sVar12 = 0x1800;
          }
          else {
            sVar12 = 0;
          }
          FUN_00368fc0(fVar24,uVar15,param_2,param_1,
                       (int)(short)(sVar12 + *(short *)(param_1 + 0x92)),0);
          *(undefined1 *)(*(int *)(DAT_002619fc + 0x30) + 0x10e8) = 8;
          *(undefined2 *)(param_1 + 0xa12) = 0xf;
          break;
        }
      }
      else {
        *(byte *)(iVar16 + iVar17) = bVar2 & 0xfd;
      }
      iVar14 = (int)(short)((short)iVar14 + 1);
    } while (iVar14 < 2);
  }
  fVar25 = DAT_00261a00;
  fVar26 = *(float *)(param_1 + 0xa20);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar26 < fVar23) << 0x1f | (uint)(fVar26 == fVar23) << 0x1e;
  uVar21 = uVar1 | (uint)(NAN(fVar26) || NAN(fVar23)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar21 >> 0x1c) & 1)) {
    iVar14 = *(int *)(local_68 + 0xac);
    fVar32 = fVar27 - *(float *)(iVar14 + 0x28);
    fVar26 = fVar27 - *(float *)(iVar14 + 0x30);
    if (DAT_00261a04 < (int)SQRT(fVar32 * fVar32 + fVar26 * fVar26)) {
      FUN_0035d8d8(iVar14,param_2,0);
      uVar15 = FUN_003758b0(fVar26,fVar32);
      FUN_00368fc0(fVar25,fVar23,param_2,param_1,uVar15,0x10);
      *(undefined1 *)(*(int *)(DAT_002619fc + 0x30) + 0x10e8) = 8;
    }
  }
  iVar14 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar14,param_1 + 0xb20);
  if (*(int *)(param_1 + 0x888) != DAT_00261a08) {
    FUN_00213614(param_1,param_2);
    FUN_00376168(param_2,iVar14,param_1 + 0xb20);
    FUN_003762a4(param_2,iVar14,param_1 + 0xb40);
    FUN_00376168(param_2,iVar14,param_1 + 0xb40);
    if (*(short *)(param_1 + 0xa9a) == 0) {
      FUN_003761f0(param_2,iVar14,param_1 + 0xb40);
    }
  }
  uVar15 = DAT_00261a10;
  fVar26 = DAT_00261a0c;
  if (*(short *)(param_1 + 0xa2e) == 0) {
    if ((*(char *)(param_1 + 0xa32) != '\0') && (*(short *)(param_1 + 0xa24) == 0)) {
      if (*(char *)(param_1 + 0xa32) == '\x02') {
        fVar27 = (float)FUN_00371e50(DAT_00261a10);
        if ((short)(int)fVar27 + 0x10 < 1) {
          fVar27 = (float)FUN_00371e50(uVar15);
          fVar27 = (float)VectorSignedToFloat((short)(int)fVar27 + 0x10,(byte)(uVar21 >> 0x15) & 3);
          fVar31 = fVar27 * fVar26 * fVar31 - fVar31;
        }
        else {
          fVar27 = (float)FUN_00371e50(uVar15);
          fVar27 = (float)VectorSignedToFloat((short)(int)fVar27 + 0x10,(byte)(uVar21 >> 0x15) & 3);
          fVar31 = fVar31 + fVar27 * fVar26 * fVar31;
        }
        uVar22 = (undefined2)(int)fVar31;
      }
      else {
        fVar27 = (float)FUN_00371e50(uVar5);
        if ((short)(int)fVar27 + 0x14 < 1) {
          fVar27 = (float)FUN_00371e50(uVar5);
          fVar27 = (float)VectorSignedToFloat((short)(int)fVar27 + 0x14,(byte)(uVar21 >> 0x15) & 3);
          uVar22 = (undefined2)(int)(fVar27 * fVar26 * fVar31 - fVar31);
        }
        else {
          fVar27 = (float)FUN_00371e50(uVar5);
          fVar27 = (float)VectorSignedToFloat((short)(int)fVar27 + 0x14,(byte)(uVar21 >> 0x15) & 3);
          uVar22 = (undefined2)(int)(fVar31 + fVar27 * fVar26 * fVar31);
        }
      }
      uVar15 = DAT_00261d74;
      *(undefined2 *)(param_1 + 0xa2e) = uVar22;
      *(undefined1 *)(param_1 + 0xa35) = 0;
      *(undefined1 *)(param_2 + 0x3236) = 0;
      fVar31 = (float)FUN_00371e50(uVar15);
      *(char *)(param_2 + 0x3235) = (char)(int)fVar31 + '\x01';
      *(float *)(param_2 + 0x3258) = fVar4;
      pfVar10 = DAT_00261d78;
      DAT_00261d78[1] = fVar23;
      *pfVar10 = fVar23;
      pfVar10[2] = fVar23;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    *(short *)(param_1 + 0xa2e) = *(short *)(param_1 + 0xa2e) + -1;
  }
  if ((*(float *)(param_2 + 0x3258) <= fVar23) || (*(char *)(param_1 + 0xa32) == '\0')) {
    *(undefined1 *)(param_2 + 0x3269) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x3269) = 1;
    *(undefined1 *)(param_2 + 0x326a) = 0xff;
    *(undefined1 *)(param_2 + 0x326b) = 0xff;
    *(undefined1 *)(param_2 + 0x326c) = 0xff;
    *(char *)(param_2 + 0x326d) = (char)(int)(*(float *)(param_2 + 0x3258) * fVar29);
  }
  *(undefined1 *)(param_2 + 0x3237) = 0;
  *(undefined1 *)(param_2 + 0x325c) = 2;
  uVar6 = DAT_00261d9c;
  uVar5 = DAT_00261d98;
  fVar31 = DAT_00261d94;
  uVar15 = DAT_00261d90;
  iVar14 = (int)*(char *)(param_1 + 0xa35);
  if (iVar14 == 7) {
    *(undefined1 *)(param_2 + 0x3236) = 0;
    uVar15 = DAT_00262158;
    *(undefined1 *)(param_2 + 0x3235) = 8;
    FUN_0036fc20(fVar4,uVar15,param_2 + 0x3258);
  }
  else if (iVar14 < 8) {
    switch(iVar14) {
    case 0:
      FUN_0036fc20(fVar4,uVar28,param_2 + 0x3258);
      break;
    case 3:
      *(undefined1 *)(param_2 + 0x3236) = 3;
      *(undefined1 *)(param_2 + 0x3235) = 4;
      FUN_00373500(fVar4,fVar4,uVar5,param_2 + 0x3258);
      break;
    case 4:
      *(undefined1 *)(param_2 + 0x3236) = 5;
      *(undefined1 *)(param_2 + 0x3235) = 6;
      FUN_00373500(fVar4,fVar4,uVar5,param_2 + 0x3258);
      break;
    case 5:
      *(undefined1 *)(param_2 + 0x3236) = 6;
      *(undefined1 *)(param_2 + 0x3235) = 7;
      FUN_00373500(uVar6,fVar4,uVar15,param_1 + 0xa38);
      fVar29 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(DAT_00261da0 + param_2) *
                                               0x5000));
      *(float *)(param_2 + 0x3258) = fVar31 + fVar29 * fVar31 + *(float *)(param_1 + 0xa38);
      break;
    case 6:
      *(undefined1 *)(param_2 + 0x3236) = 2;
      *(undefined1 *)(param_2 + 0x3235) = 8;
      FUN_00373500(uVar6,fVar4,uVar15,param_1 + 0xa38);
      fVar29 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(DAT_00261da0 + param_2) *
                                               0x7000));
      *(float *)(param_2 + 0x3258) = fVar31 + fVar29 * fVar31 + *(float *)(param_1 + 0xa38);
    }
  }
  else if (iVar14 == 0x17) {
    *(undefined1 *)(param_2 + 0x3236) = 9;
    *(undefined1 *)(param_2 + 0x3235) = 0xb;
  }
  else {
    if (iVar14 < 0x18) {
      if (iVar14 != 0x14) {
        if (iVar14 == 0x15) {
          *(undefined1 *)(param_2 + 0x3236) = 10;
          *(undefined1 *)(param_2 + 0x3235) = 9;
        }
        else if (iVar14 == 0x16) {
          *(undefined1 *)(param_2 + 0x3236) = 10;
          *(undefined1 *)(param_2 + 0x3235) = 0xb;
        }
        goto switchD_00261bec_caseD_ffffffff;
      }
      *(undefined1 *)(param_2 + 0x3236) = 0;
      uVar11 = 9;
    }
    else {
      if (iVar14 != 0x18) {
        if (iVar14 == 0x37) {
          *(undefined1 *)(param_2 + 0x3236) = 0xd;
          *(undefined1 *)(param_2 + 0x3235) = 0;
          FUN_0036fc20(fVar4,param_2 + 0x3258);
        }
        goto switchD_00261bec_caseD_ffffffff;
      }
      *(undefined1 *)(param_2 + 0x3236) = 0;
      uVar11 = 0xc;
    }
    *(undefined1 *)(param_2 + 0x3235) = uVar11;
  }
switchD_00261bec_caseD_ffffffff:
  fVar29 = DAT_0026215c;
  pcVar18 = DAT_002619fc;
  if (-1 < *(char *)(param_1 + 0xa35)) {
    *(undefined1 *)(param_1 + 0xa35) = 0;
  }
  uVar7 = DAT_00262170;
  uVar6 = DAT_0026216c;
  uVar5 = DAT_00262168;
  fVar26 = DAT_00262164;
  uVar15 = DAT_00262160;
  if (*pcVar18 != '\0') {
    uVar13 = 0;
    *pcVar18 = '\0';
    do {
      uVar28 = FUN_00371e50(uVar6);
      fVar32 = (float)FUN_00371e50(uVar15);
      local_74 = *(float *)(param_1 + 0x28);
      local_6c = *(float *)(param_1 + 0x30);
      local_70 = fVar26;
      local_80 = (float)FUN_00372674(uVar28);
      local_80 = local_80 * (fVar32 + fVar25);
      local_78 = (float)FUN_003727f0(uVar28);
      local_78 = local_78 * (fVar32 + fVar25);
      local_7c = (float)FUN_00371e50(fVar24);
      local_7c = local_7c + fVar24;
      local_74 = local_74 + local_80 * fVar25 * fVar9 * fVar29;
      local_6c = local_6c + local_78 * fVar25 * fVar9 * fVar29;
      fVar32 = (float)FUN_00371e50(uVar5);
      pcVar18 = *(char **)(param_2 + 0x5c28);
      sVar12 = 0;
      do {
        if (*pcVar18 == '\0') {
          *pcVar18 = '\x02';
          *(float *)(pcVar18 + 4) = local_74;
          *(float *)(pcVar18 + 8) = local_70;
          *(float *)(pcVar18 + 0xc) = local_6c;
          *(float *)(pcVar18 + 0x10) = local_80;
          *(float *)(pcVar18 + 0x14) = local_7c;
          *(float *)(pcVar18 + 0x18) = local_78;
          *(float *)(pcVar18 + 0x1c) = fVar23;
          *(undefined4 *)(pcVar18 + 0x20) = uVar7;
          *(float *)(pcVar18 + 0x24) = fVar23;
          uVar28 = FUN_00371e50(uVar6);
          *(undefined4 *)(pcVar18 + 0x40) = uVar28;
          uVar28 = FUN_00371e50(uVar6);
          *(undefined4 *)(pcVar18 + 0x3c) = uVar28;
          uVar28 = FUN_00371e50(uVar6);
          *(undefined4 *)(pcVar18 + 0x38) = uVar28;
          *(float *)(pcVar18 + 0x34) = fVar32 + fVar9;
          break;
        }
        sVar12 = sVar12 + 1;
        pcVar18 = pcVar18 + 0x44;
      } while (sVar12 < 100);
      uVar13 = uVar13 + 1;
    } while (uVar13 < 100);
  }
  fVar9 = DAT_0026218c;
  fVar24 = DAT_00262188;
  uVar6 = DAT_00262184;
  uVar5 = DAT_00262180;
  uVar15 = DAT_0026217c;
  fVar29 = DAT_00262178;
  *(float *)(param_1 + 0xa84) = *(float *)(param_1 + 0xa84) + fVar31;
  sVar12 = 0;
  iVar14 = *(int *)(local_68 + 0xac);
  pcVar18 = *(char **)(DAT_00262174 + param_2);
  do {
    cVar3 = *pcVar18;
    if (cVar3 != '\0') {
      pcVar18[1] = pcVar18[1] + '\x01';
      fVar26 = *(float *)(pcVar18 + 4) + *(float *)(pcVar18 + 0x10) * fVar29;
      *(float *)(pcVar18 + 4) = fVar26;
      fVar25 = *(float *)(pcVar18 + 8) + *(float *)(pcVar18 + 0x14) * fVar29;
      *(float *)(pcVar18 + 8) = fVar25;
      fVar32 = *(float *)(pcVar18 + 0xc) + *(float *)(pcVar18 + 0x18) * fVar29;
      *(float *)(pcVar18 + 0xc) = fVar32;
      *(float *)(pcVar18 + 0x10) = *(float *)(pcVar18 + 0x10) + *(float *)(pcVar18 + 0x1c) * fVar29;
      fVar30 = *(float *)(pcVar18 + 0x14) + *(float *)(pcVar18 + 0x20) * fVar29;
      *(float *)(pcVar18 + 0x14) = fVar30;
      *(float *)(pcVar18 + 0x18) = *(float *)(pcVar18 + 0x18) + *(float *)(pcVar18 + 0x24) * fVar29;
      iVar17 = DAT_00262250;
      fVar31 = DAT_0026224c;
      iVar16 = DAT_00262190;
      if (cVar3 == '\x01') {
        if (*(short *)(pcVar18 + 0x2e) == 0) {
          *(float *)(pcVar18 + 0x40) = *(float *)(pcVar18 + 0x40) + fVar4;
          *(undefined4 *)(pcVar18 + 0x3c) = uVar15;
        }
        else {
          *(undefined4 *)(pcVar18 + 0x40) = uVar5;
          *(float *)(pcVar18 + 0x3c) = fVar23;
          fVar31 = DAT_00262194;
          if ((int)fVar25 <= iVar16) {
            *(undefined4 *)(pcVar18 + 8) = uVar6;
            if ((uint)fVar31 < (uint)fVar30) {
              local_74 = *(float *)(pcVar18 + 4);
              local_6c = *(float *)(pcVar18 + 0xc);
              local_70 = fVar24;
              local_a4 = DAT_00261304;
              FUN_0037547c(DAT_00262198,0,4,DAT_00261308,DAT_00261308);
              FUN_0033af2c(param_2,&local_74,8);
            }
            *(float *)(pcVar18 + 0x14) = fVar23;
          }
          fVar25 = *(float *)(iVar14 + 0x28) - *(float *)(pcVar18 + 4);
          fVar31 = *(float *)(iVar14 + 0x30) - *(float *)(pcVar18 + 0xc);
          if ((int)(fVar25 * fVar25 + fVar31 * fVar31) < DAT_0026219c) {
            *pcVar18 = '\0';
            *(undefined2 *)(param_1 + 0xa98) = 10;
            *(uint *)(iVar14 + 0x29b8) = *(uint *)(iVar14 + 0x29b8) & 0xfff7ffff;
          }
        }
      }
      else if (cVar3 == '\x02') {
        *(float *)(pcVar18 + 0x38) = *(float *)(pcVar18 + 0x38) + fVar9;
        *(float *)(pcVar18 + 0x3c) = *(float *)(pcVar18 + 0x3c) + fVar31;
        uVar7 = DAT_00262254;
        fVar26 = fVar27 - fVar26;
        fVar32 = fVar27 - fVar32;
        if ((int)SQRT(fVar26 * fVar26 + fVar32 * fVar32) < iVar17) {
          if ((int)fVar25 < iVar17 + 0x1a4000) {
            if (*(short *)(pcVar18 + 0x2e) != 0) goto LAB_00262228;
            pcVar18[0x2e] = '\x01';
            pcVar18[0x2f] = '\0';
            *(undefined4 *)(pcVar18 + 8) = uVar7;
            *(float *)(pcVar18 + 0x14) = fVar23;
          }
        }
        else if (fVar25 < fVar23) {
LAB_00262228:
          *pcVar18 = '\0';
        }
      }
    }
    sVar12 = sVar12 + 1;
    pcVar18 = pcVar18 + 0x44;
    if (99 < sVar12) {
      return;
    }
  } while( true );
}
