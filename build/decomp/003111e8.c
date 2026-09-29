// OoT3D decomp @ 003111e8  name=FUN_003111e8  size=96

undefined4 * FUN_003111e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *param_1 = DAT_00311248;
  if (param_1[3] != 0) {
    FUN_003123c0();
  }
  if (param_1[4] != 0) {
    FUN_003123c0();
  }
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 != (undefined4 *)0x0) {
    do {
      puVar2 = (undefined4 *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}
