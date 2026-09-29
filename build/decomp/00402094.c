// OoT3D decomp @ 00402094  name=FUN_00402094  size=88

int FUN_00402094(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x84) = param_2;
  *(int *)(iVar3 + 0x88) = param_5;
  *(uint *)(iVar3 + 0x8c) = param_5 << 0xe | 2;
  uVar1 = DAT_004020ec;
  *(undefined4 *)(iVar3 + 0x90) = param_3;
  *(uint *)(iVar3 + 0x94) = param_5 << 0xe | 0x402;
  *(undefined4 *)(iVar3 + 0x98) = param_4;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
