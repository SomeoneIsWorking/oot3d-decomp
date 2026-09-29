// OoT3D decomp @ 002e5cfc  name=FUN_002e5cfc  size=96

int FUN_002e5cfc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = param_1[2];
  param_1[2] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
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
      return *DAT_002e5d5c;
    }
  }
  return iVar3;
}
