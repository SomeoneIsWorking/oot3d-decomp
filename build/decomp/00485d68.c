// OoT3D decomp @ 00485d68  name=FUN_00485d68  size=84

void FUN_00485d68(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 4) = param_2;
    do {
      if (iVar2 == 0) {
        uVar1 = 0x7fffffff;
      }
      else {
        uVar1 = 1;
      }
      FUN_0048a8ec(param_1 + iVar2 * 0x10 + 8,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  return;
}
