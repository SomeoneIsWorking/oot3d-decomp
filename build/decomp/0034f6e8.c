// OoT3D decomp @ 0034f6e8  name=FUN_0034f6e8  size=60

undefined4 FUN_0034f6e8(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar2 = uVar1 + *(int *)(param_2 + 0x18) * 0x5c;
  for (; uVar1 < uVar2; uVar1 = uVar1 + 0x5c) {
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return 1;
}
