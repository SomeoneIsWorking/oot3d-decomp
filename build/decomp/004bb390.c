// OoT3D decomp @ 004bb390  name=FUN_004bb390  size=60

int FUN_004bb390(undefined *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x280000;
  iVar2 = *DAT_004bb3cc;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined *)(iVar1 + 0x88);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

