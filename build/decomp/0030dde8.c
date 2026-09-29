// OoT3D decomp @ 0030dde8  name=FUN_0030dde8  size=132

int FUN_0030dde8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (*DAT_0030de18 < 1) {
    return DAT_0030de1c;
  }
  if (param_3 < 9) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = DAT_00437380;
    FUN_0034338c(iVar2 + 0x84,param_2,8);
    piVar1 = DAT_00437384;
    *(undefined4 *)(iVar2 + 0x90) = param_4;
    *(int *)(iVar2 + 0x8c) = param_3;
    iVar3 = *piVar1;
    software_interrupt(0x32);
    if (-1 < iVar3) {
      *param_1 = *(undefined4 *)(iVar2 + 0x8c);
      iVar3 = *(int *)(iVar2 + 0x84);
    }
    return iVar3;
  }
  return DAT_0030de20;
}
