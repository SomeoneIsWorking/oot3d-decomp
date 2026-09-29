// OoT3D decomp @ 0048b8d8  name=FUN_0048b8d8  size=164

void FUN_0048b8d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;

  uVar1 = DAT_0048b97c;
  iVar2 = param_1 + 0x44;
  iVar6 = 0;
  do {
    iVar3 = iVar2 + iVar6 * 8;
    iVar5 = *(int *)(iVar3 + 0x954);
    if (iVar5 != 0xff) {
      if (*(char *)(iVar3 + 0x958) == '\0') {
        iVar3 = *(int *)(iVar2 + (iVar6 + 0x96) * 4 + 0x524);
        uVar4 = FUN_00305980(param_1 + 0x968,iVar5 + 0x9b,&local_28);
        FUN_00305950(iVar3,uVar4,local_28);
        *(undefined1 *)(iVar3 + 0x14) = 1;
        *(undefined4 *)(iVar3 + 0x18) = uVar1;
      }
      else {
        *(undefined1 *)(*(int *)(iVar2 + iVar6 * 4 + 0x77c) + 0x6c) = 0;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  return;
}
