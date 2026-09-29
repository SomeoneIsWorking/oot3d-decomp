// OoT3D decomp @ 001317dc  name=FUN_001317dc  size=2292

void FUN_001317dc(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 auStack_c8 [48];
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

  fVar13 = DAT_00131bd0;
  fVar23 = DAT_00131bcc;
  fVar2 = DAT_00131bc8;
  fVar18 = DAT_00131bc4;
  fVar12 = 0.0;
  cVar1 = *(char *)(param_1 + 0x888);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x3237) = 0;
    fVar13 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x88e) * 0x500));
    *(float *)(param_2 + 0x3258) = fVar18 + fVar13 * fVar18;
    *(undefined1 *)(param_2 + 0x325c) = 2;
    *(undefined1 *)(param_2 + 0x3235) = 1;
LAB_00131940:
    *(undefined1 *)(param_2 + 0x3236) = 0;
  }
  else {
    local_68 = param_2 + 0x3258;
    if (cVar1 == '\x03') {
      *(undefined1 *)(param_2 + 0x3237) = 0;
      *(undefined1 *)(param_2 + 0x325c) = 2;
      *(undefined1 *)(param_2 + 0x3235) = 2;
      *(undefined1 *)(param_2 + 0x3236) = 0;
      FUN_00373500(fVar2,fVar2,fVar13,local_68);
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x888) = 1;
      *(undefined1 *)(param_2 + 0x3237) = 0;
      fVar16 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x88e) * 0x3e00));
      FUN_00373500(DAT_00131bd4 + fVar16 * fVar13,fVar2,DAT_00131bd8,local_68);
      *(undefined1 *)(param_2 + 0x325c) = 2;
      *(undefined1 *)(param_2 + 0x3235) = 3;
      *(undefined1 *)(param_2 + 0x3236) = 0;
    }
    else {
      if (cVar1 == '\n') {
        *(undefined1 *)(param_1 + 0x888) = 1;
        *(undefined1 *)(param_2 + 0x3237) = 0;
        fVar16 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x88e) * 0xc00));
        FUN_00373500(DAT_00131be0 + fVar16 * DAT_00131bdc,fVar2,fVar13,local_68);
        *(undefined1 *)(param_2 + 0x325c) = 2;
        *(undefined1 *)(param_2 + 0x3235) = 3;
        goto LAB_00131940;
      }
      if ((cVar1 == '\x01') &&
         (FUN_00373500(DAT_00131bcc,DAT_00131bc8,DAT_00131be4,local_68),
         *(int *)(param_2 + 0x3258) <= DAT_00131be8)) {
        *(undefined1 *)(param_1 + 0x888) = 0;
      }
    }
  }
  fVar19 = DAT_00131bf4;
  fVar16 = DAT_00131bf0;
  fVar13 = DAT_00131bec;
  fVar20 = DAT_00131bec;
  fVar24 = DAT_00131bf0;
  if (*(short *)(param_1 + 0x8a0) != 0) {
    *(short *)(param_1 + 0x8a0) = *(short *)(param_1 + 0x8a0) + -1;
    fVar20 = fVar19;
    fVar24 = fVar19;
  }
  FUN_00373500(fVar20,fVar2,DAT_00131bf8,param_1 + 0x8fc);
  FUN_00373500(fVar24,fVar2,fVar18,param_1 + 0x8f8);
  if ((*(ushort *)(param_1 + 0x88e) & 7) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  sVar8 = *(short *)(param_1 + 0x894);
  iVar9 = (int)sVar8;
  if (iVar9 != 0) {
    sVar8 = sVar8 + -1;
  }
  *(undefined1 *)(param_1 + 0x93d) = *(undefined1 *)(DAT_00131c00 + iVar9);
  if (iVar9 != 0) {
    *(short *)(param_1 + 0x894) = sVar8;
  }
  if (*(short *)(param_1 + 0x896) == 0) {
    fVar20 = fVar23;
    uVar22 = DAT_00131c1c;
    if ((*(ushort *)(param_1 + 0x88e) & 0x10) == 0) {
      fVar20 = DAT_00131c18;
    }
  }
  else {
    fVar20 = DAT_00131c10;
    uVar22 = DAT_00131c14;
    if (*(short *)(param_1 + 0x896) == 0x25) {
      local_f8 = DAT_00131c08;
      local_f4 = (float)DAT_00131c04;
      FUN_0037547c(DAT_00131c0c,param_1 + 0x28,4,DAT_00131c08);
      fVar20 = DAT_00131c10;
      uVar22 = DAT_00131c14;
    }
  }
  fVar24 = DAT_00131c20;
  FUN_00373500(fVar20,DAT_00131c20,uVar22,param_1 + 0x2268);
  fVar3 = DAT_00131c28;
  fVar20 = DAT_00131c24;
  if (*(short *)(param_1 + 0x896) != 0) {
    *(short *)(param_1 + 0x896) = *(short *)(param_1 + 0x896) + -1;
  }
  if (*(short *)(param_1 + 0x8b8) != 0) {
    local_f8 = DAT_00131c08;
    local_f4 = (float)DAT_00131c04;
    FUN_0037547c(DAT_00131c2c,param_1 + 0x28,4,DAT_00131c08);
    uVar22 = DAT_00131c38;
    fVar5 = DAT_00131c34;
    fVar4 = DAT_00131c30;
    if (*(short *)(param_1 + 0x8a8) == 0) {
      sVar8 = 0;
      do {
        local_74 = (float)FUN_003738a8(uVar22);
        local_70 = (float)FUN_00371e50(fVar13);
        local_70 = local_70 + fVar13;
        local_6c = (float)FUN_003738a8(uVar22);
        local_7c = fVar4;
        local_78 = fVar23;
        local_80 = fVar23;
        local_8c = *(float *)(param_1 + 0x930) + local_74 * fVar16;
        local_88 = fVar5;
        local_84 = *(float *)(param_1 + 0x938) + local_6c * fVar16;
        local_f4 = (float)DAT_00131c48;
        local_f0 = 7.00649e-43;
        local_ec = 1.4013e-44;
        local_e8 = 2.8026e-44;
        local_f8 = (float)(DAT_00131c48 + -4);
        FUN_00365d20(param_2,&local_8c,&local_74,&local_80);
        sVar8 = sVar8 + 1;
      } while (sVar8 < 1);
    }
    else {
      *(short *)(param_1 + 0x8a8) = *(short *)(param_1 + 0x8a8) + -1;
      if ((*(char *)(param_1 + 0xb7) == '\0') ||
         ((*(short *)(DAT_00131c3c + param_1) == 6 && (0x3000 < *(short *)(param_1 + 0x34))))) {
        if (*(char *)(param_1 + 0x888) == '\0') {
          *(float *)(param_2 + 0x3258) = fVar23;
        }
        *(undefined1 *)(param_1 + 0x888) = 2;
      }
      uVar21 = DAT_00131c44;
      fVar13 = DAT_00131c40;
      sVar8 = 0;
      do {
        local_74 = (float)FUN_003738a8(fVar19);
        local_70 = (float)FUN_00371e50(fVar16);
        local_70 = local_70 + fVar13;
        local_6c = (float)FUN_003738a8(fVar19);
        local_7c = fVar4;
        local_78 = fVar23;
        local_80 = fVar23;
        local_8c = *(float *)(param_1 + 0x930) + local_74 * fVar3;
        local_88 = fVar5;
        local_84 = *(float *)(param_1 + 0x938) + local_6c * fVar3;
        fVar14 = (float)FUN_00371e50(fVar16);
        fVar15 = (float)FUN_00371e50(uVar21);
        local_f0 = (float)(int)(short)((short)(int)fVar15 + 800);
        local_f8 = (float)(DAT_00131c48 + -4);
        local_f4 = (float)DAT_00131c48;
        local_ec = 1.4013e-44;
        local_e8 = (float)(int)(short)((short)(int)fVar14 + 0x11);
        FUN_00365d20(param_2,&local_8c,&local_74,&local_80);
        sVar8 = sVar8 + 1;
      } while (sVar8 < 3);
    }
    uVar7 = DAT_00132108;
    uVar6 = DAT_00132104;
    uVar21 = DAT_00132100;
    fVar13 = DAT_001320fc;
    sVar8 = 0;
    do {
      local_74 = (float)FUN_003738a8(fVar19);
      local_70 = (float)FUN_00371e50(uVar22);
      local_6c = (float)FUN_003738a8(fVar19);
      local_7c = fVar13;
      local_80 = (float)FUN_003738a8(fVar18);
      local_78 = (float)FUN_003738a8(fVar18);
      local_8c = (float)FUN_003738a8(uVar21);
      local_8c = local_8c + *(float *)(param_1 + 0x930);
      local_88 = (float)FUN_00371e50(uVar6);
      local_88 = local_88 + fVar5;
      local_84 = (float)FUN_003738a8(uVar21);
      local_84 = local_84 + *(float *)(param_1 + 0x938);
      fVar16 = (float)FUN_00371e50(uVar7);
      uVar17 = VectorSignedToFloat((short)(int)fVar16 + 6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0036fde0(uVar17,param_1,&local_8c,&local_74,&local_80);
      sVar8 = sVar8 + 1;
    } while (sVar8 < 3);
  }
  local_6c = (float)DAT_0013210c;
  local_f8 = DAT_00131c08;
  local_f4 = (float)DAT_00131c04;
  iVar10 = (int)*(short *)(param_1 + 0x884);
  iVar9 = iVar10;
  if (iVar10 != 0) {
    iVar9 = iVar10 + -0x1a;
  }
  if (iVar9 < 0 == (iVar10 != 0 && SBORROW4(iVar10,0x1a))) {
LAB_00131e10:
    if (fVar12 == 0.0) goto LAB_00132150;
  }
  else {
    if (iVar10 < 9) {
      fVar12 = (float)(int)(short)(*(short *)(param_1 + 0x884) * 0x4b);
      goto LAB_00131e10;
    }
    fVar12 = 3.57331e-43;
  }
  *(undefined1 *)(param_1 + 0x888) = 2;
  local_8c = fVar23;
  local_88 = fVar23;
  local_84 = fVar23;
  local_74 = fVar23;
  local_70 = fVar23;
  FUN_0037547c(DAT_00132114,DAT_00132110,4,local_f8);
  local_98 = *(float *)(param_1 + 0x2290);
  local_94 = *(float *)(param_1 + 0x2294);
  local_90 = *(float *)(param_1 + 0x2298);
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar13 = fVar13 * DAT_00132118 * DAT_0013211c;
  FUN_003735e8(fVar16 * DAT_00132118 * DAT_0013211c,auStack_c8,0);
  FUN_00369014(fVar24 + fVar13,auStack_c8,1);
  FUN_003735ac(&local_80,auStack_c8,&local_74);
  fVar16 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x88e) << 0xd));
  fVar13 = DAT_00132120;
  local_f4 = (float)(int)*(short *)(param_1 + 0x36);
  local_f8 = fVar12;
  FUN_0036fef4(DAT_00132120 + fVar16 * fVar20,param_1,&local_98,&local_80,&local_8c);
  local_98 = local_98 + local_80 * fVar18;
  local_94 = local_94 + local_7c * fVar18;
  local_90 = local_90 + local_78 * fVar18;
  fVar18 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x88e) << 0xd));
  local_f4 = (float)(int)*(short *)(param_1 + 0x36);
  local_f8 = fVar12;
  FUN_0036fef4(fVar13 + fVar18 * fVar20,param_1,&local_98,&local_80,&local_8c);
  fVar18 = DAT_0013212c;
  uVar22 = DAT_00132128;
  local_70 = (float)DAT_00132124;
  sVar8 = 0;
  local_74 = fVar23;
  local_6c = fVar23;
  do {
    fVar16 = (float)FUN_00371e50(uVar22);
    fVar19 = (float)FUN_00371e50(uVar22);
    uVar11 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar23) << 0x1e;
    fVar13 = fVar2;
    fVar12 = fVar23;
    if (!SUB41(uVar11 >> 0x1e,0)) {
      fVar12 = (float)FUN_003727f0(fVar16);
      fVar13 = (float)FUN_00372674(fVar16);
    }
    local_d8 = -fVar12;
    local_e4 = fVar2;
    in_fpscr = uVar11 & 0xfffffff | (uint)(fVar19 == fVar23) << 0x1e;
    local_f8 = fVar13;
    local_f4 = fVar23;
    local_f0 = fVar12;
    local_ec = fVar23;
    local_e8 = fVar23;
    local_e0 = fVar23;
    local_dc = fVar23;
    local_d4 = fVar23;
    local_d0 = fVar13;
    local_cc = fVar23;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar20 = (float)FUN_003727f0(fVar19);
      fVar19 = (float)FUN_00372674(fVar19);
      fVar13 = local_f0 * fVar20;
      local_f0 = local_f0 * fVar19 - local_f4 * fVar20;
      fVar12 = local_e0 * fVar20;
      local_e0 = local_e0 * fVar19 - local_e4 * fVar20;
      fVar16 = local_d0 * fVar20;
      local_d0 = local_d0 * fVar19 - local_d4 * fVar20;
      local_f4 = local_f4 * fVar19 + fVar13;
      local_e4 = local_e4 * fVar19 + fVar12;
      local_d4 = local_d4 * fVar19 + fVar16;
    }
    FUN_003735ac(&local_80,&local_f8,&local_74);
    local_8c = local_80 * fVar18;
    local_88 = local_7c * fVar18;
    local_84 = local_78 * fVar18;
    fVar13 = (float)FUN_00371e50(fVar3);
    uVar21 = VectorSignedToFloat((short)(int)fVar13 + 8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0036fde0(uVar21,param_1,(float *)(param_1 + 0x2290),&local_80,&local_8c);
    sVar8 = sVar8 + 1;
  } while (sVar8 < 3);
LAB_00132150:
  if ((*(int *)(param_1 + 0x2c) + 0xbd4c0000U < DAT_001321a0) &&
     (*(int *)(param_1 + 0x880) != DAT_001321a4)) {
    uVar11 = *(uint *)(param_1 + 4) | 1;
  }
  else {
    uVar11 = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(uint *)(param_1 + 4) = uVar11;
  return;
}
