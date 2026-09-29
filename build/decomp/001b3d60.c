// OoT3D decomp @ 001b3d60  name=FUN_001b3d60  size=84

void FUN_001b3d60(int param_1,int param_2)

{
  int iVar1;

  iVar1 = (uint)(*(ushort *)(param_1 + 0x1c) >> 10) * 0x10 + 4;
  *(short *)(*(int *)(param_2 + 0x5b8c) + iVar1) = -*(short *)(*(int *)(param_2 + 0x5b8c) + iVar1);
  FUN_00350f34(param_1,param_1 + 0x1ac,0);
  if ('\0' < *(char *)(param_1 + 0x1b0)) {
    FUN_00342230();
    return;
  }
  return;
}
