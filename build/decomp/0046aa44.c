// OoT3D decomp @ 0046aa44  name=FUN_0046aa44  size=60

void FUN_0046aa44(int param_1)

{
  uint uVar1;

  uVar1 = *(uint *)(*(int *)(param_1 + 100) + 0x178) & 0xffffffbf;
  *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar1;
  *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar1 | 0x20;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x68) + 0x178) & 0xffffffbf;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar1;
  *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar1 | 0x20;
  return;
}
