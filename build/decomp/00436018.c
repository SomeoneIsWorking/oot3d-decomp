// OoT3D decomp @ 00436018  name=FUN_00436018  size=80

undefined4 FUN_00436018(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if (*(int *)(DAT_00436068 + iVar2 * 4) == 0) {
      *(undefined4 *)(DAT_00436068 + iVar2 * 4) = param_1;
      iVar1 = DAT_0043606c;
      *(undefined4 *)(DAT_0043606c + iVar2 * 4) = param_2;
      *(undefined4 *)(iVar1 + 0x20 + iVar2 * 4) = param_3;
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return 0;
}
