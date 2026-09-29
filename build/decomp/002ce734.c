// OoT3D decomp @ 002ce734  name=FUN_002ce734  size=76

int FUN_002ce734(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar1 = FUN_002c48f8();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0030dd98();
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined **)(iVar3 + 0x80) = &DAT_00190000;
    iVar1 = *piVar2;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      iVar1 = *(int *)(iVar3 + 0x84);
    }
    return iVar1;
  }
  return DAT_002ce758;
}
