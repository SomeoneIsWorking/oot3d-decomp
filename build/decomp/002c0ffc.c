// OoT3D decomp @ 002c0ffc  name=FUN_002c0ffc  size=112

undefined4 FUN_002c0ffc(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_00306a34(DAT_002c106c);
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    FUN_003069cc(DAT_002c106c);
    return 1;
  }
  FUN_003069cc(DAT_002c106c);
  return 0;
}
