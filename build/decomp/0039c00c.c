// OoT3D decomp @ 0039c00c  name=FUN_0039c00c  size=80

void FUN_0039c00c(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_00371e40(param_1,param_2);
  if (iVar1 == 0) {
    FUN_003724dc(DAT_0039c064,DAT_0039c060,param_1,param_2,*(undefined4 *)(param_1 + 0x584));
    return;
  }
  *(undefined4 *)(param_1 + 0x568) = DAT_0039c05c;
  return;
}
