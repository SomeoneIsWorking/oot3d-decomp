// OoT3D decomp @ 001aeb9c  name=z_en_choo_001aeb9c  size=448

void z_en_choo_001aeb9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  uVar4 = DAT_001aee34;
  if (*(short *)(param_1 + 0x1c) == -1) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  FUN_003510b0(param_1,uVar4);
  iVar3 = DAT_001aee3c;
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x100) = DAT_001aee38;
    iVar1 = 0;
    if (*(int *)(iVar3 + param_2) != 0) {
      iVar1 = param_2 + 0x3a5c;
    }
    uVar2 = ObjectBankArchive_00372c90(iVar1 + 0x10,2);
    iVar3 = (**(code **)(*(int *)*DAT_001aee78 + 0xc))
                      ((int *)*DAT_001aee78,0x1b8,s_d__home_queen_dailyBuild_game_us_001aee40,
                       DAT_001aee7c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00348f34(iVar3,DAT_001aee80);
    }
    *(undefined4 *)(param_1 + 0x3d0) = uVar4;
    FUN_00348be4();
    FUN_00348a64(*(undefined4 *)(param_1 + 0x3d0),0,uVar2,DAT_001aee88,DAT_001aee88,DAT_001aee84,
                 DAT_001aee84);
    local_34 = DAT_001aee8c;
    local_30 = DAT_001aee8c;
    local_2c = DAT_001aee90;
    local_28 = DAT_001aee94;
    if (((*DAT_001aee98 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001aee98), iVar3 != 0)) {
      FUN_0036788c(DAT_001aee9c);
    }
    uVar4 = BoardModelFactory_0034897c
                      (*(undefined4 *)(DAT_001aeea8 + 0x47c),*(undefined4 *)(param_1 + 0x3d0),
                       *(undefined4 *)(param_1 + 0x178),0);
    *(undefined4 *)(param_1 + 0x3d4) = uVar4;
    FUN_003429c8(uVar4,1,&local_34);
    *(uint *)(*(int *)(param_1 + 0x3d4) + 0x178) = *(uint *)(*(int *)(param_1 + 0x3d4) + 0x178) | 2;
  }
  local_34 = 3;
  FUN_00353c9c(param_1,param_2,param_1 + 0x214,1,4,param_1 + 0x298,param_1 + 0x334);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00350eb8(param_2,param_1 + 0x1a4);
  FUN_00350d48(param_2,param_1 + 0x1a4,param_1,DAT_001aeeac,param_1 + 0x1c4);
  *(undefined1 *)(param_1 + 0xb6) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
