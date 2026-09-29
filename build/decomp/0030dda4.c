// OoT3D decomp @ 0030dda4  name=FUN_0030dda4  size=64

int FUN_0030dda4(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0030dde4;
  *(undefined1 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
