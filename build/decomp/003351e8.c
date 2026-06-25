// OoT3D decomp @ 003351e8  name=FUN_003351e8  size=128

void FUN_003351e8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  do {
    if (0 < *param_1) {
      do {
        if (*param_1 < 1) {
          ClearExclusiveLocal();
          bVar1 = false;
          goto LAB_00335228;
        }
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -*param_1;
      bVar1 = true;
LAB_00335228:
      if (bVar1) {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        param_1[1] = iVar2;
        return;
      }
    }
    software_interrupt(0x22);
  } while( true );
}

