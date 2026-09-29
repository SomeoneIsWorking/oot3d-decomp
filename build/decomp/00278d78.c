// OoT3D decomp @ 00278d78  name=z_bg_jya_cobra_00278d78  size=372

void z_bg_jya_cobra_00278d78(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;

  FUN_003445a8(param_1 + 0x22c0);
  FUN_003445a8();
  FUN_0032b1c4(param_1 + 0x22c0,param_1 + 0x2368,param_1 + 0x1ec,0);
  FUN_0032b1c4(param_1 + 0x2314,param_1 + 0x2368,param_1 + 0x1ec,0);
  puVar1 = DAT_00278f28;
  *(undefined4 *)(param_1 + 0x22b8) = 0;
  *(undefined4 *)(param_1 + 0x22bc) = 0;
  iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))
                    ((int *)*puVar1,0x1b8,s_d__home_queen_dailyBuild_game_us_00278eec,DAT_00278f2c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00348f34(iVar2,DAT_00278f30);
  }
  *(undefined4 *)(param_1 + 0x22b8) = uVar3;
  FUN_00348be4();
  FUN_00348a64(*(undefined4 *)(param_1 + 0x22b8),0,
               param_1 + *(int *)(param_1 + 0x238c) * 0x54 + 0x22c0,DAT_00278f3c,DAT_00278f3c,
               DAT_00278f38,DAT_00278f34);
  if (((*DAT_00278f40 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00278f40), iVar2 != 0)) {
    FUN_0036788c(DAT_00278f44);
  }
  iVar2 = BoardModelFactory_0034897c
                    (*(undefined4 *)(DAT_00278f50 + 0x47c),*(undefined4 *)(param_1 + 0x22b8),
                     *(undefined4 *)(param_1 + 0x178),0);
  *(int *)(param_1 + 0x22bc) = iVar2;
  *(undefined4 *)(iVar2 + 0x170) = 0;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x22bc) + 0x178);
  *(uint *)(*(int *)(param_1 + 0x22bc) + 0x178) = uVar4 | 0x80;
  *(uint *)(*(int *)(param_1 + 0x22bc) + 0x178) = uVar4 | 0x82;
  *(undefined4 *)(param_1 + 0x13c) = DAT_00278f54;
  return;
}
