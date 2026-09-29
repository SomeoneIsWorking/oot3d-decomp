// OoT3D decomp @ 002c43ac  name=FUN_002c43ac  size=180

void FUN_002c43ac(int *param_1)

{
  bool bVar1;
  int *piVar2;

LAB_002c43c4:
  if (0 < *param_1) goto code_r0x002c43d0;
  ClearExclusiveLocal();
  bVar1 = false;
  goto LAB_002c43e4;
code_r0x002c43d0:
  bVar1 = (bool)hasExclusiveAccess(param_1);
  if (bVar1) {
    *param_1 = *param_1 + -1;
    bVar1 = true;
LAB_002c43e4:
    coproc_moveto_Data_Synchronization(0);
    if (bVar1) {
      return;
    }
    piVar2 = param_1 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(short *)piVar2 = (short)*piVar2 + 1;
    software_interrupt(0x22);
    piVar2 = param_1 + 1;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(short *)piVar2 = (short)*piVar2 + -1;
  }
  goto LAB_002c43c4;
}
