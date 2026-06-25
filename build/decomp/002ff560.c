// OoT3D decomp @ 002ff560  name=FUN_002ff560  size=116

void FUN_002ff560(int param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar2 != piVar4[1]) {
    bVar3 = false;
    do {
      if (*piVar4 < 1) {
        ClearExclusiveLocal();
        goto LAB_002ff5a4;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = -*piVar4;
    bVar3 = true;
LAB_002ff5a4:
    if (bVar3) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar4[1] = iVar2;
    }
    else {
      FUN_003351e8(piVar4);
    }
  }
  piVar4[2] = piVar4[2] + 1;
  return;
}

