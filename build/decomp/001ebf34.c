// OoT3D decomp @ 001ebf34  name=FUN_001ebf34  size=52

undefined4 FUN_001ebf34(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x20ac);
  if ((*(uint *)(iVar1 + 0x1710) & DAT_001ebf68) == 0) {
    *(undefined4 *)(iVar1 + 0x12b8) = param_2;
    *(undefined1 *)(iVar1 + 0x12b4) = param_3;
    return 1;
  }
  return 0;
}
