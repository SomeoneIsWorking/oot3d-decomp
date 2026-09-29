// OoT3D decomp @ 00303e50  name=FUN_00303e50  size=84

int FUN_00303e50(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  piVar4 = (int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0x98) + -1;
  *(int *)(param_1 + 0x98) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    do {
      iVar3 = *piVar4;
      iVar2 = -iVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2;
    if (iVar3 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
      return *DAT_00303ea4;
    }
  }
  return iVar2;
}
