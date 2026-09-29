// OoT3D decomp @ 002e5d60  name=FUN_002e5d60  size=212

void FUN_002e5d60(int *param_1)

{
  bool bVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar2 != param_1[1]) {
    do {
      if (*param_1 < 1) {
        ClearExclusiveLocal();
        bVar1 = false;
        goto LAB_002e5da0;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -*param_1;
    bVar1 = true;
LAB_002e5da0:
    if (!bVar1) {
      do {
        if (0 < *param_1) {
          do {
            if (*param_1 < 1) {
              ClearExclusiveLocal();
              bVar1 = false;
              goto LAB_002e5de8;
            }
            bVar1 = (bool)hasExclusiveAccess(param_1);
          } while (!bVar1);
          *param_1 = -*param_1;
          bVar1 = true;
LAB_002e5de8:
          if (bVar1) break;
        }
        software_interrupt(0x22);
      } while( true );
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    param_1[1] = iVar2;
  }
  param_1[2] = param_1[2] + 1;
  return;
}
