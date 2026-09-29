// OoT3D decomp @ 00485be4  name=FUN_00485be4  size=108

int FUN_00485be4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if (*(char *)(DAT_00485c04 + 0xf) == '\0') {
    return 0;
  }
  *(undefined1 *)(DAT_00485c04 + 0xf) = 0;
  iVar1 = FUN_002c48f8();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0030dd98();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined **)(iVar3 + 0x80) = &DAT_001a0000;
    iVar1 = *piVar2;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar3 + 0x84);
    }
    return iVar1;
  }
  return DAT_00489e80;
}
