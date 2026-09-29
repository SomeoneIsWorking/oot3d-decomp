// OoT3D decomp @ 0032d604  name=FUN_0032d604  size=112

undefined4 FUN_0032d604(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = *param_1 + *(int *)(*param_1 + 0x14);
  iVar1 = *(int *)(iVar1 + 0xc) + iVar1;
  iVar2 = 0;
  iVar4 = *(int *)(iVar1 + 4);
  if (0 < iVar4) {
    do {
      if (iVar2 < iVar4) {
        iVar3 = *(int *)(iVar1 + 8 + iVar2 * 4) + iVar1;
      }
      else {
        iVar3 = 0;
      }
      if (param_2 == *(int *)(iVar3 + 8)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return 0;
}
