// OoT3D decomp @ 00311f10  name=FUN_00311f10  size=60

void FUN_00311f10(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(DAT_00311f4c + 0x9c);
  if (iVar1 != 0) {
    if (param_1 == 0x200) {
      *(int *)(iVar1 + 0x2c) = param_2;
      return;
    }
    if (param_1 == 0x20f) {
      *(bool *)(iVar1 + 0x35) = param_2 != 0;
    }
  }
  return;
}
