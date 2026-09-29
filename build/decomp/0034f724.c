// OoT3D decomp @ 0034f724  name=FUN_0034f724  size=52

void FUN_0034f724(int param_1)

{
  int iVar1;

  FUN_00352318(DAT_0034f758);
  iVar1 = *(int *)(DAT_0034f75c + param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x29b8) = *(uint *)(iVar1 + 0x29b8) | 0x200;
  }
  return;
}
