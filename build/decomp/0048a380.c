// OoT3D decomp @ 0048a380  name=FUN_0048a380  size=116

int FUN_0048a380(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_0048a3f4;
  *(undefined4 *)(iVar3 + 0x84) = param_1;
  *(int *)(iVar3 + 0x88) = param_3;
  *(int *)(iVar3 + 0x8c) = param_5;
  *(uint *)(iVar3 + 0x90) = param_3 << 0xe | 0x402;
  *(undefined4 *)(iVar3 + 0x94) = param_2;
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(uint *)(iVar1 + 0x180);
  uVar5 = *(undefined4 *)(iVar1 + 0x184);
  *(uint *)(iVar1 + 0x180) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar1 + 0x184) = param_4;
  iVar2 = *DAT_0048a3f8;
  software_interrupt(0x32);
  *(uint *)(iVar1 + 0x180) = uVar4;
  *(undefined4 *)(iVar1 + 0x184) = uVar5;
  if (-1 < iVar2) {
    *param_6 = *(undefined4 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
