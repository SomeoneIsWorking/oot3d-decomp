// OoT3D decomp @ 0047de3c  name=FUN_0047de3c  size=60

int FUN_0047de3c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x2a0000;
  iVar2 = *DAT_0047de78;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined1 *)(iVar1 + 0x88);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
