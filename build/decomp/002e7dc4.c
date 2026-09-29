// OoT3D decomp @ 002e7dc4  name=FUN_002e7dc4  size=256

bool FUN_002e7dc4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;

  iVar3 = DAT_002e7ed0;
  iVar1 = DAT_002e7ecc;
  local_1c = DAT_002e7ec4;
  iVar4 = 0;
  iVar6 = 0;
  local_20 = DAT_002e7ec8;
  iVar2 = *(int *)(DAT_002e7ecc + 0x24);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_24 = (uint)*(ushort *)(iVar3 + iVar5 * 2);
      iVar2 = thunk_FUN_002e181c(&local_1c,&local_24);
      if ((iVar2 == 0) || (iVar2 = thunk_FUN_002e181c(&local_20,&local_24), iVar2 == 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = *(int *)(iVar1 + 0x24);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if ((iVar2 == 7) && (local_24 = (uint)*(ushort *)(DAT_002e7ed0 + 0xe), local_24 != 0)) {
    iVar6 = 1;
    iVar3 = thunk_FUN_002e181c(&local_1c,&local_24);
    if ((iVar3 == 0) || (iVar3 = thunk_FUN_002e181c(&local_20,&local_24), iVar3 == 0)) {
      iVar4 = iVar4 + 1;
    }
  }
  return *(int *)(iVar1 + 0x24) + iVar6 != iVar4;
}
