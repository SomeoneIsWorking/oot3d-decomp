// OoT3D decomp @ 002dbd08  name=FUN_002dbd08  size=132

undefined4 * FUN_002dbd08(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;

  *param_1 = param_2;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar3 != param_2[1]) {
    bVar2 = true;
    do {
      if (*param_2 < 1) {
        ClearExclusiveLocal();
        bVar2 = false;
        goto LAB_002dbd5c;
      }
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = -*param_2;
LAB_002dbd5c:
    coproc_moveto_Data_Synchronization(0);
    if (bVar2) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_2[1] = iVar3;
    }
    else {
      FUN_0030e288(param_2);
    }
  }
  param_2[2] = param_2[2] + 1;
  return param_1;
}
