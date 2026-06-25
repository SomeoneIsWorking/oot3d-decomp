// OoT3D decomp @ 0030af40  name=FUN_0030af40  size=128

int ** FUN_0030af40(int **param_1,int *param_2)

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
        goto LAB_0030af8c;
      }
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = -*param_2;
    bVar3 = true;
LAB_0030af8c:
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

