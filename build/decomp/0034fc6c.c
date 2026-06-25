// OoT3D decomp @ 0034fc6c  name=FUN_0034fc6c  size=12

int FUN_0034fc6c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_0034fc78;
  if (param_1 == 0) {
    return DAT_0034fc78;
  }
  FUN_002ff560();
  FUN_0044fab8(iVar2,param_1);
  piVar4 = *(int **)(iVar2 + 8);
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

