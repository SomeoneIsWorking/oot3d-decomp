// OoT3D decomp @ 00304270  name=FUN_00304270  size=40

int FUN_00304270(int param_1,int param_2)

{
  int iVar1;

  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0xc4;
  }
  else if (param_2 < 0x20) {
    iVar1 = DAT_00304298 + param_2 * 2 + -0x20;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
