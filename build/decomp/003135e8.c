// OoT3D decomp @ 003135e8  name=FUN_003135e8  size=92

void FUN_003135e8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = 0x14;
  for (; 0x1e < param_3; param_3 = param_3 + -0x1e) {
    FUN_00307c94(*param_1,iVar1,0x1e,param_2);
    iVar1 = iVar1 + 0x1e;
    param_2 = param_2 + 0x1e0;
  }
  FUN_00307c94(*param_1,iVar1,param_3,param_2);
  return;
}
