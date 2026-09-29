// OoT3D decomp @ 001e63ec  name=FUN_001e63ec  size=72

void FUN_001e63ec(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xbac) = DAT_001e6434;
    return;
  }
  FUN_003724dc(DAT_001e643c,DAT_001e6438,param_1,param_2,0x47);
  return;
}
