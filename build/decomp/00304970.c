// OoT3D decomp @ 00304970  name=FUN_00304970  size=60

void FUN_00304970(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(DAT_003049ac + 0x9c);
  if (iVar1 != 0) {
    if (param_1 != -1) {
      *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_1 * 0x1c + -0x1b) = 1;
      return;
    }
    *(undefined1 *)(iVar1 + 0x34) = 1;
  }
  return;
}
