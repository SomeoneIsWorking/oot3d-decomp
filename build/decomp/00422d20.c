// OoT3D decomp @ 00422d20  name=FUN_00422d20  size=200

int FUN_00422d20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;

  iVar1 = DAT_00422de8;
  if (*(int *)(DAT_00422de8 + 8) == 0) {
    iVar3 = FUN_0030de88();
    iVar2 = DAT_00422dec;
    if (-1 < iVar3) {
      uVar4 = FUN_0030de24(DAT_00422df0);
      iVar3 = FUN_0030dde8(iVar2,DAT_00422df0,uVar4,0);
      if (-1 < iVar3) {
        puVar5 = (undefined4 *)(iVar2 + -4);
        *(undefined4 **)(iVar1 + 8) = puVar5;
        iVar2 = DAT_00422df4;
        *puVar5 = *(undefined4 *)(iVar1 + 0x14);
        iVar3 = 0;
        iVar6 = 8;
        do {
          *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
          *(undefined4 *)(iVar2 + -0x20 + iVar3 * 4) = 0;
          *(undefined4 *)(iVar2 + -0x40 + iVar3 * 4) = 0;
          iVar6 = iVar6 + -1;
          iVar3 = iVar3 + 1;
        } while (iVar6 != 0);
        *(undefined1 *)(iVar1 + 1) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined2 *)(iVar1 + 4) = 0;
        *(undefined2 *)(iVar1 + 6) = 0;
        *(undefined1 *)(iVar1 + 2) = 0;
        uVar4 = DAT_00422df8;
        *(undefined1 *)(iVar1 + 3) = 0;
        FUN_004374a8(uVar4);
        return 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}
