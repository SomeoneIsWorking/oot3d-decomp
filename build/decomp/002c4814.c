// OoT3D decomp @ 002c4814  name=FUN_002c4814  size=60

void FUN_002c4814(int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = 0;
  if (**(int **)(param_1 + 4) != 0) {
    do {
      uVar2 = uVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
      uVar1 = uVar2;
    } while (uVar2 < **(uint **)(param_1 + 4));
  }
  return;
}
