// OoT3D decomp @ 0048a448  name=FUN_0048a448  size=52

int FUN_0048a448(undefined1 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_0048a47c;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_0048a480;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
