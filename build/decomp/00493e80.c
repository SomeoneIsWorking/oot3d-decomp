// OoT3D decomp @ 00493e80  name=FUN_00493e80  size=148

int FUN_00493e80(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                int param_5,undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  uVar5 = DAT_00493f14;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar4 + 0x88) = param_5;
  *(undefined4 *)(iVar4 + 0x84) = param_2;
  *(undefined4 *)(iVar4 + 0x80) = uVar5;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar5 = *(undefined4 *)(iVar3 + 0x180);
  uVar6 = *(undefined4 *)(iVar3 + 0x184);
  *(uint *)(iVar3 + 0x180) = param_5 << 0xe | 2;
  piVar1 = DAT_00493f18;
  *(undefined4 *)(iVar3 + 0x184) = param_4;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  *(undefined4 *)(iVar3 + 0x180) = uVar5;
  *(undefined4 *)(iVar3 + 0x184) = uVar6;
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar4 + 0x88);
    *param_3 = *(undefined4 *)(iVar4 + 0x8c);
    *param_6 = *(undefined4 *)(iVar4 + 0x90);
    *param_7 = *(undefined4 *)(iVar4 + 0x98);
    iVar2 = *(int *)(iVar4 + 0x84);
  }
  return iVar2;
}
