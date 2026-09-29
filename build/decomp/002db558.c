// OoT3D decomp @ 002db558  name=FUN_002db558  size=128

undefined4 FUN_002db558(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;

  piVar5 = (int *)(param_1 + 0x90);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != *(int *)(param_1 + 0x94)) {
    bVar2 = true;
    do {
      if (*piVar5 < 1) {
        ClearExclusiveLocal();
        bVar2 = false;
        goto LAB_002db5a4;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = -*piVar5;
LAB_002db5a4:
    if (!bVar2) {
      return 0;
    }
    uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 0x94) = uVar4;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  return 1;
}
