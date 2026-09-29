// OoT3D decomp @ 0034faa8  name=FUN_0034faa8  size=144

void FUN_0034faa8(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  piVar1 = DAT_0034fb38;
  iVar4 = *DAT_0034fb38;
  if (iVar4 < 0x20) {
    piVar2 = DAT_0034fb38 + DAT_0034fb38[1] * 3 + 2;
    iVar3 = *piVar2;
    while (iVar3 != 0) {
      iVar3 = piVar1[1] + 1;
      if (iVar3 < 0x20) {
        piVar2 = piVar2 + 3;
      }
      else {
        piVar2 = piVar1 + 2;
      }
      piVar1[1] = iVar3;
      if (0x1f < iVar3) {
        piVar1[1] = 0;
      }
      iVar3 = *piVar2;
    }
    *piVar1 = iVar4 + 1;
  }
  else {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_3;
    piVar2[1] = 0;
    piVar2[2] = *param_2;
    if (*param_2 != 0) {
      *(int **)(*param_2 + 4) = piVar2;
    }
    *param_2 = (int)piVar2;
  }
  return;
}
