// OoT3D decomp @ 004a07bc  name=FUN_004a07bc  size=56

int FUN_004a07bc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0xf0000;
  iVar2 = *DAT_004a07f4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar1 + 0x8c);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
