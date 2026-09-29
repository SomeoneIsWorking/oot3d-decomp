// OoT3D decomp @ 00401f1c  name=FUN_00401f1c  size=224

int FUN_00401f1c(int param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;

  piVar2 = DAT_00401ffc;
  iVar3 = 0;
  if (param_2 < 7) {
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    bVar6 = true;
    if (iVar3 != DAT_00401ffc[1]) {
      do {
        if (*DAT_00401ffc < 1) {
          ClearExclusiveLocal();
          bVar6 = false;
          goto LAB_00401f7c;
        }
        bVar1 = (bool)hasExclusiveAccess(DAT_00401ffc);
      } while (!bVar1);
      *DAT_00401ffc = -*DAT_00401ffc;
LAB_00401f7c:
      if (bVar6) {
        iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
        piVar2[1] = iVar3;
      }
      else {
        FUN_003351e8(DAT_00401ffc);
      }
    }
    piVar2[2] = piVar2[2] + 1;
    iVar3 = piVar2[param_2 + 4];
    piVar2[param_2 + 4] = param_1;
    iVar4 = piVar2[2];
    piVar2[2] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      piVar2[1] = 0;
      do {
        iVar5 = *piVar2;
        iVar4 = -iVar5;
        bVar6 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar6);
      *piVar2 = iVar4;
      if (iVar5 != -1 && 0 < iVar4) {
        software_interrupt(0x22);
      }
    }
  }
  return iVar3;
}
