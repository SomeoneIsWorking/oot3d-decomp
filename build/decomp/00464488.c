// OoT3D decomp @ 00464488  name=actor_util_00464488  size=580

void actor_util_00464488(int *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int local_154 [71];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  local_34 = *DAT_004646cc;
  uStack_30 = DAT_004646cc[1];
  uStack_2c = DAT_004646cc[2];
  uStack_28 = DAT_004646cc[3];
  FUN_00371738(local_154,DAT_004646cc + 4,0x120);
  param_2 = param_2 + (uint)*(byte *)(DAT_004646d0 + param_2) * 0x80;
  if (*(int *)(DAT_004646d4 + param_2) == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x3a6c;
  }
  iVar3 = ObjectBankArchive_00358ef8(param_2,99);
  param_1[2] = iVar3;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0x50;
  *(undefined2 *)((int)param_1 + 0xe) = 0x40;
  iVar3 = FUN_0035010c(0xc40);
  param_1[7] = iVar3;
  *param_1 = iVar3;
  puVar1 = DAT_004646d8;
  param_1[4] = iVar3 + 0xa40;
  param_1[6] = iVar3 + 0x140;
  param_1[5] = iVar3 + 0xb40;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(puVar1), iVar3 != 0)) {
    FUN_0036788c(DAT_004646dc);
  }
  uVar7 = DAT_004646e8;
  iVar3 = 0;
  piVar8 = *(int **)(DAT_004646dc + 0x17c);
  if (*(short *)((int)param_1 + 6) != 0) {
    do {
      iVar4 = (**(code **)(*piVar8 + 8))(piVar8,param_1[2],0);
      *(int *)(*param_1 + iVar3 * 4) = iVar4;
      *(undefined4 *)(iVar4 + 0x40) = uVar7;
      *(undefined4 *)(iVar4 + 0x44) = uVar7;
      *(undefined4 *)(iVar4 + 0x48) = uVar7;
      uVar5 = FUN_003687a8(*(undefined4 *)(*param_1 + iVar3 * 4));
      FUN_0033d200(uVar5,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)((int)param_1 + 6));
  }
  iVar3 = DAT_004646f0;
  puVar2 = DAT_004646ec;
  iVar4 = 0;
  if (*(short *)((int)param_1 + 0xe) != 0) {
    do {
      local_38 = 0;
      local_154[0] = param_1[6] + iVar4 * 0x24;
      iVar6 = (**(code **)(*(int *)*puVar2 + 0xc))
                        ((int *)*puVar2,0x1b8,s_d__home_queen_dailyBuild_game_us_004646f4,0x8a);
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = FUN_003432d4(iVar6,local_154);
      }
      *(undefined4 *)(param_1[5] + iVar4 * 4) = uVar7;
      FUN_00348be4();
      if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_004646d8), iVar6 != 0)) {
        FUN_0036788c(DAT_004646dc);
      }
      uVar7 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(param_1[5] + iVar4 * 4),0);
      *(undefined4 *)(param_1[4] + iVar4 * 4) = uVar7;
      FUN_0035bae4(uVar7,0,&local_34);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0xe));
  }
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}
