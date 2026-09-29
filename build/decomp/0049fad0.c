// OoT3D decomp @ 0049fad0  name=FUN_0049fad0  size=556

void FUN_0049fad0(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int extraout_r2;
  int extraout_r2_00;
  uint *puVar7;
  int *piVar8;
  int local_28;

  puVar7 = param_1 + 4;
LAB_0049faf0:
  do {
    do {
      uVar2 = FUN_004a377c(&local_28,param_1 + 0x17,2,0,0xffffffff,0xffffffff);
      uVar6 = uVar2 >> 0x1b;
      if ((uVar2 & 0x80000000) != 0) {
        uVar6 = uVar6 - 0x20;
      }
      if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
        FUN_003351b4();
      }
      if (local_28 != 0) {
        return;
      }
      piVar8 = param_1 + 0x12;
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (iVar3 != param_1[0x13]) {
        do {
          if (*piVar8 < 1) {
            ClearExclusiveLocal();
            bVar1 = false;
            goto LAB_0049fb68;
          }
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = -*piVar8;
        bVar1 = true;
LAB_0049fb68:
        if (bVar1) {
          uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
          param_1[0x13] = uVar4;
        }
        else {
          FUN_003351e8(piVar8);
        }
      }
      param_1[0x14] = param_1[0x14] + 1;
      (**(code **)(*(int *)*param_1 + 4))();
      if (0xffff < 0x80000 - (*puVar7 - param_1[2])) goto LAB_0049fc18;
      (*(code *)**(undefined4 **)*param_1)();
      iVar3 = param_1[0x14];
      piVar8 = param_1 + 0x12;
      param_1[0x14] = iVar3 + -1;
    } while (iVar3 + -1 != 0);
    param_1[0x13] = 0;
    do {
      iVar5 = *piVar8;
      iVar3 = -iVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar3;
  } while (iVar5 == -1 || iVar3 < 1);
  goto LAB_0049fcd8;
LAB_0049fc18:
  uVar6 = param_1[6] - *puVar7;
  if (0x10000 < uVar6) {
    uVar6 = 0x10000;
  }
  FUN_00332754(*puVar7,param_1[5],0x80000,0);
  piVar8 = (int *)param_1[0x10];
  if (0x80000U - extraout_r2 < uVar6) {
    uVar6 = 0x80000U - extraout_r2;
  }
  FUN_00332754(*puVar7,param_1[5],0x80000,0);
  uVar6 = (**(code **)(*piVar8 + 0x2c))(piVar8,extraout_r2_00 + param_1[10],uVar6);
  uVar2 = *puVar7;
  *puVar7 = uVar2 + uVar6;
  param_1[5] = param_1[5] + (uint)CARRY4(uVar2,uVar6);
  (*(code *)**(undefined4 **)*param_1)();
  iVar3 = param_1[0x14];
  piVar8 = param_1 + 0x12;
  param_1[0x14] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    param_1[0x13] = 0;
    do {
      iVar5 = *piVar8;
      iVar3 = -iVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar3;
    if (iVar5 != -1 && 0 < iVar3) {
LAB_0049fcd8:
      software_interrupt(0x22);
    }
  }
  goto LAB_0049faf0;
}
