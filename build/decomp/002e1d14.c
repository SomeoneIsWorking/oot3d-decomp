// OoT3D decomp @ 002e1d14  name=FUN_002e1d14  size=124

int FUN_002e1d14(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  uVar1 = DAT_00465e74;
  piVar3 = *(int **)(DAT_002e1d54 + 8);
  if (piVar3 != (int *)0x0) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + 0x84) = param_1;
    *(int *)(iVar4 + 0x88) = param_3;
    *(uint *)(iVar4 + 0x8c) = param_3 << 0xe | 0x402;
    *(undefined4 *)(iVar4 + 0x90) = param_2;
    *(undefined4 *)(iVar4 + 0x80) = uVar1;
    iVar2 = *piVar3;
    software_interrupt(0x32);
    if (-1 < iVar2) {
      iVar2 = *(int *)(iVar4 + 0x84);
    }
    return iVar2;
  }
  return DAT_002e1d50;
}
