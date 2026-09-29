// OoT3D decomp @ 002162cc  name=FUN_002162cc  size=144

void FUN_002162cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = *(int *)(param_2 + 0x20ac);
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1a4));
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1c0));
  FUN_0034708c(param_2);
  bVar3 = *(short *)(DAT_0021635c + 0x52) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_2 + 0x20a8);
  }
  if (bVar3 && iVar1 != 0) {
    *(byte *)(iVar2 + 0x172a) = *(byte *)(iVar2 + 0x172a) | 0x40;
  }
  if (*(int **)(param_1 + 0x1e8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1e8) + 4))();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  FUN_00367c48(*(undefined4 *)(param_1 + 0x1ec));
  return;
}
