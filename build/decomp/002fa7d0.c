// OoT3D decomp @ 002fa7d0  name=FUN_002fa7d0  size=96

int FUN_002fa7d0(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5,
                undefined1 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_002fa830;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(undefined2 *)(iVar3 + 0x88) = param_4;
  *(undefined2 *)(iVar3 + 0x8c) = param_5;
  *(undefined4 *)(iVar3 + 0x94) = param_2;
  *(uint *)(iVar3 + 0x90) = param_3 << 4 | 10;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_6 = *(undefined1 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
