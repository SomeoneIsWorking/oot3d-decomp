// OoT3D decomp @ 00452060  name=z_fbdemo_wipe3_00452060  size=340

void z_fbdemo_wipe3_00452060(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;

  piVar1 = DAT_004521b4;
  if (*DAT_004521b4 == 0) {
    iVar4 = (**(code **)(*(int *)*DAT_004521f4 + 0xc))
                      ((int *)*DAT_004521f4,0x1b8,s_d__home_queen_dailyBuild_game_us_004521b8,0xdc);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_00348f34(iVar4,piVar1 + 0x15);
    }
    *piVar1 = iVar5;
    FUN_00348be4();
    if (((*DAT_004521f8 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_004521f8), iVar5 != 0)) {
      FUN_0036788c(DAT_004521fc);
    }
    iVar5 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_00452208 + 0x47c),*piVar1,0);
    uVar2 = DAT_00452210;
    uVar7 = DAT_0045220c;
    piVar1[1] = iVar5;
    uVar3 = DAT_00452214;
    *(undefined4 *)(iVar5 + 0x48) = uVar7;
    *(undefined4 *)(iVar5 + 0x4c) = uVar2;
    *(undefined4 *)(iVar5 + 0x50) = uVar3;
    *(uint *)(piVar1[1] + 0x178) = *(uint *)(piVar1[1] + 0x178) | 0x10;
  }
  uVar6 = FUN_00363c10(param_1 + 0x3a58,1);
  iVar5 = DAT_0045221c;
  if (((uVar6 & 0xff) < 0x13) &&
     (param_1 = param_1 + (uVar6 & 0xff) * 0x80, *(int *)(DAT_00452218 + param_1) != 0)) {
    param_1 = param_1 + 0x3a5c;
  }
  else {
    param_1 = 0;
  }
  iVar4 = 0;
  do {
    uVar7 = ObjectBankArchive_00372c90(param_1 + 0x10,iVar4 + 0x40);
    *(undefined4 *)(iVar5 + iVar4 * 4) = uVar7;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}
