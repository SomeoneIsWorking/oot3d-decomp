// OoT3D decomp @ 0044b204  name=FUN_0044b204  size=60

int FUN_0044b204(undefined4 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_0044b240;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(undefined1 *)(iVar3 + 0x88) = param_2;
  iVar2 = *DAT_0044b244;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
