// OoT3D decomp @ 004020f0  name=FUN_004020f0  size=80

int FUN_004020f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_00402140;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x8c) = param_2;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_5 = *(undefined4 *)(iVar3 + 0x88);
    *param_4 = *(undefined4 *)(iVar3 + 0x90);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
