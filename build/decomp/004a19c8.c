// OoT3D decomp @ 004a19c8  name=FUN_004a19c8  size=220

undefined4 FUN_004a19c8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  FUN_00306a34(DAT_004a1aa4);
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_003069cc(DAT_004a1aa4);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 4);
  uVar1 = FUN_004a1d98(param_1,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 4));
  param_2[1] = uVar1;
  uVar1 = FUN_004a1dac(param_1,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 4));
  param_2[2] = uVar1;
  param_2[3] = *(undefined4 *)(param_1 + 0x18);
  param_2[4] = *(undefined4 *)(param_1 + 0x18);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x20);
  param_2[7] = *(undefined4 *)(param_1 + 0x24);
  param_2[8] = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
  param_2[9] = *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
  param_2[10] = 1;
  FUN_003069cc(DAT_004a1aa4);
  return 1;
}
