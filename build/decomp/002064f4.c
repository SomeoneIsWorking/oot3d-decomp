// OoT3D decomp @ 002064f4  name=FUN_002064f4  size=76

void FUN_002064f4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(iRam00206540 + param_1)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0))
  {
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x5d0) = uRam00206544;
  }
  return;
}
