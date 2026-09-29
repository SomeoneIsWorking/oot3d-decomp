// OoT3D decomp @ 0041bb30  name=FUN_0041bb30  size=56

int FUN_0041bb30(undefined1 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_0041bb68;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_0041bb6c;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
