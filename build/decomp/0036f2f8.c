// OoT3D decomp @ 0036f2f8  name=FUN_0036f2f8  size=52

bool FUN_0036f2f8(int param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = (int)(short)((*(short *)(param_1 + 0x92) + -0x8000) -
                      *(short *)(*(int *)(param_3 + 0x20ac) + 0xbe));
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1 < param_2;
}
