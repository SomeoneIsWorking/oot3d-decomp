// OoT3D decomp @ 002eb1bc  name=FUN_002eb1bc  size=80

void FUN_002eb1bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar1 = DAT_002eb20c;
  bVar4 = param_1 == 0;
  if (bVar4) {
    param_1 = -1;
  }
  iVar2 = *(int *)(DAT_002eb20c + 0x7c);
  iVar3 = *(int *)(DAT_002eb20c + 0x78);
  *(int *)(DAT_002eb20c + 0x98) = iVar2;
  *(int *)(iVar1 + 0x94) = iVar3;
  iVar3 = iVar3 + iVar2 * 6;
  *(int *)(iVar1 + 100) = iVar3;
  if (bVar4) {
    *(int *)(iVar1 + 0x94) = param_1;
  }
  if (param_2 != 0) {
    FUN_002eb72c(iVar3,1);
    return;
  }
  return;
}
