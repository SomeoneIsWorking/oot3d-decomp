// OoT3D decomp @ 002c48bc  name=FUN_002c48bc  size=52

int FUN_002c48bc(undefined1 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_002c48f0;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_002c48f4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
