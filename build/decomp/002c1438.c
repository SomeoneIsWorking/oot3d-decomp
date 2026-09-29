// OoT3D decomp @ 002c1438  name=FUN_002c1438  size=108

undefined4 FUN_002c1438(undefined4 *param_1)

{
  int iVar1;

  iVar1 = DAT_002c14a4;
  if (*(int *)(DAT_002c14a4 + 4) == 0) {
    return 0x12;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  (**(code **)(*(int *)param_1[1] + 0xc))();
  (**(code **)(iVar1 + 4))(param_1[1]);
  (**(code **)(iVar1 + 4))(*param_1);
  (**(code **)(iVar1 + 4))(param_1);
  return 0;
}
