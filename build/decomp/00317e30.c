// OoT3D decomp @ 00317e30  name=z_room_00317e30  size=316

undefined4 z_room_00317e30(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  iVar2 = param_1 + 0x4c30 + (uint)*(byte *)(param_1 + 0x4c36) * 0x3c;
  piVar5 = (int *)(iVar2 + 8);
  iVar3 = (**(code **)(*(int *)*DAT_00317fa0 + 0xc))
                    ((int *)*DAT_00317fa0,0x48,s_d__home_queen_dailyBuild_game_us_00317f6c,0x3d);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_00320458(iVar3,param_2);
  }
  puVar1 = DAT_00317fa4;
  *piVar5 = iVar4;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(puVar1), iVar4 != 0)) {
    FUN_0036788c(DAT_00317fa8);
  }
  *(undefined4 *)(*piVar5 + 0x38) = DAT_00317fb4;
  CmbRes_0031ff64(*piVar5,1);
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00317fa4), iVar4 != 0)) {
    FUN_0036788c(DAT_00317fa8);
  }
  iVar4 = (**(code **)(**(int **)(DAT_00317fa8 + 0x17c) + 8))
                    (*(int **)(DAT_00317fa8 + 0x17c),*piVar5,0);
  *(int *)(iVar2 + 0xc) = iVar4;
  uVar7 = param_3[1];
  uVar6 = param_3[2];
  *(undefined4 *)(iVar4 + 0x24) = *param_3;
  *(undefined4 *)(iVar4 + 0x28) = uVar7;
  *(undefined4 *)(iVar4 + 0x2c) = uVar6;
  *(char *)(param_1 + 0x4c36) = *(char *)(param_1 + 0x4c36) + '\x01';
  return *(undefined4 *)(iVar2 + 0xc);
}
