// OoT3D decomp @ 001f116c  name=FUN_001f116c  size=128

void FUN_001f116c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  do {
    iVar1 = param_1 + iVar3 * 4;
    piVar2 = *(int **)(iVar1 + 0x1f68);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(iVar1 + 0x1f68) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    iVar1 = param_1 + iVar3 * 4;
    piVar2 = *(int **)(iVar1 + 0x1f70);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(iVar1 + 0x1f70) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 100);
  return;
}
