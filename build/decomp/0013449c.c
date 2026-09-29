// OoT3D decomp @ 0013449c  name=FUN_0013449c  size=76

void FUN_0013449c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e5e0(*(undefined4 *)(param_1 + 0x1ec),DAT_001344e8,param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00371b34(param_1,1);
    *(undefined4 *)(param_1 + 0x1e4) = DAT_001344ec;
    FUN_0035c464(param_1,param_2);
    return;
  }
  return;
}
