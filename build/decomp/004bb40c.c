// OoT3D decomp @ 004bb40c  name=FUN_004bb40c  size=52

int FUN_004bb40c(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_004bb440;
  *(undefined2 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_004bb444;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

