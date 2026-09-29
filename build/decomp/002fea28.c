// OoT3D decomp @ 002fea28  name=FUN_002fea28  size=8

void FUN_002fea28(int param_1)

{
  uint uVar1;
  undefined4 uVar2;

  uVar1 = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    do {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + uVar1 * 4 + 0x770) + 0x14);
      FUN_0030f4d0(uVar2,0);
      FUN_0030f4d0(uVar2,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x754));
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      (**(code **)(**(int **)(param_1 + uVar1 * 4 + 0x214) + 0xc))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  return;
}
