// OoT3D decomp @ 00435dc8  name=FUN_00435dc8  size=48

int FUN_00435dc8(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00435df8;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
