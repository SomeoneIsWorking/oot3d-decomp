// OoT3D decomp @ 00493528  name=FUN_00493528  size=104

int FUN_00493528(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  uVar1 = DAT_004975f0;
  piVar3 = *(int **)(DAT_00493560 + 8);
  if (piVar3 != (int *)0x0) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + 0x90) = *DAT_00493564;
    *(undefined4 *)(iVar4 + 0x84) = param_1;
    *(undefined4 *)(iVar4 + 0x88) = param_2;
    *(undefined4 *)(iVar4 + 0x8c) = 0;
    *(undefined4 *)(iVar4 + 0x80) = uVar1;
    iVar2 = *piVar3;
    software_interrupt(0x32);
    if (-1 < iVar2) {
      iVar2 = *(int *)(iVar4 + 0x84);
    }
    return iVar2;
  }
  return DAT_0049355c;
}
