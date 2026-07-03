// OoT3D decomp @ 002d84c4  name=FUN_002d84c4  size=3740

void FUN_002d84c4(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint extraout_r1;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar20;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float extraout_s2_01;
  float fVar21;
  float extraout_s2_02;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_f8;
  float *pfStack_f4;
  undefined1 auStack_e4 [4];
  short local_e0;
  short local_de;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  short local_b8;
  short local_b6;
  short local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 auStack_98 [4];
  short local_94;
  short local_92;
  uint local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  
  piVar2 = DAT_002d88b4;
  fVar18 = DAT_002d88ac;
  iVar1 = DAT_002d88a8;
  iVar11 = *(int *)(*(int *)(*(int *)(param_2 + 0xd4) + 0xa54) + 0xd8);
  if (*(short *)(param_2 + 0x188) == 0) goto LAB_002d946c;
  *(undefined4 *)(DAT_002d88a8 + 0x24) = 0;
  fVar28 = DAT_002d88b8;
  fVar20 = DAT_002d88b0;
  if (*(int *)(param_2 + 0xd8) != 0) {
    FUN_00331764(auStack_e4);
    FUN_00371738(&local_ac,auStack_e4,0x12);
    fVar13 = (float)FUN_00367e60(&local_ac,param_2 + 0xdc);
    *(float *)(param_2 + 0x120) = fVar13;
    fVar14 = (float)FUN_004796f8(*(undefined4 *)(param_2 + 0xd8));
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1a4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar15 = FUN_00355804(fVar13 / (fVar14 * fVar19 * fVar18));
    *(undefined4 *)(param_2 + 0x128) = uVar15;
    fVar14 = DAT_002d88c4;
    fVar13 = DAT_002d88c0;
    iVar6 = DAT_002d88bc;
    *(float *)(param_2 + 0x138) = local_ac - *(float *)(param_2 + 0xdc);
    *(float *)(param_2 + 0x13c) = local_a8 - *(float *)(param_2 + 0xe0);
    *(float *)(param_2 + 0x140) = local_a4 - *(float *)(param_2 + 0xe4);
    if ((*(byte *)(iVar6 + iVar11) & 0x10) == 0) {
      local_8c = local_ac;
      local_88 = local_a8;
      fStack_84 = local_a4;
      fVar19 = (float)FUN_00367ef0(*(undefined4 *)(param_2 + 0xd8));
      pfStack_f4 = &local_8c;
      local_88 = fVar19 + local_88;
      local_f8 = *(undefined4 *)(param_2 + 0xd8);
      fVar19 = (float)FUN_00316c18(*(int *)(param_2 + 0xd4),*(int *)(param_2 + 0xd4) + 0xa98,
                                   iVar1 + 0xa8,&local_90);
      if (fVar19 == fVar14) {
LAB_002d86e4:
        *(float *)(param_2 + 0x150) = fVar20;
        *(float *)(param_2 + 0x154) = fVar28;
        *(float *)(param_2 + 0x158) = fVar20;
        *(int *)(iVar1 + 0x9c) = *(int *)(iVar1 + 0x9c) + 1;
      }
      else {
        iVar6 = *(int *)(iVar1 + 0xa8);
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 10),(byte)(in_fpscr >> 0x15) & 3
                                           );
        *(float *)(param_2 + 0x150) = fVar16 * fVar13;
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xc),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0x154) = fVar16 * fVar13;
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_2 + 0x158) = fVar16 * fVar13;
        *(short *)(param_2 + 0x18e) = (short)local_90;
        *(float *)(param_2 + 0x14c) = fVar19;
        *(undefined4 *)(iVar1 + 0x9c) = 0;
      }
    }
    else {
      iVar6 = *(int *)(param_2 + 0xd8);
      fVar19 = *(float *)(iVar6 + 0x84);
      if (fVar19 == fVar14) goto LAB_002d86e4;
      iVar8 = *(int *)(iVar6 + 0x7c);
      *(int *)(iVar1 + 0xa8) = iVar8;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 10),(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0x150) = fVar16 * fVar13;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(float *)(param_2 + 0x154) = fVar16 * fVar13;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(float *)(param_2 + 0x158) = fVar16 * fVar13;
      local_90 = (uint)*(byte *)(iVar6 + 0x81);
      *(ushort *)(param_2 + 0x18e) = (ushort)*(byte *)(iVar6 + 0x81);
      *(float *)(param_2 + 0x14c) = fVar19;
      *(undefined4 *)(iVar1 + 0x9c) = 0;
    }
    FUN_00371738(param_2 + 0xdc,&local_ac,0x12);
    if (*(int *)(iVar1 + 0x9c) < 200) {
      uVar10 = extraout_r1;
      if (*(short *)(param_2 + 0x188) == 7) {
        FUN_002d06a0(param_2);
        uVar4 = *(ushort *)(param_2 + 0x19a) & 0xfffe;
        *(ushort *)(param_2 + 0x19a) = uVar4;
        iVar6 = *(int *)(param_2 + 0xd4);
        uVar10 = iVar6 + 0x4000;
        if ((*(char *)(iVar6 + 0x4c32) == '\x03') ||
           (uVar10 = (uint)*(byte *)(iVar6 + 0x4c37), uVar10 != 0)) {
          *(ushort *)(param_2 + 0x19a) = uVar4 | 1;
        }
      }
      uVar7 = (uint)*(short *)(param_2 + 0x194);
      if ((uVar7 & 4) == 0) {
        uVar10 = 0xffffffff;
        *(undefined2 *)(param_2 + 0x19e) = 0xffff;
      }
      if (((uVar7 & 1) != 0 && (uVar7 & 4) != 0) && ((uVar7 & 0x400) == 0)) {
        bVar12 = (uVar7 & 0x200) != 0;
        if (bVar12) {
          uVar10 = (uint)*(byte *)(iVar11 + 0x1a7);
        }
        if (((!bVar12 || uVar10 == 1) && (uVar7 >> 0xf == 0)) && (fVar19 != fVar14)) {
          uVar15 = *(undefined4 *)(iVar1 + 0xa8);
          FUN_00331764(&local_f8,*(undefined4 *)(param_2 + 0xd8));
          uVar15 = FUN_0047bfd8(*(int *)(param_2 + 0xd4) + 0xa98,uVar15,local_90);
          cVar3 = FUN_002d064c(*(int *)(param_2 + 0xd4) + 0xa98,uVar15,local_90);
          if (cVar3 == '\0') {
            uVar15 = 0xffffffff;
          }
          if (((short)uVar15 != -1) &&
             (*(short *)(param_2 + 0x1a0) = (short)local_90, local_90 == 0x32)) {
            *(short *)(param_2 + 0x19e) = (short)uVar15;
          }
        }
      }
      if ((*(short *)(param_2 + 0x19e) != -1) && ((int)ABS(local_a8 - fVar19) < 0x40000000)) {
        uVar4 = *(ushort *)(param_2 + 0x194);
        bVar12 = (uVar4 & 0x200) != 0;
        if (bVar12) {
          uVar4 = (ushort)*(byte *)(iVar11 + 0x1a7);
        }
        if (!bVar12 || uVar4 == 1) {
          *(undefined2 *)(param_2 + 0x18e) = *(undefined2 *)(param_2 + 0x1a0);
          FUN_003387a8(param_2);
          *(undefined2 *)(param_2 + 0x19e) = 0xffff;
        }
      }
    }
  }
  if (*(short *)(param_2 + 0x188) == 1) goto LAB_002d946c;
  *(undefined2 *)(param_2 + 0x192) = 0;
  *(ushort *)(param_2 + 0x194) = *(ushort *)(param_2 + 0x194) & 0xfbdf | 0x10;
  if (*(int *)(iVar1 + 0x9c) < 200) {
    (**(code **)(DAT_002d8c20 +
                *(short *)(*(int *)(DAT_002d88c8 + (*(ushort *)(param_2 + 0x18a) & 0xff) * 8 + 4) +
                          (*(ushort *)(param_2 + 0x18c) & 0xff) * 8) * 4))(param_2);
  }
  else if (*(int *)(param_2 + 0xd8) != 0) {
    FUN_00372474(auStack_98,param_2 + 0x80,param_2 + 0x8c);
    FUN_00338ac8(fVar20,param_2,auStack_98,0);
  }
  fVar13 = DAT_002d8c24;
  if (*(short *)(param_2 + 0x188) == 7) {
    if (*(int *)(DAT_002d8c28 + 0x4e4) == 0 || *(int *)(DAT_002d8c28 + 0x4e4) == 3) {
      iVar11 = *(int *)(param_2 + 0xd4);
      bVar12 = *(char *)(DAT_002d8c2c + iVar11) == '\0';
      sVar5 = 0;
      if (!bVar12) {
        sVar5 = *(short *)(DAT_002d8c30 + iVar11);
      }
      if (bVar12 || sVar5 == 0) {
        if ((*(int *)(iVar1 + 0x28) == 0) || (*(short *)(param_2 + 0x1ac) != 0)) {
          if (*(char *)(DAT_002d8c38 + iVar11) == '\0') {
            iVar11 = FUN_0037571c();
            if (iVar11 == 0) {
              iVar11 = (int)(short)*(undefined4 *)(iVar1 + 0x14);
            }
            else {
              *(undefined4 *)(iVar1 + 0x14) = 0x3200;
              iVar11 = 0x3200;
            }
          }
          else {
            *(undefined4 *)(iVar1 + 0x14) = 0xf200;
            iVar11 = -0xe00;
          }
        }
        else {
          *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
          iVar11 = 0x3200;
          *(undefined4 *)(iVar1 + 0x14) = 0x3200;
        }
        FUN_00330d84(iVar11);
      }
      else {
        *(undefined4 *)(iVar1 + 0x14) = 0x3200;
        FUN_00330d84(0x3200);
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(int *)(iVar1 + 0x28) = (int)(DAT_002d8c34 / fVar14 + fVar13);
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      FUN_00330d84(0);
    }
  }
  if (*(short *)(param_2 + 0x188) == 3) goto LAB_002d946c;
  local_90 = FUN_004787c8(param_2,&local_d0);
  sVar5 = 0;
  if (local_90 != 0) {
    sVar5 = *(short *)(param_2 + 0x18a);
  }
  if (local_90 == 0 || sVar5 == 0x38) {
    local_68 = *(float *)(param_2 + 0x80);
    local_64 = *(float *)(param_2 + 0x84);
    local_60 = *(float *)(param_2 + 0x88);
    local_74 = *(float *)(param_2 + 0x8c);
    local_70 = *(float *)(param_2 + 0x90);
    local_6c = *(float *)(param_2 + 0x94);
    FUN_00372474(auStack_98,&local_74,&local_68);
    FUN_002d052c((int)local_94,(int)local_92,(int)*(short *)(param_2 + 0x1a2));
    fVar14 = *(float *)(param_2 + 0x144);
    local_80 = extraout_s0_00;
    local_7c = extraout_s1_00;
    local_78 = extraout_s2_00;
  }
  else {
    local_68 = *(float *)(param_2 + 0x80) + local_d0;
    local_64 = *(float *)(param_2 + 0x84) + local_cc;
    local_60 = *(float *)(param_2 + 0x88) + local_c8;
    local_74 = *(float *)(param_2 + 0x8c) + local_c4;
    local_70 = *(float *)(param_2 + 0x90) + local_c0;
    local_6c = *(float *)(param_2 + 0x94) + local_bc;
    FUN_00372474(auStack_98,&local_74,&local_68);
    FUN_002d052c((int)(short)(local_94 + local_b8),(int)(short)(local_92 + local_b6),
                 (int)*(short *)(param_2 + 0x1a2));
    fVar14 = (float)VectorSignedToFloat((int)local_b4,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = *(float *)(param_2 + 0x144) + fVar14 * DAT_002d8c3c;
    local_80 = extraout_s0;
    local_7c = extraout_s1;
    local_78 = extraout_s2;
  }
  if ((*(ushort *)(param_2 + 0x1a4) & 4) == 0) {
    *(undefined4 *)(param_2 + 0x98) = local_80;
    *(undefined4 *)(param_2 + 0x9c) = local_7c;
    *(undefined4 *)(param_2 + 0xa0) = local_78;
  }
  else {
    *(ushort *)(param_2 + 0x1a4) = *(ushort *)(param_2 + 0x1a4) & 0xfffb;
    local_80 = *(undefined4 *)(param_2 + 0x98);
    local_7c = *(undefined4 *)(param_2 + 0x9c);
    local_78 = *(undefined4 *)(param_2 + 0xa0);
  }
  *(float *)(param_2 + 0xb0) = local_c4;
  *(float *)(param_2 + 0xb4) = local_c0;
  *(float *)(param_2 + 0xb8) = local_bc;
  if (*(char *)(DAT_002d8c40 + 0xf) == '\0') {
    iVar6 = (int)*(short *)(param_2 + 0x18c);
    iVar11 = FUN_00374be8(*(undefined4 *)(param_2 + 0xd4),10);
    fVar19 = DAT_002d8fa8;
    if (iVar11 != 0) {
      iVar6 = 0x15;
    }
    switch(iVar6) {
    case 0:
    case 3:
    case 0x11:
    case 0x13:
      iVar6 = (int)-*(short *)(param_2 + 0x1b2);
      iVar11 = iVar6;
      if (iVar6 < 0) {
        iVar11 = -iVar6;
      }
      fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar11 < 1) {
        sVar5 = 0;
      }
      else {
        sVar5 = *(short *)(param_2 + 0x1b2) + (short)(int)(fVar13 + fVar16 * DAT_002d8fa8);
      }
      *(short *)(param_2 + 0x1b2) = sVar5;
      sVar5 = *(short *)(param_2 + 0x1b4);
      iVar6 = (int)-sVar5;
      iVar11 = iVar6;
      if (iVar6 < 0) {
        iVar11 = -iVar6;
      }
      if (iVar11 < 1) {
        sVar5 = 0;
      }
      fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (0 < iVar11) {
        sVar5 = sVar5 + (short)(int)(fVar13 + fVar16 * fVar19);
      }
      *(short *)(param_2 + 0x1b4) = sVar5;
      FUN_00372474(&local_d8,&local_74,&local_68);
      local_d4 = (float)CONCAT22(local_d4._2_2_ + *(short *)(param_2 + 0x1b4),
                                 (short)local_d4 - *(short *)(param_2 + 0x1b2));
      FUN_00372448(&local_74,&local_d8);
      local_68 = extraout_s0_02;
      local_64 = extraout_s1_02;
      local_60 = extraout_s2_02;
    default:
code_r0x002d8e38:
      FUN_002ded60();
      break;
    case 1:
    case 0xc:
    case 0xf:
      iVar11 = FUN_00306f04();
      fVar24 = DAT_002d8f84;
      fVar16 = DAT_002d8f80;
      fVar19 = DAT_002d8f78;
      local_d4 = *(float *)(iVar11 + 0xc);
      local_dc = *(float *)(iVar11 + 4) * *(float *)(iVar11 + 0x44);
      local_d8 = *(float *)(iVar11 + 8) * *(float *)(iVar11 + 0x40);
      fVar21 = (local_dc - *(float *)(param_2 + 0xbc)) * DAT_002d8f7c;
      fVar25 = (local_d8 - *(float *)(param_2 + 0xc0)) * DAT_002d8f7c;
      fVar23 = *(float *)(param_2 + 200) + fVar21;
      fVar22 = *(float *)(param_2 + 0xcc) + fVar25;
      if ((uint)DAT_002d8f80 < (uint)fVar23) {
        *(float *)(param_2 + 200) = DAT_002d8f84 - fVar21;
      }
      else {
        fVar24 = fVar23;
        if (DAT_002d8f88 < (int)fVar23) {
          *(float *)(param_2 + 200) = DAT_002d8f78 - fVar21;
          fVar24 = fVar19;
        }
      }
      fVar23 = DAT_002d8f84;
      if ((uint)fVar16 < (uint)fVar22) {
        *(float *)(param_2 + 0xcc) = DAT_002d8f84 - fVar25;
      }
      else {
        fVar23 = fVar22;
        if (DAT_002d8f88 < (int)fVar22) {
          *(float *)(param_2 + 0xcc) = fVar19 - fVar25;
          fVar23 = fVar19;
        }
      }
      fVar19 = DAT_002d8f90;
      if (*(char *)(DAT_002d8c40 + 0xe) != '\0') {
        fVar23 = -fVar23;
      }
      sVar5 = (short)(int)(fVar24 * DAT_002d8f8c);
      iVar6 = (int)(short)(sVar5 - *(short *)(param_2 + 0x1b2));
      iVar11 = iVar6;
      if (iVar6 < 0) {
        iVar11 = -iVar6;
      }
      fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      sVar9 = (short)(int)(fVar23 * DAT_002d8f8c);
      if (0 < iVar11) {
        sVar5 = *(short *)(param_2 + 0x1b2) + (short)(int)(fVar13 + fVar16 * DAT_002d8f90);
      }
      *(short *)(param_2 + 0x1b2) = sVar5;
      iVar6 = (int)(short)(sVar9 - *(short *)(param_2 + 0x1b4));
      iVar11 = iVar6;
      if (iVar6 < 0) {
        iVar11 = -iVar6;
      }
      fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (0 < iVar11) {
        sVar9 = *(short *)(param_2 + 0x1b4) + (short)(int)(fVar13 + fVar16 * fVar19);
      }
      *(short *)(param_2 + 0x1b4) = sVar9;
      FUN_00372474(auStack_e4,&local_74,&local_68);
      local_e0 = local_e0 - *(short *)(param_2 + 0x1b2);
      local_de = local_de + *(short *)(param_2 + 0x1b4);
      FUN_00372448(&local_74,auStack_e4);
      local_68 = extraout_s0_01;
      local_64 = extraout_s1_01;
      local_60 = extraout_s2_01;
      FUN_002d0518();
      break;
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xb:
      break;
    case 8:
      iVar11 = FUN_00374be8(*(undefined4 *)(param_2 + 0xd4),0x1a);
      if (iVar11 == 0) goto code_r0x002d8e38;
    }
  }
  uVar4 = *(ushort *)(param_2 + 0x19a);
  if (uVar4 == 0) {
    if ((*(ushort *)(param_2 + 0x194) & 0x40) != 0) {
      FUN_004779cc(*(int *)(param_2 + 0xd4) + 0x188);
      uVar4 = *(ushort *)(param_2 + 0x194) & 0xffbf;
      goto LAB_002d9264;
    }
  }
  else {
    iVar11 = *piVar2;
    if (*(short *)(iVar11 + 0x362) == 0) {
      fVar16 = fVar20;
      fVar24 = DAT_002d8f94;
      fVar22 = fVar20;
      fVar23 = fVar20;
      fVar25 = fVar18;
      fVar26 = DAT_002d8f9c;
      fVar27 = DAT_002d8f98;
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) == 0) {
          if ((uVar4 & 2) == 0) {
            fVar19 = DAT_002d93b0;
            fVar21 = DAT_002d8f9c;
            if ((uVar4 & 1) == 0) goto LAB_002d9268;
          }
          else {
            fVar16 = *(float *)(param_2 + 0x15c) - *(float *)(param_2 + 0x90);
            fVar19 = fVar28;
            if ((int)fVar16 <= DAT_002d939c) {
              fVar19 = fVar16 * DAT_002d93a0;
            }
            fVar21 = (fVar19 * DAT_002d93a4 + *(float *)(param_2 + 0x128) * DAT_002d93a4) *
                     DAT_002d93a8 * DAT_002d93ac;
            fVar19 = DAT_002d9390;
            fVar16 = DAT_002d938c;
            fVar24 = DAT_002d9394;
            fVar25 = DAT_002d9394;
            fVar26 = fVar21;
            fVar27 = DAT_002d9398;
          }
        }
        else {
          fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x198),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar19 = DAT_002d9374;
          fVar16 = DAT_002d9370;
          fVar24 = DAT_002d9378;
          fVar25 = DAT_002d937c;
          fVar18 = DAT_002d9380;
          fVar21 = fVar21 * DAT_002d9388;
          fVar27 = DAT_002d9384;
        }
      }
      else {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x198),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar19 = DAT_002d8fa0;
        fVar18 = fVar20;
        fVar21 = fVar21 * DAT_002d8fa4;
      }
    }
    else {
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x35e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x360),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x364),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar19 = fVar19 * fVar18;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x366),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x368),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar20 = fVar20 * fVar18;
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x36a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x36c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x36e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x370),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar27 = fVar27 * fVar18;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x198),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x372),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 * fVar18;
      fVar24 = fVar24 * fVar18;
      fVar22 = fVar22 * fVar18;
      fVar23 = fVar23 * fVar18;
      fVar25 = fVar25 * fVar18;
      fVar18 = fVar26 * fVar18;
      fVar21 = fVar21 / fVar17;
      fVar26 = fVar28;
    }
    fVar19 = fVar19 * DAT_002d93b4;
    *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) + (short)(int)(fVar13 + fVar16 * DAT_002d93b4);
    *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + (short)(int)(fVar13 + fVar19);
    fVar19 = (float)FUN_002cfca0();
    fVar13 = DAT_002d93b8;
    fVar20 = fVar20 * DAT_002d93b8;
    fVar16 = (float)FUN_002cfca0((int)*(short *)(iVar1 + 8));
    fVar17 = (float)FUN_00338f60((int)*(short *)(iVar1 + 8));
    FUN_00343858(fVar17 * fVar22 * fVar13 * fVar21,fVar16 * fVar23 * fVar13 * fVar21,
                 fVar19 * fVar20 * fVar21,*(int *)(param_2 + 0xd4) + 0x188);
    fVar20 = (float)FUN_00338f60((int)*(short *)(iVar1 + 8));
    fVar13 = (float)FUN_00338f60((int)*(short *)(iVar1 + 10));
    fVar19 = (float)FUN_002cfca0((int)*(short *)(iVar1 + 10));
    FUN_00343840(fVar28 + fVar24 * fVar21 * fVar19,fVar28 + fVar25 * fVar21 * fVar13,
                 fVar28 + fVar18 * fVar21 * fVar20,*(int *)(param_2 + 0xd4) + 0x188);
    *(float *)(*(int *)(param_2 + 0xd4) + 0x35c) = fVar27 * fVar26;
    uVar4 = *(ushort *)(param_2 + 0x194) | 0x40;
LAB_002d9264:
    *(ushort *)(param_2 + 0x194) = uVar4;
  }
LAB_002d9268:
  if ((*(short *)(*(int *)(param_2 + 0xd4) + 0x104) == 0x51) &&
     (*(int *)(param_2 + 0x144) < DAT_002d93bc)) {
    fVar28 = DAT_002d93c0;
  }
  FUN_004710d8(fVar28,*(int *)(param_2 + 0xd4) + 0x188);
  *(float *)(*(int *)(param_2 + 0xd4) + 0x198) = fVar14;
  FUN_002d77dc(*(int *)(param_2 + 0xd4) + 0x188,&local_74,&local_68,&local_80);
  iVar11 = DAT_002d93c4;
  if (*(char *)(param_2 + 0x1b6) == '\0') {
    iVar8 = *(int *)(param_2 + 0xd4);
    iVar6 = *(int *)(param_2 + 0xd0);
    *(int *)(iVar8 + 0x1b0) = iVar6;
  }
  else {
    if (*(short *)(param_2 + 0x18c) == 6) {
LAB_002d933c:
      fVar18 = DAT_002d93c8;
    }
    else {
      iVar6 = *(int *)(param_2 + 0xd4);
      fVar28 = *(float *)(iVar6 + 0x1b8) - *(float *)(iVar6 + 0x1c4);
      fVar18 = *(float *)(iVar6 + 0x1bc) - *(float *)(iVar6 + 0x1c8);
      fVar20 = *(float *)(iVar6 + 0x1c0) - *(float *)(iVar6 + 0x1cc);
      fVar18 = SQRT(fVar28 * fVar28 + fVar18 * fVar18 + fVar20 * fVar20) * DAT_002d93cc;
      if (DAT_002d93d0 < (int)fVar18) goto LAB_002d933c;
    }
    FUN_0047ac3c(*(int *)(param_2 + 0xd4),*(int *)(param_2 + 0xd4) + 0x208c,param_2 + 0x8c,&local_d4
                );
    if (fVar18 < local_d4) {
      local_d4 = fVar18;
    }
    iVar6 = FUN_0047cbf4(local_d4,*(int *)(param_2 + 0xd4) + 0xa98,param_2 + 0x8c);
    iVar8 = *(int *)(param_2 + 0xd4);
    *(int *)(iVar8 + 0x1b0) = iVar6;
  }
  if (0x34000000 < iVar6) {
    iVar11 = iVar6;
  }
  *(int *)(iVar8 + 0x1b0) = iVar11;
  *(undefined1 *)(*(int *)(param_2 + 0xd4) + 0x362) = *(undefined1 *)(param_2 + 0x1b6);
  *(short *)(param_2 + 0x182) = local_94;
  *(short *)(param_2 + 0x184) = local_92;
  *(undefined2 *)(param_2 + 0x186) = 0;
  if (*(int *)(iVar1 + 0x24) == 0) {
    *(short *)(param_2 + 0x17c) = local_94;
    *(short *)(param_2 + 0x17e) = local_92;
    *(undefined2 *)(param_2 + 0x180) = 0;
  }
LAB_002d946c:
  *param_1 = *(undefined2 *)(param_2 + 0x17c);
  param_1[1] = *(undefined2 *)(param_2 + 0x17e);
  param_1[2] = *(undefined2 *)(param_2 + 0x180);
  return;
}

