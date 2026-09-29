// OoT3D decomp @ 0039bfb0  name=FUN_0039bfb0  size=80

void FUN_0039bfb0(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x22c);
  iVar1 = FUN_00371e40(param_1,param_2);
  if (iVar1 == 0) {
    FUN_003724dc(DAT_0039c008,DAT_0039c004,param_1,param_2,*(undefined4 *)(param_1 + 0x1cc));
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0039c000;
  return;
}
