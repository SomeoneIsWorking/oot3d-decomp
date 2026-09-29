// OoT3D decomp @ 0041bc98  name=FUN_0041bc98  size=52

int FUN_0041bc98(void)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_0041bccc;
  *(undefined4 *)(iVar1 + 0x84) = 0x20;
  iVar2 = *DAT_0041bcd0;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
