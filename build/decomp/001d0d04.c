// OoT3D decomp @ 001d0d04  name=z_boss_sst_001d0d04  size=2040

void z_boss_sst_001d0d04(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;

  FUN_003510b0(param_1,DAT_001d10ac);
  FUN_00353dd0(param_2);
  FUN_00350eb8(param_2);
  FUN_00350d20(param_1 + 0xa0,DAT_001d10b0 + 0x1a0);
  FUN_00375c10(param_2,0x14);
  *(undefined4 *)(param_1 + 0x1adc) = 0;
  uVar1 = DAT_001d10b4;
  *(undefined1 *)(param_1 + 0x1ae1) = 0;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  puVar4 = DAT_001d10c4;
  uVar3 = DAT_001d10c0;
  uVar2 = DAT_001d10bc;
  uVar1 = DAT_001d10b8;
  if (*(short *)(param_1 + 0x1c) != -1) {
    FUN_00350d48(param_2,param_1 + 0xeec,param_1,DAT_001d14fc,param_1 + 0xf0c);
    FUN_00353d24(param_2,param_1 + 0x127c,param_1,DAT_001d1500);
    puVar10 = DAT_001d1504;
    if (*(short *)(param_1 + 0x1c) == 0) {
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar15 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001d10d4 + iVar15) != 0)) {
        iVar15 = iVar15 + 0x3a5c;
      }
      else {
        iVar15 = 0;
      }
      iVar15 = iVar15 + 0x10;
      uVar12 = ObjectBankArchive_00358ef8(iVar15,1);
      FUN_00353e78(iVar15,param_2,param_1 + 0x1a4,uVar12,*(undefined4 *)(param_1 + 0x178),0,
                   param_1 + 0x244,param_1 + 0x890,0xf);
      *(undefined1 *)(param_1 + 0x230) = 0xff;
      uVar12 = DAT_001d1540;
      *(float *)(*(int *)(param_1 + 0xf08) + 0x30) = -*(float *)(*(int *)(param_1 + 0xf08) + 0x30);
      piVar17 = (int *)*puVar10;
      iVar11 = (**(code **)(*piVar17 + 0xc))
                         (piVar17,0x234,s_d__home_queen_dailyBuild_game_us_001d1508,uVar12);
      uVar12 = 0;
      if (iVar11 != 0) {
        uVar12 = FUN_00347258();
      }
      *(undefined4 *)(param_1 + 0x1adc) = uVar12;
      FUN_0033e2a0(param_2,param_1,uVar12);
      iVar11 = 0;
      do {
        if (((*puVar4 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_001d10c4), iVar13 != 0)) {
          FUN_0036788c(DAT_001d10e4);
        }
        **(undefined4 **)(param_1 + 0x1adc) = *(undefined4 *)(DAT_001d10e4 + 0x174);
        uVar12 = ObjectBankArchive_00358ef8(iVar15,1);
        FUN_00353e78(iVar15,param_2,param_1 + iVar11 * 0x84 + 0x16b8,uVar12,
                     *(undefined4 *)(param_1 + 0x1adc),0,param_1 + 0x244,param_1 + 0x890,0xf);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
    }
    else if (*(short *)(param_1 + 0x1c) == 1) {
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar15 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001d10d4 + iVar15) != 0)) {
        iVar15 = iVar15 + 0x3a5c;
      }
      else {
        iVar15 = 0;
      }
      iVar15 = iVar15 + 0x10;
      uVar12 = ObjectBankArchive_00358ef8(iVar15,2);
      FUN_00353e78(iVar15,param_2,param_1 + 0x1a4,uVar12,*(undefined4 *)(param_1 + 0x178),8,
                   param_1 + 0x244,param_1 + 0x890,0xf);
      piVar17 = (int *)*puVar10;
      iVar11 = (**(code **)(*piVar17 + 0xc))
                         (piVar17,0x234,s_d__home_queen_dailyBuild_game_us_001d1508,DAT_001d1544);
      uVar12 = 0;
      if (iVar11 != 0) {
        uVar12 = FUN_00347258();
      }
      *(undefined4 *)(param_1 + 0x1adc) = uVar12;
      FUN_0033e2a0(param_2,param_1,uVar12);
      iVar11 = 0;
      do {
        if (((*puVar4 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_001d10c4), iVar13 != 0)) {
          FUN_0036788c(DAT_001d10e4);
        }
        **(undefined4 **)(param_1 + 0x1adc) = *(undefined4 *)(DAT_001d10e4 + 0x174);
        uVar12 = ObjectBankArchive_00358ef8(iVar15,2);
        FUN_00353e78(iVar15,param_2,param_1 + iVar11 * 0x84 + 0x16b8,uVar12,
                     *(undefined4 *)(param_1 + 0x1adc),8,param_1 + 0x244,param_1 + 0x890,0xf);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
      *(undefined1 *)(param_1 + 0x230) = 1;
    }
    FUN_00372d4c(uVar3,uVar1,param_1 + 0xbc,DAT_001d10f8);
    *(short *)(DAT_001d15d0 + param_1) = (short)DAT_001d15cc;
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    uVar1 = DAT_0035bac8;
    iVar15 = DAT_0035bac4;
    *(undefined4 *)(DAT_0035bac4 + *(short *)(param_1 + 0x1c) * 4) = 0;
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
    FUN_00370350(uVar1,param_1 + 0x1a4,
                 *(undefined4 *)(iVar15 + 0x10 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined1 *)(param_1 + 0x231) = 0;
    *(undefined2 *)(param_1 + 0x234) = 0x1e;
    *(undefined4 *)(param_1 + 0x22c) = DAT_0035bacc;
    return;
  }
  iVar11 = param_2 + 0x208c;
  uVar12 = z_actor_003738d0(*DAT_001d10c8,DAT_001d10c8[1],DAT_001d10c8[2],iVar11,param_2,
                            DAT_001d10cc,0,0,0,0,1);
  iVar15 = DAT_001d10d0;
  *(undefined4 *)(DAT_001d10d0 + 0x34) = uVar12;
  FUN_00372f38(param_1,param_2,param_1 + 0x1ad8,6,0);
  uVar12 = DAT_001d10d8;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar13 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001d10d4 + iVar13) != 0)) {
    iVar13 = iVar13 + 0x3a5c;
  }
  else {
    iVar13 = 0;
  }
  iVar13 = iVar13 + 0x10;
  iVar14 = FUN_0035010c(DAT_001d10d8);
  *(int *)(iVar15 + 0x2c) = iVar14;
  if (iVar14 != 0) {
    FUN_00343280(iVar14,uVar12);
    FUN_00350820(iVar14 + 4,DAT_001d10dc,0xd4,0x2d);
  }
  piVar17 = *(int **)(iVar15 + 0x2c);
  iVar14 = 0;
  do {
    iVar16 = iVar14 + 1;
    *(undefined1 *)(piVar17 + iVar14 * 0x35 + 1) = 0;
    *(undefined1 *)((int)piVar17 + iVar14 * 0xd4 + 5) = 0xff;
    piVar17[iVar14 * 0x35 + 2] = 0;
    *(undefined1 *)(piVar17 + iVar14 * 0x35 + 3) = 0;
    *(undefined1 *)((int)piVar17 + iVar14 * 0xd4 + 0xd) = 0;
    *(undefined1 *)((int)piVar17 + iVar14 * 0xd4 + 0xe) = 0;
    iVar14 = iVar16;
  } while (iVar16 < 0x2d);
  piVar17[0x952] = 0;
  piVar17[0x953] = 0;
  piVar5 = DAT_001d10e0;
  *(undefined1 *)(DAT_001d10e0 + 2) = 0;
  *piVar5 = param_2;
  *piVar17 = iVar13;
  piVar17[0x952] = param_2;
  piVar17[0x953] = param_1;
  uVar12 = ObjectBankArchive_00358ef8(iVar13,3);
  FUN_00353e78(iVar13,param_2,param_1 + 0x1a4,uVar12,*(undefined4 *)(param_1 + 0x178),0x19,
               param_1 + 0x244,param_1 + 0x890,0x1f);
  if (((*puVar4 & 1) == 0) && (iVar14 = FUN_003679b4(DAT_001d10c4), iVar14 != 0)) {
    FUN_0036788c(DAT_001d10e4);
  }
  uVar12 = ObjectBankArchive_00372c90(iVar13,*(undefined4 *)(DAT_001d10f0 + 0xf3c));
  *(undefined4 *)(param_1 + 0x228) = uVar12;
  uVar7 = DAT_001d10fc;
  uVar12 = DAT_001d10f8;
  puVar6 = DAT_001d10f4;
  *DAT_001d10f4 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[-4] = 0xff;
  puVar6[-3] = 0xff;
  puVar6[-2] = 0xff;
  *(undefined1 *)(iVar15 + 2) = 0;
  FUN_00372d4c(uVar7,uVar1,param_1 + 0xbc,uVar12);
  FUN_00350d48(param_2,param_1 + 0xeec,param_1,DAT_001d1100,param_1 + 0xf0c);
  FUN_00353d24(param_2,param_1 + 0x127c,param_1,DAT_001d1104);
  *(int *)(iVar15 + 0x30) = param_1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar1 = DAT_001d1108;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xbe) = 0;
  iVar15 = FUN_0035b164();
  fVar9 = DAT_001d1110;
  fVar8 = DAT_001d110c;
  if ((iVar15 != 1) &&
     (iVar15 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_001d1114 + param_2)), uVar12 = DAT_001d1118,
     iVar15 != 0)) {
    z_actor_003738d0(DAT_001d1118,uVar3,fVar8,iVar11,param_2,0x5d,0,0,0,0xffffffff,1);
    z_actor_003738d0(uVar12,uVar3,fVar9,iVar11,param_2,0x5f,0,0,0,0,1);
    FUN_00374428(param_1);
    return;
  }
  iVar15 = z_actor_003738d0(*(float *)(param_1 + 0x28) + DAT_001d14e8,
                            *(undefined4 *)(param_1 + 0x2c),*(float *)(param_1 + 0x30) + fVar8,
                            iVar11,param_2,0xe9,0,(int)*(short *)(param_1 + 0xbe),0,0,1);
  piVar17 = DAT_001d14ec;
  *DAT_001d14ec = iVar15;
  iVar15 = z_actor_003738d0(*(float *)(param_1 + 0x28) + fVar9,*(undefined4 *)(param_1 + 0x2c),
                            *(float *)(param_1 + 0x30) + fVar8,iVar11,param_2,0xe9,0,
                            (int)*(short *)(param_1 + 0xbe),0,1,1);
  piVar17[1] = iVar15;
  iVar13 = *piVar17;
  *(int *)(iVar13 + 0x128) = iVar15;
  *(int *)(iVar15 + 0x128) = iVar13;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x13c) = DAT_001d14f0;
  *(undefined4 *)(param_1 + 0xedc) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(iVar13 + 0x140) = 0;
  uVar1 = DAT_001d14f8;
  *(undefined4 *)(iVar15 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  FUN_00375d3c(param_2,iVar11,param_1,9);
  return;
}
