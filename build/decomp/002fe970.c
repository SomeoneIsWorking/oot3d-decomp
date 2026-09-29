// OoT3D decomp @ 002fe970  name=FUN_002fe970  size=180

int FUN_002fe970(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_002fea24;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(int *)(iVar2 + 0x90) = param_7;
  *(undefined4 *)(iVar2 + 0x94) = param_8;
  *(int *)(iVar2 + 0x98) = param_10;
  *(undefined4 *)(iVar2 + 0x9c) = param_11;
  *(char *)(iVar2 + 0xa0) = (char)param_12;
  *(char *)(iVar2 + 0xa1) = (char)((uint)param_12 >> 8);
  *(char *)(iVar2 + 0xa2) = (char)((uint)param_12 >> 0x10);
  *(char *)(iVar2 + 0xa3) = (char)((uint)param_12 >> 0x18);
  *(uint *)(iVar2 + 0xa4) = param_7 << 0xe | 0x802;
  *(undefined4 *)(iVar2 + 0xa8) = param_6;
  *(uint *)(iVar2 + 0xac) = param_10 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0xb0) = param_9;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}
