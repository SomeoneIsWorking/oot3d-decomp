// OoT3D decomp @ 0047d7c0  name=FUN_0047d7c0  size=36

uint FUN_0047d7c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_0030f0ec();
  uVar2 = FUN_00481a68(*(undefined4 *)(iVar1 + 4),param_1);
  return (uVar2 & 0x800000) >> 0x17;
}
