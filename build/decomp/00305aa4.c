// OoT3D decomp @ 00305aa4  name=FUN_00305aa4  size=92

int FUN_00305aa4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;

  FUN_00332754(*param_1 + DAT_00305b04,
               param_1[1] + DAT_00305b00 + (uint)CARRY4(*param_1,DAT_00305b04),DAT_00305b08,0);
  iVar1 = (int)((ulonglong)((longlong)DAT_00305b0c * (longlong)extraout_r2) >> 0x20);
  uVar2 = (iVar1 >> 0xe) - (iVar1 >> 0x1f);
  iVar1 = (int)((longlong)(int)uVar2 * (longlong)DAT_00305b10 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  return uVar2 + ((iVar1 >> 5) - (iVar1 >> 0x1f)) * -0x3c;
}
