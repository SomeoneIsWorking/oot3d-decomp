// OoT3D decomp @ 0044c75c  name=FUN_0044c75c  size=320

void FUN_0044c75c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar6 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x30);
  iVar4 = 0x80;
  do {
    puVar3[4] = 8;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 8;
    *puVar3 = 8;
  } while (iVar4 != 0);
  FUN_0030661c(param_1);
  iVar4 = 0;
  do {
    bVar2 = *(byte *)(param_2 + iVar4);
    if ((bVar2 & 0x80) == 0) {
      iVar5 = param_1 + iVar6 * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) & 0xfffffff7;
    }
    if ((bVar2 & 0x40) != 0) {
      iVar5 = param_1 + iVar6 * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 2;
    }
    uVar1 = ((uint)bVar2 << 0x1a) >> 0x18;
    if ((uVar1 & 0x80) == 0) {
      iVar5 = param_1 + (iVar6 + 1) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) & 0xfffffff7;
    }
    if ((uVar1 & 0x40) != 0) {
      iVar5 = param_1 + (iVar6 + 1) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 2;
    }
    uVar1 = (uVar1 << 0x1a) >> 0x18;
    if ((uVar1 & 0x80) == 0) {
      iVar5 = param_1 + (iVar6 + 2) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) & 0xfffffff7;
    }
    if ((uVar1 & 0x40) != 0) {
      iVar5 = param_1 + (iVar6 + 2) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 2;
    }
    uVar1 = (uVar1 << 0x1a) >> 0x18;
    if ((uVar1 & 0x80) == 0) {
      iVar5 = param_1 + (iVar6 + 3) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) & 0xfffffff7;
    }
    if ((uVar1 & 0x40) != 0) {
      iVar5 = param_1 + (iVar6 + 3) * 0x10;
      *(uint *)(iVar5 + 0x40) = *(uint *)(iVar5 + 0x40) | 2;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x40);
  FUN_002f5094(param_1,0);
  return;
}
