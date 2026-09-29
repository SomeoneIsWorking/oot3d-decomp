// OoT3D decomp @ 0034fd60  name=FUN_0034fd60  size=72

int FUN_0034fd60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  piVar1 = DAT_0034fe1c;
  param_1 = param_1 + 0x11f4;
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar3 = 0;
    if (*(int *)(param_1 + iVar4 * 4) != 0) {
      iVar5 = iVar5 + 1;
      *piVar1 = *piVar1 + -1;
      piVar2 = *(int **)(param_1 + iVar4 * 4);
      iVar3 = 0;
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 4))();
      }
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x3d);
  if (0 < iVar5) {
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
  }
  return iVar3;
}
