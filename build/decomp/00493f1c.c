// OoT3D decomp @ 00493f1c  name=FUN_00493f1c  size=68

int FUN_00493f1c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar4 + 0x84) = param_2;
  *(undefined4 *)(iVar4 + 0x8c) = param_1;
  piVar2 = DAT_00493f64;
  uVar1 = DAT_00493f60;
  *(uint *)(iVar4 + 0x88) = param_2 << 0xe | 2;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
