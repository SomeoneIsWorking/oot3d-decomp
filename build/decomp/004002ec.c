// OoT3D decomp @ 004002ec  name=FUN_004002ec  size=40

int FUN_004002ec(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00400314;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
