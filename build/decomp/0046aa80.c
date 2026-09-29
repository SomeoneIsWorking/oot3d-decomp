// OoT3D decomp @ 0046aa80  name=FUN_0046aa80  size=60

void FUN_0046aa80(int param_1)

{
  uint uVar1;

  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x178) & 0xffffffdf;
  *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar1;
  *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar1 | 0x40;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x68) + 0x178) & 0xffffffdf;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar1;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar1 | 0x40;
  return;
}
