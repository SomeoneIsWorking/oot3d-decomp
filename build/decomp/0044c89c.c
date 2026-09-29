// OoT3D decomp @ 0044c89c  name=FUN_0044c89c  size=176

void FUN_0044c89c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = 0;
  iVar3 = 0;
  do {
    uVar2 = 0;
    uVar4 = *(uint *)(param_1 + iVar5 * 0x10 + 0x40);
    if ((uVar4 & 8) != 0) {
      uVar2 = 2;
    }
    if ((uVar4 & 2) != 0) {
      uVar2 = uVar2 | 1;
    }
    uVar4 = *(uint *)(param_1 + (iVar5 + 1) * 0x10 + 0x40);
    uVar2 = (uVar2 << 0x1a) >> 0x18;
    if ((uVar4 & 8) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar4 & 2) != 0) {
      uVar2 = uVar2 | 1;
    }
    uVar4 = *(uint *)(param_1 + (iVar5 + 2) * 0x10 + 0x40);
    uVar2 = (uVar2 << 0x1a) >> 0x18;
    if ((uVar4 & 8) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar4 & 2) != 0) {
      uVar2 = uVar2 | 1;
    }
    uVar4 = *(uint *)(param_1 + (iVar5 + 3) * 0x10 + 0x40);
    iVar5 = iVar5 + 4;
    bVar1 = (byte)((uVar2 << 0x1a) >> 0x18);
    if ((uVar4 & 8) != 0) {
      bVar1 = bVar1 | 2;
    }
    if ((uVar4 & 2) != 0) {
      bVar1 = bVar1 | 1;
    }
    *(byte *)(param_2 + iVar3) = bVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  return;
}
