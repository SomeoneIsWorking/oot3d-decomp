// OoT3D decomp @ 00418654  name=FUN_00418654  size=64

void FUN_00418654(undefined4 *param_1)

{
  int iVar1;
  int iVar2;

  *param_1 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 * 3 + 1] = 0;
    *(undefined1 *)(param_1 + iVar1 * 3 + 2) = 2;
    *(undefined1 *)((int)param_1 + iVar1 * 0xc + 9) = 0xff;
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  return;
}
