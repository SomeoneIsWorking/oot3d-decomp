// OoT3D decomp @ 0040fd08  name=FUN_0040fd08  size=32

int FUN_0040fd08(int *param_1)

{
  int iVar1;

  iVar1 = *(int *)(*param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  return iVar1 * 0xc;
}
