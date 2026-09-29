// OoT3D decomp @ 003069cc  name=FUN_003069cc  size=100

undefined8 FUN_003069cc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = param_1[2] + -1;
  param_1[2] = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
    param_1[1] = 0;
    do {
      iVar4 = *param_1;
      iVar2 = -iVar4;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = iVar2;
    if (iVar4 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return CONCAT44(param_1,*DAT_00306a30);
    }
  }
  return CONCAT44(iVar3,param_1);
}
