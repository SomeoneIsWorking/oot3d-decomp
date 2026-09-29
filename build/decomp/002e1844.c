// OoT3D decomp @ 002e1844  name=FUN_002e1844  size=116

void FUN_002e1844(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar2 = DAT_002e18bc;
  iVar1 = DAT_002e18b8;
  iVar5 = *(int *)(DAT_002e18b8 + 0x24);
  if (*(int *)(DAT_002e18bc + iVar5 * 4) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
  }
  iVar5 = FUN_00313ce0(0x4c);
  uVar3 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar1 + 0x24);
    uVar3 = FUN_002f48f8(iVar5,DAT_002e18c0 + iVar4 * 2,iVar4 * 0x16 + 0x4b,10);
  }
  *(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x24) * 4) = uVar3;
  return;
}
