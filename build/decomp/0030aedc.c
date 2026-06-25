// OoT3D decomp @ 0030aedc  name=FUN_0030aedc  size=96

int ** FUN_0030aedc(int **param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *param_1;
  iVar2 = piVar3[2];
  piVar3[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    piVar3[1] = 0;
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = -iVar2;
    if (iVar2 < -1) {
      software_interrupt(0x22);
    }
  }
  return param_1;
}

