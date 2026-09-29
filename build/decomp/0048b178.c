// OoT3D decomp @ 0048b178  name=FUN_0048b178  size=112

undefined4 FUN_0048b178(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_00313b60();
    iVar1 = FUN_002c2d88();
    if (iVar1 != 0) {
      uVar2 = FUN_00313b60();
      FUN_00493404(uVar2,0x1000000);
      FUN_00343280(param_1 + 0x1440,0x800);
      iVar1 = DAT_0048b1ec;
      *(undefined4 *)(param_1 + 0x1c40) = DAT_0048b1e8;
      *(undefined4 *)(iVar1 + param_1) = 0;
      *(undefined1 *)(param_1 + 0xd) = 1;
      return 1;
    }
  }
  return 0;
}
