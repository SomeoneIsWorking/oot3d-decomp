// OoT3D decomp @ 002c4464  name=FUN_002c4464  size=100

undefined4 * FUN_002c4464(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  piVar4 = (int *)*param_1;
  iVar2 = piVar4[2];
  piVar4[2] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    piVar4[1] = 0;
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
