// OoT3D decomp @ 002fea30  name=FUN_002fea30  size=140

void FUN_002fea30(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = param_1 + param_2 * 4;
  uVar1 = 0;
  param_1 = param_1 + param_2 * 0x60;
  if (*(int *)(iVar3 + 0x754) != 0) {
    do {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + uVar1 * 4 + 0x770) + 0x14);
      FUN_0030f4d0(uVar2,0);
      FUN_0030f4d0(uVar2,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(iVar3 + 0x754));
  }
  uVar1 = 0;
  if (*(int *)(iVar3 + 0x14) != 0) {
    do {
      (**(code **)(**(int **)(param_1 + uVar1 * 4 + 0x214) + 0xc))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(iVar3 + 0x14));
  }
  return;
}
