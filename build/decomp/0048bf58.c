// OoT3D decomp @ 0048bf58  name=FUN_0048bf58  size=68

bool FUN_0048bf58(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_002c2938(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != (undefined4 *)0x0;
}
