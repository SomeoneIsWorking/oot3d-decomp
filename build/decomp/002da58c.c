// OoT3D decomp @ 002da58c  name=FUN_002da58c  size=128

int ** FUN_002da58c(int **param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  *param_1 = param_2;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar2 != param_2[1]) {
    bVar3 = false;
    do {
      if (*param_2 < 1) {
        ClearExclusiveLocal();
        goto LAB_002da5d8;
      }
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = -*param_2;
    bVar3 = true;
LAB_002da5d8:
    if (bVar3) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_2[1] = iVar2;
    }
    else {
      FUN_003351e8(param_2);
    }
  }
  param_2[2] = param_2[2] + 1;
  return param_1;
}

