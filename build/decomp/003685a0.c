// OoT3D decomp @ 003685a0  name=FUN_003685a0  size=84

int FUN_003685a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      iVar3 = param_1 + iVar2 * 4;
      piVar1 = *(int **)(iVar3 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)(iVar3 + 0x14) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x94));
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  return param_1;
}
