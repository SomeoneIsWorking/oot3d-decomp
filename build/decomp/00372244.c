// OoT3D decomp @ 00372244  name=FUN_00372244  size=84

undefined4 FUN_00372244(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1 + 0x3c) == '\0') {
      *(undefined1 *)(param_1 + iVar1 + 0x3c) = 1;
      *(undefined2 *)(param_1 + iVar1 * 2 + 0x28) = param_2;
      *(undefined4 *)(param_1 + iVar1 * 4) = param_3;
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  return 0;
}
