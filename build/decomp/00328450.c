// OoT3D decomp @ 00328450  name=FUN_00328450  size=84

undefined4 FUN_00328450(int param_1)

{
  int iVar1;

  if (param_1 == 0x20000) {
    iVar1 = FUN_0030dd88();
    if (iVar1 != 0) {
      return 0x180000;
    }
  }
  else {
    if (param_1 != 0x30000) {
      return 0;
    }
    iVar1 = FUN_0030dd88();
    if (iVar1 != 0) {
      return 0x280000;
    }
  }
  return 0x300000;
}
