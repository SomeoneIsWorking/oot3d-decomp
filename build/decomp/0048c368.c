// OoT3D decomp @ 0048c368  name=FUN_0048c368  size=152

int FUN_0048c368(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  bVar5 = *(char *)(param_1 + 0x18) != '\0';
  iVar1 = 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (bVar5 && iVar1 != 0) {
    iVar1 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x14));
    iVar1 = iVar1 + *(int *)(param_1 + 0xe8);
  }
  else {
    iVar1 = 0;
  }
  iVar2 = FUN_002c27dc(param_1);
  bVar5 = *(char *)(param_1 + 0x18) != '\0';
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  iVar4 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
  iVar4 = iVar4 + *(int *)(param_1 + 0xdc);
  if (bVar5 && iVar3 != 0) {
    iVar3 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x14));
    iVar4 = iVar3 + iVar4 + *(int *)(param_1 + 0xe8);
  }
  return param_2 * iVar4 + iVar2 + iVar1;
}
