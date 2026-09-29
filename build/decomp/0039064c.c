// OoT3D decomp @ 0039064c  name=FUN_0039064c  size=88

void FUN_0039064c(int param_1,int param_2)

{
  int iVar1;

  FUN_0032d314();
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_0036be34(param_2,0xe3);
    *(undefined4 *)(param_1 + 0x13c) = DAT_003906a4;
  }
  FUN_0032d27c(param_1,param_2);
  return;
}
