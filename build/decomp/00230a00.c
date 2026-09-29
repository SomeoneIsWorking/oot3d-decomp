// OoT3D decomp @ 00230a00  name=FUN_00230a00  size=72

void FUN_00230a00(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xc04) = DAT_00230a48;
    return;
  }
  FUN_003724dc(DAT_00230a50,DAT_00230a4c,param_1,param_2,*(undefined4 *)(param_1 + 0xc44));
  return;
}
