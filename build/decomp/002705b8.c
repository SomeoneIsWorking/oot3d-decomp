// OoT3D decomp @ 002705b8  name=z_object_kankyo_002705b8  size=1848

void z_object_kankyo_002705b8(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  ushort uVar15;
  undefined1 in_r12;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;

  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar13 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00270920 + iVar13) != 0)) {
    iVar13 = iVar13 + 0x3a5c;
  }
  else {
    iVar13 = 0;
  }
  iVar13 = iVar13 + 0x10;
  *(undefined4 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16c0) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16c4) = 0;
  *(undefined4 *)(param_1 + 0x16c8) = 0;
  *(undefined4 *)(param_1 + 0x18b8) = DAT_00270924;
  uVar15 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (uVar15 == 0 || uVar15 == 3) {
    in_r12 = 0xff;
  }
  if (uVar15 == 0 || uVar15 == 3) {
    *(undefined1 *)(param_1 + 3) = in_r12;
  }
  uVar9 = DAT_00270de0;
  fVar5 = DAT_00270dd8;
  fVar4 = DAT_00270dd4;
  fVar18 = DAT_00270dd0;
  uVar10 = DAT_00270924;
  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  case 0:
    local_38 = param_2 + 0x7000;
    if ((*(byte *)(param_2 + 0x7f5c) & 1) != 0) goto LAB_002709b0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    local_3c = ObjectBankArchive_00372c90(iVar13,0x1a);
    iVar13 = DAT_00270938;
    puVar1 = DAT_00270934;
    uVar9 = DAT_00270930;
    uVar10 = DAT_0027092c;
    puVar11 = DAT_00270928;
    iVar12 = 0;
    do {
      iVar6 = (**(code **)(*(int *)*puVar11 + 0xc))
                        ((int *)*puVar11,0x1b8,s_d__home_queen_dailyBuild_game_us_0027093c,0x1e0);
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = FUN_00348f34(iVar6,DAT_0027097c);
      }
      iVar6 = param_1 + iVar12 * 4;
      *(undefined4 *)(iVar6 + 0x16b8) = uVar7;
      FUN_00348be4();
      FUN_00348a64(*(undefined4 *)(iVar6 + 0x16b8),0,local_3c,uVar9,uVar9,uVar10,uVar10);
      if (((*puVar1 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_00270934), iVar8 != 0)) {
        FUN_0036788c(DAT_00270980);
      }
      uVar7 = BoardModelFactory_00340d00
                        (*(undefined4 *)(iVar13 + 0x47c),*(undefined4 *)(iVar6 + 0x16b8),
                         *(undefined4 *)(param_1 + 0x178),0);
      iVar12 = iVar12 + 1;
      *(undefined4 *)(iVar6 + 0x16c0) = uVar7;
      uVar2 = DAT_00270994;
      uVar7 = DAT_00270924;
    } while (iVar12 < 2);
    local_44 = DAT_00270924;
    local_4c = DAT_0027098c;
    local_48 = DAT_00270990;
    local_40 = DAT_00270994;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x16c0),1,&local_4c);
    local_4c = uVar7;
    local_48 = DAT_00270998;
    local_44 = uVar2;
    local_40 = uVar2;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x16c4),1,&local_4c);
    *(undefined4 *)(param_1 + 0x16b4) = DAT_0027099c;
    *(byte *)(local_38 + 0xf5c) = *(byte *)(local_38 + 0xf5c) | 1;
  default:
    return;
  case 2:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    *(undefined4 *)(param_1 + 0x16b4) = DAT_00270da8;
    uVar9 = ObjectBankArchive_00372c90(iVar13,0x1c);
    uVar10 = DAT_00270db4;
    iVar13 = DAT_00270db0;
    *(undefined4 *)(DAT_00270db0 + 4) = DAT_00270dac;
    *(undefined2 *)(iVar13 + 0x22) = 1;
    iVar13 = (**(code **)(*(int *)*DAT_00270928 + 0xc))
                       ((int *)*DAT_00270928,0x1b8,s_d__home_queen_dailyBuild_game_us_0027093c,
                        uVar10);
    uVar10 = 0;
    if (iVar13 != 0) {
      uVar10 = FUN_00348f34(iVar13,DAT_00270db0);
    }
    *(undefined4 *)(param_1 + 0x16b8) = uVar10;
    FUN_00348be4();
    FUN_00348a64(*(undefined4 *)(param_1 + 0x16b8),0,uVar9,DAT_00270930,DAT_00270930,DAT_0027092c,
                 DAT_0027092c);
    if (((*DAT_00270934 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_00270934), iVar13 != 0)) {
      FUN_0036788c(DAT_00270980);
    }
    uVar10 = BoardModelFactory_0034897c
                       (*(undefined4 *)(DAT_00270938 + 0x47c),*(undefined4 *)(param_1 + 0x16b8),
                        *(undefined4 *)(param_1 + 0x178),0);
    *(undefined4 *)(param_1 + 0x16c8) = uVar10;
    return;
  case 3:
    if ((*(byte *)(param_2 + 0x7f5c) & 4) == 0) {
      uVar9 = ObjectBankArchive_00372c90(iVar13,0x1b);
      iVar13 = (**(code **)(*(int *)*DAT_00270928 + 0xc))
                         ((int *)*DAT_00270928,0x1b8,s_d__home_queen_dailyBuild_game_us_0027093c,
                          DAT_002709a0);
      uVar10 = 0;
      if (iVar13 != 0) {
        uVar10 = FUN_00348f34(iVar13,DAT_002709a4);
      }
      *(undefined4 *)(param_1 + 0x16b8) = uVar10;
      FUN_00348be4();
      FUN_00348a64(*(undefined4 *)(param_1 + 0x16b8),0,uVar9,DAT_00270930,DAT_00270930,DAT_0027092c,
                   DAT_0027092c);
      if (((*DAT_00270934 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_00270934), iVar13 != 0)) {
        FUN_0036788c(DAT_00270980);
      }
      uVar10 = BoardModelFactory_00340d00
                         (*(undefined4 *)(DAT_00270938 + 0x47c),*(undefined4 *)(param_1 + 0x16b8),
                          *(undefined4 *)(param_1 + 0x178),0);
      local_48 = DAT_002709a8;
      *(undefined4 *)(param_1 + 0x16c0) = uVar10;
      local_44 = local_48;
      local_40 = local_48;
      local_3c = DAT_00270990;
      FUN_003429c8(*(undefined4 *)(param_1 + 0x16c0),1,&local_48);
      *(undefined4 *)(param_1 + 0x16b4) = DAT_002709ac;
      *(byte *)(param_2 + 0x7f5c) = *(byte *)(param_2 + 0x7f5c) | 4;
      return;
    }
LAB_002709b0:
    FUN_00374428(param_1);
    return;
  case 4:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    *(undefined1 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = uVar10;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,7);
    uVar10 = DAT_00270db8;
    *(undefined1 *)(param_1 + 0x16b1) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = uVar10;
    return;
  case 5:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    uVar7 = DAT_00270dbc;
    uVar9 = DAT_00270994;
    *(undefined1 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = uVar10;
    puVar11 = (undefined4 *)(param_1 + 0x194);
    puVar14 = (undefined4 *)(param_1 + 0x189c);
    iVar13 = 3;
    do {
      puVar11[0x15] = uVar7;
      puVar14[1] = uVar9;
      puVar11 = puVar11 + 0x2a;
      puVar14 = puVar14 + 2;
      *puVar11 = uVar7;
      iVar13 = iVar13 + -1;
      *puVar14 = uVar9;
    } while (iVar13 != 0);
    iVar12 = FUN_00350cf4(0xbb);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x1e8) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xa0) = uVar10;
    }
    iVar12 = FUN_00350cf4(0xbc);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x23c) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xa4) = uVar10;
    }
    iVar12 = FUN_00350cf4(0xbd);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x290) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xa8) = uVar10;
    }
    iVar12 = FUN_00350cf4(0xbe);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x2e4) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xac) = uVar10;
    }
    iVar12 = FUN_00350cf4(0xbf);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x338) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xb0) = uVar10;
    }
    iVar12 = FUN_00350cf4(0xad);
    iVar13 = 0;
    if (iVar12 != 0) {
      iVar13 = param_1 + 0x1800;
      *(undefined4 *)(param_1 + 0x38c) = uVar10;
    }
    if (iVar12 != 0) {
      *(undefined4 *)(iVar13 + 0xb4) = uVar10;
    }
    piVar3 = DAT_00270dc4;
    if (*(char *)(DAT_00270dc0 + 0x5a2) != '\0') {
      iVar13 = *DAT_00270dc4;
      bVar16 = iVar13 == 0x538;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x1e8) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xa0) = uVar9;
      }
      iVar13 = *piVar3 + -0x53c;
      bVar16 = iVar13 == 0;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x23c) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xa4) = uVar9;
      }
      iVar13 = *piVar3;
      bVar16 = iVar13 == 0x540;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x290) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xa8) = uVar9;
      }
      iVar13 = *piVar3;
      bVar16 = iVar13 == 0x544;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x2e4) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xac) = uVar9;
      }
      iVar13 = *piVar3;
      bVar16 = iVar13 == 0x548;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x338) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xb0) = uVar9;
      }
      iVar13 = *piVar3;
      bVar16 = iVar13 == 0x54c;
      if (bVar16) {
        iVar13 = param_1 + 0x1800;
        *(undefined4 *)(param_1 + 0x38c) = uVar7;
      }
      if (bVar16) {
        *(undefined4 *)(iVar13 + 0xb4) = uVar9;
      }
    }
    uVar10 = DAT_00270dc8;
    *(undefined1 *)(param_1 + 0x16b1) = 0;
    *(undefined4 *)(param_1 + 0x16b4) = uVar10;
    return;
  case 6:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    uVar10 = DAT_00270dcc;
    break;
  case 7:
  case 8:
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(param_1 + 0x1c0) = fVar17 * DAT_00270dd0 * DAT_00270dd4 * DAT_00270dd8;
    *(undefined4 *)(param_1 + 0x1c4) = uVar10;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(float *)(param_1 + 0x1c8) = fVar17 * fVar18 * fVar4 * fVar5;
    *(undefined2 *)(param_1 + 500) = *(undefined2 *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(param_1 + 0x38);
    uVar10 = DAT_00270ddc;
    break;
  case 9:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
    *(undefined4 *)(param_1 + 0x16b4) = uVar9;
    fVar18 = (float)VectorUnsignedToFloat
                              (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18,
                               (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1e8) = fVar18 * fVar5;
    uVar10 = DAT_00270de4;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined4 *)(param_1 + 0xfc) = uVar10;
    *(undefined4 *)(param_1 + 0x100) = DAT_00270de8;
    *(undefined2 *)(param_1 + 0x1e0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x16b4) = uVar10;
  return;
}
