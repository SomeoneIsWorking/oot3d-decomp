// OoT3D decomp @ 0041c340  name=FUN_0041c340  size=84

int FUN_0041c340(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_0041c394;
  *(undefined4 *)(iVar1 + 0x84) = param_2;
  iVar2 = *DAT_0041c398;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_3 = *(undefined4 *)(iVar1 + 0x88);
    *param_4 = *(undefined4 *)(iVar1 + 0x8c);
    *param_1 = *(undefined4 *)(iVar1 + 0x94);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
