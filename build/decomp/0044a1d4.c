// OoT3D decomp @ 0044a1d4  name=FUN_0044a1d4  size=88

int FUN_0044a1d4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(DAT_0044a1fc + 8);
  if (piVar3 == (int *)0x0) {
    return DAT_0044a1f8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00160000;
  iVar1 = *piVar3;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
