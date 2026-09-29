// OoT3D decomp @ 001111a4  name=FUN_001111a4  size=56

void FUN_001111a4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036bc98();
  if (iVar1 == 0) {
    FUN_0036bb28(DAT_001111e0,param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x70c) = DAT_001111dc;
  return;
}
