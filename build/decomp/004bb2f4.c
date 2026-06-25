// OoT3D decomp @ 004bb2f4  name=FUN_004bb2f4  size=44

int FUN_004bb2f4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x270000;
  iVar2 = *DAT_004bb320;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

