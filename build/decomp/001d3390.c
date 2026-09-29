// OoT3D decomp @ 001d3390  name=z_eff_dust_001d3390  size=680

void z_eff_dust_001d3390(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint in_fpscr;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;

  uVar2 = DAT_001d3650;
  uVar18 = DAT_001d364c;
  puVar12 = (undefined4 *)(param_1 + 0x2a8);
  puVar13 = (undefined4 *)(param_1 + 0x2a4);
  puVar16 = (undefined4 *)(param_1 + 0x1a4);
  iVar14 = 0x40;
  uVar1 = *(undefined2 *)(param_1 + 0x1c);
  puVar6 = (undefined4 *)(param_1 + 0x2ac);
  do {
    iVar14 = iVar14 + -1;
    *puVar6 = uVar18;
    *puVar12 = uVar18;
    *puVar13 = uVar18;
    puVar6 = puVar6 + 3;
    *puVar16 = uVar2;
    puVar16 = puVar16 + 1;
    puVar12 = puVar12 + 3;
    puVar13 = puVar13 + 3;
  } while (iVar14 != 0);
  *(undefined1 *)(param_1 + 0x5a4) = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001d3654 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  uVar7 = ObjectBankArchive_00372c90(param_2 + 0x10,5);
  iVar14 = DAT_001d3668;
  puVar4 = DAT_001d3664;
  uVar3 = DAT_001d3660;
  uVar18 = DAT_001d365c;
  puVar6 = DAT_001d3658;
  iVar15 = 0;
  do {
    iVar8 = (**(code **)(*(int *)*puVar6 + 0xc))
                      ((int *)*puVar6,0x1b8,s_d__home_queen_dailyBuild_game_us_001d366c,0xef);
    uVar9 = 0;
    if (iVar8 != 0) {
      uVar9 = FUN_00348f34(iVar8,DAT_001d36a4);
    }
    iVar8 = param_1 + iVar15 * 4;
    *(undefined4 *)(iVar8 + 0x5c0) = uVar9;
    FUN_00348be4();
    FUN_00348a64(*(undefined4 *)(iVar8 + 0x5c0),0,uVar7,uVar3,uVar3,uVar18,uVar18);
    if (((*puVar4 & 1) == 0) && (iVar10 = FUN_003679b4(DAT_001d3664), iVar10 != 0)) {
      FUN_0036788c(DAT_001d36a8);
    }
    uVar11 = BoardModelFactory_00340d00
                       (*(undefined4 *)(iVar14 + 0x47c),*(undefined4 *)(iVar8 + 0x5c0),0);
    uVar9 = DAT_001d36b4;
    *(undefined4 *)(iVar8 + 0x5c4) = uVar11;
    FUN_0034ea48(uVar11,uVar9);
    uVar17 = DAT_001d36cc;
    fVar5 = DAT_001d36c0;
    uVar11 = DAT_001d36bc;
    uVar9 = DAT_001d36b8;
    iVar15 = iVar15 + 1;
  } while (iVar15 < 1);
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x5b8) = DAT_001d36c4;
    *(undefined4 *)(param_1 + 0x5bc) = DAT_001d36c8;
    *(undefined4 *)(param_1 + 0x5a8) = uVar2;
    *(undefined4 *)(param_1 + 0x5ac) = uVar9;
    *(undefined4 *)(param_1 + 0x5b0) = uVar9;
    goto LAB_001d3590;
  case 1:
    *(undefined4 *)(param_1 + 0x5b8) = DAT_001d36d0;
    *(undefined4 *)(param_1 + 0x5bc) = DAT_001d36c8;
    *(undefined4 *)(param_1 + 0x5a8) = uVar9;
    *(undefined4 *)(param_1 + 0x5ac) = uVar2;
    *(undefined4 *)(param_1 + 0x5b0) = uVar9;
    uVar17 = uVar11;
LAB_001d3590:
    *(undefined4 *)(param_1 + 0x5b4) = uVar17;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x5b8) = DAT_001d36d4;
    *(undefined4 *)(param_1 + 0x5bc) = DAT_001d36d8;
    *(undefined4 *)(param_1 + 0x5a8) = uVar11;
    *(undefined4 *)(param_1 + 0x5b4) = DAT_001d36dc;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x5b8) = DAT_001d36d4;
    *(undefined4 *)(param_1 + 0x5bc) = DAT_001d36d8;
    *(undefined4 *)(param_1 + 0x5a8) = uVar11;
    *(float *)(param_1 + 0x5b4) = fVar5;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x5b8) = DAT_001d36d4;
    *(undefined4 *)(param_1 + 0x5bc) = DAT_001d36d8;
    *(undefined4 *)(param_1 + 0x5a8) = uVar11;
    *(undefined4 *)(param_1 + 0x5b4) = DAT_001d36e0;
    *(undefined1 *)(param_1 + 3) = 0xff;
    break;
  default:
    FUN_003525d4(param_1);
  }
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001d36e4 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  uVar18 = VectorFloatToUnsigned((DAT_001d36e8 / fVar19) * fVar5,3);
  *(char *)(param_1 + 0x5a5) = (char)uVar18;
  return;
}
