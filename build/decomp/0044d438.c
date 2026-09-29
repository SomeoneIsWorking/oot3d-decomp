// OoT3D decomp @ 0044d438  name=FUN_0044d438  size=268

int FUN_0044d438(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uStack_10;

  if (*(char *)(param_1 + 0x89) == '\0') {
    return 0;
  }
  uStack_10 = param_4;
  iVar3 = FUN_0030c7cc();
  piVar7 = (int *)(iVar3 + 0x1b8);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar4 != *(int *)(iVar3 + 0x1bc)) {
    bVar8 = true;
    do {
      if (*piVar7 < 1) {
        ClearExclusiveLocal();
        bVar8 = false;
        goto LAB_0044d4a8;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = -*piVar7;
LAB_0044d4a8:
    coproc_moveto_Data_Synchronization(0);
    if (bVar8) {
      uVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar3 + 0x1bc) = uVar5;
    }
    else {
      FUN_0030e288(piVar7);
    }
  }
  *(int *)(iVar3 + 0x1c0) = *(int *)(iVar3 + 0x1c0) + 1;
  bVar8 = *(char *)(param_1 + 0xfc) != '\0';
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(DAT_0044d544 + param_1 + 0xf4);
  }
  if (bVar8 && cVar1 != '\0') {
    if (*(char *)(param_1 + 0x175) != '\0') {
      iVar3 = 0;
      if (*(int *)(param_1 + 0xf40) != 0) {
        iVar3 = FUN_00456e70();
      }
      iVar6 = *(int *)(param_1 + 0x154);
      iVar4 = *(int *)(param_1 + 0x1ac);
      FUN_002df528(&uStack_10);
      return iVar4 * iVar6 + iVar3;
    }
    FUN_002df528(&uStack_10);
    return 0;
  }
  FUN_002df528(&uStack_10);
  return -1;
}
