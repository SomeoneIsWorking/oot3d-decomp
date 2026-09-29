// OoT3D decomp @ 004936a0  name=FUN_004936a0  size=188

undefined4 FUN_004936a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;

  if (*(char *)(param_1 + 0x56) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x3c);
    uVar7 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar7 != 0) {
      iVar4 = 0;
      do {
        uVar7 = uVar7 - 1;
        iVar2 = iVar3 * 0x280 * iVar4;
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(uint *)(param_1 + iVar1 + 0x1c) = iVar2 + (iVar6 + 0x1fU & 0xffffffe0);
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_0032b184(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(byte *)(param_1 + 0x55) != 0) {
      puVar5 = (undefined4 *)(param_1 + 0x28);
      if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
        puVar5 = (undefined4 *)(param_1 + 0x2c);
        *puVar5 = 0;
      }
      for (uVar7 = (uint)(*(byte *)(param_1 + 0x55) >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
        *puVar5 = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x56) = 1;
    return 1;
  }
  return 0;
}
