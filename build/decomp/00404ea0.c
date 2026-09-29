// OoT3D decomp @ 00404ea0  name=FUN_00404ea0  size=40

void FUN_00404ea0(int param_1)

{
  int iVar1;

  iVar1 = (uint)*(byte *)(param_1 + 0x98) + *(int *)(param_1 + 0x50);
  UnsignedSaturate(iVar1,7);
  UnsignedDoesSaturate(iVar1,7);
                    /* WARNING: Subroutine does not return */
  FUN_0030c9b8(*(undefined4 *)(param_1 + 0x1f0),param_1 + 0xd4,*(int *)(param_1 + 0x50));
}
