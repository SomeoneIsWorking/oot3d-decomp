// OoT3D decomp @ 002be9c8  name=FUN_002be9c8  size=168

void FUN_002be9c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  puVar1 = (undefined4 *)param_1[4];
  param_1[4] = puVar1 + 1;
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,*puVar1);
  if (param_1[9] != 0) {
    piVar2 = (int *)param_1[4];
    bVar4 = piVar2 != (int *)0x0;
    param_1[1] = *piVar2;
    if (bVar4) {
      iVar3 = *piVar2;
    }
    else {
      iVar3 = 0;
      piVar2 = (int *)0x0;
    }
    param_1[2] = iVar3;
    if (bVar4) {
      piVar2 = (int *)(*piVar2 + 0x180);
    }
    param_1[3] = piVar2;
    return;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = param_1[5];
  param_1[2] = param_1[6];
  param_1[3] = param_1[7];
  param_1[4] = param_1[8];
                    /* WARNING: Could not recover jumptable at 0x002bea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[10]);
  return;
}
