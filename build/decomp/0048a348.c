// OoT3D decomp @ 0048a348  name=FUN_0048a348  size=48

int FUN_0048a348(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_0048a378;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  piVar2 = DAT_0048a37c;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
