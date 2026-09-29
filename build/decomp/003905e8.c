// OoT3D decomp @ 003905e8  name=FUN_003905e8  size=96

void FUN_003905e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0032d314();
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    uVar2 = FUN_0031c698(param_2);
    FUN_0036be34(param_2,uVar2);
    *(undefined4 *)(param_1 + 0x13c) = DAT_00390648;
  }
  FUN_0032d27c(param_1,param_2);
  return;
}
