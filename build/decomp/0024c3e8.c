// OoT3D decomp @ 0024c3e8  name=z_en_jsjutan_0024c3e8  size=484

void z_en_jsjutan_0024c3e8(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  uVar3 = FUN_00363c10(param_2 + 0x3a58,0x144);
  iVar4 = FUN_00373074(param_2 + 0x3a58,uVar3);
  puVar1 = DAT_0024c608;
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*(int *)*DAT_0024c608 + 0xc))
                      ((int *)*DAT_0024c608,0x1b8,s_d__home_queen_dailyBuild_game_us_0024c5cc,
                       DAT_0024c60c);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_003432d4(iVar4,DAT_0024c610);
    }
    *(undefined4 *)(param_1 + 0x1dc) = uVar5;
    FUN_00348be4();
    puVar2 = DAT_0024c614;
    if (((*DAT_0024c614 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0024c614), iVar4 != 0)) {
      FUN_0036788c(DAT_0024c618);
    }
    iVar4 = DAT_0024c624;
    iVar6 = BoardModelFactory_0034897c
                      (*(undefined4 *)(DAT_0024c624 + 0x47c),*(undefined4 *)(param_1 + 0x1dc),
                       *(undefined4 *)(param_1 + 0x178),0);
    *(int *)(param_1 + 0x1e0) = iVar6;
    *(undefined4 *)(iVar6 + 0x170) = 0;
    if (((uVar3 & 0xff) < 0x13) &&
       (param_2 = param_2 + (uVar3 & 0xff) * 0x80, *(int *)(DAT_0024c628 + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    uVar5 = ObjectBankArchive_00372c90(param_2 + 0x10,0);
    FUN_00348a64(*(undefined4 *)(param_1 + 0x1dc),0,uVar5,DAT_0024c634,DAT_0024c634,DAT_0024c630,
                 DAT_0024c62c);
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    iVar6 = (**(code **)(*(int *)*puVar1 + 0xc))
                      ((int *)*puVar1,0x1b8,s_d__home_queen_dailyBuild_game_us_0024c5cc,DAT_0024c638
                      );
    uVar5 = 0;
    if (iVar6 != 0) {
      uVar5 = FUN_00348f34(iVar6,DAT_0024c63c);
    }
    *(undefined4 *)(param_1 + 0x1e4) = uVar5;
    FUN_00348be4();
    if (((*puVar2 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0024c614), iVar6 != 0)) {
      FUN_0036788c(DAT_0024c618);
    }
    iVar4 = BoardModelFactory_0034897c
                      (*(undefined4 *)(iVar4 + 0x47c),*(undefined4 *)(param_1 + 0x1e4),
                       *(undefined4 *)(param_1 + 0x178),0);
    *(int *)(param_1 + 0x1e8) = iVar4;
    *(undefined4 *)(iVar4 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x13c) = DAT_0024c640;
    *(undefined4 *)(param_1 + 0x140) = DAT_0024c644;
  }
  return;
}
