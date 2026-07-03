// OoT3D decomp @ 0023e11c  name=FUN_0023e11c  size=4476

undefined4 FUN_0023e11c(int *param_1)

{
  short sVar1;
  ushort uVar2;
  float fVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  uint in_fpscr;
  int extraout_s0;
  int extraout_s0_00;
  int extraout_s0_01;
  int extraout_s0_02;
  float extraout_s0_03;
  int extraout_s0_04;
  float fVar18;
  int extraout_s0_05;
  int extraout_s1;
  int extraout_s1_00;
  int extraout_s1_01;
  int extraout_s1_02;
  float fVar19;
  float extraout_s1_03;
  int extraout_s1_04;
  int extraout_s1_05;
  int extraout_s2;
  int extraout_s2_00;
  int extraout_s2_01;
  int extraout_s2_02;
  float extraout_s2_03;
  float fVar20;
  float fVar21;
  int extraout_s2_04;
  int extraout_s2_05;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined1 auStack_bc [12];
  short local_b0;
  short local_ae;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_90 [2];
  int local_88;
  int local_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_68 [4];
  short local_64;
  short local_62;
  float local_60;
  short local_5c;
  short local_5a;
  float local_58;
  short local_54;
  short local_52;
  undefined1 auStack_50 [20];
  
  iVar7 = DAT_0023e4dc;
  piVar11 = param_1 + 3;
  local_a8 = param_1[0x36];
  sVar9 = **(short **)
            (*(int *)(DAT_0023e4d8 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            (short)param_1[99] * 8 + 4);
  *(short *)(param_1 + 2) = sVar9;
  *(int *)(iVar7 + 0x14) = (int)sVar9;
  FUN_00342ec0(auStack_50,param_1[0x36]);
  FUN_00371738(&local_a4,auStack_50,0x12);
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    *(undefined2 *)((int)param_1 + 0x42) = 0xffff;
    *(undefined2 *)(param_1 + 0x12) = 1;
    *(undefined2 *)(param_1 + 0x11) = 0;
    param_1[10] = local_a4;
    param_1[0xb] = local_a0;
    param_1[0xc] = local_9c;
    param_1[0x52] = DAT_0023e4e0;
    FUN_00338c04(param_1);
  }
  if (((short)param_1[0x11] == 0) && (0 < (short)param_1[0x12])) {
    *(short *)(param_1 + 0x12) = (short)param_1[0x12] + -1;
  }
  if ((short)param_1[0x12] == 0) {
    *(undefined2 *)((int)param_1 + 0x46) = 1;
    sVar9 = *(short *)((int)param_1 + 0x42) + 1;
    *(short *)((int)param_1 + 0x42) = sVar9;
    if (*param_1 <= (int)sVar9) {
      if ((short)param_1[0x6b] != 0) {
        *(undefined2 *)(param_1 + 0x6a) = 0;
      }
      return 1;
    }
    iVar6 = param_1[1] + sVar9 * 0x28;
    *piVar11 = iVar6;
    *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar6 + 4);
    uVar10 = (uint)*(byte *)(*piVar11 + 1);
    if (uVar10 != 0xff) {
      if ((uVar10 & 0xf0) == 0x80) {
        *(uint *)(iVar7 + 0x20) = uVar10 & 0xf;
      }
      else if ((uVar10 & 0xf0) == 0xc0) {
        FUN_00330d84((int)(short)((ushort)((uVar10 & 0xf) << 8) | 0xf000));
      }
      else {
        uVar12 = *(uint *)(param_1[0x36] + 0x1710);
        bVar17 = (uVar12 & 0x8000000) != 0;
        if (bVar17) {
          uVar12 = (uint)*(byte *)(local_a8 + 0x1a7);
        }
        if (bVar17 && uVar12 != 1) {
          uVar10 = 8;
        }
        FUN_00330d5c(param_1[0x35],param_1[0x3c],uVar10);
      }
    }
  }
  else {
    *(undefined2 *)((int)param_1 + 0x46) = 0;
  }
  fVar3 = DAT_0023e4e8;
  fVar18 = DAT_0023e4e4;
  iVar7 = *piVar11;
  piVar15 = param_1 + 0x20;
  uVar2 = *(ushort *)(iVar7 + 2);
  piVar14 = param_1 + 4;
  uVar10 = uVar2 & 0xff;
  if (uVar10 == 1) {
    param_1[4] = *(int *)(iVar7 + 0x10);
    param_1[5] = *(int *)(iVar7 + 0x14);
    param_1[6] = *(int *)(iVar7 + 0x18);
  }
  else if (uVar10 == 2) {
    if (*(short *)((int)param_1 + 0x46) != 0) {
      param_1[4] = (int)(*(float *)(param_1[0x35] + 0x1c4) + *(float *)(iVar7 + 0x10));
      param_1[5] = (int)(*(float *)(param_1[0x35] + 0x1c8) + *(float *)(*piVar11 + 0x14));
      fVar19 = *(float *)(param_1[0x35] + 0x1cc) + *(float *)(*piVar11 + 0x18);
LAB_0023e3c0:
      param_1[6] = (int)fVar19;
    }
  }
  else if (uVar10 == 3) {
    if (*(short *)((int)param_1 + 0x46) != 0) {
      param_1[4] = (int)((float)param_1[0x20] + *(float *)(iVar7 + 0x10));
      param_1[5] = (int)((float)param_1[0x21] + *(float *)(*piVar11 + 0x14));
      fVar19 = (float)param_1[0x22] + *(float *)(*piVar11 + 0x18);
      goto LAB_0023e3c0;
    }
  }
  else if (uVar10 == 4 || uVar10 == 0x84) {
    iVar6 = param_1[0x3c];
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 0x13c);
    }
    if (iVar6 == 0 || iVar7 == 0) {
      param_1[0x3c] = 0;
      *piVar14 = *piVar15;
      param_1[5] = param_1[0x21];
      param_1[6] = param_1[0x22];
    }
    else {
      FUN_00338790(auStack_bc);
      FUN_00371738(&local_7c,auStack_bc,0x12);
      FUN_00338790(&local_d0,param_1[0x36]);
      FUN_00371738(local_90,&local_d0,0x12);
      local_90[0] = local_a4;
      local_88 = local_9c;
      FUN_00372474(auStack_68,&local_7c,local_90);
      if ((uVar2 & 0x80) == 0) {
        FUN_00342e8c(&local_60,*piVar11 + 0x10);
      }
      else {
        local_5c = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x10) * fVar18);
        local_5a = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x14) * fVar18);
        local_60 = *(float *)(*piVar11 + 0x18);
      }
      local_5a = local_5a + local_62;
      local_5c = local_5c + local_64;
      FUN_00372448(&local_7c,&local_60);
      param_1[4] = extraout_s0;
      param_1[5] = extraout_s1;
      param_1[6] = extraout_s2;
    }
  }
  else {
    if ((DAT_0023eefc & uVar10) == 0) goto LAB_0023e558;
    if (((uVar2 & 4) == 0) || (*(short *)((int)param_1 + 0x46) != 0)) {
      if ((DAT_0023ef00 & uVar10) == 0) {
        iVar7 = param_1[0x3c];
        uVar10 = DAT_0023ef00;
        if (iVar7 != 0) {
          uVar10 = *(uint *)(iVar7 + 0x13c);
        }
        if (iVar7 == 0 || uVar10 == 0) {
          param_1[0x3c] = 0;
          goto LAB_0023e558;
        }
      }
      else if (param_1[0x36] == 0) {
LAB_0023e558:
        *piVar14 = *piVar15;
        param_1[5] = param_1[0x21];
        param_1[6] = param_1[0x22];
        goto LAB_0023e560;
      }
      uVar10 = uVar2 & 0xf;
      if (uVar10 == 1) {
        FUN_00338790(&local_d0);
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      else if (uVar10 == 2) {
        FUN_00342ec0();
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      else {
        FUN_00331764(&local_d0);
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      if ((uVar2 & 0x80) == 0) {
        FUN_00342e8c(&local_60,*piVar11 + 0x10);
      }
      else {
        local_5c = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x10) * fVar18);
        local_5a = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x14) * fVar18);
        local_60 = *(float *)(*piVar11 + 0x18);
      }
      local_5a = local_5a + local_ae;
      local_5c = local_5c - local_b0;
      FUN_00372448(auStack_bc,&local_60);
      param_1[4] = extraout_s0_00;
      param_1[5] = extraout_s1_00;
      param_1[6] = extraout_s2_00;
    }
  }
LAB_0023e560:
  piVar16 = param_1 + 7;
  iVar7 = *piVar11;
  piVar13 = param_1 + 0x29;
  uVar10 = *(ushort *)(iVar7 + 2) & 0xff00;
  uVar12 = (uint)(short)uVar10;
  if (uVar12 == 0x100) {
    param_1[7] = *(int *)(iVar7 + 0x1c);
    param_1[8] = *(int *)(iVar7 + 0x20);
    param_1[9] = *(int *)(iVar7 + 0x24);
  }
  else if (uVar12 == 0x200) {
    if (*(short *)((int)param_1 + 0x46) != 0) {
      param_1[7] = (int)(*(float *)(param_1[0x35] + 0x1b8) + *(float *)(iVar7 + 0x1c));
      param_1[8] = (int)(*(float *)(param_1[0x35] + 0x1bc) + *(float *)(*piVar11 + 0x20));
      fVar19 = *(float *)(param_1[0x35] + 0x1c0) + *(float *)(*piVar11 + 0x24);
LAB_0023e748:
      param_1[9] = (int)fVar19;
    }
  }
  else if (uVar12 == 0x300) {
    if (*(short *)((int)param_1 + 0x46) != 0) {
      param_1[7] = (int)((float)param_1[0x29] + *(float *)(iVar7 + 0x1c));
      param_1[8] = (int)((float)param_1[0x2a] + *(float *)(*piVar11 + 0x20));
      fVar19 = (float)param_1[0x2b] + *(float *)(*piVar11 + 0x24);
      goto LAB_0023e748;
    }
  }
  else if (((uVar12 == 0x400 || uVar12 == 0xffff8400) || uVar12 == 0x500) || uVar12 == 0xffff8500) {
    iVar7 = param_1[0x3c];
    if (iVar7 != 0) {
      uVar10 = *(uint *)(iVar7 + 0x13c);
    }
    if (iVar7 == 0 || uVar10 == 0) goto LAB_0023e8ec;
    FUN_00338790(auStack_bc);
    FUN_00371738(&local_7c,auStack_bc,0x12);
    FUN_00338790(&local_d0,param_1[0x36]);
    FUN_00371738(local_90,&local_d0,0x12);
    local_90[0] = local_a4;
    local_88 = local_9c;
    FUN_00372474(auStack_68,&local_7c,local_90);
    if (uVar12 == 0x400 || uVar12 == 0xffff8400) {
      local_dc = local_7c;
      iStack_d8 = iStack_78;
      iStack_d4 = iStack_74;
    }
    else {
      local_dc = *piVar14;
      iStack_d8 = param_1[5];
      iStack_d4 = param_1[6];
    }
    if ((uVar12 & 0xffff80ff) == 0) {
      FUN_00342e8c(&local_60,*piVar11 + 0x1c);
    }
    else {
      local_5c = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x1c) * fVar18);
      local_5a = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x20) * fVar18);
      local_60 = *(float *)(*piVar11 + 0x24);
    }
    local_5a = local_5a + local_62;
    local_5c = local_5c + local_64;
    FUN_00372448(&local_dc,&local_60);
    param_1[7] = extraout_s0_01;
    param_1[8] = extraout_s1_01;
    param_1[9] = extraout_s2_01;
  }
  else if ((DAT_0023eefc & uVar12) == 0) {
    *piVar16 = *piVar13;
    param_1[8] = param_1[0x2a];
    param_1[9] = param_1[0x2b];
  }
  else if (((uVar12 & 0x400) == 0) || (*(short *)((int)param_1 + 0x46) != 0)) {
    if ((DAT_0023ef00 & uVar12) == 0) {
      iVar7 = param_1[0x3c];
      uVar10 = DAT_0023ef00;
      if (iVar7 != 0) {
        uVar10 = *(uint *)(iVar7 + 0x13c);
      }
      if (iVar7 != 0 && uVar10 != 0) goto LAB_0023e900;
      param_1[0x3c] = 0;
    }
    else if (param_1[0x36] != 0) {
LAB_0023e900:
      if ((uVar12 & 0xf00) == 0x100) {
        FUN_00338790(&local_d0);
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      else if ((uVar12 & 0xf00) == 0x200) {
        FUN_00342ec0();
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      else {
        FUN_00331764(&local_d0);
        FUN_00371738(auStack_bc,&local_d0,0x12);
      }
      if ((uVar12 & 0xffff80ff) == 0) {
        FUN_00342e8c(&local_60,*piVar11 + 0x1c);
      }
      else {
        local_5c = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x1c) * fVar18);
        local_5a = (short)(int)(fVar3 + *(float *)(*piVar11 + 0x20) * fVar18);
        local_60 = *(float *)(*piVar11 + 0x24);
      }
      local_5a = local_5a + local_ae;
      local_5c = local_5c - local_b0;
      FUN_00372448(auStack_bc,&local_60);
      param_1[7] = extraout_s0_02;
      param_1[8] = extraout_s1_02;
      param_1[9] = extraout_s2_02;
      goto LAB_0023ea0c;
    }
LAB_0023e8ec:
    param_1[0x3c] = 0;
    *piVar16 = *piVar13;
    param_1[8] = param_1[0x2a];
    param_1[9] = param_1[0x2b];
  }
LAB_0023ea0c:
  sVar9 = *(short *)(*piVar11 + 2);
  if (sVar9 == 2) {
    param_1[0xd] = *(int *)(param_1[0x35] + 0x198);
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  else {
    if (sVar9 == 0) {
      param_1[0xd] = param_1[0x51];
      uVar4 = *(undefined2 *)((int)param_1 + 0x1a2);
    }
    else {
      param_1[0xd] = *(int *)(*piVar11 + 8);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar11 + 6),(byte)(in_fpscr >> 0x15) & 3
                                         );
      uVar4 = (undefined2)(int)(fVar3 + fVar19 * fVar18);
    }
    *(undefined2 *)(param_1 + 0x10) = uVar4;
  }
  fVar19 = DAT_0023ef04;
  switch(*(byte *)*piVar11 & 0x1f) {
  default:
    goto switchD_0023ea84_caseD_0;
  case 1:
    FUN_00372474(&local_58,param_1 + 0x20,param_1 + 0x29);
    FUN_00372474(param_1 + 0xe,param_1 + 4,param_1 + 7);
    fVar18 = (float)VectorSignedToFloat((int)(short)param_1[0x12],(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = DAT_0023ef04 / fVar18;
    local_60 = local_58 + ((float)param_1[0xe] - local_58) * fVar18;
    fVar22 = (float)VectorSignedToFloat((int)(short)((short)param_1[0xf] - local_54),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((int)local_54,(byte)(in_fpscr >> 0x15) & 3);
    local_5c = (short)(int)(fVar19 + fVar22 * fVar18);
    fVar22 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)param_1 + 0x3e) - local_52),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((int)local_52,(byte)(in_fpscr >> 0x15) & 3);
    local_5a = (short)(int)(fVar19 + fVar22 * fVar18);
    FUN_00372448(param_1 + 0x20,&local_60);
    fVar19 = extraout_s0_03;
    fVar22 = extraout_s1_03;
    fVar18 = extraout_s2_03;
    goto LAB_0023eca4;
  case 2:
    fVar18 = (float)VectorSignedToFloat((int)(short)param_1[0x12],(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = DAT_0023ef04 / fVar18;
    fVar19 = (float)param_1[0x29] + ((float)param_1[7] - (float)param_1[0x29]) * fVar18;
    fVar22 = (float)param_1[0x2a] + ((float)param_1[8] - (float)param_1[0x2a]) * fVar18;
    fVar18 = (float)param_1[0x2b] + ((float)param_1[9] - (float)param_1[0x2b]) * fVar18;
LAB_0023eca4:
    fVar20 = DAT_0023ef04;
    iVar7 = FUN_00330d3c(fVar19,param_1[0x29],*(undefined4 *)(*piVar11 + 0xc),DAT_0023ef04);
    param_1[0x29] = iVar7;
    iVar7 = FUN_00330d3c(fVar22,param_1[0x2a],*(undefined4 *)(*piVar11 + 0xc),fVar20);
    param_1[0x2a] = iVar7;
    iVar7 = FUN_00330d3c(fVar18,param_1[0x2b],*(undefined4 *)(*piVar11 + 0xc),fVar20);
    param_1[0x2b] = iVar7;
switchD_0023ea84_caseD_9:
    fVar18 = DAT_0023ef04;
    fVar22 = (float)param_1[0x20];
    fVar24 = (float)param_1[0x21];
    fVar23 = (float)param_1[0x22];
    fVar19 = (float)VectorSignedToFloat((int)(short)param_1[0x12],(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = DAT_0023ef04 / fVar19;
    fVar20 = (float)param_1[5];
    fVar21 = (float)param_1[6];
    iVar7 = FUN_00330d3c(fVar22 + ((float)param_1[4] - fVar22) * fVar19,fVar22,
                         *(undefined4 *)(*piVar11 + 0xc),DAT_0023ef04);
    param_1[0x20] = iVar7;
    iVar7 = FUN_00330d3c(fVar24 + (fVar20 - fVar24) * fVar19,param_1[0x21],
                         *(undefined4 *)(*piVar11 + 0xc),fVar18);
    param_1[0x21] = iVar7;
    iVar7 = FUN_00330d3c(fVar23 + (fVar21 - fVar23) * fVar19,param_1[0x22],
                         *(undefined4 *)(*piVar11 + 0xc),fVar18);
    param_1[0x22] = iVar7;
    fVar18 = (float)param_1[0x51];
    iVar7 = FUN_00330d3c(fVar18 + ((float)param_1[0xd] - fVar18) * fVar19,fVar18,
                         *(undefined4 *)(*piVar11 + 0xc),DAT_0023ef08);
    param_1[0x51] = iVar7;
    sVar9 = *(short *)((int)param_1 + 0x1a2);
    sVar5 = FUN_00368d94((int)(short)((short)param_1[0x10] - sVar9),(int)(short)param_1[0x12]);
    iVar6 = (int)sVar5;
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = -iVar6;
    }
    fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (9 < iVar7) {
      sVar9 = sVar9 + (short)(int)(fVar3 + fVar18 * *(float *)(*piVar11 + 0xc));
    }
    *(short *)((int)param_1 + 0x1a2) = sVar9;
    goto LAB_0023f1fc;
  case 3:
    iVar7 = FUN_00355780(param_1[7],param_1[0x29],*(undefined4 *)(*piVar11 + 0xc),DAT_0023ef04);
    param_1[0x29] = iVar7;
    iVar7 = FUN_00355780(param_1[8],param_1[0x2a],*(undefined4 *)(*piVar11 + 0xc),fVar19);
    param_1[0x2a] = iVar7;
    iVar7 = FUN_00355780(param_1[9],param_1[0x2b],*(undefined4 *)(*piVar11 + 0xc),fVar19);
    param_1[0x2b] = iVar7;
    break;
  case 4:
    FUN_00372474(&local_58,param_1 + 0x20,param_1 + 0x29);
    FUN_00372474(param_1 + 0xe,param_1 + 4,param_1 + 7);
    local_60 = (float)FUN_00355780(param_1[0xe],local_58,*(undefined4 *)(*piVar11 + 0xc),
                                   DAT_0023ef0c);
    local_5c = (short)param_1[0xf];
    iVar6 = (int)(short)(local_5c - local_54);
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = -iVar6;
    }
    fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (0 < iVar7) {
      local_5c = local_54 + (short)(int)(fVar3 + fVar18 * *(float *)(*piVar11 + 0xc));
    }
    local_5a = *(short *)((int)param_1 + 0x3e);
    iVar6 = (int)(short)(local_5a - local_52);
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = -iVar6;
    }
    fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (0 < iVar7) {
      local_5a = local_52 + (short)(int)(fVar3 + fVar18 * *(float *)(*piVar11 + 0xc));
    }
    FUN_00372448(param_1 + 0x20,&local_60);
    param_1[0x29] = extraout_s0_04;
    param_1[0x2a] = extraout_s1_04;
    param_1[0x2b] = extraout_s2_04;
    break;
  case 9:
  case 10:
    goto switchD_0023ea84_caseD_9;
  case 0xb:
  case 0xc:
    break;
  case 0xd:
    iVar7 = FUN_00355780(param_1[4],param_1[0x20],*(undefined4 *)(*piVar11 + 0xc),DAT_0023ef04);
    param_1[0x20] = iVar7;
    param_1[0x21] = (int)((float)param_1[0x21] + (float)param_1[0x4f] * *(float *)(*piVar11 + 0xc));
    iVar7 = FUN_00355780(param_1[6],param_1[0x22],*(undefined4 *)(*piVar11 + 0xc),fVar19);
    param_1[0x22] = iVar7;
    FUN_00372474(&local_60,param_1 + 0x20,param_1 + 0x29);
    local_5a = local_5a + (short)(int)(fVar3 + *(float *)(*piVar11 + 0x20) * fVar18);
    if (DAT_0023f324 < local_5c) {
      local_5c = (short)DAT_0023f324;
    }
    if (local_5c < DAT_0023f328) {
      local_5c = (short)DAT_0023f328;
    }
    fVar18 = *(float *)(*piVar11 + 0x24);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar18 <= local_60) << 0x1d;
    if (SUB41(uVar10 >> 0x1d,0)) {
      local_60 = (float)FUN_00355780(fVar18,local_60,*(undefined4 *)(*piVar11 + 0xc),fVar19);
    }
    FUN_00372448(param_1 + 0x20,&local_60);
    param_1[0x29] = extraout_s0_05;
    param_1[0x2a] = extraout_s1_05;
    param_1[0x2b] = extraout_s2_05;
    fVar18 = (float)param_1[0x51];
    fVar22 = (float)VectorSignedToFloat((int)(short)param_1[0x12],(byte)(uVar10 >> 0x15) & 3);
    iVar7 = FUN_00355780((*(float *)(*piVar11 + 8) - fVar18) / fVar22 + fVar18,fVar18,
                         *(undefined4 *)(*piVar11 + 0xc),fVar19);
    param_1[0x51] = iVar7;
    sVar9 = (short)param_1[0x10];
    sVar5 = *(short *)((int)param_1 + 0x1a2);
    iVar6 = (int)(short)(sVar9 - sVar5);
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = -iVar6;
    }
    fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(uVar10 >> 0x15) & 3);
    sVar1 = (short)(int)(fVar3 + fVar18 * *(float *)(*piVar11 + 0xc));
    goto joined_r0x0023f17c;
  case 0xf:
    *piVar15 = *piVar14;
    param_1[0x21] = param_1[5];
    param_1[0x22] = param_1[6];
    *piVar13 = *piVar16;
    param_1[0x2a] = param_1[8];
    param_1[0x2b] = param_1[9];
    param_1[0x51] = param_1[0xd];
    *(short *)((int)param_1 + 0x1a2) = (short)param_1[0x10];
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x400;
    goto LAB_0023f1fc;
  case 0x10:
    if ((short)param_1[0x11] == 0) {
      uVar4 = 1;
    }
    else {
      if ((*(ushort *)(param_1 + 0x65) & 8) == 0) goto LAB_0023eb54;
      uVar4 = 0;
    }
    *(undefined2 *)(param_1 + 0x11) = uVar4;
    goto LAB_0023eb54;
  case 0x12:
    goto switchD_0023ea84_caseD_12;
  case 0x13:
    iVar7 = (int)*(short *)((int)param_1 + 0x1aa);
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    FUN_0033228c(*(undefined4 *)(param_1[0x35] + DAT_0023f32c + iVar7 * 4),0,1);
    goto switchD_0023ea84_caseD_12;
  case 0x15:
    if ((short)param_1[0x11] == 0) {
      *(undefined2 *)(param_1 + 0x11) = 1;
    }
    else if ((*(ushort *)(param_1 + 0x65) & 8) != 0) {
      *(undefined2 *)(param_1 + 0x11) = 0;
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff7;
    }
LAB_0023eb54:
    *piVar15 = *piVar14;
    param_1[0x21] = param_1[5];
    param_1[0x22] = param_1[6];
    *piVar13 = *piVar16;
    param_1[0x2a] = param_1[8];
    param_1[0x2b] = param_1[9];
    param_1[0x51] = param_1[0xd];
    *(short *)((int)param_1 + 0x1a2) = (short)param_1[0x10];
    goto LAB_0023f1fc;
  case 0x18:
    *(short *)((int)param_1 + 0x42) = (short)param_1[0x10];
    goto LAB_0023f1fc;
  }
  fVar18 = DAT_0023ef04;
  iVar7 = FUN_00355780(param_1[4],param_1[0x20],*(undefined4 *)(*piVar11 + 0xc),DAT_0023ef04);
  param_1[0x20] = iVar7;
  iVar7 = FUN_00355780(param_1[5],param_1[0x21],*(undefined4 *)(*piVar11 + 0xc),fVar18);
  param_1[0x21] = iVar7;
  iVar7 = FUN_00355780(param_1[6],param_1[0x22],*(undefined4 *)(*piVar11 + 0xc),fVar18);
  param_1[0x22] = iVar7;
  iVar7 = FUN_00355780(param_1[0xd],param_1[0x51],*(undefined4 *)(*piVar11 + 0xc),fVar18);
  param_1[0x51] = iVar7;
  sVar9 = (short)param_1[0x10];
  sVar5 = *(short *)((int)param_1 + 0x1a2);
  iVar6 = (int)(short)(sVar9 - sVar5);
  iVar7 = iVar6;
  if (iVar6 < 0) {
    iVar7 = -iVar6;
  }
  fVar18 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)(fVar3 + fVar18 * *(float *)(*piVar11 + 0xc));
joined_r0x0023f17c:
  if (0 < iVar7) {
    sVar9 = sVar5 + sVar1;
  }
  *(short *)((int)param_1 + 0x1a2) = sVar9;
LAB_0023f1fc:
  param_1[0x23] = *piVar13;
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  if ((*(byte *)*piVar11 & 0x80) != 0) {
    local_d0 = param_1[0x23];
    iStack_cc = param_1[0x24];
    iStack_c8 = param_1[0x25];
    FUN_003553fc(param_1,param_1 + 0x20,&local_d0);
    param_1[0x23] = local_d0;
    param_1[0x24] = iStack_cc;
    param_1[0x25] = iStack_c8;
  }
  iVar7 = DAT_0023f330;
  if ((*(byte *)*piVar11 & 0x40) == 0) {
    param_1[10] = local_a4;
    param_1[0xb] = local_a0;
    param_1[0xc] = local_9c;
  }
  else {
    *(int *)(param_1[0x36] + 0x28) = param_1[10];
    *(int *)(param_1[0x36] + 0x30) = param_1[0xc];
    uVar10 = *(uint *)(iVar7 + param_1[0x36]);
    bVar17 = (uVar10 & 0x8000000) != 0;
    if (bVar17) {
      uVar10 = (uint)*(byte *)(local_a8 + 0x1a7);
    }
    if (bVar17 && uVar10 != 1) {
      *(int *)(param_1[0x36] + 0x2c) = param_1[0xb];
    }
  }
  if (((short)param_1[0x11] == 0) && (0 < (short)param_1[0x6a])) {
    *(short *)(param_1 + 0x6a) = (short)param_1[0x6a] + -1;
  }
  if (param_1[0x36] != 0) {
    param_1[0x4b] = (int)((float)param_1[0x20] - (float)param_1[0x37]);
    param_1[0x4c] = (int)((float)param_1[0x21] - (float)param_1[0x38]);
    param_1[0x4d] = (int)((float)param_1[0x22] - (float)param_1[0x39]);
  }
  iVar7 = FUN_00338a90(param_1 + 0x20,param_1 + 0x23);
  param_1[0x49] = iVar7;
  return 1;
switchD_0023ea84_caseD_12:
  iVar7 = (int)*(short *)((int)param_1 + 0x1aa);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  uVar8 = *(undefined4 *)(param_1[0x35] + DAT_0023f32c + iVar7 * 4);
  param_1[0x23] = *piVar13;
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  FUN_00338680(uVar8,param_1);
switchD_0023ea84_caseD_0:
  if ((short)param_1[0x6b] != 0) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
  }
  goto LAB_0023f1fc;
}

