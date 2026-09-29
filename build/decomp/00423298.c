// OoT3D decomp @ 00423298  name=FUN_00423298  size=44

int FUN_00423298(void)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar1 + 0x80) = &DAT_00130000;
  iVar2 = *DAT_004232c4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
