// OoT3D decomp @ 00348ff0  name=FUN_00348ff0  size=24

int FUN_00348ff0(int param_1,int param_2,int param_3)

{
  int iVar1;

  if (param_2 == param_3) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c20) + param_2 * 8;
  }
  return iVar1;
}
