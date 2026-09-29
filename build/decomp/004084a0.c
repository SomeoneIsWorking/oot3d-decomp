// OoT3D decomp @ 004084a0  name=FUN_004084a0  size=40

void FUN_004084a0(int param_1)

{
  int iVar1;

  iVar1 = (uint)*(byte *)(param_1 + 0x98) + *(int *)(param_1 + 0x50);
  UnsignedSaturate(iVar1,7);
  UnsignedDoesSaturate(iVar1,7);
                    /* WARNING: Subroutine does not return */
  FUN_0030c9b8(*(undefined4 *)(param_1 + 0x194),param_1 + 0xd4,*(int *)(param_1 + 0x50));
}
