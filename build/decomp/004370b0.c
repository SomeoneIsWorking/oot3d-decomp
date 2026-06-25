// OoT3D decomp @ 004370b0  name=FUN_004370b0  size=44

int FUN_004370b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x110000;
  iVar2 = *DAT_004370dc;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

