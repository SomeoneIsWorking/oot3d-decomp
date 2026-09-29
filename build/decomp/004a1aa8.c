// OoT3D decomp @ 004a1aa8  name=FUN_004a1aa8  size=180

undefined4 FUN_004a1aa8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  FUN_00306a34(DAT_004a1b5c);
  if (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 8)) {
    iVar2 = *(int *)(param_1 + 0x30);
    FUN_003069cc(DAT_004a1b5c);
    uVar1 = FUN_004a1f74(param_1,param_2,0);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar2 * 4) = uVar1;
    uVar1 = FUN_004a3068(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) = uVar1;
    FUN_00306a34(DAT_004a1b5c);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    FUN_003069cc(DAT_004a1b5c);
    return 1;
  }
  FUN_003069cc(DAT_004a1b5c);
  return 0;
}
