// OoT3D decomp @ 0034fda8  name=FUN_0034fda8  size=116

void FUN_0034fda8(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  piVar1 = DAT_0034fe1c;
  iVar4 = 0;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_3 + iVar3 * 4) != 0) {
        iVar4 = iVar4 + 1;
        *piVar1 = *piVar1 + -1;
        piVar2 = *(int **)(param_3 + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined4 *)(param_3 + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
    if (0 < iVar4) {
      piVar1[1] = piVar1[1] + -1;
    }
  }
  return;
}
