// OoT3D decomp @ 004541dc  name=FUN_004541dc  size=576

int FUN_004541dc(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int *local_10;

  local_10 = param_4;
  FUN_002dbd08(&local_10,param_1 + 0x1b8);
  uVar4 = extraout_r1;
  piVar6 = *(int **)(param_1 + 0x1c8);
  if (*(int **)(param_1 + 0x1c8) != (int *)(param_1 + 0x1c8)) {
    do {
      piVar5 = (int *)*piVar6;
      (**(code **)(piVar6[-1] + 8))();
      uVar4 = extraout_r1_00;
      piVar6 = piVar5;
    } while (piVar5 != (int *)(param_1 + 0x1c8));
  }
  piVar6 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar5 = (int *)*piVar6;
      (**(code **)(piVar6[-1] + 0xc))();
      uVar4 = extraout_r1_01;
      piVar6 = piVar5;
    } while (piVar5 != (int *)(param_1 + 0x1d4));
  }
  if ((*DAT_0045441c & 1) == 0) {
    uVar7 = FUN_003679b4(DAT_0045441c);
    uVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_0030c5b8(DAT_00454420);
      uVar4 = DAT_00454428;
    }
  }
  FUN_00466a1c(DAT_00454420,uVar4);
  FUN_0030c550();
  FUN_002dbcbc();
  FUN_0030c4f4();
  FUN_002dbcbc();
  piVar6 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar5 = (int *)*piVar6;
      (**(code **)(piVar6[-1] + 8))();
      piVar6 = piVar5;
    } while (piVar5 != (int *)(param_1 + 0x1d4));
  }
  FUN_0030c758();
  FUN_004669cc();
  FUN_00304200();
  FUN_0030c6e0();
  FUN_004668f8();
  piVar6 = *(int **)(param_1 + 0x1c8);
  if (*(int **)(param_1 + 0x1c8) != (int *)(param_1 + 0x1c8)) {
    do {
      piVar5 = (int *)*piVar6;
      (**(code **)(piVar6[-1] + 0xc))();
      piVar6 = piVar5;
    } while (piVar5 != (int *)(param_1 + 0x1c8));
  }
  iVar2 = local_10[2] + -1;
  local_10[2] = iVar2;
  if (iVar2 == 0) {
    local_10[1] = 0;
    do {
      iVar3 = *local_10;
      iVar2 = -iVar3;
      bVar1 = (bool)hasExclusiveAccess(local_10);
    } while (!bVar1);
    *local_10 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar3 != -1 && 0 < iVar2) {
      iVar2 = *DAT_0045442c;
      software_interrupt(0x22);
    }
  }
  return iVar2;
}
