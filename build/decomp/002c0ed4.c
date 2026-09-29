// OoT3D decomp @ 002c0ed4  name=FUN_002c0ed4  size=36

undefined4 FUN_002c0ed4(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    return 1;
  }
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x48);
  return 0;
}
