// OoT3D decomp @ 00423b74  name=FUN_00423b74  size=64

int FUN_00423b74(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_00423bb4;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  piVar2 = DAT_00423bb8;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    *param_2 = *(undefined1 *)(iVar4 + 0x88);
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
