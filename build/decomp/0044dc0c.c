// OoT3D decomp @ 0044dc0c  name=FUN_0044dc0c  size=24

void FUN_0044dc0c(undefined2 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;

  puVar1 = (undefined2 *)*param_2;
  if (puVar1 < (undefined2 *)param_2[1]) {
    *param_2 = puVar1 + 1;
    *puVar1 = param_1;
  }
  return;
}
