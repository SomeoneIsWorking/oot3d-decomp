// OoT3D decomp @ 00305a3c  name=FUN_00305a3c  size=84

int FUN_00305a3c(uint *param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r2;

  FUN_00332754(*param_1 + DAT_00305a94,
               param_1[1] + DAT_00305a90 + (uint)CARRY4(*param_1,DAT_00305a94),DAT_00305a98,0);
  iVar1 = (int)((ulonglong)((longlong)DAT_00305a9c * (longlong)extraout_r2) >> 0x20);
  iVar1 = (iVar1 >> 0x14) - (iVar1 >> 0x1f);
  iVar2 = (int)((ulonglong)((longlong)DAT_00305aa0 * (longlong)iVar1) >> 0x20);
  return iVar1 + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -0x18;
}
