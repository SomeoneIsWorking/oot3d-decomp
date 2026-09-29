// OoT3D decomp @ 00401924  name=FUN_00401924  size=88

int FUN_00401924(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = DAT_0040194c;
  if (*DAT_00401948 != '\0') {
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar3 + 0x80) = DAT_00402090;
    *(undefined1 *)(iVar3 + 0x84) = 0;
    iVar2 = *piVar1;
    software_interrupt(0x32);
    if (-1 < iVar2) {
      iVar2 = *(int *)(iVar3 + 0x84);
    }
    return iVar2;
  }
  return 0;
}
