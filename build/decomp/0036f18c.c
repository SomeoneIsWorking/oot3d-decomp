// OoT3D decomp @ 0036f18c  name=FUN_0036f18c  size=40

bool FUN_0036f18c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1 < param_2;
}
