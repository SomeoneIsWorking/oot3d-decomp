// OoT3D decomp @ 0033ab60  name=z_eff_blure_0033ab60  size=556

void z_eff_blure_0033ab60(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  uVar2 = DAT_0033ad94;
  uVar6 = DAT_0033ad90;
  piVar3 = (int *)*DAT_0033ad8c;
  if (*(short *)(param_1 + 0x248) == 0) {
    if (*(char *)(param_1 + 0x282) != '\0') {
      iVar4 = (**(code **)(*piVar3 + 0xc))
                        (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,DAT_0033addc);
      uVar7 = DAT_0033ade0;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
LAB_0033ad84:
        uVar5 = FUN_00348f34(iVar4,uVar7);
      }
LAB_0033aca8:
      *(undefined4 *)(param_1 + 0x26c) = uVar5;
      FUN_00348be4();
      uVar5 = FUN_0033aaac(param_2,*(byte *)(param_1 + 0x282) + 0x18);
      FUN_00348a64(*(undefined4 *)(param_1 + 0x26c),0,uVar5,uVar2,uVar2,uVar6,uVar6);
      goto LAB_0033ace4;
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))
                      (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,DAT_0033add4);
    uVar6 = DAT_0033add8;
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
LAB_0033ad54:
      uVar6 = FUN_00348f34(iVar4,uVar6);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x261);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        iVar4 = (**(code **)(*piVar3 + 0xc))
                          (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,DAT_0033adf0);
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = FUN_00348f34(iVar4,DAT_0033adf4);
        }
      }
      else {
        if (cVar1 != '\x02') goto LAB_0033ace4;
        if (*(char *)(param_1 + 0x282) == '\0') {
          iVar4 = (**(code **)(*piVar3 + 0xc))
                            (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,DAT_0033ade4);
          uVar6 = DAT_0033ae0c;
          if (iVar4 != 0) goto LAB_0033ad54;
          uVar6 = 0;
          goto LAB_0033ac6c;
        }
        iVar4 = (**(code **)(*piVar3 + 0xc))
                          (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,0x344);
        uVar5 = 0;
        uVar7 = DAT_0033ae10;
        if (iVar4 != 0) goto LAB_0033ad84;
      }
      goto LAB_0033aca8;
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))
                      (piVar3,0x1b8,s_d__home_queen_dailyBuild_game_us_0033ad98,DAT_0033ade8);
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = FUN_00348f34(iVar4,DAT_0033adec);
    }
  }
LAB_0033ac6c:
  *(undefined4 *)(param_1 + 0x26c) = uVar6;
  FUN_00348be4();
LAB_0033ace4:
  if (((*DAT_0033adf8 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0033adf8), iVar4 != 0)) {
    FUN_0036788c(DAT_0033adfc);
  }
  iVar4 = BoardModelFactory_0034897c
                    (*(undefined4 *)(DAT_0033ae08 + 0x47c),*(undefined4 *)(param_1 + 0x26c),0);
  *(int *)(param_1 + 0x270) = iVar4;
  *(undefined4 *)(iVar4 + 0x170) = 0;
  return;
}
