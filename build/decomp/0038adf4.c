// OoT3D decomp @ 0038adf4  name=FUN_0038adf4  size=244

void FUN_0038adf4(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;

  if (0 < *(int *)(param_1 + 0x1c0)) {
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + -1;
  }
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  psVar1 = DAT_0038aef4;
  if ((((uint)(*(int *)(*(int *)(DAT_0038aee8 + param_2) + 0x30) + DAT_0038aeec) < DAT_0038aef0) &&
      (iVar2 = *(int *)(*(int *)(DAT_0038aee8 + param_2) + 0x28), DAT_0038aef8 < iVar2)) &&
     (iVar2 < DAT_0038aefc)) {
    if (*DAT_0038aef4 == 0) {
      iVar2 = *(int *)(param_2 + 0xa54);
      *DAT_0038aef4 = *(short *)(DAT_0038af00 + iVar2);
      FUN_003353a4(iVar2,1,param_1,0,0,0,0);
      FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x27);
      return;
    }
  }
  else if (*DAT_0038aef4 != 0) {
    FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),4);
    *psVar1 = 0;
  }
  return;
}
