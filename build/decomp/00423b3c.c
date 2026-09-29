// OoT3D decomp @ 00423b3c  name=FUN_00423b3c  size=48

int FUN_00423b3c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_00423b6c;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  *(undefined4 *)(iVar4 + 0x88) = param_2;
  piVar2 = DAT_00423b70;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
