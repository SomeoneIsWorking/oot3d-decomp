// OoT3D decomp @ 00400318  name=FUN_00400318  size=120

int FUN_00400318(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00400390;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(int *)(iVar2 + 0x8c) = param_6;
  *(char *)(iVar2 + 0x90) = (char)param_7;
  *(char *)(iVar2 + 0x91) = (char)((uint)param_7 >> 8);
  *(char *)(iVar2 + 0x92) = (char)((uint)param_7 >> 0x10);
  *(char *)(iVar2 + 0x93) = (char)((uint)param_7 >> 0x18);
  *(uint *)(iVar2 + 0x94) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
