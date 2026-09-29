// OoT3D decomp @ 002eeec4  name=FUN_002eeec4  size=44

undefined4 FUN_002eeec4(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  iVar1 = FUN_002e63c8(DAT_002eeef0);
  if (iVar1 != 0) {
    iVar2 = 3;
  }
  return *(undefined4 *)(DAT_002eeef4 + (param_1 + iVar2) * 4);
}
