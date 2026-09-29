// OoT3D decomp @ 00485ab8  name=FUN_00485ab8  size=84

undefined8 FUN_00485ab8(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;

  FUN_0030e03c(param_1);
  pcVar3 = DAT_00485b0c;
  if (*DAT_00485b0c != '\0') {
    FUN_00489cac(DAT_00485b10);
    software_interrupt(0x23);
    *DAT_00485b18 = *(undefined4 *)(DAT_00485b14 + 4);
    *pcVar3 = '\0';
  }
  piVar2 = DAT_0030e030;
  iVar4 = DAT_0030e030[2] + -1;
  DAT_0030e030[2] = iVar4;
  if (iVar4 == 0) {
    piVar2[1] = 0;
    do {
      iVar5 = *piVar2;
      iVar4 = -iVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4;
    if (iVar5 != -1 && 0 < iVar4) {
      software_interrupt(0x22);
      return CONCAT44(DAT_0030e030,*DAT_0030e034);
    }
  }
  return CONCAT44(piVar2,iVar4);
}
