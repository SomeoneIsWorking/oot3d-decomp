// OoT3D decomp @ 00465dec  name=FUN_00465dec  size=68

int FUN_00465dec(int *param_1,undefined2 param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00465e30;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_3 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
