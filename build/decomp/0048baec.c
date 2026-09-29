// OoT3D decomp @ 0048baec  name=FUN_0048baec  size=72

int FUN_0048baec(uint *param_1)

{
  int iVar1;
  int extraout_r2;

  FUN_00332754(*param_1 + DAT_0048bb38,
               param_1[1] + DAT_0048bb34 + (uint)CARRY4(*param_1,DAT_0048bb38),DAT_0048bb3c,0);
  iVar1 = (int)((ulonglong)((longlong)DAT_0048bb40 * (longlong)extraout_r2) >> 0x20);
  return extraout_r2 + ((iVar1 >> 6) - (iVar1 >> 0x1f)) * -1000;
}
