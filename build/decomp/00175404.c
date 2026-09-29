// OoT3D decomp @ 00175404  name=FUN_00175404  size=76

void FUN_00175404(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c3));
  if (iVar1 != 0) {
    FUN_0037322c(DAT_00175450,param_1);
    FUN_0036cf80(param_2,param_1,0);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00175454;
  }
  return;
}
