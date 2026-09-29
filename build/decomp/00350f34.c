// OoT3D decomp @ 00350f34  name=FUN_00350f34  size=116

void FUN_00350f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined4 auStack_c [3];
  undefined4 *puVar4;

  piVar1 = DAT_00350fa8;
  auStack_c[2] = param_4;
  auStack_c[1] = param_3;
  auStack_c[0] = param_2;
  iVar5 = 0;
  puVar3 = auStack_c;
  while( true ) {
    puVar4 = puVar3 + 1;
    piVar2 = (int *)*puVar3;
    if (piVar2 == (int *)0x0) break;
    puVar3 = puVar4;
    if (*piVar2 != 0) {
      iVar5 = iVar5 + 1;
      *piVar1 = *piVar1 + -1;
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 4))();
      }
      *piVar2 = 0;
    }
  }
  if (0 < iVar5) {
    piVar1[1] = piVar1[1] + -1;
  }
  return;
}
