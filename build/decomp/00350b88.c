// OoT3D decomp @ 00350b88  name=FUN_00350b88  size=56

undefined4 FUN_00350b88(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar2 = uVar1 + *(int *)(param_2 + 0x18) * 0x50;
  for (; uVar1 < uVar2; uVar1 = uVar1 + 0x50) {
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return 1;
}
