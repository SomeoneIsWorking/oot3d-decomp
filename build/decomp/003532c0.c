// OoT3D decomp @ 003532c0  name=FUN_003532c0  size=40

undefined4 FUN_003532c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;

  if (*(int *)(param_1 + 0x2c) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x2c) * 0x10);
  }
  if (param_2 < uVar2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
