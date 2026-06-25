// OoT3D decomp @ 0030dfd8  name=FUN_0030dfd8  size=96

undefined8 FUN_0030dfd8(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = DAT_0030e030;
  iVar3 = DAT_0030e030[2] + -1;
  DAT_0030e030[2] = iVar3;
  if (iVar3 == 0) {
    piVar2[1] = 0;
    do {
      iVar4 = *piVar2;
      iVar3 = -iVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3;
    if (iVar4 < -1) {
      software_interrupt(0x22);
      return CONCAT44(DAT_0030e030,*DAT_0030e034);
    }
  }
  return CONCAT44(piVar2,iVar3);
}

