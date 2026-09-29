// OoT3D decomp @ 00407840  name=FUN_00407840  size=68

undefined8 FUN_00407840(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;

  *(undefined1 *)(param_1 + 0xb) = 1;
  FUN_00308f0c(param_1);
  if (*(char *)(param_1 + 8) != '\0') {
    uVar4 = FUN_00309b60();
    FUN_0030c9b0(uVar4,param_1 + 0x3c);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  puVar2 = DAT_003101d8;
  piVar3 = (int *)(param_1 + 4);
  if (*piVar3 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    uVar4 = *puVar2;
  }
  else {
    if (*piVar3 != -2) {
      return CONCAT44(DAT_003101d8,piVar3);
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    uVar4 = *puVar2;
  }
  software_interrupt(0x22);
  return CONCAT44(piVar3,uVar4);
}
