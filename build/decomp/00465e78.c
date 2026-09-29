// OoT3D decomp @ 00465e78  name=FUN_00465e78  size=108

int FUN_00465e78(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                ushort param_5,undefined2 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  uVar3 = DAT_00465ee4;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x84) = param_2;
  *(undefined4 *)(iVar5 + 0x88) = param_3;
  *(undefined4 *)(iVar5 + 0x80) = uVar3;
  *(ushort *)(iVar5 + 0x8c) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(iVar2 + 0x180);
  uVar4 = *(undefined4 *)(iVar2 + 0x184);
  *(uint *)(iVar2 + 0x180) = (uint)param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_4;
  iVar1 = *param_1;
  software_interrupt(0x32);
  *(undefined4 *)(iVar2 + 0x180) = uVar3;
  *(undefined4 *)(iVar2 + 0x184) = uVar4;
  if (-1 < iVar1) {
    *param_6 = *(undefined2 *)(iVar5 + 0x88);
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}
