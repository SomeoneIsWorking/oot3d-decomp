// OoT3D decomp @ 001f4a34  name=FUN_001f4a34  size=40

undefined4 FUN_001f4a34(int param_1)

{
  uint uVar1;
  uint uVar2;

  FUN_00350f34(param_1,param_1 + 0x2d4,0);
  uVar1 = *(uint *)(param_1 + 0x1c4);
  uVar2 = uVar1 + *(int *)(param_1 + 0x1c0) * 0x50;
  for (; uVar1 < uVar2; uVar1 = uVar1 + 0x50) {
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  return 1;
}
