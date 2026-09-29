// OoT3D decomp @ 0040e110  name=FUN_0040e110  size=44

bool FUN_0040e110(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_0040db7c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}
