// OoT3D decomp @ 00303ddc  name=FUN_00303ddc  size=116

void FUN_00303ddc(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;

  piVar5 = (int *)(param_1 + 0x90);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar2 != *(int *)(param_1 + 0x94)) {
    bVar4 = false;
    do {
      if (*piVar5 < 1) {
        ClearExclusiveLocal();
        goto LAB_00303e20;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = -*piVar5;
    bVar4 = true;
LAB_00303e20:
    if (bVar4) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x94) = uVar3;
    }
    else {
      FUN_003351e8(piVar5);
    }
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  return;
}
