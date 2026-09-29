// OoT3D decomp @ 00305ef4  name=FUN_00305ef4  size=224

void FUN_00305ef4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_20 [8];
  int local_18;

  iVar1 = (int)((longlong)(int)param_2 * (longlong)DAT_00305fd4 + ((ulonglong)param_2 << 0x20) >>
               0x20);
  iVar2 = (int)((longlong)(int)param_2 * (longlong)DAT_00305fd4 + ((ulonglong)param_2 << 0x20) >>
               0x20);
  FUN_00306318(param_1,&local_18);
  FUN_003061a8(auStack_20,DAT_00305fd8,1,1,0,(iVar1 >> 5) - (iVar1 >> 0x1f),
               param_2 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c,0);
  iVar1 = FUN_00305da4(0,0,*(undefined4 *)(param_1 + 0xe4),auStack_20);
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar3 = (iVar1 * 2 + 3U & 0xfffffffc) + iVar2;
  if (uVar3 < 0x4001) {
    *(uint *)(param_1 + 0xe0) = uVar3;
    iVar2 = *(int *)(param_1 + 0xdc) + iVar2;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_00305da4(iVar2,iVar1 * 2,*(undefined4 *)(param_1 + 0xe4),auStack_20);
    *(undefined1 *)(local_18 + 5) = 0;
    *(int *)(local_18 + 8) = iVar2;
    *(int *)(local_18 + 0xc) = iVar1;
  }
  return;
}
