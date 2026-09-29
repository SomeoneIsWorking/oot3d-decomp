// OoT3D decomp @ 00401730  name=FUN_00401730  size=148

undefined8 FUN_00401730(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  FUN_0030e03c(param_1);
  pcVar3 = DAT_004017c4;
  if (*DAT_004017c4 == '\0') {
    *DAT_004017c4 = '\x01';
    if (pcVar3[3] == '\0') {
      FUN_0030de88();
      pcVar3[3] = '\x01';
    }
    uVar7 = *(undefined4 *)(pcVar3 + 4);
    uVar6 = FUN_0030de24(uVar7);
    FUN_0030dde8(DAT_004017c8,uVar7,uVar6,0);
    *DAT_004017cc = *(undefined4 *)(pcVar3 + 0x10);
    FUN_0030dda4(DAT_004017cc,*DAT_004017d0,(int)pcVar3[2]);
    FUN_00401950(DAT_004017d4);
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
