// OoT3D decomp @ 002bc8cc  name=FUN_002bc8cc  size=248

undefined4 * FUN_002bc8cc(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;

  while (param_1[9] != 0) {
    param_1[9] = param_1[9] + -1;
    param_1[1] = param_1[1] + 0xc;
    FUN_002bea70();
    iVar1 = 1 - param_1[9];
    if (1 < (uint)param_1[9]) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) || (param_1[1] == param_1[3])) {
      puVar2 = (undefined4 *)param_1[4];
      param_1[4] = puVar2 + 1;
      (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,*puVar2);
      if (param_1[9] == 0) {
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[1] = param_1[5];
        param_1[2] = param_1[6];
        param_1[3] = param_1[7];
        param_1[4] = param_1[8];
        (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[10]);
      }
      else {
        piVar3 = (int *)param_1[4];
        bVar4 = piVar3 != (int *)0x0;
        param_1[1] = *piVar3;
        if (bVar4) {
          iVar1 = *piVar3;
        }
        else {
          iVar1 = 0;
          piVar3 = (int *)0x0;
        }
        param_1[2] = iVar1;
        if (bVar4) {
          piVar3 = (int *)(*piVar3 + 0x180);
        }
        param_1[3] = piVar3;
      }
    }
  }
  return param_1;
}
