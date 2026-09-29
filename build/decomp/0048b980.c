// OoT3D decomp @ 0048b980  name=FUN_0048b980  size=136

void FUN_0048b980(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;

  uVar1 = DAT_0048ba08;
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x44 + iVar4 * 8 + 0x954);
    if (iVar2 != 0xff) {
      iVar5 = *(int *)(param_1 + 0x44 + (iVar4 + 0x96) * 4 + 0x524);
      uVar3 = FUN_00305980(param_1 + 0x968,iVar2 + 0xa0,&local_24);
      FUN_00305950(iVar5,uVar3,local_24);
      *(undefined1 *)(iVar5 + 0x14) = 1;
      *(undefined4 *)(iVar5 + 0x18) = uVar1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return;
}
