// OoT3D decomp @ 001edbb0  name=FUN_001edbb0  size=4372

void FUN_001edbb0(int param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  short sVar19;
  int iVar20;
  float *pfVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  bool bVar32;
  uint in_fpscr;
  undefined4 uVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_f8 [20];
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;

  fVar12 = DAT_001edf48;
  fVar11 = DAT_001edf44;
  fVar10 = DAT_001edf40;
  fVar9 = DAT_001edf3c;
  fVar40 = DAT_001edf38;
  iVar31 = *(int *)(DAT_001edf30 + param_2);
  local_70 = param_2 + 0x7000;
  local_98 = iVar31;
  if ((*(int *)(param_2 + 0x7f6c) == param_1) && (cVar3 = *(char *)(param_1 + 0x1ac), cVar3 != '\0')
     ) {
    *(char *)(param_1 + 0x1ac) = cVar3 + '\x01';
    *(undefined4 *)(param_1 + 0x140) = 0;
    if ((byte)(cVar3 + 1U) < 0x15) {
      return;
    }
    FUN_00374428(param_1);
    FUN_0049fa58(param_1 + 0x1068);
    *(undefined4 *)(local_70 + 0xf6c) = 0;
    return;
  }
  local_9c = *(float *)(param_1 + 0x124);
  *(short *)(DAT_001edf34 + 2) = *(short *)(DAT_001edf34 + 2) + 1;
  uVar38 = DAT_001edf5c;
  uVar13 = DAT_001edf58;
  uVar39 = DAT_001edf50;
  pfVar21 = DAT_001edf4c;
  if (local_9c != 0.0) {
    iVar27 = *(int *)(param_2 + 0x7f68);
    sVar19 = *(short *)(iVar27 + 0x1b0);
    if ((sVar19 == 0xb || sVar19 == 100) || sVar19 == 0x65) {
      fVar29 = *(float *)(iVar27 + 0x2c);
      fVar30 = *(float *)(iVar27 + 0x30);
      *DAT_001edf4c = *(float *)(iVar27 + 0x28);
      pfVar21[1] = fVar29;
      pfVar21[2] = fVar30;
      uVar33 = uVar39;
      if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) != 100) {
        uVar33 = DAT_001edf54;
      }
      FUN_00373500(uVar33,uVar38,uVar13,DAT_001edf60);
    }
    pfVar14 = DAT_001edf64;
    pcVar8 = DAT_001edf34;
    if (*(short *)(DAT_001edf34 + 4) == 0) {
      fVar29 = *(float *)(iVar31 + 0x2c);
      fVar30 = *(float *)(*(int *)(local_70 + 0xf64) + 0x214);
      uVar25 = in_fpscr & 0xfffffff;
      in_fpscr = uVar25 | (uint)(fVar30 - fVar40 <= fVar29) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar30 = fVar30 - DAT_001edf6c;
        uVar25 = uVar25 | (uint)(fVar29 < fVar30) << 0x1f | (uint)(fVar29 == fVar30) << 0x1e;
        in_fpscr = uVar25 | (uint)(NAN(fVar29) || NAN(fVar30)) << 0x1c;
        bVar6 = (byte)(uVar25 >> 0x18);
        if ((!(bool)(bVar6 >> 6 & 1) && bVar6 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
           (DAT_001edf70 < *(uint *)(iVar31 + 100))) {
          pcVar8[4] = '\b';
          pcVar8[5] = '\0';
        }
      }
      fVar29 = *(float *)(iVar31 + 0x2c);
      fVar30 = *(float *)(iVar31 + 0x30);
      *pfVar14 = *(float *)(iVar31 + 0x28);
      pfVar14[1] = fVar29;
      pfVar14[2] = fVar30;
    }
    else {
      *(short *)(DAT_001edf34 + 4) = *(short *)(DAT_001edf34 + 4) + -1;
      FUN_00373500(uVar39,fVar10,DAT_001edf68,pcVar8 + 0x10);
    }
    fVar17 = DAT_001edf94;
    fVar16 = DAT_001edf90;
    fVar43 = DAT_001edf8c;
    fVar37 = DAT_001edf88;
    iVar31 = DAT_001edf84;
    fVar15 = DAT_001edf80;
    fVar30 = DAT_001edf7c;
    fVar29 = DAT_001edf78;
    iVar27 = (int)(DAT_001edf78 + *pfVar21 * DAT_001edf74 + fVar10);
    bVar32 = iVar27 < 0;
    if (bVar32) {
      iVar27 = 0;
    }
    iVar41 = (int)(DAT_001edf78 + pfVar21[2] * DAT_001edf74 + fVar10);
    if ((!bVar32) && (0x13 < iVar27)) {
      iVar27 = 0x13;
    }
    if (iVar41 < 0) {
      iVar41 = 0;
    }
    else if (0x13 < iVar41) {
      iVar41 = 0x13;
    }
    iVar27 = iVar27 + iVar41 * 0x14;
    iVar41 = (int)(DAT_001edf78 + *pfVar14 * DAT_001edf74 + fVar10);
    bVar32 = iVar41 < 0;
    if (bVar32) {
      iVar41 = 0;
    }
    iVar34 = (int)(DAT_001edf78 + pfVar14[2] * DAT_001edf74 + fVar10);
    if ((!bVar32) && (0x13 < iVar41)) {
      iVar41 = 0x13;
    }
    if (iVar34 < 0) {
      iVar34 = 0;
    }
    else if (0x13 < iVar34) {
      iVar34 = 0x13;
    }
    iVar41 = iVar41 + iVar34 * 0x14;
    local_74 = iVar27 + -0x14;
    local_78 = iVar41 + -0x14;
    local_7c = iVar27 + -1;
    local_80 = iVar41 + -1;
    local_84 = iVar27 + 1;
    local_88 = iVar41 + 1;
    local_8c = iVar27 + 0x14;
    local_90 = iVar41 + 0x14;
    iVar34 = 0;
    do {
      fVar35 = (float)FUN_002cfca0((int)(short)(*(short *)(pcVar8 + 2) * 0x900 +
                                               (short)iVar34 * 0x1a00));
      fVar42 = *(float *)((int)local_9c + 0x1e4);
      fVar45 = fVar29;
      fVar36 = fVar11;
      if ((iVar34 != local_74) &&
         ((iVar34 == local_78 ||
          ((iVar34 != local_7c &&
           ((iVar34 == local_80 ||
            ((iVar34 != iVar27 &&
             ((iVar34 == iVar41 ||
              ((iVar34 != local_84 &&
               ((iVar34 == local_88 ||
                ((iVar34 != local_8c && (fVar45 = fVar11, iVar34 == local_90)))))))))))))))))) {
        fVar45 = fVar11;
        fVar36 = fVar29;
      }
      iVar20 = 0;
      do {
        iVar28 = (int)*(short *)(DAT_001ee500 + iVar20 * 2);
        fVar7 = fVar15;
        fVar44 = fVar36;
        if ((iVar28 + iVar27 == iVar34) ||
           (fVar7 = fVar45, fVar44 = fVar15, iVar28 + iVar41 == iVar34)) break;
        iVar20 = iVar20 + 1;
        fVar44 = fVar36;
      } while (iVar20 < 0x10);
      iVar20 = 0;
      do {
        iVar28 = (int)*(short *)(iVar31 + iVar20 * 2);
        fVar45 = fVar37;
        fVar36 = fVar44;
        if ((iVar28 + iVar27 == iVar34) ||
           (fVar45 = fVar7, fVar36 = fVar37, iVar28 + iVar41 == iVar34)) break;
        iVar20 = iVar20 + 1;
        fVar36 = fVar44;
      } while (iVar20 < 8);
      fVar45 = fVar45 * *(float *)(pcVar8 + 0xc) + fVar36 * *(float *)(pcVar8 + 0x10);
      if (DAT_001ee504 < (int)fVar45) {
        fVar45 = fVar9;
      }
      fVar36 = (float)FUN_002cfca0((int)(short)(*(short *)(pcVar8 + 2) * 0xe00 +
                                                (short)iVar34 * 0x4400 + 0xa00));
      fVar45 = (fVar30 - fVar35 * fVar42) + fVar36 * fVar45;
      *(float *)(DAT_001ee508 + iVar34 * 0xc + 4) = fVar45;
      local_a8 = fVar11;
      fVar35 = fVar45 * fVar43 * fVar16 * fVar17;
      local_a4 = fVar12;
      local_a0 = fVar11;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar35 == fVar11) << 0x1e;
      fVar45 = fVar12;
      fVar36 = fVar11;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar36 = (float)FUN_003727f0(fVar35);
        fVar45 = (float)FUN_00372674(fVar35);
      }
      local_e4 = fVar12;
      local_e0 = fVar11;
      local_cc = -fVar36;
      local_dc = fVar11;
      local_d8 = fVar11;
      local_d4 = fVar11;
      local_c8 = fVar11;
      local_c4 = fVar11;
      local_b8 = fVar11;
      local_d0 = fVar45;
      local_c0 = fVar36;
      local_bc = fVar45;
      FUN_003735ac(&local_b4,&local_e4,&local_a8);
      iVar20 = iVar34 + 1;
      pfVar21 = (float *)(DAT_001ee50c + iVar34 * 0xc);
      *pfVar21 = local_b4;
      pfVar21[1] = local_b0;
      pfVar21[2] = local_ac;
      uVar13 = DAT_001ee514;
      uVar39 = DAT_001ee510;
      iVar34 = iVar20;
    } while (iVar20 < 400);
    FUN_00373500(fVar11,DAT_001ee514,DAT_001ee510,DAT_001edf60);
    FUN_00373500(fVar11,uVar13,uVar39,DAT_001ee518);
  }
  local_94 = param_1 + 0x1068;
  FUN_0033b11c(param_2 + 0x5bb4,param_1 + 0xfa8,local_94,param_1 + 0xf8);
  FUN_00370084(local_98 + 0xbc,0,5,1000);
  FUN_00370084(local_98 + 0xc0,0,5,1000);
  *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + 1;
  *(short *)(param_1 + 0x1d4) = *(short *)(param_1 + 0x1d4) + 1;
  *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
  sVar19 = *(short *)(param_1 + 0x1c2) + 1;
  *(short *)(param_1 + 0x1c2) = sVar19;
  if (299 < sVar19) {
    *(undefined2 *)(param_1 + 0x1c2) = 0;
  }
  sVar19 = *(short *)(param_1 + 0x1c2);
  *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + -2000;
  fVar37 = (float)FUN_002cfca0();
  fVar15 = DAT_001ee528;
  fVar30 = DAT_001ee524;
  iVar27 = DAT_001ee520;
  iVar31 = DAT_001ee51c;
  fVar29 = DAT_001edf6c;
  uVar39 = DAT_001edf58;
  iVar41 = 0;
  iVar34 = DAT_001ee51c + 600;
  *(float *)(param_1 + sVar19 * 4 + 0x250) =
       fVar12 + fVar37 * *(float *)(param_1 + 0xdc4) + *(float *)(param_1 + 0xdc4);
  do {
    sVar19 = *(short *)(param_1 + 0x1b0);
    if (sVar19 < 200) {
      iVar20 = (int)*(short *)(param_1 + 0x1c2) + iVar41 * -2 + 300;
      lVar5 = (longlong)iVar27 * (longlong)iVar20;
      FUN_00373500(*(float *)(param_1 + (short)((short)iVar20 +
                                               ((short)(int)(lVar5 >> 0x25) - (short)(lVar5 >> 0x3f)
                                               ) * -300) * 4 + 0x250) *
                   *(float *)(iVar34 + iVar41 * 4),fVar10,uVar39,param_1 + iVar41 * 0xc + 0x8ec);
    }
    else if (sVar19 < 0xc9) {
      iVar20 = (int)*(short *)(param_1 + 0x1c2) + iVar41 * -2 + 300;
      lVar5 = (longlong)iVar27 * (longlong)iVar20;
      *(float *)(param_1 + iVar41 * 0xc + 0x8ec) =
           *(float *)(param_1 + (short)((short)iVar20 +
                                       ((short)(int)(lVar5 >> 0x25) - (short)(lVar5 >> 0x3f)) * -300
                                       ) * 4 + 0x250) * *(float *)(iVar34 + iVar41 * 4);
    }
    else if (sVar19 == 0xcd) {
      if (*(short *)(param_1 + 0x1d6) == 0) {
        puVar22 = (undefined4 *)(DAT_001ee52c + iVar41 * 4);
      }
      else {
        puVar22 = (undefined4 *)(iVar31 + iVar41 * 4);
      }
      FUN_00373500(*puVar22,fVar10,fVar29,param_1 + iVar41 * 0xc + 0x8ec);
    }
    else {
      iVar20 = (int)*(short *)(param_1 + 0x1c2) + iVar41 * 2 + 0xdc;
      lVar5 = (longlong)iVar27 * (longlong)iVar20;
      fVar37 = *(float *)(iVar34 + iVar41 * 4);
      FUN_00373500(*(float *)(param_1 + (short)((short)iVar20 +
                                               ((short)(int)(lVar5 >> 0x25) - (short)(lVar5 >> 0x3f)
                                               ) * -300) * 4 + 0x250) + fVar37 * fVar37,fVar10,
                   uVar39,param_1 + iVar41 * 0xc + 0x8ec);
    }
    fVar43 = (float)VectorSignedToFloat(iVar41,(byte)(in_fpscr >> 0x15) & 3);
    fVar37 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar37 = (float)FUN_002cfca0((int)(short)(int)(fVar37 * fVar30 + fVar43 * fVar15));
    fVar37 = fVar37 * *(float *)(param_1 + 0x238);
    iVar20 = param_1 + iVar41 * 0xc;
    *(float *)(iVar20 + 0xad8) = fVar37;
    *(undefined4 *)(iVar20 + 0x8f4) = *(undefined4 *)(iVar20 + 0x8ec);
    *(undefined4 *)(iVar20 + 0x8f0) = *(undefined4 *)(iVar20 + 0x8ec);
    *(float *)(iVar20 + 0xae0) = fVar37;
    *(float *)(iVar20 + 0xadc) = fVar37;
    uVar13 = DAT_001ee514;
    iVar41 = (int)(short)((short)iVar41 + 1);
  } while (iVar41 < 0x29);
  FUN_00373500(fVar11,DAT_001ee514,DAT_001ee530,param_1 + 0x238);
  fVar30 = DAT_001ee538;
  FUN_00373500(DAT_001ee538,fVar10,DAT_001ee534,param_1 + 0xdc4);
  (**(code **)(param_1 + 0x1a8))(param_1,param_2);
  iVar31 = 0;
  do {
    iVar27 = param_1 + iVar31 * 2;
    sVar19 = *(short *)(iVar27 + 0x1d6);
    iVar31 = (int)(short)((short)iVar31 + 1);
    if (sVar19 != 0) {
      *(short *)(iVar27 + 0x1d6) = sVar19 + -1;
    }
  } while (iVar31 < 5);
  FUN_00370084(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),10,200);
  FUN_00376864(param_1);
  FUN_00373500(fVar11,fVar12,DAT_001ee510,param_1 + 0x6c);
  fVar10 = DAT_001ee53c;
  iVar31 = FUN_003658b8(DAT_001ee53c,param_1 + 0x28);
  if (iVar31 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x110);
  }
  fVar15 = DAT_001ee898;
  if ((*(ushort *)(param_1 + 0x1b4) & 7) == 0) {
    local_a4 = *(float *)(param_1 + 0x28);
    local_a0 = *(float *)(param_1 + 0x2c);
    local_9c = *(float *)(param_1 + 0x30);
    fVar37 = DAT_001ee89c;
    if ((199 < *(short *)(param_1 + 0x1b0)) && (fVar37 = fVar11, 200 < *(short *)(param_1 + 0x1b0)))
    {
      local_a4 = *(float *)(param_1 + 0xf90);
      local_a0 = *(float *)(param_1 + 0xf94);
      local_9c = *(float *)(param_1 + 0xf98);
    }
    FUN_00365768(fVar37,fVar37 * DAT_001ee898,*(undefined4 *)(DAT_001ee8a4 + param_2),&local_a4,
                 (int)(short)(int)(*(float *)(param_1 + 0x1fc) * DAT_001ee8a0),300,2);
  }
  uVar39 = DAT_001ee8a8;
  if (*(short *)(param_1 + 0x224) != 0) {
    local_c8 = fVar11;
    local_c4 = fVar11;
    local_c0 = fVar11;
    *(short *)(param_1 + 0x224) = *(short *)(param_1 + 0x224) + -1;
    local_a4 = fVar11;
    local_a0 = fVar11;
    local_9c = fVar29;
    FUN_00371e50(uVar39);
    FUN_003735e8(auStack_f8,0);
    FUN_003735ac(&local_b0,auStack_f8,&local_a4);
    sVar19 = *(short *)(param_1 + 0x1b0);
    if ((sVar19 < 0xc9) || (sVar19 == 0xcb)) {
      iVar31 = 0;
      if (sVar19 < 100) {
        FUN_0037547c(DAT_001ee8b4,local_94,4,DAT_001ee8b0,DAT_001ee8b0,DAT_001ee8ac);
      }
    }
    else {
      iVar31 = 0x26;
    }
    iVar31 = param_1 + iVar31 * 0xc;
    local_bc = *(float *)(iVar31 + 0xdc8) + local_b0;
    local_b8 = (float)FUN_00371e50(DAT_001ee8b8);
    fVar37 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    local_b8 = local_b8 + (fVar37 - fVar10);
    local_b4 = *(float *)(iVar31 + 0xdd0) + local_a8;
    pfVar21 = *(float **)(DAT_001ee8a4 + param_2);
    fVar37 = (float)FUN_00371e50(DAT_001ee8bc);
    sVar19 = 0;
    do {
      if (*(char *)(pfVar21 + 9) == '\0') {
        *(undefined1 *)(pfVar21 + 9) = 7;
        *(undefined1 *)((int)pfVar21 + 0x26) = 0;
        *pfVar21 = local_bc;
        pfVar21[1] = local_b8;
        pfVar21[2] = local_b4;
        pfVar21[3] = local_c8;
        pfVar21[4] = local_c4;
        pfVar21[5] = local_c0;
        pfVar21[6] = local_c8;
        pfVar21[7] = local_c4;
        pfVar21[8] = local_c0;
        pfVar21[0xc] = fVar37 + fVar30;
        pfVar21[0xd] = fVar11;
        pfVar21[0xf] = (float)(iVar31 + 0xdc8);
        if ((float)(iVar31 + 0xdc8) == 0.0) {
          *(undefined2 *)((int)pfVar21 + 0x2a) = 0xff;
        }
        else {
          *(undefined2 *)((int)pfVar21 + 0x2a) = 0;
        }
        *(undefined1 *)((int)pfVar21 + 0x25) = 0;
        break;
      }
      sVar19 = sVar19 + 1;
      pfVar21 = pfVar21 + 0x10;
    } while (sVar19 < 0x118);
  }
  if (*(short *)(param_1 + 0x1b6) != 0) {
    *(short *)(param_1 + 0x1b6) = *(short *)(param_1 + 0x1b6) + -1;
  }
  if (*(short *)(param_1 + 0x1b8) != 0) {
    *(short *)(param_1 + 0x1b8) = *(short *)(param_1 + 0x1b8) + -1;
  }
  if (*(char *)(param_1 + 0x22a) != '\0') {
    *(char *)(param_1 + 0x22a) = *(char *)(param_1 + 0x22a) + -1;
  }
  if (*(char *)(param_1 + 0x229) != '\0') {
    iVar27 = 0;
    iVar31 = *(int *)(param_1 + 0x1090);
LAB_001ee7ac:
    if ((*(byte *)(iVar31 + iVar27 * 0x50 + 0x16) & 2) == 0) {
      if ((*(byte *)(iVar31 + iVar27 * 0x50 + 0x15) & 2) == 0) goto LAB_001ee9b0;
      iVar27 = iVar27 * 0x50 + 0x15;
      *(byte *)(iVar31 + iVar27) = *(byte *)(iVar31 + iVar27) & 0xfd;
      *(undefined1 *)(param_1 + 0x22a) = 5;
    }
    else {
      iVar41 = 9;
      pbVar23 = (byte *)(iVar31 + 0x16);
      *pbVar23 = *(byte *)(iVar31 + 0x16) & 0xfd;
      *(byte *)(iVar31 + 0x15) = *(byte *)(iVar31 + 0x15) & 0xfd;
      iVar31 = iVar31 + 0x15;
      do {
        iVar41 = iVar41 + -1;
        pbVar23[0x50] = pbVar23[0x50] & 0xfd;
        *(byte *)(iVar31 + 0x50) = *(byte *)(iVar31 + 0x50) & 0xfd;
        pbVar1 = pbVar23 + 0xa0;
        pbVar23 = pbVar23 + 0xa0;
        *pbVar23 = *pbVar1 & 0xfd;
        *(byte *)(iVar31 + 0xa0) = *(byte *)(iVar31 + 0xa0) & 0xfd;
        iVar31 = iVar31 + 0xa0;
      } while (iVar41 != 0);
      puVar24 = *(uint **)(*(int *)(param_1 + 0x1090) + iVar27 * 0x50 + 0x24);
      *(undefined2 *)(param_1 + 0x1b8) = 8;
      uVar25 = *puVar24;
      if ((uVar25 & 0x20000) == 0) {
        if ((uVar25 & DAT_001eebb4) != 0) {
          *(undefined1 *)(param_1 + 0x22a) = 5;
        }
      }
      else {
        FUN_0037547c(DAT_001ee8c0,local_94,4,DAT_001ee8b0,DAT_001ee8b0,DAT_001ee8ac);
        *(undefined2 *)(param_1 + 0x1ca) = 0xf;
        *(undefined2 *)(param_1 + 0x1cc) = 0x10;
        *(float *)(param_1 + 0x200) = fVar12;
        *(undefined2 *)(param_1 + 0x1b0) = 100;
        *(undefined2 *)(param_1 + 0x1d6) = 0x3c;
      }
      fVar37 = DAT_001eebc8;
      uVar33 = DAT_001eebc4;
      fVar11 = DAT_001eebc0;
      uVar38 = DAT_001eebbc;
      uVar39 = DAT_001eebb8;
      iVar31 = param_1 + iVar27 * 0x18;
      *(float *)(param_1 + 0x238) = fVar30;
      sVar19 = 0;
      do {
        local_b0 = (float)FUN_003738a8(uVar39);
        local_ac = (float)FUN_00371e50(uVar38);
        local_ac = local_ac + fVar11;
        local_a8 = (float)FUN_003738a8(uVar39);
        local_a0 = *(float *)(iVar31 + 0xdcc);
        local_a4 = *(float *)(iVar31 + 0xdc8) + local_b0 * fVar15;
        local_9c = *(float *)(iVar31 + 0xdd0) + local_a8 * fVar15;
        fVar43 = (float)FUN_00371e50(uVar33);
        FUN_003673d8(fVar43 + fVar37,3,*(undefined4 *)(param_2 + 0x5c28),&local_a4,&local_b0);
        sVar19 = sVar19 + 1;
      } while (sVar19 < 10);
    }
    goto LAB_001ee9c0;
  }
LAB_001eea5c:
  *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1ba) + 1;
  *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + 1;
  *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + -3;
  *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + 1;
  FUN_0036fc20(uVar13,fVar30,param_1 + 0x220);
  if (*(int *)(local_70 + 0xf68) != param_1) {
    return;
  }
  iVar31 = FUN_0037571c(param_2);
  if (iVar31 < 1) {
    return;
  }
  iVar31 = FUN_0037571c(param_2);
  uVar18 = DAT_001eeddc;
  uVar33 = DAT_001eebe4;
  uVar25 = DAT_001eebe0;
  uVar38 = DAT_001eebd4;
  uVar13 = DAT_001eebd0;
  uVar39 = DAT_001eebcc;
  pcVar8 = DAT_001edf34;
  if (2 < iVar31) {
    return;
  }
  cVar3 = *DAT_001edf34;
  if (cVar3 == '\x01') {
    uVar26 = (uint)*(ushort *)(DAT_001edf34 + 8);
    bVar32 = uVar26 == DAT_001eebe0;
    if (bVar32) {
      *(undefined4 *)(DAT_001edf34 + 0x20) = DAT_001eebe4;
    }
    iVar31 = uVar26 - uVar25;
    if (bVar32) {
      *(undefined4 *)(pcVar8 + 0x1c) = uVar39;
LAB_001eeb50:
      pcVar8[6] = 'Z';
      pcVar8[7] = '\0';
    }
    else if ((int)uVar25 < (int)uVar26) {
      if (iVar31 == 9) {
        *(undefined4 *)(pcVar8 + 0x20) = DAT_001eedd4;
        *(float *)(pcVar8 + 0x1c) = fVar10;
        goto LAB_001eeb50;
      }
      if (iVar31 == 0x8e) {
        *(undefined4 *)(pcVar8 + 0x20) = DAT_001eedd4;
        uVar39 = DAT_001eedd8;
        goto LAB_001eec38;
      }
      if (iVar31 == 0x1c9) {
LAB_001eec40:
        *(undefined4 *)(pcVar8 + 0x20) = uVar13;
        pcVar8[6] = -1;
        pcVar8[7] = -1;
      }
    }
    else if (uVar26 == 0) {
      *(undefined4 *)(pcVar8 + 0x20) = uVar33;
      *(float *)(pcVar8 + 0x1c) = fVar9;
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
    }
    else {
      if (uVar26 == 0x3c) {
        *(undefined4 *)(pcVar8 + 0x20) = uVar33;
        uVar39 = DAT_001eebe8;
LAB_001eec38:
        *(undefined4 *)(pcVar8 + 0x1c) = uVar39;
        goto LAB_001eeb50;
      }
      if (uVar26 == 0x172) {
        *(undefined4 *)(pcVar8 + 0x20) = uVar33;
        *(undefined4 *)(pcVar8 + 0x1c) = DAT_001eebec;
        goto LAB_001eeb50;
      }
    }
  }
  else if (cVar3 == '\x02') {
    uVar4 = *(ushort *)(DAT_001edf34 + 8);
    if (uVar4 == 0x19a) {
      *(float *)(DAT_001edf34 + 0x1c) = fVar40;
LAB_001eeb4c:
      *(undefined4 *)(pcVar8 + 0x20) = uVar38;
      goto LAB_001eeb50;
    }
    if (uVar4 < 0x19b) {
      if (uVar4 == 0x89) {
        *(undefined4 *)(DAT_001edf34 + 0x1c) = DAT_001eebd8;
        *(undefined4 *)(pcVar8 + 0x20) = uVar39;
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
      }
      else if (uVar4 < 0x8a) {
        if (uVar4 == 0) {
          *(float *)(DAT_001edf34 + 0x1c) = fVar29;
          *(undefined4 *)(pcVar8 + 0x20) = uVar18;
          pcVar8[6] = '\0';
          pcVar8[7] = '\0';
        }
        else if (uVar4 == 0x17) {
          *(float *)(DAT_001edf34 + 0x1c) = fVar29;
          uVar38 = DAT_001eebdc;
          goto LAB_001eeb4c;
        }
      }
      else {
        pcVar2 = DAT_001edf34 + 0x20;
        if (uVar4 == 0xa0) {
          *(undefined4 *)(DAT_001edf34 + 0x1c) = DAT_001eebd8;
          *(undefined4 *)pcVar2 = uVar39;
          goto LAB_001eeb50;
        }
        if (uVar4 == 0x120) {
          *(float *)(DAT_001edf34 + 0x1c) = fVar40;
          *(undefined4 *)(pcVar8 + 0x20) = uVar38;
          pcVar8[6] = '\0';
          pcVar8[7] = '\0';
        }
      }
    }
    else if (uVar4 == 0x280) {
      *(undefined4 *)(DAT_001edf34 + 0x1c) = DAT_001eede0;
      *(undefined4 *)(pcVar8 + 0x20) = uVar38;
      pcVar8[6] = 'Z';
      pcVar8[7] = '\0';
    }
    else {
      pcVar2 = DAT_001edf34 + 0x20;
      if (uVar4 == 0x31e) {
        *(float *)(DAT_001edf34 + 0x1c) = fVar29;
        *(undefined4 *)pcVar2 = uVar38;
        pcVar8[6] = 'Z';
        pcVar8[7] = '\0';
      }
      else if (uVar4 == 0x35c) {
        *(undefined4 *)(DAT_001edf34 + 0x1c) = DAT_001eede4;
        *(undefined4 *)(pcVar8 + 0x20) = uVar38;
        pcVar8[6] = 'Z';
        pcVar8[7] = '\0';
      }
      else if (uVar4 == 0x3fe) goto LAB_001eec40;
    }
  }
  else if (cVar3 == '\0') {
    return;
  }
  iVar31 = FUN_0036c5bc(param_2,0xffffffff);
  if (*(short *)(pcVar8 + 6) < 0) {
    FUN_00367c48(iVar31);
    uVar39 = *(undefined4 *)(pcVar8 + 0x20);
  }
  else {
    if (*(short *)(pcVar8 + 6) == 0) {
      FUN_00367c54(iVar31);
      *(undefined4 *)(pcVar8 + 0x14) = *(undefined4 *)(pcVar8 + 0x1c);
      *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)(pcVar8 + 0x20);
      FUN_00367c60(iVar31);
      *(undefined4 *)(iVar31 + 0x144) = *(undefined4 *)(pcVar8 + 0x18);
      goto LAB_001eedc4;
    }
    FUN_00367c54(iVar31);
    fVar40 = (float)VectorSignedToFloat((int)*(short *)(pcVar8 + 6),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(*(undefined4 *)(pcVar8 + 0x1c),fVar12 / fVar40,DAT_001eede8);
    fVar40 = (float)VectorSignedToFloat((int)*(short *)(pcVar8 + 6),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(*(undefined4 *)(pcVar8 + 0x20),fVar12 / fVar40,DAT_001eedec);
    FUN_00367c60(*(undefined4 *)(pcVar8 + 0x14),iVar31);
    uVar39 = *(undefined4 *)(pcVar8 + 0x18);
  }
  *(undefined4 *)(iVar31 + 0x144) = uVar39;
LAB_001eedc4:
  *(short *)(pcVar8 + 8) = *(short *)(pcVar8 + 8) + 1;
  return;
LAB_001ee9b0:
  iVar27 = (int)(short)((short)iVar27 + 1);
  if (0x12 < iVar27) {
LAB_001ee9c0:
    if (((*(short *)(param_1 + 0x1b8) == 0) &&
        (*(short *)(param_1 + 0x1b0) != 4 && *(short *)(param_1 + 0x1b0) != 5)) &&
       ((*(int *)(param_1 + 0x1a4) == 0 ||
        (sVar19 = *(short *)(*(int *)(param_1 + 0x1a4) + 0x1b0), sVar19 != 4 && sVar19 != 5)))) {
      if (*(short *)(param_1 + 0x1ca) == 0) {
        FUN_003762a4(param_2);
        FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1074);
        goto LAB_001eea38;
      }
    }
    else {
LAB_001eea38:
      if (*(short *)(param_1 + 0x1ca) == 0) {
        FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1074);
      }
    }
    goto LAB_001eea5c;
  }
  goto LAB_001ee7ac;
}
