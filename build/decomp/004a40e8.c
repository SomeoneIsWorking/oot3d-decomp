// OoT3D decomp @ 004a40e8  name=FUN_004a40e8  size=52

int FUN_004a40e8(undefined1 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_004a411c;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_004a4120;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
