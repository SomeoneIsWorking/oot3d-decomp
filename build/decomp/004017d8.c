// OoT3D decomp @ 004017d8  name=FUN_004017d8  size=108

int FUN_004017d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  piVar2 = (int *)FUN_0030dd98();
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  *(int *)(iVar4 + 0x88) = param_3;
  uVar1 = DAT_00402058;
  *(uint *)(iVar4 + 0x8c) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar4 + 0x90) = param_2;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
