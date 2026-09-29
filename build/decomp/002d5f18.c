// OoT3D decomp @ 002d5f18  name=FUN_002d5f18  size=80

undefined4 FUN_002d5f18(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = param_1 + param_2 * 4;
  if (0x17 < *(uint *)(iVar1 + 0x754)) {
    return 0;
  }
  param_1 = param_1 + param_2 * 0x60;
  *(undefined4 *)(param_1 + *(uint *)(iVar1 + 0x754) * 4 + 0x770) = param_3;
  *(undefined4 *)(param_1 + *(int *)(iVar1 + 0x754) * 4 + 0xa10) = param_4;
  *(int *)(iVar1 + 0x754) = *(int *)(iVar1 + 0x754) + 1;
  FUN_00485174();
  return 1;
}
