// OoT3D decomp @ 004882d8  name=FUN_004882d8  size=92

undefined4 FUN_004882d8(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;

  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    if (param_3 < *puVar3) {
      puVar2 = (undefined4 *)(puVar3[param_3 * 2 + 2] + (int)puVar3);
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *param_2 = *puVar2;
      if (puVar2[2] == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = puVar2[2] + param_1[1];
      }
      param_2[1] = iVar1;
      return 1;
    }
  }
  return 0;
}
