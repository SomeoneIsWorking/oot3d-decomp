// OoT3D decomp @ 00400eec  name=FUN_00400eec  size=44

int FUN_00400eec(void)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x90000;
  iVar2 = *DAT_00400f18;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
