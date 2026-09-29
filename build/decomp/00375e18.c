// OoT3D decomp @ 00375e18  name=FUN_00375e18  size=160

int FUN_00375e18(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = param_2 + 1;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  *(short *)((int)param_1 + 10) = (short)param_2;
  iVar2 = FUN_0035010c(iVar6 * 0x30);
  iVar3 = FUN_0035010c(param_2 * 4 + 4);
  iVar5 = DAT_0034fc78;
  if (iVar2 == 0) {
    if (iVar3 != 0) {
      iVar5 = FUN_0034fc6c();
      return iVar5;
    }
  }
  else {
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        return DAT_0034fc78;
      }
      FUN_002ff560();
      FUN_0044fab8(iVar5,iVar2);
      piVar4 = *(int **)(iVar5 + 8);
      iVar5 = piVar4[2] + -1;
      piVar4[2] = iVar5;
      if (iVar5 == 0) {
        piVar4[1] = 0;
        do {
          iVar2 = *piVar4;
          iVar5 = -iVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5;
        if (iVar2 != -1 && 0 < iVar5) {
          software_interrupt(0x22);
          return *DAT_002ff55c;
        }
      }
      return iVar5;
    }
    iVar5 = 0;
    *param_1 = iVar2;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
    param_1[1] = iVar3;
    param_1[3] = 1;
  }
  return iVar3;
}
