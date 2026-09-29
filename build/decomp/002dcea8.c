// OoT3D decomp @ 002dcea8  name=FUN_002dcea8  size=52

int FUN_002dcea8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_002dcedc;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x90) = param_2;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  *(undefined4 *)(iVar3 + 0x8c) = 0;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
