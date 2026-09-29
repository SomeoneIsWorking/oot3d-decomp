// OoT3D decomp @ 00328350  name=FUN_00328350  size=80

undefined4 FUN_00328350(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = param_1 + param_2 * 4;
  if (0x17 < *(uint *)(iVar1 + 0x14)) {
    return 0;
  }
  param_1 = param_1 + param_2 * 0x60;
  *(undefined4 *)(param_1 + *(uint *)(iVar1 + 0x14) * 4 + 0x214) = param_3;
  *(undefined4 *)(param_1 + *(int *)(iVar1 + 0x14) * 4 + 0x4b4) = param_4;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  FUN_0030fda8();
  return 1;
}
