// OoT3D decomp @ 00427cc0  name=FUN_00427cc0  size=3016

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427cc0(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint in_fpscr;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar16;
  float fVar17;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar18;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar19;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float fVar20;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s5;
  float extraout_s5_00;
  float extraout_s5_01;
  float fVar21;
  float extraout_s6;
  float extraout_s6_00;
  float extraout_s6_01;
  float fVar22;
  float extraout_s7;
  float extraout_s7_00;
  float extraout_s7_01;
  float fVar23;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 auStack_70 [36];
  float local_4c;
  float local_48;
  float local_44;
  char local_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  float local_34;
  float local_30;

  puVar2 = DAT_0042810c;
  bVar1 = false;
  if (DAT_0042810c[1] == 0) {
    return;
  }
  FUN_002f9484(auStack_38,auStack_3c,local_40);
  puVar2[0x14] = param_1;
  switch(puVar2[1]) {
  case 1:
    FUN_0043da14();
    uVar10 = 2;
    puVar2[1] = 2;
    if (puVar2[0x10] == 0) {
      uVar10 = 0;
    }
    puVar2[2] = uVar10;
    puVar2[3] = 0xffffffff;
    puVar3 = DAT_00428110;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar2[0xc] = 0xffffffff;
    puVar3[-8] = 0;
    puVar3[-7] = 0;
    puVar3[-6] = 0;
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    FUN_0032b184(puVar3 + -0xd,0x12);
    puVar2[0x11] = 0;
    FUN_002f4b64();
    break;
  case 2:
    iVar13 = puVar2[0x11];
    puVar2[0x11] = iVar13 + 1;
    iVar9 = DAT_0042811c;
    if (iVar13 + 1 < 7) {
code_r0x00427f84:
      FUN_002f4b64();
      break;
    }
    if (puVar2[0x10] == 0) {
      local_48 = DAT_00428114;
      local_44 = DAT_00428118;
      FUN_0035fb94(DAT_0042811c,&local_48);
      puVar2[9] = 3;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9,0x4b,10);
      }
      puVar3 = DAT_00428120;
      *DAT_00428120 = uVar10;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9 + 2,0x61,10);
      }
      puVar3[1] = uVar10;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9 + 4,0x77,10);
      }
      puVar3[2] = uVar10;
    }
    else {
      local_4c = _DAT_00428124;
      local_48 = DAT_00428128;
      local_44 = DAT_0042812c;
      FUN_002f48d4(DAT_0042811c);
      puVar2[9] = 4;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9,0x4b,10);
      }
      puVar3 = DAT_00428120;
      *DAT_00428120 = uVar10;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9 + 2,0x61,10);
      }
      puVar3[1] = uVar10;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9 + 4,0x77,10);
      }
      puVar3[2] = uVar10;
      iVar13 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_002f48f8(iVar13,iVar9 + 6,0x8d,10);
      }
      puVar3[3] = uVar10;
    }
    uVar10 = 4;
    goto LAB_00428208;
  case 3:
    iVar9 = puVar2[0x11];
    puVar2[0x11] = iVar9 + 1;
    if (6 < iVar9 + 1) {
      FUN_002f4794();
      return;
    }
code_r0x00427fbc:
    FUN_0043e220();
    break;
  case 4:
    iVar9 = puVar2[2];
    if (iVar9 < 2) {
      FUN_0043d458();
    }
    else if (iVar9 == 2) {
      FUN_0043c8b8();
    }
    else if (iVar9 == 3) {
      FUN_0043e3c0();
    }
    else if (iVar9 == 4) {
      FUN_0043dd94();
    }
    else if (iVar9 == 5) {
      FUN_0043e068();
    }
    else if (iVar9 == 6) {
      FUN_002f43f8();
      if (puVar2[0xc] == -1) {
        iVar9 = FUN_0033f428(4,0xcc,0x34,0x20,1);
        if (iVar9 == 0) {
LAB_004284f8:
          if (puVar2[0xc] != 1) goto LAB_00428580;
        }
        else {
          puVar2[0xc] = 1;
        }
        iVar9 = DAT_00428144;
        local_34 = DAT_00428140;
        local_30 = DAT_00428140;
        FUN_002f9430(*(undefined4 *)(DAT_00428144 + 4),&local_34,1,0x3c);
        FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_34,1,0x3d);
        local_30 = DAT_004288e0;
        FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_34,1,0x3b);
        local_44 = DAT_004288e4;
        FUN_002fcdec(*(undefined4 *)(iVar9 + 4),&local_44,1,0x3b);
      }
      else {
        iVar9 = FUN_0033f428(4,0xcc,0x34,0x20,2);
        if ((iVar9 != 0) && (puVar2[0xc] == 1)) {
          bVar1 = true;
        }
        if (local_40[0] != '\0') goto LAB_004284f8;
        puVar2[0xc] = 0xffffffff;
LAB_00428580:
        fVar16 = DAT_004288ec;
        iVar9 = DAT_00428144;
        local_34 = DAT_004288e8;
        local_30 = DAT_004288ec;
        FUN_002f9430(*(undefined4 *)(DAT_00428144 + 4),&local_34,1,0x3c);
        FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_34,1,0x3d);
        local_34 = fVar16;
        FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_34,1,0x3b);
        local_44 = DAT_004288f0;
        FUN_002fcdec(*(undefined4 *)(iVar9 + 4),&local_44,1,0x3b);
      }
      uVar8 = FUN_0033b5ec();
      if (((uVar8 & 2) != 0) || (uVar8 = FUN_0033b5ec(), (uVar8 & 1) != 0 || bVar1)) {
        local_7c = DAT_004288f4;
        FUN_0037547c(DAT_004288fc,0,4,DAT_004288f8,DAT_004288f8);
        FUN_002f4794();
        return;
      }
      break;
    }
    FUN_002f43f8();
    FUN_002f4700(0);
    fVar16 = DAT_00428904;
    iVar9 = DAT_00428144;
    local_48 = (float)VectorSignedToFloat(puVar2[9] * 0x16 + 0x49,(byte)(in_fpscr >> 0x15) & 3);
    local_44 = DAT_00428900;
    if (3 < (int)puVar2[2]) {
      local_48 = DAT_004288e8;
    }
    iVar13 = puVar2[0x12] + 1;
    puVar2[0x12] = iVar13;
    if (0x1d < iVar13) {
      iVar13 = 0x3c - iVar13;
    }
    local_4c = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    local_4c = local_4c * fVar16;
    if (0x3b < (int)puVar2[0x12]) {
      puVar2[0x12] = 0;
    }
    FUN_002fcdec(*(undefined4 *)(iVar9 + 4),&local_4c,1,0x2e);
    FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,0x2e);
    break;
  case 5:
    FUN_002f4700(1);
    iVar9 = puVar2[0x11];
    puVar2[0x11] = iVar9 + 1;
    if (iVar9 + 1 < 7) goto code_r0x00427fbc;
    puVar2[0x11] = 0;
    uVar10 = 6;
    goto LAB_00428208;
  case 6:
    FUN_002f4700(1);
    iVar9 = puVar2[0x11];
    puVar2[0x11] = iVar9 + 1;
    if (iVar9 + 1 < 7) {
      FUN_0043df30();
    }
    else {
      iVar9 = FUN_00313ce0(0x4c);
      uVar10 = 0;
      if (iVar9 != 0) {
        uVar10 = FUN_002f57f0(iVar9,DAT_00428130,0x38,0x11,0);
      }
      *DAT_00428110 = uVar10;
      puVar2[1] = 4;
      puVar2[2] = 4;
    }
    break;
  case 7:
    FUN_002f4700(1);
    iVar13 = puVar2[0x11];
    puVar2[0x11] = iVar13 + 1;
    iVar9 = DAT_00428144;
    fVar20 = DAT_00428140;
    fVar19 = DAT_0042813c;
    fVar18 = DAT_00428138;
    fVar16 = DAT_00428134;
    if (iVar13 + 1 < 7) {
      iVar13 = 0;
      do {
        if (iVar13 - 0x10U < 10) {
          fVar17 = (float)VectorSignedToFloat(puVar2[0x11],(byte)(in_fpscr >> 0x15) & 3);
          local_4c = fVar19 - fVar17 * fVar16;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 <= local_4c) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            local_4c = fVar20;
          }
          FUN_002fcdec(*(undefined4 *)(iVar9 + 4),&local_4c,1,iVar13);
        }
        else if (iVar13 - 0x1aU < 8) {
          local_48 = (float)VectorSignedToFloat(puVar2[0x11] * -0x50,(byte)(in_fpscr >> 0x15) & 3);
          local_44 = fVar20;
          FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
        }
        else {
          local_48 = fVar18;
          FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x3e);
    }
    else {
      puVar2[0x11] = 0;
      puVar2[2] = puVar2[3];
      puVar2[1] = 8;
    }
    break;
  case 8:
    FUN_002f4700(1);
    iVar9 = puVar2[0x11];
    puVar2[0x11] = iVar9 + 1;
    if (iVar9 + 1 < 7) goto code_r0x00427f84;
    puVar2[4] = 0;
    puVar2[5] = 0;
    uVar10 = 4;
    goto LAB_00428208;
  case 9:
    iVar13 = puVar2[0x11];
    puVar2[0x11] = iVar13 + 1;
    iVar9 = DAT_00428144;
    fVar18 = DAT_00428140;
    fVar16 = DAT_00428138;
    if (iVar13 + 1 < 7) {
      iVar13 = 0;
      do {
        if (9 < iVar13 - 0x10U) {
          if (iVar13 - 0x1aU < 8) {
            local_48 = (float)VectorSignedToFloat(puVar2[0x11] * -0x50,(byte)(in_fpscr >> 0x15) & 3)
            ;
            local_44 = fVar18;
            FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
          }
          else {
            local_48 = fVar16;
            FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x3e);
      break;
    }
    puVar2[0x11] = 0;
    uVar10 = 10;
LAB_00428208:
    puVar2[1] = uVar10;
    break;
  case 10:
    iVar13 = puVar2[0x11];
    puVar2[0x11] = iVar13 + 1;
    iVar9 = DAT_00428144;
    fVar20 = DAT_00428140;
    fVar19 = DAT_0042813c;
    fVar18 = DAT_00428138;
    fVar16 = DAT_00428134;
    if (iVar13 + 1 < 7) {
      iVar13 = 0;
      do {
        if (9 < iVar13 - 0x10U) {
          if (iVar13 - 0x30U < 9) {
            local_4c = (float)VectorSignedToFloat(puVar2[0x11],(byte)(in_fpscr >> 0x15) & 3);
            local_4c = local_4c * fVar16;
            if (0x3f800000 < (int)local_4c) {
              local_4c = fVar19;
            }
            FUN_002fcdec(*(undefined4 *)(iVar9 + 4),&local_4c,1,iVar13);
            local_48 = fVar20;
            local_44 = fVar20;
            FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
          }
          else {
            local_48 = fVar18;
            FUN_002f9430(*(undefined4 *)(iVar9 + 4),&local_48,1,iVar13);
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x3e);
    }
    else {
      iVar9 = FUN_00313ce0(0x4c,param_1);
      uVar10 = 0;
      if (iVar9 != 0) {
        uVar10 = FUN_002f57f0(iVar9,DAT_004288dc,0x38,0x11,0);
      }
      puVar3 = DAT_00428110;
      DAT_00428110[1] = uVar10;
      iVar9 = FUN_00313ce0(0x4c,param_1);
      uVar10 = 0;
      if (iVar9 != 0) {
        uVar10 = FUN_002f57f0(iVar9,0x972,0x20,0xc2,0);
      }
      puVar3[2] = uVar10;
      puVar2[0xf] = 0;
      puVar2[2] = 5;
      puVar2[1] = 4;
    }
  }
  FUN_0043f0ec();
  fVar16 = extraout_s0;
  fVar18 = extraout_s1;
  fVar19 = extraout_s2;
  fVar20 = extraout_s3;
  fVar17 = extraout_s4;
  fVar21 = extraout_s5;
  fVar22 = extraout_s6;
  fVar23 = extraout_s7;
  if ((puVar2[1] == 4) && (puVar2[2] != 6)) {
    FUN_0043e994();
    fVar16 = extraout_s0_00;
    fVar18 = extraout_s1_00;
    fVar19 = extraout_s2_00;
    fVar20 = extraout_s3_00;
    fVar17 = extraout_s4_00;
    fVar21 = extraout_s5_00;
    fVar22 = extraout_s6_00;
    fVar23 = extraout_s7_00;
  }
  if (((*DAT_00428908 & 1) == 0) &&
     (iVar9 = FUN_003679b4(DAT_00428908), pfVar7 = DAT_0042890c, fVar6 = DAT_004288f0,
     fVar5 = DAT_004288ec, fVar16 = extraout_s0_01, fVar18 = extraout_s1_01, fVar19 = extraout_s2_01
     , fVar20 = extraout_s3_01, fVar17 = extraout_s4_01, fVar21 = extraout_s5_01,
     fVar22 = extraout_s6_01, fVar23 = extraout_s7_01, iVar9 != 0)) {
    *DAT_0042890c = DAT_004288f0;
    pfVar7[1] = fVar5;
    pfVar7[2] = fVar5;
    pfVar7[3] = fVar5;
    pfVar7[4] = fVar5;
    pfVar7[5] = fVar6;
    pfVar7[6] = fVar5;
    pfVar7[7] = fVar5;
    pfVar7[8] = fVar5;
    pfVar7[9] = fVar5;
    pfVar7[10] = fVar6;
    pfVar7[0xb] = fVar5;
    fVar16 = fVar5;
    fVar18 = fVar5;
    fVar19 = fVar5;
    fVar20 = fVar5;
    fVar17 = fVar5;
    fVar21 = fVar6;
    fVar22 = fVar5;
    fVar23 = fVar5;
  }
  FUN_00372224(fVar16,fVar18,fVar19,fVar20,fVar17,fVar21,fVar22,fVar23,auStack_70,DAT_0042890c);
  iVar9 = DAT_00428144;
  iVar13 = 0;
  iVar14 = DAT_00428144 + -0x10;
  iVar15 = DAT_00428144 + -8;
  local_7c = DAT_004288ec;
  local_78 = DAT_004288ec;
  local_74 = DAT_004288ec;
  do {
    FUN_002f9a1c(*(undefined4 *)(iVar9 + iVar13 * 4));
    uVar10 = *(undefined4 *)(*(int *)(iVar9 + iVar13 * 4) + 0x10);
    uVar11 = FUN_002f9a0c(*(undefined4 *)(iVar9 + iVar13 * 4));
    FUN_0036759c(*(undefined4 *)(iVar14 + iVar13 * 4),uVar11,uVar10);
    uVar10 = FUN_002fc3f0(*(undefined4 *)(iVar9 + iVar13 * 4),0);
    uVar11 = FUN_002f9a00(*(undefined4 *)(iVar9 + iVar13 * 4));
    FUN_00317d1c(*(undefined4 *)(iVar14 + iVar13 * 4),uVar11,uVar10);
    uVar10 = FUN_002fc3e4(*(undefined4 *)(iVar9 + iVar13 * 4),0);
    uVar11 = FUN_002f99f4(*(undefined4 *)(iVar9 + iVar13 * 4));
    FUN_002f9934(*(undefined4 *)(iVar14 + iVar13 * 4),uVar11,uVar10);
    piVar12 = *(int **)(iVar15 + iVar13 * 4);
    (**(code **)(*piVar12 + 8))(piVar12,auStack_70,auStack_70,&local_7c);
    puVar3 = DAT_00428120;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  iVar9 = 0;
  do {
    if (puVar3[iVar9] != 0) {
      FUN_002f7684();
    }
    puVar4 = DAT_00428110;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 8);
  iVar9 = 0;
  do {
    if (puVar4[iVar9] != 0) {
      FUN_002f7684();
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  FUN_002f94a8(*puVar2);
  return;
}
