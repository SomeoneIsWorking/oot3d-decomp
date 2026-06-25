// OoT3D decomp @ 004c903c  name=FUN_004c903c  size=708

void FUN_004c903c(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar1 = DAT_004c9300;
  if ((*DAT_004c9300 & 1) == 0) {
    uVar8 = FUN_003679b4(DAT_004c9300);
    param_2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0036788c(DAT_004c9304);
      param_2 = DAT_004c930c;
    }
  }
  FUN_0031025c(DAT_004c9304,param_2);
  ppiVar3 = DAT_004c9318;
  ppiVar2 = DAT_004c9314;
  iVar7 = DAT_004c9310;
  if (param_1[0x10] == 2) {
    iVar6 = 0;
    do {
      if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_004c9300), iVar4 != 0)) {
        FUN_0036788c(DAT_004c9304);
      }
      FUN_00348904(*(undefined4 *)(iVar7 + 0x47c),param_1[iVar6 + 4]);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 9);
    iVar7 = 0;
    do {
      if (param_1[iVar7 + 2] != 0) {
        uVar5 = FUN_003488e4();
        (**(code **)(**ppiVar2 + 0x10))(*ppiVar2,uVar5);
      }
      if (param_1[iVar7] != 0) {
        uVar5 = FUN_00307674();
        (**(code **)(**ppiVar3 + 0x10))(*ppiVar3,uVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  else if (param_1[0x10] == 3) {
    if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_004c9300), iVar6 != 0)) {
      FUN_0036788c(DAT_004c9304);
    }
    FUN_00348904(*(undefined4 *)(iVar7 + 0x47c),param_1[4]);
    if (param_1[2] != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(**ppiVar2 + 0x10))(*ppiVar2,uVar5);
    }
    if (*param_1 != 0) {
      uVar5 = FUN_00307674();
      (**(code **)(**ppiVar3 + 0x10))(*ppiVar3,uVar5);
    }
  }
  else {
    iVar6 = 0;
    do {
      if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_004c9300), iVar4 != 0)) {
        FUN_0036788c(DAT_004c9304);
      }
      FUN_00348904(*(undefined4 *)(iVar7 + 0x47c),param_1[iVar6 + 4]);
      if (param_1[iVar6 + 2] != 0) {
        uVar5 = FUN_003488e4();
        (**(code **)(**ppiVar2 + 0x10))(*ppiVar2,uVar5);
      }
      if (param_1[iVar6] != 0) {
        uVar5 = FUN_00307674();
        (**(code **)(**ppiVar3 + 0x10))(*ppiVar3,uVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((param_1[0x10] == 3) && ((int *)param_1[0xf] != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004c92f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0xf] + 4))();
    return;
  }
  return;
}

