// OoT3D decomp @ 00406668  name=FUN_00406668  size=116

undefined8 FUN_00406668(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;

  if (*(char *)(param_1 + 8) != '\0') {
    uVar5 = FUN_00309b60();
    FUN_0030c9b0(uVar5,param_1 + 0x3c);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x98);
  cVar1 = '\0';
  if (iVar6 != 0) {
    cVar1 = *(char *)(iVar6 + 0xc6);
  }
  if (iVar6 != 0 && cVar1 != '\0') {
    FUN_00309964(param_1);
    FUN_0030a030(*(undefined4 *)(param_1 + 0x98));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0030a3f8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  puVar3 = DAT_003101d8;
  piVar4 = (int *)(param_1 + 4);
  if (*piVar4 == -1) {
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = 0;
    uVar5 = *puVar3;
  }
  else {
    if (*piVar4 != -2) {
      return CONCAT44(DAT_003101d8,piVar4);
    }
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = 1;
    uVar5 = *puVar3;
  }
  software_interrupt(0x22);
  return CONCAT44(piVar4,uVar5);
}
