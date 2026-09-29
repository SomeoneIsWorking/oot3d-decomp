// OoT3D decomp @ 002fd7d4  name=FUN_002fd7d4  size=28

float FUN_002fd7d4(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x78) * 4);
  return *(float *)(iVar1 + 0x380) - *(float *)(iVar1 + 0x37c);
}
