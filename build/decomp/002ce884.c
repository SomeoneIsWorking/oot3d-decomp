// OoT3D decomp @ 002ce884  name=FUN_002ce884  size=328

int FUN_002ce884(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;

  pcVar2 = DAT_002ce89c;
  if (*param_1 == '\0') {
    return 0;
  }
  iVar3 = 0;
  if (*DAT_002ce89c != '\0') {
    piVar7 = (int *)(DAT_002ce89c + 0x30);
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    bVar6 = true;
    if (iVar3 != *(int *)(DAT_002ce89c + 0x34)) {
      do {
        if (*piVar7 < 1) {
          ClearExclusiveLocal();
          bVar6 = false;
          goto LAB_004979d4;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = -*piVar7;
LAB_004979d4:
      coproc_moveto_Data_Synchronization(0);
      if (bVar6) {
        uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(pcVar2 + 0x34) = uVar4;
      }
      else {
        FUN_0030e288(piVar7);
      }
    }
    *(int *)(pcVar2 + 0x38) = *(int *)(pcVar2 + 0x38) + 1;
    if (*(int *)(pcVar2 + param_2 * 4 + 0x10) != 0) {
      local_28 = param_3 + 0x280;
      local_24 = param_3 + 0x500;
      local_20 = param_3 + 0x780;
      local_2c = param_3;
      (**(code **)(pcVar2 + param_2 * 4 + 0x10))
                (&local_2c,0xa0,*(undefined4 *)(pcVar2 + param_2 * 4 + 0x18));
    }
    iVar3 = *(int *)(pcVar2 + 0x38) + -1;
    *(int *)(pcVar2 + 0x38) = iVar3;
    if (iVar3 == 0) {
      pcVar2[0x34] = '\0';
      pcVar2[0x35] = '\0';
      pcVar2[0x36] = '\0';
      pcVar2[0x37] = '\0';
      do {
        iVar5 = *piVar7;
        iVar3 = -iVar5;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar5 != -1 && 0 < iVar3) {
        software_interrupt(0x22);
        return *DAT_00497a9c;
      }
    }
  }
  return iVar3;
}
