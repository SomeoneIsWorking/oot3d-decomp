// OoT3D decomp @ 00161654  name=FUN_00161654  size=76

undefined4 FUN_00161654(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = *(uint *)(param_2 + 0x1c);
  for (uVar2 = uVar1; uVar2 < uVar1 + *(int *)(param_2 + 0x18) * 0x50; uVar2 = uVar2 + 0x50) {
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (uVar1 != 0) {
    FUN_00350ef4();
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return 1;
}
