// OoT3D decomp @ 0044a570  name=FUN_0044a570  size=60

int FUN_0044a570(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar1 + 0x80) = &DAT_00150000;
  iVar2 = *DAT_0044a5ac;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar1 + 0x88);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
