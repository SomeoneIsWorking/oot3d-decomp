// OoT3D decomp @ 0047d95c  name=FUN_0047d95c  size=60

int FUN_0047d95c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_0047d998;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(undefined4 *)(iVar3 + 0x8c) = param_4;
  *(undefined4 *)(iVar3 + 0x90) = param_5;
  *(undefined4 *)(iVar3 + 0x94) = param_6;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(undefined1 *)(iVar3 + 0x98) = param_7;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
