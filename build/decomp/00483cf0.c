// OoT3D decomp @ 00483cf0  name=FUN_00483cf0  size=3128

void FUN_00483cf0(int param_1)

{
  bool bVar1;
  float fVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int extraout_r1;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  undefined4 local_48;

  fVar22 = DAT_00484000;
  uVar17 = DAT_00483ffc;
  fVar20 = DAT_00483ff8;
  fVar2 = DAT_00483ff4;
  fVar21 = DAT_00483ff0;
  fVar18 = DAT_00483fec;
  bVar14 = false;
  bVar1 = false;
  uVar11 = 9;
  local_5c = DAT_00483ff4;
  local_58 = DAT_00483ff4;
  local_54 = DAT_00483ff4;
  local_50 = DAT_00483ff8;
  local_6c = DAT_00483ff4;
  local_68 = DAT_00483ff4;
  local_64 = DAT_00483ff4;
  local_60 = DAT_00483ff8;
  *(float *)(param_1 + 0x584) = DAT_00483ff4;
  iVar8 = *(int *)(param_1 + 0x114);
  bVar12 = iVar8 == 0;
  iVar5 = param_1;
  if (bVar12) {
    iVar5 = *(int *)(param_1 + 0x110);
  }
  bVar13 = bVar12 && iVar5 == 0;
  if (bVar12 && iVar5 == 0) {
    bVar13 = *(int *)(param_1 + 0x118) == 0;
  }
  bVar12 = false;
  if (bVar13) {
    bVar12 = *(int *)(param_1 + 0x11c) == 0;
  }
  if (bVar12) {
    iVar5 = 0x1e;
    bVar12 = *(int *)(param_1 + 0x104) == 2;
    fVar15 = fVar20;
    if (bVar12) {
      fVar15 = DAT_00484004;
    }
    iVar9 = 0xf;
    if (bVar12) {
      iVar5 = 0x3c;
    }
    if (bVar12) {
      iVar9 = 0x1e;
    }
    FUN_00368d94(*(undefined4 *)(param_1 + 0x120),iVar5);
    *(int *)(param_1 + 0x120) = extraout_r1;
    if (extraout_r1 < iVar9) {
      fVar16 = (float)VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 / fVar19;
      *(float *)(param_1 + 0x588) = fVar16;
    }
    else {
      fVar16 = (float)VectorSignedToFloat(iVar5 - extraout_r1,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 / fVar19;
      *(float *)(param_1 + 0x588) = fVar16;
    }
    *(float *)(param_1 + 0x588) = fVar16 * fVar15;
    *(float *)(param_1 + 0x124) = fVar16 * fVar15;
    *(int *)(param_1 + 0x120) = extraout_r1 + 1;
  }
  else {
    fVar15 = *(float *)(param_1 + 0x124) - DAT_00484008;
    *(float *)(param_1 + 0x124) = fVar15;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= fVar15) << 0x1d;
    *(float *)(param_1 + 0x588) = fVar15;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x588) = fVar2;
      *(float *)(param_1 + 0x124) = fVar2;
    }
  }
  uVar4 = DAT_00484020;
  puVar3 = DAT_00484014;
  uVar7 = DAT_00484010;
  fVar15 = DAT_0048400c;
  uVar6 = *DAT_00484014;
  pfVar10 = (float *)(param_1 + 0x55c);
  local_48 = DAT_00484018;
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
    local_4c = DAT_0048401c;
    if (iVar8 != 0) {
      if (*(int *)(param_1 + 0x108) != 3) {
        fVar15 = (float)VectorSignedToFloat(5 - iVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002c5acc(fVar15,param_1);
        fVar18 = DAT_00484368;
        uVar17 = DAT_00484364;
        fVar22 = (float)FUN_0033b584(fVar15,fVar2,DAT_00484368,DAT_00484364,uVar7);
        uVar17 = FUN_0033b584(fVar15,fVar2,fVar18,uVar17,uVar7);
        *pfVar10 = fVar22;
        *(undefined4 *)(param_1 + 0x560) = uVar17;
        *(float *)(param_1 + 0x564) = fVar20;
        *(float *)(param_1 + 0x58c) = fVar2 + fVar20 * ((fVar15 - fVar2) / fVar18);
        goto LAB_00484544;
      }
      uVar7 = 3;
      if ((uVar6 & 1) == 0) {
        uVar23 = FUN_003679b4(DAT_00484014);
        uVar7 = (int)((ulonglong)uVar23 >> 0x20);
        if ((int)uVar23 != 0) {
          FUN_0036788c(DAT_00484028);
          uVar7 = DAT_00484030;
        }
      }
      uVar23 = FUN_0033f40c(DAT_00484034,uVar7);
      if ((int)uVar23 != 0) {
        if (*(int *)(param_1 + 0x114) == 5) {
          uVar7 = (int)((ulonglong)uVar23 >> 0x20);
          if ((*puVar3 & 1) == 0) {
            uVar23 = FUN_003679b4(DAT_00484014);
            uVar7 = (int)((ulonglong)uVar23 >> 0x20);
            if ((int)uVar23 != 0) {
              FUN_0036788c(DAT_00484028);
              uVar7 = DAT_00484030;
            }
          }
          FUN_0048b094(*(undefined4 *)(local_4c + 0x2d4),uVar7);
        }
        local_5c = fVar2;
        local_58 = fVar2;
        bVar14 = true;
        bVar1 = true;
        fVar18 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x114) + 0xf,
                                            (byte)(in_fpscr >> 0x15) & 3);
        local_54 = fVar2;
        local_60 = fVar20 - fVar18 * fVar15;
        local_6c = fVar2;
        local_68 = fVar2;
        local_64 = fVar2;
        local_50 = local_60;
      }
      fVar18 = (float)VectorSignedToFloat(5 - *(int *)(param_1 + 0x114),(byte)(in_fpscr >> 0x15) & 3
                                         );
      FUN_002c5acc(fVar18,uVar17,param_1);
      fVar15 = (float)FUN_0033b5b0(fVar18 + fVar20,fVar2,uVar4,fVar2);
      fVar18 = DAT_00484038;
      *(float *)(param_1 + 0x554) = fVar15 * fVar22;
      fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x114),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x568) = fVar22 * fVar18;
      goto switchD_00483e5c_default;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x10c) == 1) {
        uVar17 = VectorSignedToFloat(5 - iVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002c59f8(uVar17,DAT_00484024,param_1);
      }
      else {
        bVar14 = *(int *)(param_1 + 0x10c) == 3;
        if (bVar14) {
          local_60 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
          local_58 = fVar2;
          local_54 = fVar2;
          local_60 = local_60 * DAT_0048400c;
          local_68 = fVar2;
          local_64 = fVar2;
          local_50 = local_60;
        }
        iVar8 = *(int *)(param_1 + 0x110);
        iVar5 = iVar8;
        if (5 < iVar8) {
          iVar5 = 7;
        }
        if (iVar8 == 4) {
          uVar7 = 4;
          if ((uVar6 & 1) == 0) {
            uVar23 = FUN_003679b4(DAT_00484014);
            uVar7 = (int)((ulonglong)uVar23 >> 0x20);
            if ((int)uVar23 != 0) {
              FUN_0036788c(DAT_00484028);
              uVar7 = DAT_00484030;
            }
          }
          FUN_0048b0d8(*(undefined4 *)(local_4c + 0x2d4),uVar7);
        }
        fVar18 = (float)VectorSignedToFloat(5 - iVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002c59f8(fVar18,uVar17,param_1);
        fVar15 = (float)FUN_0033b584(fVar18 + fVar20,fVar2,uVar4,fVar20,fVar2);
        fVar18 = DAT_0048436c;
        *(float *)(param_1 + 0x554) = fVar15 * fVar22;
        fVar22 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x568) = fVar20 - fVar22 * fVar18;
      }
      *(float *)(param_1 + 0x58c) = fVar2;
      bVar1 = bVar14;
      goto switchD_00483e5c_default;
    }
    *(float *)(param_1 + 0x58c) = fVar2;
LAB_00484390:
    *(float *)(param_1 + 0x584) = fVar20;
    goto LAB_00484564;
  case 1:
    if (iVar8 != 0) {
      if (*(int *)(param_1 + 0x108) != 2) {
        uVar11 = VectorSignedToFloat(5 - iVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002c5acc(uVar11,uVar17,param_1);
        goto LAB_00484544;
      }
      bVar1 = true;
      uVar11 = 1;
      fVar22 = (float)VectorSignedToFloat(iVar8 + -2,(byte)(in_fpscr >> 0x15) & 3);
      local_50 = fVar22 * DAT_00484370;
      if (fVar22 * DAT_00484370 < fVar2) {
        local_50 = fVar2;
      }
      local_50 = fVar20 - local_50;
      local_5c = fVar18;
      local_58 = fVar18;
      local_54 = fVar18;
      local_60 = local_50 * fVar21;
      local_68 = fVar2;
      local_64 = fVar2;
      *(float *)(param_1 + 0x584) = fVar20;
      goto LAB_00484494;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    if (iVar5 == 0) {
      *pfVar10 = fVar20;
      *(float *)(param_1 + 0x560) = fVar20;
      *(float *)(param_1 + 0x564) = fVar20;
      goto LAB_00484390;
    }
    if (*(int *)(param_1 + 0x10c) == 2) {
      bVar1 = true;
      uVar11 = 1;
      local_50 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      local_50 = local_50 * DAT_00484370;
      local_5c = fVar18;
      local_58 = fVar18;
      local_54 = fVar18;
      local_60 = local_50 * fVar21;
      local_68 = fVar2;
      local_64 = fVar2;
      *(float *)(param_1 + 0x584) = fVar20;
      goto LAB_00484494;
    }
    uVar11 = VectorSignedToFloat(5 - iVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002c59f8(uVar11,uVar17,param_1);
    uVar17 = DAT_00484374;
    fVar18 = (float)FUN_0033b5b0(uVar11,fVar2,DAT_00484374,uVar7,fVar20);
    uVar17 = FUN_0033b5b0(uVar11,fVar2,uVar17,uVar7,fVar20);
    *pfVar10 = fVar18;
    *(undefined4 *)(param_1 + 0x560) = uVar17;
    *(float *)(param_1 + 0x564) = fVar20;
    *(float *)(param_1 + 0x58c) = fVar20;
    goto LAB_00484544;
  case 2:
    local_5c = fVar18;
    local_58 = fVar18;
    local_54 = fVar18;
    local_50 = fVar20;
    if (((uVar6 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
      FUN_0036788c(DAT_00484028);
    }
    FUN_003339e8(local_48,0,&local_5c,9);
    uVar11 = 1;
    local_6c = fVar2;
    local_68 = fVar2;
    local_64 = fVar2;
    local_60 = fVar21;
    *(float *)(param_1 + 0x584) = fVar20;
    goto LAB_004844f0;
  case 3:
    bVar14 = true;
    bVar1 = true;
    local_58 = fVar2;
    local_54 = fVar2;
    local_50 = fVar20;
    local_68 = fVar2;
    local_64 = fVar2;
    local_60 = fVar20;
    if (*(int *)(param_1 + 0x110) != 0) {
      fVar18 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
      local_60 = fVar20 - fVar18 * DAT_0048400c;
      local_50 = local_60;
    }
  case 4:
    break;
  default:
    goto switchD_00483e5c_default;
  }
  *(float *)(param_1 + 0x568) = fVar2;
switchD_00483e5c_default:
  if (bVar14) {
LAB_00484494:
    if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
      FUN_0036788c(DAT_00484028);
    }
    FUN_003339e8(local_48,4,&local_5c,uVar11);
  }
  if (bVar1) {
LAB_004844f0:
    if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
      FUN_0036788c(DAT_00484028);
    }
    FUN_003339e8(local_48,6,&local_6c,uVar11);
  }
LAB_00484544:
  uVar6 = *(uint *)(param_1 + 0x104);
  if (2 < uVar6) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x110);
  bVar14 = iVar5 != 0;
  if (!bVar14) {
    iVar5 = *(int *)(param_1 + 0x114);
  }
  if (bVar14 || iVar5 != 0) {
    if ((uVar6 != 1 && uVar6 != 2) ||
       (*(int *)(param_1 + 0x108) != 1 && *(int *)(param_1 + 0x108) != 2)) goto LAB_00484680;
    if ((*puVar3 & 1) == 0) {
      iVar5 = FUN_003679b4(DAT_00484014);
joined_r0x00484668:
      if (iVar5 != 0) {
        FUN_0036788c(DAT_00484028);
      }
    }
LAB_0048466c:
    FUN_00328350(local_48,6,*(undefined4 *)(param_1 + 0x428),0);
  }
  else {
LAB_00484564:
    iVar5 = *(int *)(param_1 + 0x104);
    if (iVar5 != 0) {
      if (iVar5 == 1 || iVar5 == 2) {
        if ((*puVar3 & 1) == 0) {
          iVar5 = FUN_003679b4(DAT_00484014);
          goto joined_r0x00484668;
        }
        goto LAB_0048466c;
      }
      if (iVar5 != 3) goto LAB_00484680;
    }
    if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
      FUN_0036788c(DAT_00484028);
    }
    FUN_00328350(local_48,6,*(undefined4 *)(param_1 + 0x424),0);
  }
LAB_00484680:
  local_74 = DAT_004849a8;
  fVar18 = DAT_004849a4;
  if ((*(int *)(param_1 + 400) == 5) || (*(char *)(param_1 + 0x181) != '\0')) {
    local_7c = fVar20;
    fVar22 = *(float *)(param_1 + 0x558);
    fVar20 = *(float *)(param_1 + 0x554) + DAT_004849a0;
    iVar5 = *(int *)(param_1 + 0x4e4);
    *(float *)(iVar5 + 0x3c) = *(float *)(param_1 + 0x550) + fVar2;
    *(float *)(iVar5 + 0x40) = fVar20;
    *(float *)(iVar5 + 0x44) = fVar22 + fVar2;
    iVar5 = *(int *)(param_1 + 0x4e8);
    local_78 = *(float *)(param_1 + 0x550) + fVar2;
    local_74 = *(float *)(param_1 + 0x554) + fVar18;
    local_70 = *(float *)(param_1 + 0x558) + fVar2;
    *(float *)(iVar5 + 0x3c) = local_78;
    *(float *)(iVar5 + 0x40) = local_74;
    *(float *)(iVar5 + 0x44) = local_70;
    local_88 = fVar21;
    local_84 = fVar21;
    local_80 = fVar21;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4e4),0,&local_88);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4e8),0,&local_88);
    iVar5 = *(int *)(param_1 + 0x4ec);
    local_78 = *(float *)(param_1 + 0x550) + fVar2;
    local_74 = *(float *)(param_1 + 0x554) + fVar18;
    local_70 = *(float *)(param_1 + 0x558) + fVar2;
    *(float *)(iVar5 + 0x3c) = local_78;
    *(float *)(iVar5 + 0x40) = local_74;
    *(float *)(iVar5 + 0x44) = local_70;
  }
  else {
    local_88 = fVar20;
    local_84 = fVar20;
    local_80 = fVar20;
    local_7c = fVar20;
    fVar20 = *(float *)(param_1 + 0x558);
    fVar21 = *(float *)(param_1 + 0x554) + DAT_004849a0;
    iVar5 = *(int *)(param_1 + 0x4e4);
    *(float *)(iVar5 + 0x3c) = *(float *)(param_1 + 0x550) + fVar2;
    *(float *)(iVar5 + 0x40) = fVar21;
    *(float *)(iVar5 + 0x44) = fVar20 + fVar2;
    iVar5 = *(int *)(param_1 + 0x4e8);
    local_74 = *(float *)(param_1 + 0x554) + local_74;
    local_78 = *(float *)(param_1 + 0x550) + fVar2;
    local_70 = *(float *)(param_1 + 0x558) + fVar2;
    *(float *)(iVar5 + 0x3c) = local_78;
    *(float *)(iVar5 + 0x40) = local_74;
    *(float *)(iVar5 + 0x44) = local_70;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4e4),0,&local_88);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4e8),0,&local_88);
    iVar5 = *(int *)(param_1 + 0x4ec);
    local_78 = *(float *)(param_1 + 0x550) + fVar2;
    local_70 = *(float *)(param_1 + 0x558) + fVar2;
    local_74 = *(float *)(param_1 + 0x554) + fVar18;
    *(float *)(iVar5 + 0x3c) = local_78;
    *(float *)(iVar5 + 0x40) = local_74;
    *(float *)(iVar5 + 0x44) = local_70;
  }
  if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
    FUN_0036788c(DAT_00484028);
  }
  FUN_00328350(local_48,6,*(undefined4 *)(param_1 + 0x4e4),2);
  if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
    FUN_0036788c(DAT_00484028);
  }
  FUN_00328350(local_48,6,*(undefined4 *)(param_1 + 0x4e8),2);
  if ((*(int *)(param_1 + 400) == 5) || (*(char *)(param_1 + 0x181) != '\0')) {
    if (((*puVar3 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00484014), iVar5 != 0)) {
      FUN_0036788c(DAT_00484028);
    }
    FUN_00328350(local_48,6,*(undefined4 *)(param_1 + 0x4ec),2);
  }
  return;
}
