// OoT3D decomp @ 00436228  name=FUN_00436228  size=36

ushort FUN_00436228(int param_1,ushort param_2)

{
  ushort uVar1;

  uVar1 = *(ushort *)(param_1 + 0x36);
  *(ushort *)(param_1 + 0x36) = param_2 & 1 | uVar1 & 0xfffe;
  return uVar1 & 1;
}
