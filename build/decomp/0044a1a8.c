// OoT3D decomp @ 0044a1a8  name=FUN_0044a1a8  size=88

int FUN_0044a1a8(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(DAT_0044a1d0 + 8);
  if (piVar3 != (int *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = DAT_0045384c;
    *(undefined2 *)(iVar2 + 0x84) = param_1;
    iVar1 = *piVar3;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    return iVar1;
  }
  return DAT_0044a1cc;
}
