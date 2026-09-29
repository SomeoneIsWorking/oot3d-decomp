// OoT3D decomp @ 00435dfc  name=FUN_00435dfc  size=96

int FUN_00435dfc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00435e5c;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(int *)(iVar2 + 0x94) = param_9;
  *(uint *)(iVar2 + 0x98) = param_7 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x9c) = param_6;
  *(uint *)(iVar2 + 0xa0) = param_9 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0xa4) = param_8;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
