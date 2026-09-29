// OoT3D decomp @ 00423578  name=FUN_00423578  size=60

int FUN_00423578(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0xb0000;
  iVar2 = *DAT_004235b4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar1 + 0x88);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
