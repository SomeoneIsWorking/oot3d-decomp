// OoT3D decomp @ 00465ee8  name=FUN_00465ee8  size=60

int FUN_00465ee8(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_00465f24;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_3 = *(undefined4 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
