// OoT3D decomp @ 004bb27c  name=FUN_004bb27c  size=52

int FUN_004bb27c(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_004bb2b0;
  *(undefined2 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_004bb2b4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

