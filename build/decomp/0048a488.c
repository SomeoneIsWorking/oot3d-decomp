// OoT3D decomp @ 0048a488  name=FUN_0048a488  size=44

int FUN_0048a488(void)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined1 **)(iVar1 + 0x80) = &LAB_002b0000;
  iVar2 = *DAT_0048a4b4;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
