// OoT3D decomp @ 0049375c  name=FUN_0049375c  size=92

void FUN_0049375c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (*(char *)(param_1 + 0x56) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x55);
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 - 1;
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + iVar1 + 0x1c) = 0;
    } while (uVar3 != 0);
  }
  return;
}
