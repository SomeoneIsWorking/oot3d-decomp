// OoT3D decomp @ 003059b0  name=FUN_003059b0  size=92

int FUN_003059b0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;

  FUN_00332754(*param_1 + DAT_00305a10,
               param_1[1] + DAT_00305a0c + (uint)CARRY4(*param_1,DAT_00305a10),DAT_00305a14,0);
  iVar1 = (int)((ulonglong)((longlong)DAT_00305a18 * (longlong)extraout_r2) >> 0x20);
  uVar2 = (iVar1 >> 6) - (iVar1 >> 0x1f);
  iVar1 = (int)((longlong)(int)uVar2 * (longlong)DAT_00305a1c + ((ulonglong)uVar2 << 0x20) >> 0x20);
  return uVar2 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * -0x3c;
}
