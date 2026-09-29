// OoT3D decomp @ 0047de7c  name=FUN_0047de7c  size=44

int FUN_0047de7c(void)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x2c0000;
  iVar2 = *DAT_0047dea8;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
