// OoT3D decomp @ 002fa25c  name=FUN_002fa25c  size=84

int FUN_002fa25c(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  piVar1 = *(int **)(DAT_002fa278 + 8);
  if (piVar1 == (int *)0x0) {
    return DAT_002fa27c;
  }
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x1f0000;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined1 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
