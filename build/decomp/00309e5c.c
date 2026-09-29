// OoT3D decomp @ 00309e5c  name=FUN_00309e5c  size=28

int FUN_00309e5c(int *param_1)

{
  int *piVar1;

  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *param_1 = *piVar1;
  }
  return (int)piVar1;
}
