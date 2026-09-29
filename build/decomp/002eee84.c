// OoT3D decomp @ 002eee84  name=FUN_002eee84  size=52

int FUN_002eee84(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  iVar1 = FUN_002e63c8(DAT_002eeeb8);
  if (iVar1 != 0) {
    iVar2 = 3;
  }
  return DAT_002eeec0 + (param_1 + iVar2) * DAT_002eeebc * 4;
}
