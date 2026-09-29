// OoT3D decomp @ 00449fec  name=FUN_00449fec  size=92

int FUN_00449fec(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar3 + 0x8c) = param_6;
  uVar2 = DAT_0044a048;
  *(uint *)(iVar3 + 0x90) = param_6 << 0xe | 2;
  *(undefined4 *)(iVar3 + 0x94) = param_5;
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_4;
  *(undefined4 *)(iVar3 + 0x80) = uVar2;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar3 + 0x8c);
    *param_2 = *(undefined4 *)(iVar3 + 0x88);
    param_2[1] = uVar2;
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}
