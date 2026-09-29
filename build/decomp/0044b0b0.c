// OoT3D decomp @ 0044b0b0  name=FUN_0044b0b0  size=80

int FUN_0044b0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  *(undefined4 *)(iVar4 + 0x88) = param_2;
  *(undefined4 *)(iVar4 + 0x8c) = param_3;
  *(int *)(iVar4 + 0x90) = param_5;
  *(undefined4 *)(iVar4 + 0x94) = 0;
  *(uint *)(iVar4 + 0x9c) = param_5 << 0xe | 2;
  piVar2 = DAT_0044b104;
  uVar1 = DAT_0044b100;
  *(undefined4 *)(iVar4 + 0xa0) = param_4;
  *(undefined4 *)(iVar4 + 0x98) = param_6;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}
