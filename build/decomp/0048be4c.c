// OoT3D decomp @ 0048be4c  name=FUN_0048be4c  size=44

bool FUN_0048be4c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_002c296c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}
