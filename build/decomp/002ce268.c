// OoT3D decomp @ 002ce268  name=FUN_002ce268  size=68

undefined4 FUN_002ce268(int param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 != (uint *)0x0) {
    if (param_3 < *puVar1) {
      puVar2 = (undefined4 *)((int)puVar1 + puVar1[param_3 * 2 + 2]);
    }
    else {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[1];
      *param_2 = *puVar2;
      param_2[1] = uVar3;
      return 1;
    }
  }
  return 0;
}
