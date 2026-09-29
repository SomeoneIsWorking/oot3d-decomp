// OoT3D decomp @ 0044a528  name=FUN_0044a528  size=68

int FUN_0044a528(undefined4 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar1 + 0x80) = &DAT_00160000;
  iVar2 = *DAT_0044a56c;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    FUN_0034338c(param_1,iVar1 + 0x88,0x12);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}
