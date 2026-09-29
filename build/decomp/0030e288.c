// OoT3D decomp @ 0030e288  name=FUN_0030e288  size=132

void FUN_0030e288(int *param_1)

{
  bool bVar1;
  int iVar2;

  do {
    if (0 < *param_1) {
      do {
        if (*param_1 < 1) {
          ClearExclusiveLocal();
          bVar1 = false;
          goto LAB_0030e2c8;
        }
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -*param_1;
      bVar1 = true;
LAB_0030e2c8:
      coproc_moveto_Data_Synchronization(0);
      if (bVar1) {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        param_1[1] = iVar2;
        return;
      }
    }
    software_interrupt(0x22);
  } while( true );
}
