// OoT3D decomp @ 002df528  name=FUN_002df528  size=104

undefined4 FUN_002df528(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar2 = FUN_0030c7cc();
  piVar4 = (int *)(iVar2 + 0x1b8);
  iVar3 = *(int *)(iVar2 + 0x1c0) + -1;
  *(int *)(iVar2 + 0x1c0) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x1bc) = 0;
    do {
      iVar3 = *piVar4;
      iVar2 = -iVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar3 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
    }
  }
  return param_1;
}
