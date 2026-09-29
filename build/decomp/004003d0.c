// OoT3D decomp @ 004003d0  name=FUN_004003d0  size=40

int FUN_004003d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_004003f8;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
