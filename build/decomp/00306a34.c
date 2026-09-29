// OoT3D decomp @ 00306a34  name=FUN_00306a34  size=116

void FUN_00306a34(int *param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar2 != param_1[1]) {
    bVar3 = false;
    do {
      if (*param_1 < 1) {
        ClearExclusiveLocal();
        goto LAB_00306a78;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -*param_1;
    bVar3 = true;
LAB_00306a78:
    if (bVar3) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[1] = iVar2;
    }
    else {
      FUN_003351e8(param_1);
    }
  }
  param_1[2] = param_1[2] + 1;
  return;
}
