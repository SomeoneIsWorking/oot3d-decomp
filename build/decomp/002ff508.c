// OoT3D decomp @ 002ff508  name=FUN_002ff508  size=84

int FUN_002ff508(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  iVar2 = piVar4[2] + -1;
  piVar4[2] = iVar2;
  if (iVar2 == 0) {
    piVar4[1] = 0;
    do {
      iVar3 = *piVar4;
      iVar2 = -iVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2;
    if (iVar3 < -1) {
      software_interrupt(0x22);
      return *DAT_002ff55c;
    }
  }
  return iVar2;
}

