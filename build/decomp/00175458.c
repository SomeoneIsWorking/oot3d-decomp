// OoT3D decomp @ 00175458  name=FUN_00175458  size=80

void FUN_00175458(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 != 0) {
    FUN_0037322c(DAT_001754a8,param_1);
    FUN_0036cf80(param_2,param_1,0);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001754ac;
  }
  return;
}
