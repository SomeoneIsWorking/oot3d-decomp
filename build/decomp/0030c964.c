// OoT3D decomp @ 0030c964  name=FUN_0030c964  size=76

undefined4 * FUN_0030c964(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar3 = (undefined4 *)*param_2;
  while (param_2 != puVar3) {
    puVar1 = (undefined4 *)*param_2;
    puVar2 = (undefined4 *)param_2[1];
    puVar1[1] = puVar2;
    *puVar2 = puVar1;
    *param_1 = *param_1 + -1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = puVar1;
  }
  return puVar3;
}
