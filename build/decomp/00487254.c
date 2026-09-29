// OoT3D decomp @ 00487254  name=FUN_00487254  size=272

undefined4 FUN_00487254(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (8 < param_3) {
    param_3 = 8;
  }
  uVar1 = 0;
  *(uint *)(param_1 + 0xe18) = param_3;
  if (param_4 != 0) {
    do {
      if ((param_4 & 1) != 0) {
        if (3 < uVar1) break;
        *(undefined1 *)(param_1 + uVar1 * 0x20 + 0x1f1c) = 1;
      }
      param_4 = param_4 >> 1;
      uVar1 = uVar1 + 1;
    } while (param_4 != 0);
    if (4 < uVar1) {
      uVar1 = 4;
    }
  }
  *(uint *)(param_1 + 0xe14) = uVar1;
  if (uVar1 == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0xe0c) = param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe18)) {
    do {
      iVar2 = FUN_0048abac(*(undefined4 *)(param_1 + 0xe0c));
      if (iVar2 == 0) {
        iVar2 = 0;
        if (0 < iVar3) {
          do {
            iVar4 = param_1 + iVar2 * 0x220;
            FUN_00309208(*(undefined4 *)(param_1 + 0xe0c),*(undefined4 *)(iVar4 + 0xe1c));
            iVar2 = iVar2 + 1;
            *(undefined4 *)(iVar4 + 0xe1c) = 0;
          } while (iVar2 < iVar3);
        }
        return 1;
      }
      iVar4 = iVar3 + 1;
      *(int *)(param_1 + iVar3 * 0x220 + 0xe1c) = iVar2;
      iVar3 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0xe18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe18)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xe18));
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  return 0;
}
