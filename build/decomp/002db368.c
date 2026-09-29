// OoT3D decomp @ 002db368  name=FUN_002db368  size=80

void FUN_002db368(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = FUN_002fc3e4(*(undefined4 *)(param_2 + 8),0);
  iVar3 = *(int *)(param_2 + 4);
  if (0 < iVar3) {
    puVar2 = (undefined4 *)(iVar1 + 0xc);
    do {
      iVar3 = iVar3 + -1;
      *puVar2 = param_1;
      puVar2[4] = param_1;
      puVar2[8] = param_1;
      puVar2[0xc] = param_1;
      puVar2 = puVar2 + 0x10;
    } while (iVar3 != 0);
  }
  return;
}
