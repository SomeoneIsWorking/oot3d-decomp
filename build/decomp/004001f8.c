// OoT3D decomp @ 004001f8  name=FUN_004001f8  size=148

int FUN_004001f8(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                int param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_0040028c;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x84) = param_3;
  *(undefined4 *)(iVar3 + 0x88) = param_5;
  *(undefined4 *)(iVar3 + 0x8c) = param_6;
  *(int *)(iVar3 + 0x94) = param_9;
  *(undefined4 *)(iVar3 + 0x98) = param_10;
  *(undefined4 *)(iVar3 + 0x90) = param_7;
  *(undefined4 *)(iVar3 + 0x80) = uVar1;
  *(char *)(iVar3 + 0x9c) = (char)param_11;
  *(char *)(iVar3 + 0x9d) = (char)((uint)param_11 >> 8);
  *(char *)(iVar3 + 0x9e) = (char)((uint)param_11 >> 0x10);
  *(char *)(iVar3 + 0x9f) = (char)((uint)param_11 >> 0x18);
  *(uint *)(iVar3 + 0xa0) = param_9 << 0xe | 2;
  *(undefined4 *)(iVar3 + 0xa4) = param_8;
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_2 = *(undefined4 *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}
