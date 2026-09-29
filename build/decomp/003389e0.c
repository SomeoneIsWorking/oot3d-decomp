// OoT3D decomp @ 003389e0  name=FUN_003389e0  size=72

uint FUN_003389e0(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;

  iVar1 = FUN_0033f238();
  if ((iVar1 == 0) &&
     (uVar2 = *(uint *)(*(int *)(DAT_00338a28 + 0xa4) + 0x18),
     (((uVar2 & 1) == 0 && (uVar2 & 2) == 0) && (uVar2 & 0x2000) == 0) && (uVar2 & 0x800) == 0)) {
    bVar3 = (uVar2 & 0x200) == 0;
    bVar4 = (uVar2 & 0x100) == 0;
    bVar5 = bVar3 && bVar4;
    if (bVar3 && bVar4) {
      uVar2 = uVar2 & 0x400;
      bVar5 = uVar2 == 0;
    }
    if (bVar5) {
      return uVar2;
    }
  }
  return 1;
}
