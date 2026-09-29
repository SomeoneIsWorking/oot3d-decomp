// OoT3D decomp @ 002e1ce8  name=FUN_002e1ce8  size=88

int FUN_002e1ce8(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(DAT_002e1d10 + 8);
  if (piVar3 != (int *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = DAT_00465de8;
    *(undefined2 *)(iVar2 + 0x84) = param_1;
    iVar1 = *piVar3;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    return iVar1;
  }
  return DAT_002e1d0c;
}
