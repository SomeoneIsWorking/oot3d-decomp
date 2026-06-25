// OoT3D decomp @ 004bb1cc  name=FUN_004bb1cc  size=80

int FUN_004bb1cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                undefined2 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_004bb21c;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_2;
  *(undefined4 *)(iVar4 + 0x88) = param_3;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  *(undefined2 *)(iVar4 + 0x8c) = param_4;
  *(undefined2 *)(iVar4 + 0x90) = param_5;
  *(undefined4 *)(iVar4 + 0x98) = param_1;
  piVar2 = DAT_004bb220;
  *(undefined4 *)(iVar4 + 0x94) = 0;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}

