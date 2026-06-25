// OoT3D decomp @ 0036963c  name=FUN_0036963c  size=52

void FUN_0036963c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_00369670 + param_1);
  }
  param_1 = param_1 + param_2 * 4;
  iVar1 = *(int *)(param_1 + 0xa54);
  if (iVar1 != 0) {
    FUN_00320da0(iVar1,0x100);
    *(undefined4 *)(param_1 + 0xa54) = 0;
  }
  return;
}

