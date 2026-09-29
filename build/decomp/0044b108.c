// OoT3D decomp @ 0044b108  name=FUN_0044b108  size=88

int FUN_0044b108(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_0044b160;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  piVar1 = DAT_0044b164;
  *(undefined4 *)(iVar2 + 0x90) = param_4;
  iVar3 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    *param_5 = *(undefined1 *)(iVar2 + 0x88);
    iVar3 = *(int *)(iVar2 + 0x84);
  }
  return iVar3;
}
