// OoT3D decomp @ 0042a018  name=FUN_0042a018  size=180

void FUN_0042a018(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  if ((*(char *)(param_1 + 0xb) != '\0') || (iVar2 = FUN_002fde08(param_1 + 0x918,0,7), iVar2 != 0))
  {
    *(undefined1 *)(*(int *)(param_1 + 0xd48) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xd4c) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xd58) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x10a0) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xd50) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xd60) + 0x6c) = 0;
    iVar2 = 0xd2;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      uVar3 = *(uint *)(param_1 + 0x918 + iVar1 + 0x418);
      *(undefined1 *)(uVar3 + 0x6c) = 0;
    } while (iVar2 < 0xda);
    *(undefined1 *)(param_1 + 0xd) = 0;
    bVar4 = *(char *)(param_1 + 0xb) == '\0';
    if (bVar4) {
      uVar3 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0x100);
    }
    if (bVar4 && uVar3 == 3) {
      *(undefined4 *)(param_1 + 0x3ec) = 7;
      FUN_0034536c();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}
