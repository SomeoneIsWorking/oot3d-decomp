// OoT3D decomp @ 00112414  name=FUN_00112414  size=96

void FUN_00112414(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x83c) = DAT_00112474;
    FUN_00371e6c(0xf0);
    *(ushort *)(DAT_00112478 + 0x8c) = *(ushort *)(DAT_00112478 + 0x8c) & 0xfffe;
    return;
  }
  FUN_003724dc(DAT_00112480,DAT_0011247c,param_1,param_2,0x25);
  return;
}
