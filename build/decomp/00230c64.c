// OoT3D decomp @ 00230c64  name=FUN_00230c64  size=288

undefined4 FUN_00230c64(int param_1,int *param_2)

{
  int iVar1;
  int extraout_r2;
  uint uVar2;
  uint uVar3;

  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x1c) ||
      *(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    if (uVar2 <= (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))) {
      FUN_00332754(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0x80000,0);
      if (extraout_r2 + uVar2 < 0x80001) {
        iVar1 = *(int *)(param_1 + 0x28) + extraout_r2;
      }
      else {
        if (*(uint *)(param_1 + 0x30) < uVar3) {
          if (*(int *)(param_1 + 0x2c) != 0) {
            (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
          }
          iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 8))
                            (*(int **)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x34));
          *(int *)(param_1 + 0x2c) = iVar1;
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
        }
        iVar1 = 0x80000 - extraout_r2;
        FUN_0034338c(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x28) + extraout_r2,iVar1);
        FUN_0034338c(*(int *)(param_1 + 0x2c) + iVar1,*(undefined4 *)(param_1 + 0x28),uVar2 - iVar1)
        ;
        iVar1 = *(int *)(param_1 + 0x2c);
      }
      *param_2 = iVar1;
      return 1;
    }
  }
  return 0;
}
