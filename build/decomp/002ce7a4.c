// OoT3D decomp @ 002ce7a4  name=FUN_002ce7a4  size=108

int FUN_002ce7a4(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_002ce810;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_002ce814;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_2 = *(undefined1 *)(iVar1 + 0x88);
    *param_3 = *(undefined4 *)(iVar1 + 0x8c);
    *param_4 = *(undefined4 *)(iVar1 + 0x90);
    *param_5 = *(undefined4 *)(iVar1 + 0x94);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
