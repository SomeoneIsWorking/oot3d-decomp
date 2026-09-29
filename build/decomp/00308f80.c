// OoT3D decomp @ 00308f80  name=FUN_00308f80  size=20

int FUN_00308f80(int param_1,int param_2)

{
  int iVar1;

  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0xa0;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
