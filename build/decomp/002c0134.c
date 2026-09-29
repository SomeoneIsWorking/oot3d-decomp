// OoT3D decomp @ 002c0134  name=FUN_002c0134  size=52

undefined4 FUN_002c0134(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_00306a34(DAT_002c0168);
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  FUN_003069cc(DAT_002c0168);
  return 1;
}
