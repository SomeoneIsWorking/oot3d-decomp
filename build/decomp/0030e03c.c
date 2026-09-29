// OoT3D decomp @ 0030e03c  name=FUN_0030e03c  size=116

void FUN_0030e03c(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  piVar2 = DAT_0030e0b0;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != DAT_0030e0b0[1]) {
    bVar4 = false;
    do {
      if (*DAT_0030e0b0 < 1) {
        ClearExclusiveLocal();
        goto LAB_0030e080;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_0030e0b0);
    } while (!bVar1);
    *DAT_0030e0b0 = -*DAT_0030e0b0;
    bVar4 = true;
LAB_0030e080:
    if (bVar4) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar3;
    }
    else {
      FUN_003351e8(DAT_0030e0b0);
    }
  }
  piVar2[2] = piVar2[2] + 1;
  return;
}
