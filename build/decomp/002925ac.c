// OoT3D decomp @ 002925ac  name=z_en_ganon_mant_002925ac  size=644

void z_en_ganon_mant_002925ac(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;

  iVar4 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1e));
  puVar1 = DAT_00292870;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x1760) = 0;
    *(undefined4 *)(param_1 + 0x1764) = 0;
    iVar4 = (**(code **)(*(int *)*puVar1 + 0xc))
                      ((int *)*puVar1,0x1b8,s_d__home_queen_dailyBuild_game_us_00292830,DAT_00292874
                      );
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_003432d4(iVar4,DAT_00292878);
    }
    *(undefined4 *)(param_1 + 0x1760) = uVar5;
    FUN_00348be4();
    if (((*DAT_0029287c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0029287c), iVar4 != 0)) {
      FUN_0036788c(DAT_00292880);
    }
    uVar5 = BoardModelFactory_0034897c
                      (*(undefined4 *)(DAT_0029288c + 0x47c),*(undefined4 *)(param_1 + 0x1760),
                       *(undefined4 *)(param_1 + 0x178),0);
    *(undefined4 *)(param_1 + 0x1764) = uVar5;
    FUN_0033d200(*(undefined4 *)(param_1 + 0x178),0);
    FUN_0033d200(*(undefined4 *)(param_1 + 0x178),1);
    FUN_0033d200(*(undefined4 *)(param_1 + 0x178),2);
    uVar2 = DAT_00292894;
    uVar5 = DAT_00292890;
    *(undefined4 *)(*(int *)(param_1 + 0x1764) + 0x170) = 0;
    iVar4 = *(int *)(param_1 + 0x1764);
    *(undefined4 *)(iVar4 + 0x100) = uVar5;
    *(undefined4 *)(iVar4 + 0x104) = uVar5;
    *(undefined4 *)(iVar4 + 0x108) = uVar5;
    uVar5 = DAT_00292898;
    *(undefined4 *)(iVar4 + 0x10c) = uVar2;
    iVar4 = *(int *)(param_1 + 0x1764);
    *(undefined4 *)(iVar4 + 0xf0) = uVar5;
    *(undefined4 *)(iVar4 + 0xf4) = uVar5;
    *(undefined4 *)(iVar4 + 0xf8) = uVar5;
    *(undefined4 *)(iVar4 + 0xfc) = uVar2;
    FUN_0033e2a0(param_2,param_1,*(undefined4 *)(param_1 + 0x178));
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0029289c + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    uVar6 = ObjectBankArchive_00372c90(param_2 + 0x10,0x3f);
    uVar3 = DAT_002928a8;
    uVar2 = DAT_002928a4;
    uVar5 = DAT_002928a0;
    FUN_00348a64(*(undefined4 *)(param_1 + 0x1760),0,uVar6,DAT_002928a8,DAT_002928a8,DAT_002928a4,
                 DAT_002928a0);
    uVar6 = DAT_002928b0;
    iVar4 = 0x400;
    puVar7 = DAT_002928ac;
    do {
      iVar4 = iVar4 + -1;
      puVar7[1] = (short)uVar6;
      puVar7 = puVar7 + 2;
      *puVar7 = (short)uVar6;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0x17bc) = 0;
    *(undefined4 *)(param_1 + 0x17c0) = 0;
    *(undefined4 *)(param_1 + 0x17c4) = 0;
    *(undefined4 *)(param_1 + 0x17c8) = 0;
    *(undefined4 *)(param_1 + 0x17cc) = 0;
    *(undefined4 *)(param_1 + 0x17d0) = 0;
    *(undefined4 *)(param_1 + 0x17d4) = 0;
    *(undefined4 *)(param_1 + 0x17d8) = 0;
    *(undefined4 *)(param_1 + 0x17dc) = 0;
    *(undefined4 *)(param_1 + 0x17bc) = 0x1000;
    *(undefined2 *)(param_1 + 0x17c0) = 1;
    *(undefined1 *)(param_1 + 0x17c2) = 0;
    *(undefined2 *)(param_1 + 0x17c4) = 0x20;
    *(undefined2 *)(param_1 + 0x17c6) = 0x40;
    *(short *)(param_1 + 0x17c8) = (short)DAT_002928b4;
    *(short *)(param_1 + 0x17ca) = (short)DAT_002928b8;
    FUN_003445a8();
    FUN_0032b1c4(param_1 + 0x1768,(undefined4 *)(param_1 + 0x17bc),DAT_002928bc,0);
    FUN_00348a64(*(undefined4 *)(param_1 + 0x1760),1,param_1 + 0x1768,uVar3,uVar3,uVar2,uVar5);
    *(undefined4 *)(param_1 + 0x13c) = DAT_002928c0;
    *(undefined4 *)(param_1 + 0x140) = DAT_002928c4;
  }
  return;
}
