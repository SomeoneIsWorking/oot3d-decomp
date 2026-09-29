// OoT3D decomp @ 004a3db0  name=FUN_004a3db0  size=76

void FUN_004a3db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = FUN_004bb11c(*DAT_004a3dfc,param_1,param_2,param_3);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_004a3e00,0,&DAT_004a3e00);
    FUN_002fb928(0);
    return;
  }
  return;
}
